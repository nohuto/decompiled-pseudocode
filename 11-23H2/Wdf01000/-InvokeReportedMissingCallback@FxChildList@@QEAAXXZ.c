/*
 * XREFs of ?InvokeReportedMissingCallback@FxChildList@@QEAAXXZ @ 0x1C0024EA0
 * Callers:
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0072730 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00241C0 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0025E58 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 */

void __fastcall FxChildList::InvokeReportedMissingCallback(FxChildList *this)
{
  unsigned __int64 *p_m_ListLock; // rbp
  KIRQL v3; // al
  _LIST_ENTRY *Flink; // rbx
  FxChildList *v5; // rdi
  __int64 v6; // rdx
  unsigned __int64 ObjectHandleUnchecked; // r8
  void (__fastcall *v8)(unsigned __int64); // rax
  KIRQL v9; // al
  KIRQL v10; // bl
  unsigned __int8 v11; // r8
  _LIST_ENTRY freeHead; // [rsp+20h] [rbp-18h] BYREF

  freeHead.Blink = &freeHead;
  p_m_ListLock = &this->m_ListLock;
  freeHead.Flink = &freeHead;
  v3 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  this->m_State = ListLockedForEnum;
  KeReleaseSpinLock(p_m_ListLock, v3);
  Flink = this->m_DescriptionListHead.Flink;
  if ( Flink != &this->m_DescriptionListHead )
  {
    do
    {
      v5 = (FxChildList *)Flink->Flink;
      if ( BYTE3(Flink[5].Flink) == 1 )
      {
        ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked((FxObject *)Flink[4].Flink);
        v8 = *(void (__fastcall **)(unsigned __int64))(*(_QWORD *)(v6 + 648) + 1768LL);
        if ( v8 )
          v8(ObjectHandleUnchecked);
        BYTE3(Flink[5].Flink) = 2;
      }
      Flink = (_LIST_ENTRY *)v5;
    }
    while ( v5 != (FxChildList *)&this->m_DescriptionListHead );
  }
  v9 = KeAcquireSpinLockRaiseToDpc(p_m_ListLock);
  this->m_State = ListUnlocked;
  v10 = v9;
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  KeReleaseSpinLock(p_m_ListLock, v10);
  FxChildList::DrainFreeListHead(this, &freeHead, v11);
}
