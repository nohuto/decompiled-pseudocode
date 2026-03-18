/*
 * XREFs of ?ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01E41B4
 * Callers:
 *     OutputDuplProcessDestroyDevice @ 0x1C018B9A4 (OutputDuplProcessDestroyDevice.c)
 *     _lambda_916b8cf52c985c2b3c6a9e3c4a47be2a_::_lambda_invoker_cdecl_ @ 0x1C01EA640 (_lambda_916b8cf52c985c2b3c6a9e3c4a47be2a_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0008100 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C01A1EB0 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C01A9260 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 */

void __fastcall OUTPUTDUPL_MGR::ProcessDestroyDevice(OUTPUTDUPL_CONTEXT **this, struct DXGDEVICE *a2)
{
  OUTPUTDUPL_CONTEXT *v4; // rcx
  unsigned int i; // esi

  v4 = *this;
  if ( v4 && !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)v4 + 2)) )
  {
    WdLogSingleEntry1(1LL, 1439LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(m_pDisplayCore == NULL) || (m_pDisplayCore->IsCoreResourceSharedOwner())",
      1439LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_BYTE *)a2 + 72)
    && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)a2 + 17))
    && *(struct _KTHREAD **)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 144LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1440LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDevice->IsDeviceLockExclusiveOwner() || pDevice->GetRenderAdapter()->IsStopResetLockExclusiveOwner()",
      1440LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  for ( i = 0; i < *((_DWORD *)this + 19); ++i )
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(this, i, a2, 0, 0, 5);
  OUTPUTDUPL_MGR::ProcessPendingDestroy(this, a2, 0);
}
