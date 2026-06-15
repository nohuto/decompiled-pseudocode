/*
 * XREFs of ?GetTargetProcessId@PolicyRule@@UEAAKXZ @ 0x180132200
 * Callers:
 *     <none>
 * Callees:
 *     ?GetHead@?$CAtlList@V?$CComQIPtr@UIAudioProcess@@$1?_GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIAudioProcess@@$1?_GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200@@3U__s_GUID@@B@2@@ATL@@QEAAAEAV?$CComQIPtr@UIAudioProcess@@$1?_GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200@@3U__s_GUID@@B@2@XZ @ 0x180131EB0 (-GetHead@-$CAtlList@V-$CComQIPtr@UIAudioProcess@@$1-_GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200@@.c)
 */

__int64 __fastcall PolicyRule::GetTargetProcessId(PolicyRule *this)
{
  _QWORD *Head; // rax

  if ( (*((_BYTE *)this + 80) & 2) == 0 )
    return 0LL;
  Head = (_QWORD *)ATL::CAtlList<ATL::CComQIPtr<IAudioProcess,&__s_GUID const _GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200>,ATL::CComQIPtrElementTraits<IAudioProcess,&__s_GUID const _GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200>>::GetHead((_QWORD *)this + 2);
  return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*Head + 40LL))(*Head);
}
