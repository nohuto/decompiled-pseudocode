/*
 * XREFs of ?SnapFillType_@CSnapComponentTelemetry@@QEBAXW4SnapRegion@@PEBGPEAUHWND__@@W4SnapFillType@SnapComponentTelemetry@@W4FillRule@SnapLayoutHelpers@@4W4Edge@7@5@Z @ 0x180595D80
 * Callers:
 *     ??$SnapFillType@AEAW4SnapRegion@@PEBGPEAUHWND__@@W40SnapComponentTelemetry@@AEBW4FillRule@SnapLayoutHelpers@@AEBW445@AEBW4Edge@5@AEBW465@@CSnapComponentTelemetry@@SAXAEAW4SnapRegion@@$$QEAPEBG$$QEAPEAUHWND__@@$$QEAW4SnapFillType@SnapComponentTelemetry@@AEBW4FillRule@SnapLayoutHelpers@@4AEBW4Edge@6@5@Z @ 0x1805908F8 (--$SnapFillType@AEAW4SnapRegion@@PEBGPEAUHWND__@@W40SnapComponentTelemetry@@AEBW4FillRule@SnapLa.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?CensorAppID@SQM@@YAPEBGPEBG@Z @ 0x1800C4C94 (-CensorAppID@SQM@@YAPEBGPEBG@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@333333@Z @ 0x180590DC4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJ.c)
 *     ?GetTelemetrySnapRegion@CSnapComponentTelemetry@@SA?AW4SnapRegion@SnapComponentTelemetry@@W42@@Z @ 0x180593F90 (-GetTelemetrySnapRegion@CSnapComponentTelemetry@@SA-AW4SnapRegion@SnapComponentTelemetry@@W42@@Z.c)
 */

char __fastcall CSnapComponentTelemetry::SnapFillType_(
        __int64 a1,
        int a2,
        const WCHAR *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  _QWORD *v12; // rax
  _DWORD *v13; // rbx
  const unsigned __int16 *v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v18; // [rsp+60h] [rbp-20h] BYREF
  int v19; // [rsp+64h] [rbp-1Ch] BYREF
  int v20; // [rsp+68h] [rbp-18h] BYREF
  int v21; // [rsp+6Ch] [rbp-14h] BYREF
  int v22; // [rsp+70h] [rbp-10h] BYREF
  int TelemetrySnapRegion; // [rsp+74h] [rbp-Ch] BYREF
  const WCHAR *v24; // [rsp+78h] [rbp-8h] BYREF
  __int64 v25; // [rsp+A0h] [rbp+20h] BYREF

  v25 = a1;
  v12 = wil::details::static_lazy<WindowManagementLogging>::get(
          a1,
          _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
  v13 = (_DWORD *)v12[1];
  if ( *v13 > 5u )
  {
    LOBYTE(v12) = tlgKeywordOn(v12[1], 0x200000000000LL);
    if ( (_BYTE)v12 )
    {
      LODWORD(v25) = a9;
      v18 = a8;
      v19 = a7;
      v20 = a6;
      v21 = a5;
      v22 = a4;
      v24 = SQM::CensorAppID(a3, v14);
      TelemetrySnapRegion = CSnapComponentTelemetry::GetTelemetrySnapRegion(a2);
      LOBYTE(v12) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                      (__int64)v13,
                      (unsigned __int8 *)dword_1806C939D,
                      v15,
                      v16,
                      (__int64)&TelemetrySnapRegion,
                      &v24,
                      (__int64)&v22,
                      (__int64)&v21,
                      (__int64)&v20,
                      (__int64)&v19,
                      (__int64)&v18,
                      (__int64)&v25);
    }
  }
  return (char)v12;
}
