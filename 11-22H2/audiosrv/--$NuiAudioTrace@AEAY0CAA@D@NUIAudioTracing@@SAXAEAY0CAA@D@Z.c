/*
 * XREFs of ??$NuiAudioTrace@AEAY0CAA@D@NUIAudioTracing@@SAXAEAY0CAA@D@Z @ 0x18015900C
 * Callers:
 *     ?DumpTraceWin32@@YAXPEBD00H@Z @ 0x180159108 (-DumpTraceWin32@@YAXPEBD00H@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x180139AA8 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_G_ea_180139AA8.c)
 *     ?get@?$static_lazy@VNUIAudioTracing@@@details@wil@@QEAAPEAVNUIAudioTracing@@P6AXXZ@Z @ 0x18015917C (-get@-$static_lazy@VNUIAudioTracing@@@details@wil@@QEAAPEAVNUIAudioTracing@@P6AXXZ@Z.c)
 */

int __fastcall NUIAudioTracing::NuiAudioTrace<char (&)[512]>(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  _DWORD *v4; // r8
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD *v8; // rcx
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = wil::details::static_lazy<NUIAudioTracing>::get(
         a1,
         _lambda_904e72f60f56877f633fc2ab0ce9f5f8_::_lambda_invoker_cdecl_);
  v4 = *(_DWORD **)(v2 + 8);
  if ( v4 )
  {
    if ( *v4 )
    {
      wil::details::static_lazy<NUIAudioTracing>::get(
        v3,
        _lambda_904e72f60f56877f633fc2ab0ce9f5f8_::_lambda_invoker_cdecl_);
      v2 = wil::details::static_lazy<NUIAudioTracing>::get(
             v5,
             _lambda_904e72f60f56877f633fc2ab0ce9f5f8_::_lambda_invoker_cdecl_);
      v8 = *(_DWORD **)(v2 + 8);
      if ( *v8 > 2u )
      {
        v10 = a1;
        LODWORD(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
                        (__int64)v8,
                        byte_180198AD4,
                        v6,
                        v7,
                        (const CHAR **)&v10);
      }
    }
  }
  return v2;
}
