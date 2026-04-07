/*
 * XREFs of ??$UpdateCaptureControllerCaptureState@AEAPEAUHWND__@@AEA_N@WindowFrameLoggingTelemetry@@SAXAEAPEAUHWND__@@AEA_N@Z @ 0x1800CB274
 * Callers:
 *     ?_UpdateCaptureControllerCaptureState@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800D018C (-_UpdateCaptureControllerCaptureState@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x1800065A8 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x18003E1A0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180096F94 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 */

char __fastcall WindowFrameLoggingTelemetry::UpdateCaptureControllerCaptureState<HWND__ * &,bool &>(
        __int64 *a1,
        char *a2)
{
  __int64 *v4; // rax
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  char v7; // al
  char v9; // [rsp+30h] [rbp-68h] BYREF
  __int64 v10; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v11[32]; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v12; // [rsp+60h] [rbp-38h]
  int v13; // [rsp+68h] [rbp-30h]
  int v14; // [rsp+6Ch] [rbp-2Ch]
  char *v15; // [rsp+70h] [rbp-28h]
  int v16; // [rsp+78h] [rbp-20h]
  int v17; // [rsp+7Ch] [rbp-1Ch]

  v4 = wil::details::static_lazy<WindowFrameLogging>::get(
         (__int64)a1,
         _lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_);
  v5 = (_DWORD *)v4[1];
  if ( *v5 > 5u )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)v5, 0x200000000000LL);
    if ( (_BYTE)v4 )
    {
      v7 = *a2;
      v17 = 0;
      v14 = 0;
      v9 = v7;
      v10 = *a1;
      v15 = &v9;
      v12 = &v10;
      v16 = 1;
      v13 = 8;
      LOBYTE(v4) = tlgWriteTransfer_EtwEventWriteTransfer(v6, byte_18011FDBF, 0LL, 0LL, 4, (__int64)v11);
    }
  }
  return (char)v4;
}
