/*
 * XREFs of wistd::__function::__func__lambda_811cd5f066f71f0b89527db36e24961e__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x180381210
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18003EB00 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800765C4 (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_811cd5f066f71f0b89527db36e24961e__void___cdecl_enum_wil::RegistryChangeKind__::operator()(
        __int64 a1,
        int *a2)
{
  int v2; // edi
  _DWORD *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v2 = *a2;
  v4 = (_DWORD *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                   a1,
                   _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
  if ( *v4 > 5u )
  {
    LODWORD(v8) = v2;
    v9 = (__int64)L"PrintScreenKeyForSnippingEnabled";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      (int)v4,
      (int)&dword_1806A986F,
      v5,
      v6,
      (const WCHAR **)&v9,
      (__int64)&v8);
  }
  return CreationThreadDispatcher::RunAsync__lambda_1b40b5d6f827a7927402830192b2b26f___(
           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 304LL),
           *(volatile int **)(a1 + 8));
}
