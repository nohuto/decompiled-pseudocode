/*
 * XREFs of ?ButtonEvent@SystemButtonProcessor@InputETW@@SAXK_N@Z @ 0x1801D31B8
 * Callers:
 *     ?OnInput@SystemButtonProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801D3270 (-OnInput@SystemButtonProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRes.c)
 * Callees:
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x18003F300 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1800BDE48 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1800F9C60 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 */

void __fastcall InputETW::SystemButtonProcessor::ButtonEvent(__int64 a1, unsigned __int8 a2)
{
  int v2; // ebx
  int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // [rsp+50h] [rbp+18h] BYREF
  int v9; // [rsp+58h] [rbp+20h] BYREF

  v2 = a2;
  v3 = a1;
  if ( InputETW::IsEnabled(a1) )
  {
    v5 = wil::details::static_lazy<InputETW>::get(v4, _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v5 > 5u && (*(_BYTE *)(v5 + 16) & 1) != 0 && (*(_QWORD *)(v5 + 24) & 1LL) == *(_QWORD *)(v5 + 24) )
    {
      v8 = v2;
      v9 = v3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v5,
        byte_180228E44,
        v6,
        v7,
        (__int64)&v9,
        (__int64)&v8);
    }
  }
}
