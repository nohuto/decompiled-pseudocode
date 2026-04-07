/*
 * XREFs of ??$UpdateCaptureControllerSize@AEAPEAUHWND__@@@WindowFrameLoggingTelemetry@@SAXAEAPEAUHWND__@@@Z @ 0x1800CB34C
 * Callers:
 *     ?OnWindowSizeUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x18000E7C0 (-OnWindowSizeUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x1800065A8 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x18003E1A0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180096F94 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 */

char __fastcall WindowFrameLoggingTelemetry::UpdateCaptureControllerSize<HWND__ * &>(__int64 *a1)
{
  __int64 *v2; // rax
  _DWORD *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v7; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v8[32]; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  v2 = wil::details::static_lazy<WindowFrameLogging>::get(
         (__int64)a1,
         _lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_);
  v3 = (_DWORD *)v2[1];
  if ( *v3 > 5u )
  {
    LOBYTE(v2) = tlgKeywordOn((__int64)v3, 0x200000000000LL);
    if ( (_BYTE)v2 )
    {
      v5 = *a1;
      v11 = 0;
      v7 = v5;
      v10 = 8;
      v9 = &v7;
      LOBYTE(v2) = tlgWriteTransfer_EtwEventWriteTransfer(v4, byte_18011FD8E, 0LL, 0LL, 3, (__int64)v8);
    }
  }
  return (char)v2;
}
