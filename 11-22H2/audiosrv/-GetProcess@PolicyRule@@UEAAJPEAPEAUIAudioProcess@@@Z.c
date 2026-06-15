/*
 * XREFs of ?GetProcess@PolicyRule@@UEAAJPEAPEAUIAudioProcess@@@Z @ 0x18013F450
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetHead@?$CAtlList@V?$CComQIPtr@UIAudioProcess@@$1?_GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIAudioProcess@@$1?_GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200@@3U__s_GUID@@B@2@@ATL@@QEAAAEAV?$CComQIPtr@UIAudioProcess@@$1?_GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200@@3U__s_GUID@@B@2@XZ @ 0x18013F418 (-GetHead@-$CAtlList@V-$CComQIPtr@UIAudioProcess@@$1-_GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200@@.c)
 */

__int64 __fastcall PolicyRule::GetProcess(PolicyRule *this, struct IAudioProcess **a2)
{
  struct IAudioProcess **Head; // rax
  struct IAudioProcess *v4; // rcx

  if ( !*((_QWORD *)this + 4) )
    return 2147943568LL;
  Head = (struct IAudioProcess **)ATL::CAtlList<ATL::CComQIPtr<IAudioProcess,&__s_GUID const _GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200>,ATL::CComQIPtrElementTraits<IAudioProcess,&__s_GUID const _GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200>>::GetHead((_QWORD *)this + 2);
  v4 = *Head;
  *a2 = *Head;
  (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v4 + 8LL))(v4);
  return 0LL;
}
