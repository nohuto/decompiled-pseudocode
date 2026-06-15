/*
 * XREFs of ?ClearEffectPackDeviceIdFromFxPropStore@CEndpointCharacteristics@@AEAAXPEAU_GUID@@I@Z @ 0x18014B388
 * Callers:
 *     ?RemoveEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x18014EBA0 (-RemoveEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3@Z @ 0x1800D7B98 (--$Write@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEA.c)
 *     ?GetApoDeviceIdPKey@@YAJPEBGPEAU_tagpropertykey@@@Z @ 0x180169110 (-GetApoDeviceIdPKey@@YAJPEBGPEAU_tagpropertykey@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CEndpointCharacteristics::ClearEffectPackDeviceIdFromFxPropStore(
        CEndpointCharacteristics *this,
        struct _GUID *a2,
        unsigned int a3)
{
  __int64 v5; // rdi
  int ApoDeviceIdPKey; // eax
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // rcx
  LPOLESTR lpsz; // [rsp+30h] [rbp-50h] BYREF
  const WCHAR *v12; // [rsp+38h] [rbp-48h] BYREF
  const WCHAR *v13; // [rsp+40h] [rbp-40h] BYREF
  PROPVARIANT pvar[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v15; // [rsp+58h] [rbp-28h]
  struct _tagpropertykey v16; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  if ( a3 )
  {
    v5 = a3;
    do
    {
      lpsz = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        (void **)&lpsz,
        0LL);
      StringFromCLSID(a2, &lpsz);
      *(_OWORD *)pvar = 0LL;
      v15 = 0LL;
      LOWORD(pvar[0]) = 0;
      ApoDeviceIdPKey = GetApoDeviceIdPKey(lpsz, &v16);
      if ( ApoDeviceIdPKey < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x745,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)ApoDeviceIdPKey);
      v7 = (*(__int64 (__fastcall **)(_QWORD, struct _tagpropertykey *, PROPVARIANT *))(**((_QWORD **)this + 11) + 48LL))(
             *((_QWORD *)this + 11),
             &v16,
             pvar);
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x747,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v7);
      v10 = (_DWORD *)*((_QWORD *)this + 1036);
      if ( *v10 > 5u )
      {
        v12 = (const WCHAR *)*((_QWORD *)this + 6);
        v13 = lpsz;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
          (__int64)v10,
          byte_1801962BB,
          v8,
          v9,
          &v13,
          &v12);
      }
      PropVariantClear(pvar);
      if ( lpsz )
        CoTaskMemFree(lpsz);
      ++a2;
      --v5;
    }
    while ( v5 );
  }
}
