/*
 * XREFs of ?AppUnsnapped_@CSnapComponentTelemetry@@QEBAXPEBGPEAUHWND__@@@Z @ 0x18065FCB8
 * Callers:
 *     ??$AppUnsnapped@PEBGAEAPEAUHWND__@@@CSnapComponentTelemetry@@SAX$$QEAPEBGAEAPEAUHWND__@@@Z @ 0x18065CEB4 (--$AppUnsnapped@PEBGAEAPEAUHWND__@@@CSnapComponentTelemetry@@SAX$$QEAPEBGAEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?CensorAppID@SQM@@YAPEBGPEBG@Z @ 0x1800175CC (-CensorAppID@SQM@@YAPEBGPEBG@Z.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18065E15C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 */

void __fastcall CSnapComponentTelemetry::AppUnsnapped_(
        CSnapComponentTelemetry *this,
        const unsigned __int16 *a2,
        HWND a3)
{
  int v4; // edi
  _QWORD *v5; // rax
  _DWORD *v6; // rbx
  const unsigned __int16 *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  v11 = (__int64)this;
  v4 = (int)a3;
  v5 = wil::details::static_lazy<WindowManagementLogging>::get(
         (__int64)this,
         (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
  v6 = (_DWORD *)v5[1];
  if ( *v6 > 5u )
  {
    if ( tlgKeywordOn(v5[1], 0x400000000000LL) )
    {
      LODWORD(v11) = v4;
      v12 = (__int64)SQM::CensorAppID(a2, v7);
      v10[0] = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        (__int64)v6,
        (unsigned __int8 *)dword_180871C17,
        v8,
        v9,
        (__int64)v10,
        (const WCHAR **)&v12,
        (__int64)&v11);
    }
  }
}
