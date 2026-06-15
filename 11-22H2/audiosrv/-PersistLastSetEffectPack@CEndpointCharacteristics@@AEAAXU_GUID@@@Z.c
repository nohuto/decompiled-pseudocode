/*
 * XREFs of ?PersistLastSetEffectPack@CEndpointCharacteristics@@AEAAXU_GUID@@@Z @ 0x1800258C0
 * Callers:
 *     ?SetCurrentEffectPackInternal@CEndpointCharacteristics@@AEAAJAEAV?$shared_ptr@VEffectPack@@@std@@@Z @ 0x180025BA0 (-SetCurrentEffectPackInternal@CEndpointCharacteristics@@AEAAJAEAV-$shared_ptr@VEffectPack@@@std@.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CEndpointCharacteristics::PersistLastSetEffectPack(CEndpointCharacteristics *this, struct _GUID *a2)
{
  LPOLESTR v4; // rax
  int v5; // eax
  LPOLESTR lpsz; // [rsp+20h] [rbp-20h] BYREF
  PROPVARIANT pvar[2]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v8; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]

  lpsz = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &lpsz,
    0LL);
  if ( StringFromCLSID(a2, &lpsz) >= 0 )
  {
    pvar[0] = (PROPVARIANT)31;
    v8 = 0LL;
    v4 = lpsz;
    lpsz = 0LL;
    pvar[1] = v4;
    v5 = (*(__int64 (__fastcall **)(_QWORD, const struct _tagpropertykey *, PROPVARIANT *))(**((_QWORD **)this + 9)
                                                                                          + 48LL))(
           *((_QWORD *)this + 9),
           &PKEY_AudioEndpoint_LastSetEffectPack,
           pvar);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x6F3,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v5);
    PropVariantClear(pvar);
  }
  if ( lpsz )
    CoTaskMemFree(lpsz);
}
