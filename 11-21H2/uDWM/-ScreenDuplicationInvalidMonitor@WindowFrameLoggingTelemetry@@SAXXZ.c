/*
 * XREFs of ?ScreenDuplicationInvalidMonitor@WindowFrameLoggingTelemetry@@SAXXZ @ 0x1800CC480
 * Callers:
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x1800CE320 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x1800065A8 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x18003E1A0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180096F94 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 */

void __fastcall WindowFrameLoggingTelemetry::ScreenDuplicationInvalidMonitor(__int64 a1)
{
  _DWORD *v1; // rcx
  __int64 v2; // rcx
  _BYTE v3[32]; // [rsp+30h] [rbp-38h] BYREF

  v1 = (_DWORD *)wil::details::static_lazy<WindowFrameLogging>::get(
                   a1,
                   _lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_)[1];
  if ( *v1 > 5u )
  {
    if ( tlgKeywordOn((__int64)v1, 0x200000000000LL) )
      tlgWriteTransfer_EtwEventWriteTransfer(v2, byte_180120896, 0LL, 0LL, 2, (__int64)v3);
  }
}
