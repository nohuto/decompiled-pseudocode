/*
 * XREFs of ?Find@?$CAtlList@V?$CComQIPtr@UIAudioProcess@@$1?_GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIAudioProcess@@$1?_GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200@@3U__s_GUID@@B@2@@ATL@@QEBAPEAU__POSITION@@PEAUIAudioProcess@@PEAU3@@Z @ 0x180131B04
 * Callers:
 *     ?GetRule@PolicyRule@@UEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@@Z @ 0x180132160 (-GetRule@PolicyRule@@UEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@@Z.c)
 *     ?RemoveProcess@PolicyRule@@UEAAJPEAUIAudioProcess@@PEA_N1@Z @ 0x180132D00 (-RemoveProcess@PolicyRule@@UEAAJPEAUIAudioProcess@@PEA_N1@Z.c)
 *     ?UpdateRule@RemapPolicyRule@@UEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@@Z @ 0x1801338C0 (-UpdateRule@RemapPolicyRule@@UEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall ATL::CAtlList<ATL::CComQIPtr<IAudioProcess,&__s_GUID const _GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200>,ATL::CComQIPtrElementTraits<IAudioProcess,&__s_GUID const _GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200>>::Find(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v4; // rdi
  bool v5; // bl
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a3;
  v4 = (_QWORD *)*a1;
  if ( !*a1 )
    return 0LL;
  v7 = a2;
  while ( 1 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v5 = v4[2] == a2;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v7);
    if ( v5 )
      break;
    v4 = (_QWORD *)*v4;
    if ( !v4 )
      return 0LL;
  }
  return v4;
}
