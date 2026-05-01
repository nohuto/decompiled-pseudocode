/*
 * XREFs of ?AppSnapped_@CSnapComponentTelemetry@@QEBAXW4SnapRegion@@AEBUCRect@Geometry@@1PEBGPEAUHWND__@@@Z @ 0x180592414
 * Callers:
 *     ??$AppSnapped@W4SnapRegion@@AEAUCRect@Geometry@@AEAU23@PEBGAEAPEAUHWND__@@@CSnapComponentTelemetry@@SAX$$QEAW4SnapRegion@@AEAUCRect@Geometry@@1$$QEAPEBGAEAPEAUHWND__@@@Z @ 0x180590384 (--$AppSnapped@W4SnapRegion@@AEAUCRect@Geometry@@AEAU23@PEBGAEAPEAUHWND__@@@CSnapComponentTelemet.c)
 * Callees:
 *     ?QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z @ 0x180069428 (-QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?CensorAppID@SQM@@YAPEBGPEBG@Z @ 0x1800C4C94 (-CensorAppID@SQM@@YAPEBGPEBG@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapSz@G@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333333AEBU?$_tlgWrapSz@G@@33@Z @ 0x180590C60 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U-$_tlgWrapSz@G@@U1@U1@@-$_tlgWriteTem.c)
 *     ?GetTelemetrySnapRegion@CSnapComponentTelemetry@@SA?AW4SnapRegion@SnapComponentTelemetry@@W42@@Z @ 0x180593F90 (-GetTelemetrySnapRegion@CSnapComponentTelemetry@@SA-AW4SnapRegion@SnapComponentTelemetry@@W42@@Z.c)
 */

char __fastcall CSnapComponentTelemetry::AppSnapped_(
        __int64 a1,
        enum _TABLETMODESTATE *a2,
        int *a3,
        int *a4,
        LPCWSTR pszPath,
        int a6)
{
  unsigned int v8; // r14d
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _DWORD *v11; // rbx
  const unsigned __int16 *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v16; // [rsp+88h] [rbp-9h] BYREF
  int v17; // [rsp+8Ch] [rbp-5h] BYREF
  int v18; // [rsp+90h] [rbp-1h] BYREF
  int v19; // [rsp+94h] [rbp+3h] BYREF
  int v20; // [rsp+98h] [rbp+7h] BYREF
  int v21; // [rsp+9Ch] [rbp+Bh] BYREF
  int v22; // [rsp+A0h] [rbp+Fh] BYREF
  int v23; // [rsp+A4h] [rbp+13h] BYREF
  int v24; // [rsp+A8h] [rbp+17h] BYREF
  int v25; // [rsp+ACh] [rbp+1Bh] BYREF
  int TelemetrySnapRegion; // [rsp+B0h] [rbp+1Fh] BYREF
  __int64 v27; // [rsp+B8h] [rbp+27h] BYREF
  int v28; // [rsp+E8h] [rbp+57h] BYREF
  int v29; // [rsp+ECh] [rbp+5Bh]

  v29 = HIDWORD(a1);
  v28 = 0;
  v8 = (unsigned int)a2;
  TabletModeHelpers::QueryTabletMode((TabletModeHelpers *)&v28, a2);
  v10 = wil::details::static_lazy<WindowManagementLogging>::get(
          v9,
          _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
  v11 = (_DWORD *)v10[1];
  if ( *v11 > 5u )
  {
    LOBYTE(v10) = tlgKeywordOn(v10[1], 0x400000000000LL);
    if ( (_BYTE)v10 )
    {
      v16 = v28;
      v17 = a6;
      v27 = (__int64)SQM::CensorAppID(pszPath, v12);
      v18 = a4[3];
      v19 = a4[2];
      v20 = a4[1];
      v21 = *a4;
      v22 = a3[3];
      v23 = a3[2];
      v24 = a3[1];
      v25 = *a3;
      TelemetrySnapRegion = CSnapComponentTelemetry::GetTelemetrySnapRegion(v8);
      LOBYTE(v10) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                      (__int64)v11,
                      (unsigned __int8 *)dword_1806C8C0B,
                      v13,
                      v14,
                      (__int64)&TelemetrySnapRegion,
                      (__int64)&v25,
                      (__int64)&v24,
                      (__int64)&v23,
                      (__int64)&v22,
                      (__int64)&v21,
                      (__int64)&v20,
                      (__int64)&v19,
                      (__int64)&v18,
                      (const WCHAR **)&v27,
                      (__int64)&v17,
                      (__int64)&v16);
    }
  }
  return (char)v10;
}
