/*
 * XREFs of ??$UserInputCloseRequested@AEAKPEBGW4CloseRequestInputSource@AppCloseTelemetry@@@AppCloseTelemetry@@SAXAEAK$$QEAPEBG$$QEAW4CloseRequestInputSource@0@@Z @ 0x180394B48
 * Callers:
 *     ?_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z @ 0x1803A25E4 (-_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@3@Z @ 0x180394BE0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?get@?$static_lazy@VAppCloselogging@@@details@wil@@QEAAPEAVAppCloselogging@@P6AXXZ@Z @ 0x1803A46F8 (-get@-$static_lazy@VAppCloselogging@@@details@wil@@QEAAPEAVAppCloselogging@@P6AXXZ@Z.c)
 */

char __fastcall AppCloseTelemetry::UserInputCloseRequested<unsigned long &,unsigned short const *,enum AppCloseTelemetry::CloseRequestInputSource>(
        _DWORD *a1,
        __int64 *a2,
        _DWORD *a3)
{
  __int64 v6; // rax
  _DWORD *v7; // rcx
  int v8; // ecx
  __int64 v10; // [rsp+40h] [rbp-18h] BYREF
  __int64 v11; // [rsp+48h] [rbp-10h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  v6 = wil::details::static_lazy<AppCloselogging>::get(
         a1,
         _lambda_3e26dcec44775d43d9dfc79dea49f939_::_lambda_invoker_cdecl_);
  v7 = *(_DWORD **)(v6 + 8);
  if ( *v7 > 5u )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)v7, 0x400000000000LL);
    if ( (_BYTE)v6 )
    {
      LODWORD(v12) = *a3;
      v11 = *a2;
      LODWORD(v10) = *a1;
      LOBYTE(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                     v8,
                     (int)&dword_18084222F,
                     (__int64)&v10,
                     (__int64)&v11,
                     (__int64)&v12);
    }
  }
  return v6;
}
