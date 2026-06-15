/*
 * XREFs of _lambda_61b46c1a1c9f0e1730f6e53f8c139b82_::operator() @ 0x18011B048
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_61b46c1a1c9f0e1730f6e53f8c139b82__void_::_Do_call @ 0x18011B9D0 (std--_Func_impl_no_alloc__lambda_61b46c1a1c9f0e1730f6e53f8c139b82__void_--_Do_call.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800D034C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z @ 0x18011668C (-RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z.c)
 */

void __fastcall lambda_61b46c1a1c9f0e1730f6e53f8c139b82_::operator()(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  const WCHAR **v5; // rax
  const WCHAR *v6; // rcx
  const unsigned __int16 **v7; // rax
  const unsigned __int16 *v8; // rcx
  int refreshed; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v11; // [rsp+40h] [rbp+8h] BYREF
  const WCHAR *v12; // [rsp+48h] [rbp+10h] BYREF

  v2 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v2[1] > 4u && tlgKeywordOn(v2[1], 32LL) )
  {
    v5 = *(const WCHAR ***)(a1 + 8);
    if ( v5 )
      v6 = *v5;
    else
      v6 = 0LL;
    v11 = *(_DWORD *)a1;
    v12 = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v4,
      byte_180193D59,
      v3,
      v4,
      (__int64)&v11,
      &v12);
  }
  v7 = *(const unsigned __int16 ***)(a1 + 8);
  if ( v7 )
    v8 = *v7;
  else
    v8 = 0LL;
  refreshed = CPolicyConfig::RefreshConnectorFormats(v8);
  if ( refreshed < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC2,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\softwarecaps.cpp",
      (const char *)(unsigned int)refreshed);
}
