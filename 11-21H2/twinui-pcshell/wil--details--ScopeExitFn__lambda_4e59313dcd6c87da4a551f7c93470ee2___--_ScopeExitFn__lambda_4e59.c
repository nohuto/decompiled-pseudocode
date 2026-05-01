/*
 * XREFs of wil::details::ScopeExitFn__lambda_4e59313dcd6c87da4a551f7c93470ee2___::_ScopeExitFn__lambda_4e59313dcd6c87da4a551f7c93470ee2___ @ 0x18044F848
 * Callers:
 *     _XamlLauncherState::OnCortanaDismissRequested_::_1_::dtor$0 @ 0x18021614E (_XamlLauncherState--OnCortanaDismissRequested_--_1_--dtor$0.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18005A23C (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?get@?$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6AXXZ@Z @ 0x1800C5AFC (-get@-$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_4e59313dcd6c87da4a551f7c93470ee2___::_ScopeExitFn__lambda_4e59313dcd6c87da4a551f7c93470ee2___(
        __int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // r9
  int v5; // [rsp+40h] [rbp+8h] BYREF
  int v6; // [rsp+48h] [rbp+10h] BYREF

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    v2 = *(_QWORD *)(a1 + 8);
    v3 = wil::details::static_lazy<LauncherTelemetryLogging>::get(
           a1,
           _lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v3 > 5u
      && (*(_QWORD *)(v3 + 16) & 0x200000000000LL) != 0
      && (*(_QWORD *)(v3 + 24) & 0x200000000000LL) == *(_QWORD *)(v3 + 24) )
    {
      v5 = *(_DWORD *)(v2 + 64);
      v6 = *(_DWORD *)a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v3,
        byte_1806B58BB,
        0LL,
        v4,
        (__int64)&v6,
        (__int64)&v5);
    }
  }
}
