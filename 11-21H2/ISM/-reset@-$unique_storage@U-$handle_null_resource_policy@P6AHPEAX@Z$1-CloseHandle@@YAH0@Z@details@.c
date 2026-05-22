/*
 * XREFs of ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800B4970
 * Callers:
 *     ??0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z @ 0x1800333D8 (--0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z.c)
 *     ?SendIOCTLMessage@MobileButtonDeviceCollection@@AEAAXW4_Button@@_N@Z @ 0x1800C5640 (-SendIOCTLMessage@MobileButtonDeviceCollection@@AEAAXW4_Button@@_N@Z.c)
 *     ?CreateInputSink@MPCFocusTarget@@IEAAXXZ @ 0x1800F29AC (-CreateInputSink@MPCFocusTarget@@IEAAXXZ.c)
 *     ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z @ 0x1800FD0B0 (-AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z.c)
 *     ?RejectClientConnection@AlpcPort@@UEAAJXZ @ 0x1800FF420 (-RejectClientConnection@AlpcPort@@UEAAJXZ.c)
 *     ?Register@CallOnThreadExit@@YAXV?$function@$$A6AXXZ@std@@@Z @ 0x180126408 (-Register@CallOnThreadExit@@YAXV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?Initialize@SharedTargetWithHandle@SystemCursors@@QEAAJXZ @ 0x180156A54 (-Initialize@SharedTargetWithHandle@SystemCursors@@QEAAJXZ.c)
 *     wil::ResultFromException__lambda_cedfd987e83550419e6052857f0ac72c___ @ 0x180188358 (wil--ResultFromException__lambda_cedfd987e83550419e6052857f0ac72c___.c)
 *     ?Open@PenInterface@@QEAAJXZ @ 0x180188DA8 (-Open@PenInterface@@QEAAJXZ.c)
 *     ?EnsureDCompTransform@DWMCursor@@AEAAJXZ @ 0x1801CF720 (-EnsureDCompTransform@DWMCursor@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        void **a1,
        void *a2)
{
  void *v4; // rbp
  DWORD LastError; // ebx

  v4 = *a1;
  if ( (char *)*a1 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    LastError = GetLastError();
    CloseHandle(v4);
    SetLastError(LastError);
  }
  *a1 = a2;
}
