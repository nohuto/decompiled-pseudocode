/*
 * XREFs of ?DeleteWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C0003460
 * Callers:
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C00032C0 (-DeleteObject@FxObject@@UEAAXXZ.c)
 * Callees:
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C00034D0 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C0003ED0 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C000536C (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?ShouldDeferDisposeLocked@FxObject@@AEAAEPEAE@Z @ 0x1C0006500 (-ShouldDeferDisposeLocked@FxObject@@AEAAEPEAE@Z.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C0047758 (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 */

unsigned __int8 __fastcall FxObject::DeleteWorkerAndUnlock(FxObject *this, unsigned __int8 OldIrql, unsigned __int8 a3)
{
  unsigned __int8 PreviousIrql; // [rsp+38h] [rbp+10h] BYREF

  PreviousIrql = OldIrql;
  if ( FxObject::ShouldDeferDisposeLocked(this, &PreviousIrql) )
  {
    FxObject::QueueDeferredDisposeLocked(this, FxObjectStateDeferedDeleting);
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, OldIrql);
  }
  else
  {
    FxObject::SetObjectStateLocked(this, FxObjectStateDeletedDisposing);
    if ( FxObject::DisposeChildrenWorker(this, FxObjectStateDeferedDeleting, OldIrql, 1u) )
    {
      FxObject::DeletedAndDisposedWorkerLocked(this, OldIrql, 0);
      return 1;
    }
  }
  return 0;
}
