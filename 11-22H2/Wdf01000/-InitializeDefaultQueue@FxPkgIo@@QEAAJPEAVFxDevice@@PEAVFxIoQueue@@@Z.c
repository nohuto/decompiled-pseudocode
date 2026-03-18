/*
 * XREFs of ?InitializeDefaultQueue@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxIoQueue@@@Z @ 0x1C006296C
 * Callers:
 *     imp_WdfIoQueueCreate @ 0x1C0061710 (imp_WdfIoQueueCreate.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qid @ 0x1C00195EC (WPP_IFR_SF_qid.c)
 *     ?MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C00251D0 (-MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 */

__int64 __fastcall FxPkgIo::InitializeDefaultQueue(FxPkgIo *this, FxDevice *Device, FxIoQueue *Queue)
{
  unsigned __int64 _a2; // rax
  _FX_DRIVER_GLOBALS **_a1; // r10
  FxIoQueue **m_DispatchTable; // rax
  __int64 v8; // rcx

  if ( this->m_DefaultQueue )
  {
    _a2 = FxObject::GetObjectHandleUnchecked(Device);
    WPP_IFR_SF_qid(_a1[2], 2u, 0xDu, 0x11u, WPP_FxPkgIo_cpp_Traceguids, _a1, _a2, -1073741823);
    return 3221225473LL;
  }
  else
  {
    m_DispatchTable = this->m_DispatchTable;
    v8 = 28LL;
    do
    {
      if ( !*m_DispatchTable )
        *m_DispatchTable = Queue;
      ++m_DispatchTable;
      --v8;
    }
    while ( v8 );
    this->m_DefaultQueue = Queue;
    FxObject::MarkNoDeleteDDI(Queue, ObjectLock);
    return 0LL;
  }
}
