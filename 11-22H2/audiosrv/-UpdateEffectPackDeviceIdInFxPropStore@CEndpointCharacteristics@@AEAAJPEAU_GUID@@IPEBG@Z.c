/*
 * XREFs of ?UpdateEffectPackDeviceIdInFxPropStore@CEndpointCharacteristics@@AEAAJPEAU_GUID@@IPEBG@Z @ 0x180150A5C
 * Callers:
 *     ?SetCurrentEffectPackInternal@CEndpointCharacteristics@@AEAAJAEAV?$shared_ptr@VEffectPack@@@std@@@Z @ 0x180025BA0 (-SetCurrentEffectPackInternal@CEndpointCharacteristics@@AEAAJAEAV-$shared_ptr@VEffectPack@@@std@.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180010608 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@33@Z @ 0x18014925C (--$Write@U-$_tlgWrapSz@G@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2I.c)
 *     ?GetApoDeviceIdPKey@@YAJPEBGPEAU_tagpropertykey@@@Z @ 0x180169160 (-GetApoDeviceIdPKey@@YAJPEBGPEAU_tagpropertykey@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CEndpointCharacteristics::UpdateEffectPackDeviceIdInFxPropStore(
        CEndpointCharacteristics *this,
        struct _GUID *a2,
        unsigned int a3,
        char *a4)
{
  int v8; // ebx
  const char *v9; // r9
  void *v10; // rax
  int ApoDeviceIdPKey; // eax
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  _DWORD *v15; // rcx
  LPOLESTR lpsz; // [rsp+40h] [rbp-29h] BYREF
  void *v18; // [rsp+48h] [rbp-21h] BYREF
  const WCHAR *v19; // [rsp+50h] [rbp-19h] BYREF
  const WCHAR *v20; // [rsp+58h] [rbp-11h] BYREF
  const WCHAR *v21; // [rsp+60h] [rbp-9h] BYREF
  PROPVARIANT pvar[2]; // [rsp+68h] [rbp-1h] BYREF
  __int64 v23; // [rsp+78h] [rbp+Fh]
  struct _tagpropertykey v24; // [rsp+80h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v8 = 0;
  if ( !a3 )
    return 0LL;
  while ( 1 )
  {
    lpsz = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)&lpsz,
      0LL);
    StringFromCLSID(&a2[v8], &lpsz);
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      &v18,
      a4,
      0xFFFFFFFFFFFFFFFFuLL,
      v9);
    v10 = v18;
    if ( !v18 )
      break;
    pvar[0] = (PROPVARIANT)31;
    v23 = 0LL;
    v18 = 0LL;
    pvar[1] = v10;
    ApoDeviceIdPKey = GetApoDeviceIdPKey(lpsz, &v24);
    if ( ApoDeviceIdPKey < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x725,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)ApoDeviceIdPKey);
    v12 = (*(__int64 (__fastcall **)(_QWORD, struct _tagpropertykey *, PROPVARIANT *))(**((_QWORD **)this + 11) + 48LL))(
            *((_QWORD *)this + 11),
            &v24,
            pvar);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x727,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v12);
    v15 = (_DWORD *)*((_QWORD *)this + 1036);
    if ( *v15 > 5u )
    {
      v19 = (const WCHAR *)*((_QWORD *)this + 6);
      v20 = (const WCHAR *)a4;
      v21 = lpsz;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        (__int64)v15,
        byte_180196383,
        v13,
        v14,
        &v21,
        &v20,
        &v19);
    }
    PropVariantClear(pvar);
    if ( lpsz )
      CoTaskMemFree(lpsz);
    if ( ++v8 >= a3 )
      return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x71E,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)0x8007000ELL);
  if ( lpsz )
    CoTaskMemFree(lpsz);
  return 2147942414LL;
}
