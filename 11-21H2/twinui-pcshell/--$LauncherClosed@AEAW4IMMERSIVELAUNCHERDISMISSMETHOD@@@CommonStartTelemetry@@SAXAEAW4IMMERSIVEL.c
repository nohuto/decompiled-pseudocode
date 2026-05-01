/*
 * XREFs of ??$LauncherClosed@AEAW4IMMERSIVELAUNCHERDISMISSMETHOD@@@CommonStartTelemetry@@SAXAEAW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x18004542C
 * Callers:
 *     ?OnStartHidden@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180045350 (-OnStartHidden@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Win.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6AXXZ@Z @ 0x1800C5AFC (-get@-$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

__int64 __fastcall CommonStartTelemetry::LauncherClosed<enum IMMERSIVELAUNCHERDISMISSMETHOD &>(
        int *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  _DWORD *v5; // rcx
  int v6; // ecx
  ULONG v7; // r9d
  int v8; // eax
  int v9; // [rsp+30h] [rbp-68h] BYREF
  __int64 v10; // [rsp+38h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+40h] [rbp-58h] BYREF
  int *v12; // [rsp+60h] [rbp-38h]
  ULONG v13; // [rsp+68h] [rbp-30h]
  int v14; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v15; // [rsp+70h] [rbp-28h]
  int v16; // [rsp+78h] [rbp-20h]
  int v17; // [rsp+7Ch] [rbp-1Ch]

  result = wil::details::static_lazy<LauncherTelemetryLogging>::get(
             a1,
             _lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_,
             a3);
  v5 = *(_DWORD **)(result + 8);
  if ( *v5 > 4u )
  {
    result = tlgKeywordOn(v5, 0x400000000000LL);
    if ( (_BYTE)result )
    {
      v8 = *a1;
      v17 = 0;
      v14 = 0;
      v9 = v8;
      v15 = &v10;
      v12 = &v9;
      v13 = v7;
      v10 = 0x2000000LL;
      v16 = 8;
      return tlgWriteTransfer_EventWriteTransfer(v6, (int)&dword_1806B538E, 0, 0, v7, &v11);
    }
  }
  return result;
}
