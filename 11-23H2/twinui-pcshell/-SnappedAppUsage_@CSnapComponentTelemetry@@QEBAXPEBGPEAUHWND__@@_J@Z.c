/*
 * XREFs of ?SnappedAppUsage_@CSnapComponentTelemetry@@QEBAXPEBGPEAUHWND__@@_J@Z @ 0x18066FED4
 * Callers:
 *     ??$SnappedAppUsage@PEAGAEBQEAUHWND__@@_J@CSnapComponentTelemetry@@SAX$$QEAPEAGAEBQEAUHWND__@@$$QEA_J@Z @ 0x18066F6BC (--$SnappedAppUsage@PEAGAEBQEAUHWND__@@_J@CSnapComponentTelemetry@@SAX$$QEAPEAGAEBQEAUHWND__@@$$Q.c)
 * Callees:
 *     ?CensorAppID@SQM@@YAPEBGPEBG@Z @ 0x1800175CC (-CensorAppID@SQM@@YAPEBGPEBG@Z.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18066F77C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTempl.c)
 */

void __fastcall CSnapComponentTelemetry::SnappedAppUsage_(
        CSnapComponentTelemetry *this,
        const unsigned __int16 *a2,
        HWND a3,
        __int64 a4)
{
  int v6; // esi
  _QWORD *v7; // rax
  _DWORD *v8; // rbx
  const unsigned __int16 *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+48h] [rbp-20h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h] BYREF
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF

  v15 = (__int64)this;
  v6 = (int)a3;
  v7 = wil::details::static_lazy<WindowManagementLogging>::get(
         (__int64)this,
         (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
  v8 = (_DWORD *)v7[1];
  if ( *v8 > 5u )
  {
    if ( tlgKeywordOn(v7[1], 0x400000000000LL) )
    {
      v12 = a4;
      LODWORD(v15) = v6;
      v13 = (__int64)SQM::CensorAppID(a2, v9);
      v14 = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (__int64)v8,
        (unsigned __int8 *)dword_180873E53,
        v10,
        v11,
        (__int64)&v14,
        (const WCHAR **)&v13,
        (__int64)&v15,
        (__int64)&v12);
    }
  }
}
