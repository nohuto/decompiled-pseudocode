/*
 * XREFs of ?BeginScan@FxChildList@@QEAAXPEAK@Z @ 0x1C0023A88
 * Callers:
 *     imp_WdfChildListBeginScan @ 0x1C0020CC0 (imp_WdfChildListBeginScan.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 */

void __fastcall FxChildList::BeginScan(FxChildList *this, unsigned int *ScanTag)
{
  unsigned __int64 *p_m_ListLock; // rdi
  KIRQL v4; // si
  const void *_a1; // rax
  int _a2; // edx
  _FX_DRIVER_GLOBALS *v7; // r10
  _LIST_ENTRY *i; // rax
  _LIST_ENTRY *p_m_ModificationListHead; // rbx
  _LIST_ENTRY *j; // rax

  p_m_ListLock = &this->m_ListLock;
  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  KeClearEvent(&this->m_ScanEvent.m_Event);
  ++this->m_ScanCount;
  if ( this->m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qd(v7, 5u, 0xCu, 0xBu, WPP_FxChildList_cpp_Traceguids, _a1, _a2);
  }
  for ( i = this->m_DescriptionListHead.Flink; i != &this->m_DescriptionListHead; i = i->Flink )
    LOBYTE(i[5].Flink) = 0;
  p_m_ModificationListHead = &this->m_ModificationListHead;
  for ( j = p_m_ModificationListHead->Flink; j != p_m_ModificationListHead; j = j->Flink )
    LOBYTE(j[2].Blink) = 0;
  KeReleaseSpinLock(p_m_ListLock, v4);
}
