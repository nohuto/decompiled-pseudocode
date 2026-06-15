/*
 * XREFs of ?RemoveProcess@PolicyRule@@UEAAJPEAUIAudioProcess@@PEA_N1@Z @ 0x180132D00
 * Callers:
 *     <none>
 * Callees:
 *     ?Find@?$CAtlList@V?$CComQIPtr@UIAudioProcess@@$1?_GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIAudioProcess@@$1?_GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200@@3U__s_GUID@@B@2@@ATL@@QEBAPEAU__POSITION@@PEAUIAudioProcess@@PEAU3@@Z @ 0x180131B04 (-Find@-$CAtlList@V-$CComQIPtr@UIAudioProcess@@$1-_GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200@@3U_.c)
 *     ?RemoveAt@?$CAtlList@V?$CComQIPtr@UIEndpointDevice@@$1?_GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIEndpointDevice@@$1?_GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61@@3U__s_GUID@@B@2@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180132C64 (-RemoveAt@-$CAtlList@V-$CComQIPtr@UIEndpointDevice@@$1-_GUID_04dcfacc_3f8f_4642_82f7_326ba5600a6.c)
 */

__int64 __fastcall PolicyRule::RemoveProcess(PolicyRule *this, struct IAudioProcess *a2, bool *a3, bool *a4)
{
  _QWORD *v4; // rbx
  _QWORD *v9; // rax
  __int64 v10; // r8

  v4 = (_QWORD *)((char *)this + 16);
  v9 = ATL::CAtlList<ATL::CComQIPtr<IAudioProcess,&__s_GUID const _GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200>,ATL::CComQIPtrElementTraits<IAudioProcess,&__s_GUID const _GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200>>::Find(
         (_QWORD *)this + 2,
         (__int64)a2,
         (__int64)a3);
  if ( !v9 )
    return 2147943568LL;
  ATL::CAtlList<ATL::CComQIPtr<IEndpointDevice,&__s_GUID const _GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61>,ATL::CComQIPtrElementTraits<IEndpointDevice,&__s_GUID const _GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61>>::RemoveAt(
    v4,
    v9);
  *a3 = ATL::CAtlList<ATL::CComQIPtr<IAudioProcess,&__s_GUID const _GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200>,ATL::CComQIPtrElementTraits<IAudioProcess,&__s_GUID const _GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200>>::Find(
          v4,
          (__int64)a2,
          v10) == 0LL;
  *a4 = *((_QWORD *)this + 4) == 0LL;
  return 0LL;
}
