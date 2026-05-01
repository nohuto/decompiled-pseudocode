/*
 * XREFs of ?DisplayMonitorInfoUpdate_@XamlSwitcherTelemetry@@QEAAXMMN@Z @ 0x180786698
 * Callers:
 *     ??$DisplayMonitorInfoUpdate@MMAEBN@XamlSwitcherTelemetry@@SAX$$QEAM0AEBN@Z @ 0x180785EF0 (--$DisplayMonitorInfoUpdate@MMAEBN@XamlSwitcherTelemetry@@SAX$$QEAM0AEBN@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z @ 0x18001C97C (-get@-$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall XamlSwitcherTelemetry::DisplayMonitorInfoUpdate_(
        XamlSwitcherTelemetry *this,
        float a2,
        float a3,
        double a4)
{
  _DWORD *v4; // rcx
  __int64 v5; // rcx
  float v6; // [rsp+38h] [rbp-39h] BYREF
  float v7; // [rsp+3Ch] [rbp-35h] BYREF
  __int64 v8; // [rsp+40h] [rbp-31h] BYREF
  double v9; // [rsp+48h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+58h] [rbp-19h] BYREF
  float *v11; // [rsp+78h] [rbp+7h]
  __int64 v12; // [rsp+80h] [rbp+Fh]
  float *v13; // [rsp+88h] [rbp+17h]
  __int64 v14; // [rsp+90h] [rbp+1Fh]
  double *v15; // [rsp+98h] [rbp+27h]
  __int64 v16; // [rsp+A0h] [rbp+2Fh]
  __int64 *v17; // [rsp+A8h] [rbp+37h]
  __int64 v18; // [rsp+B0h] [rbp+3Fh]

  v4 = (_DWORD *)wil::details::static_lazy<XamlSwitcherLogging>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_6341f906d56bba57ec18edd8305f3a60_::_lambda_invoker_cdecl_)[1];
  if ( *v4 > 5u )
  {
    if ( tlgKeywordOn((__int64)v4, 0x400000000000LL) )
    {
      v9 = a4;
      v6 = a3;
      v7 = a2;
      v17 = &v8;
      v15 = &v9;
      v13 = &v6;
      v11 = &v7;
      v8 = 0x1000000LL;
      v18 = 8LL;
      v16 = 8LL;
      v14 = 4LL;
      v12 = 4LL;
      tlgWriteTransfer_EventWriteTransfer(v5, (unsigned __int8 *)dword_180881573, 0LL, 0LL, 6u, &v10);
    }
  }
}
