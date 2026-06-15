/*
 * XREFs of ?RefreshDefaultConnectorFormats@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18014E924
 * Callers:
 *     ?RefreshConnectorFormats@EffectPack@@QEAAJXZ @ 0x18014E6C8 (-RefreshConnectorFormats@EffectPack@@QEAAJXZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@0@@Z @ 0x1800060A4 (--$_Destroy_range@V-$allocator@V-$unique_ptr@UCConnectorFormatCharacteristics@@U-$default_delete.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TranslateDeviceConnectorModeToStreamingConnectorMode@EffectPack@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@@Z @ 0x18000E580 (-TranslateDeviceConnectorModeToStreamingConnectorMode@EffectPack@@QEAA-AU_GUID@@W4__MIDL___MIDL_.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x1800453A4 (-GetDefaultConnectorProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengine.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180149534 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTempla.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@std@@@std@@YAXPEAV?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAV12@AEAV?$allocator@V?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@0@@Z @ 0x18014A0A4 (--$_Destroy_range@V-$allocator@V-$unique_ptr@UtWAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-Co.c)
 *     ?RediscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18014E5EC (-RediscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EffectPack::RefreshDefaultConnectorFormats(
        EffectPack *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2)
{
  _DWORD *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v8; // edx
  __int64 v9; // r14
  __int64 i; // rsi
  _QWORD *v11; // rbx
  __int64 v12; // rax
  _QWORD *v13; // rbx
  int v14; // eax
  _BYTE v16[8]; // [rsp+40h] [rbp-9h] BYREF
  __int64 v17[3]; // [rsp+48h] [rbp-1h] BYREF
  struct _GUID v18; // [rsp+60h] [rbp+17h] BYREF
  struct _GUID v19; // [rsp+70h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v17[1] = 0LL;
  v3 = (_DWORD *)*((_QWORD *)this + 219);
  if ( *v3 > 4u && tlgKeywordOn((__int64)v3, 16LL) )
  {
    v16[0] = 0;
    v18 = *(struct _GUID *)*((_QWORD *)this + 159);
    v17[0] = (__int64)&v18;
    *(_QWORD *)&v19.Data1 = *(_QWORD *)(*((_QWORD *)this + 161) + 48LL);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>>(
      v4,
      byte_180196170,
      v5,
      v6,
      (const WCHAR **)&v19,
      v17,
      (__int64)v16);
  }
  EffectPack::GetDefaultConnectorProcessingModeConfiguration(this, 0, &v18, 0LL, 0LL);
  v7 = *((_QWORD *)this + 161);
  EffectPack::TranslateDeviceConnectorModeToStreamingConnectorMode(this, &v19, eHostProcessConnector, &v18);
  v9 = *(_QWORD *)(v7 + 248);
  for ( i = *(_QWORD *)(v7 + 240); i != v9; i += 8LL )
  {
    v11 = *(_QWORD **)i;
    v12 = **(_QWORD **)i - *(_QWORD *)&v19.Data1;
    if ( !v12 )
      v12 = v11[1] - *(_QWORD *)v19.Data4;
    if ( !v12 )
    {
      std::_Destroy_range<std::allocator<std::unique_ptr<CConnectorFormatCharacteristics>>>(
        (void ***)v11[2],
        (void ***)v11[3]);
      v11[3] = v11[2];
      v13 = *(_QWORD **)i;
      std::_Destroy_range<std::allocator<wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>>(
        *(void ***)(*(_QWORD *)i + 40LL),
        *(void ***)(*(_QWORD *)i + 48LL));
      v13[6] = v13[5];
    }
  }
  v14 = CEndpointCharacteristics::RediscoverProcessingModeCharacteristics(
          *((CEndpointCharacteristics **)this + 161),
          v8);
  if ( v14 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x184A,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v14);
  return 0LL;
}
