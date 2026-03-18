/*
 * XREFs of ?CallEvtDmaCompleted@FxDmaSystemTransaction@@MEAAXW4DMA_COMPLETION_STATUS@@@Z @ 0x1C001EC60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxDmaSystemTransaction::CallEvtDmaCompleted(FxDmaSystemTransaction *this, DMA_COMPLETION_STATUS Status)
{
  FxObject *v2; // r8
  int v3; // edx
  unsigned __int64 ObjectHandleUnchecked; // rcx
  __int64 v5; // r8
  __int64 v6; // r10
  void (__fastcall *v7)(unsigned __int64, __int64, _QWORD, _QWORD, int); // rax

  FxObject::GetObjectHandleUnchecked(this->m_DmaEnabler->FxDmaPacketTransaction::FxDmaTransactionBase::m_DeviceBase);
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(v2);
  v7 = *(void (__fastcall **)(unsigned __int64, __int64, _QWORD, _QWORD, int))(v5 + 328);
  if ( v7 )
    v7(ObjectHandleUnchecked, v6, *(_QWORD *)(v5 + 336), *(unsigned int *)(v5 + 124), v3);
}
