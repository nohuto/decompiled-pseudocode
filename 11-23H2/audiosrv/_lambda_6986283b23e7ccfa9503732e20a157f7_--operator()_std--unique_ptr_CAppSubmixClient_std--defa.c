/*
 * XREFs of _lambda_6986283b23e7ccfa9503732e20a157f7_::operator()_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient____const__ @ 0x1800CFC60
 * Callers:
 *     ?EnsureProcessSubmixInSubmixContext@CProcessSubmixManager@@AEAAJAEBV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@PEAUIProcessSubmixProxy@@@Z @ 0x1800D18D0 (-EnsureProcessSubmixInSubmixContext@CProcessSubmixManager@@AEAAJAEBV-$unique_ptr@VCAppSubmixClie.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1800D0560 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?NotifySubmixClient@CAppSubmixClient@@QEAAXW4ProcessSubmix_NotificationType@@_K@Z @ 0x1800D27DC (-NotifySubmixClient@CAppSubmixClient@@QEAAXW4ProcessSubmix_NotificationType@@_K@Z.c)
 */

char __fastcall lambda_6986283b23e7ccfa9503732e20a157f7_::operator()_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient____const__(
        _QWORD **a1,
        _QWORD **a2)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 *v7; // rax
  _DWORD *v8; // rbx
  int v9; // r8d
  int v10; // r9d
  _QWORD v12[5]; // [rsp+50h] [rbp-28h] BYREF
  int v13; // [rsp+80h] [rbp+8h] BYREF
  int v14; // [rsp+88h] [rbp+10h] BYREF
  int v15; // [rsp+90h] [rbp+18h] BYREF
  int v16; // [rsp+98h] [rbp+20h] BYREF

  v3 = (__int64)*a2;
  v5 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**a1 + 224LL))(**a1);
  CAppSubmixClient::NotifySubmixClient(v3, 0LL, v5);
  v7 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         v6,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  v8 = (_DWORD *)v7[1];
  if ( *v8 > 4u )
  {
    LOBYTE(v7) = tlgKeywordOn(v7[1], 512LL);
    if ( (_BYTE)v7 )
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**a1 + 216LL))(**a1);
      v14 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**a1 + 144LL))(**a1);
      v15 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**a2 + 48LL))(**a2);
      v16 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**a2 + 40LL))(**a2);
      v12[0] = *a1[1];
      LOBYTE(v7) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                     (_DWORD)v8,
                     (unsigned int)&unk_18018F19C,
                     v9,
                     v10,
                     (__int64)v12,
                     (__int64)&v16,
                     (__int64)&v15,
                     (__int64)&v14,
                     (__int64)&v13);
    }
  }
  return (char)v7;
}
