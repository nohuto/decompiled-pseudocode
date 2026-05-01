/*
 * XREFs of wil::details::ScopeExitFn__lambda_c5aeae9e9503ae1f76e6a66fb3d5bafb___::_ScopeExitFn__lambda_c5aeae9e9503ae1f76e6a66fb3d5bafb___ @ 0x1801AD198
 * Callers:
 *     _XamlLauncherState::ShowSearchFromOpenStart_::_1_::dtor$0 @ 0x1801ADE4F (_XamlLauncherState--ShowSearchFromOpenStart_--_1_--dtor$0.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18005A23C (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?Provider@LauncherTelemetryLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1800C5858 (-Provider@LauncherTelemetryLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_c5aeae9e9503ae1f76e6a66fb3d5bafb___::_ScopeExitFn__lambda_c5aeae9e9503ae1f76e6a66fb3d5bafb___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rdi
  const struct _tlgProvider_t *v5; // rax
  __int64 v6; // r9
  int v7; // [rsp+40h] [rbp+8h] BYREF
  int v8; // [rsp+48h] [rbp+10h] BYREF

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    v4 = *(_QWORD *)(a1 + 8);
    v5 = LauncherTelemetryLogging::Provider(a1, a2, a3);
    if ( *(_DWORD *)v5 > 5u )
    {
      if ( tlgKeywordOn((__int64)v5, 0x200000000000LL) )
      {
        v7 = *(_DWORD *)(v4 + 64);
        v8 = *(_DWORD *)a1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v6,
          byte_1806B582B,
          0LL,
          v6,
          (__int64)&v8,
          (__int64)&v7);
      }
    }
  }
}
