/*
 * XREFs of ??$_Copy_unchecked@PEAULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@PEAU12@@std@@YAPEAULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@PEAU12@00@Z @ 0x1800CF70C
 * Callers:
 *     ??$_Assign_range@PEAULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@@?$vector@ULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@@std@@@std@@AEAAXPEAULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@0Uforward_iterator_tag@1@@Z @ 0x1800CF570 (--$_Assign_range@PEAULockedListEntry@-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallback@@@AT.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180009D48 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

__int64 __fastcall std::_Copy_unchecked<CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::LockedListEntry *,CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::LockedListEntry *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 i; // rdi
  int v6; // eax

  for ( i = a1; i != a2; a3 += 16LL )
  {
    if ( *(_QWORD *)a3 != *(_QWORD *)i )
      ATL::AtlComPtrAssign((struct IUnknown **)a3, *(struct IUnknown **)i);
    v6 = *(_DWORD *)(i + 8);
    i += 16LL;
    *(_DWORD *)(a3 + 8) = v6;
  }
  return a3;
}
