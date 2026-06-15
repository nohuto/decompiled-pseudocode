/*
 * XREFs of ??$emplace_back@AEAV?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@H@?$vector@ULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@@std@@@std@@QEAAAEAULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@AEAV?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$$QEAH@Z @ 0x1800CF9B4
 * Callers:
 *     ?AddInterface@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJV?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@Z @ 0x1800CFDBC (-AddInterface@-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJV-$CCo.c)
 * Callees:
 *     ??$construct@ULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@AEAV?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@H@?$_Default_allocator_traits@V?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@@std@@@std@@SAXAEAV?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@@1@QEAULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@AEAV?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$$QEAH@Z @ 0x1800CF964 (--$construct@ULockedListEntry@-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$.c)
 */

__int64 *__fastcall std::vector<CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::LockedListEntry,std::allocator<CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::LockedListEntry>>::emplace_back<ATL::CComPtr<IAudioEndpointVolumeCallback> &,int>(
        __int64 *a1,
        _QWORD *a2,
        int *a3)
{
  __int64 v4; // rdx
  __int64 *result; // rax

  v4 = a1[1];
  if ( v4 == a1[2] )
    return std::vector<CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::LockedListEntry,std::allocator<CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::LockedListEntry>>::_Emplace_reallocate<ATL::CComPtr<IAudioEndpointVolumeCallback> &,int>(
             a1,
             v4,
             (__int64)a2,
             (__int64)a3);
  std::_Default_allocator_traits<std::allocator<CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::LockedListEntry>>::construct<CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::LockedListEntry,ATL::CComPtr<IAudioEndpointVolumeCallback> &,int>(
    (__int64)a1,
    v4,
    a2,
    a3);
  result = (__int64 *)a1[1];
  a1[1] = (__int64)(result + 2);
  return result;
}
