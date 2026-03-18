/*
 * XREFs of ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C0003E1C
 * Callers:
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C00034D0 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0003A80 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C0008160 (-PreProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?Dispose@FxMpDevice@@UEAAEXZ @ 0x1C0038590 (-Dispose@FxMpDevice@@UEAAEXZ.c)
 *     ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1C003DC68 (-DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z.c)
 *     ?Dispose@FxDevice@@UEAAEXZ @ 0x1C003E060 (-Dispose@FxDevice@@UEAAEXZ.c)
 *     ?PnpEventPdoInitFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006AB00 (-PnpEventPdoInitFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x1C006B1D0 (-PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ.c)
 * Callees:
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C00034D0 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C0046564 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 */

void __fastcall FxObject::DestroyChildren(FxObject *this)
{
  _LIST_ENTRY *p_m_ChildListHead; // rbx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v3; // rcx
  FxObject *p_Blink; // rdi
  unsigned __int64 *v5; // rbp
  KIRQL v6; // al
  int m_ObjectState; // edx
  KIRQL v8; // si
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx

  p_m_ChildListHead = &this->m_ChildListHead;
  while ( 1 )
  {
    Flink = p_m_ChildListHead->Flink;
    if ( p_m_ChildListHead->Flink == p_m_ChildListHead )
      break;
    if ( Flink->Blink != p_m_ChildListHead || (v3 = Flink->Flink, Flink->Flink->Blink != Flink) )
      __fastfail(3u);
    p_m_ChildListHead->Flink = v3;
    p_Blink = (FxObject *)&Flink[-5].Blink;
    v3->Blink = p_m_ChildListHead;
    v5 = (unsigned __int64 *)&Flink[-1];
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    v6 = KeAcquireSpinLockRaiseToDpc(v5);
    m_ObjectState = p_Blink->m_ObjectState;
    v8 = v6;
    p_Blink->m_ParentObject = 0LL;
    if ( !m_ObjectState )
      goto LABEL_15;
    v9 = m_ObjectState - 1;
    if ( !v9 )
      goto LABEL_15;
    v10 = v9 - 1;
    if ( !v10 )
      goto LABEL_8;
    v11 = v10 - 2;
    if ( v11 && (v12 = v11 - 3) != 0 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        if ( v13 == 1 )
          FxObject::TraceDroppedEvent(p_Blink, FxObjectDroppedEventParentDeleteEvent);
        goto LABEL_15;
      }
LABEL_8:
      FxObject::DeletedAndDisposedWorkerLocked(p_Blink, v6, 1u);
    }
    else
    {
LABEL_15:
      KeReleaseSpinLock(v5, v8);
    }
  }
}
