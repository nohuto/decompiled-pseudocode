/*
 * XREFs of wil::details::ScopeExitFn__lambda_be3b2c378271bcada8467139830e6008___::_ScopeExitFn__lambda_be3b2c378271bcada8467139830e6008___ @ 0x180504DB4
 * Callers:
 *     _XamlLauncherState::OnStartLaunchResult_::_1_::dtor$0 @ 0x1802C6E2B (_XamlLauncherState--OnStartLaunchResult_--_1_--dtor$0.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x18009FA5C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?get@?$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6AXXZ@Z @ 0x1800BC6C8 (-get@-$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_be3b2c378271bcada8467139830e6008___::_ScopeExitFn__lambda_be3b2c378271bcada8467139830e6008___(
        __int64 a1)
{
  __int64 v2; // rdi
  _DWORD *v3; // rcx
  int v4; // ecx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // [rsp+50h] [rbp+8h] BYREF
  int v8; // [rsp+58h] [rbp+10h] BYREF
  int v9; // [rsp+60h] [rbp+18h] BYREF

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    v2 = *(_QWORD *)(a1 + 8);
    v3 = (_DWORD *)wil::details::static_lazy<LauncherTelemetryLogging>::get(
                     a1,
                     (void (__cdecl *)())_lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_)[1];
    if ( *v3 > 5u )
    {
      if ( tlgKeywordOn((__int64)v3, 0x200000000000LL) )
      {
        v7 = *(_DWORD *)(a1 + 16);
        v8 = *(_DWORD *)(v2 + 64);
        v9 = *(_DWORD *)a1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v4,
          (int)&unk_18085C16A,
          v5,
          v6,
          (__int64)&v9,
          (__int64)&v8,
          (__int64)&v7);
      }
    }
  }
}
