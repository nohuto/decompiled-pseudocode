/*
 * XREFs of ?InitializeDefaultQueue@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxIoQueue@@@Z @ 0x1C002256C
 * Callers:
 *     imp_WdfIoQueueCreate @ 0x1C0024AC0 (imp_WdfIoQueueCreate.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0026218 (-MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     WPP_IFR_SF_qqd @ 0x1C0030604 (WPP_IFR_SF_qqd.c)
 */

__int64 __fastcall FxPkgIo::InitializeDefaultQueue(FxPkgIo *this, FxDevice *Device, FxIoQueue *Queue)
{
  FxIoQueue **m_DispatchTable; // rax
  __int64 v5; // rcx
  const void *_a2; // rax
  _FX_DRIVER_GLOBALS **_a1; // r10

  if ( this->m_DefaultQueue )
  {
    _a2 = (const void *)FxObject::GetObjectHandleUnchecked(Device);
    WPP_IFR_SF_qqd(_a1[2], 2u, 0xDu, 0x11u, WPP_FxPkgIo_cpp_Traceguids, _a1, _a2, -1073741823);
    return 3221225473LL;
  }
  else
  {
    m_DispatchTable = this->m_DispatchTable;
    v5 = 28LL;
    do
    {
      if ( !*m_DispatchTable )
        *m_DispatchTable = Queue;
      ++m_DispatchTable;
      --v5;
    }
    while ( v5 );
    this->m_DefaultQueue = Queue;
    FxObject::MarkNoDeleteDDI(Queue, ObjectLock);
    return 0LL;
  }
}
