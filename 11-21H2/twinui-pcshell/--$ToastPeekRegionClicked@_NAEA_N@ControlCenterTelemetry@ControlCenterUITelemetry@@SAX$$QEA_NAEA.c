/*
 * XREFs of ??$ToastPeekRegionClicked@_NAEA_N@ControlCenterTelemetry@ControlCenterUITelemetry@@SAX$$QEA_NAEA_N@Z @ 0x1803528E4
 * Callers:
 *     ?OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18004A4A0 (-OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VControlCenterLogging@@@details@wil@@QEAAPEAVControlCenterLogging@@P6AXXZ@Z @ 0x18035537C (-get@-$static_lazy@VControlCenterLogging@@@details@wil@@QEAAPEAVControlCenterLogging@@P6AXXZ@Z.c)
 */

char __fastcall ControlCenterUITelemetry::ControlCenterTelemetry::ToastPeekRegionClicked<bool,bool &>(
        char *a1,
        char *a2)
{
  __int64 v4; // rax
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  char v8; // [rsp+30h] [rbp-19h] BYREF
  char v9; // [rsp+31h] [rbp-18h] BYREF
  __int64 v10; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+40h] [rbp-9h] BYREF
  char *v12; // [rsp+60h] [rbp+17h]
  __int64 v13; // [rsp+68h] [rbp+1Fh]
  char *v14; // [rsp+70h] [rbp+27h]
  __int64 v15; // [rsp+78h] [rbp+2Fh]
  __int64 *v16; // [rsp+80h] [rbp+37h]
  __int64 v17; // [rsp+88h] [rbp+3Fh]

  v4 = wil::details::static_lazy<ControlCenterLogging>::get(
         a1,
         _lambda_7497dc87b220aaed4d14ef0ec7d62e5e_::_lambda_invoker_cdecl_);
  v5 = *(_DWORD **)(v4 + 8);
  if ( *v5 > 5u )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)v5, 0x400000000000LL);
    if ( (_BYTE)v4 )
    {
      v8 = *a2;
      v9 = *a1;
      v16 = &v10;
      v14 = &v8;
      v12 = &v9;
      v10 = 50331648LL;
      v17 = 8LL;
      v15 = 1LL;
      v13 = 1LL;
      LOBYTE(v4) = tlgWriteTransfer_EventWriteTransfer(v6, (unsigned __int8 *)dword_1806A3C5B, 0LL, 0LL, 5u, &v11);
    }
  }
  return v4;
}
