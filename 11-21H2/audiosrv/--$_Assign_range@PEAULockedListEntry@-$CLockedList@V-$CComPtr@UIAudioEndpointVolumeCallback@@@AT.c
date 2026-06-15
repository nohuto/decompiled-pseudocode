/*
 * XREFs of ??$_Assign_range@PEAULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@@?$vector@ULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@@std@@@std@@AEAAXPEAULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@0Uforward_iterator_tag@1@@Z @ 0x1800CF570
 * Callers:
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x1800CFF70 (-ForEachEntry@-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJ$$QEAV.c)
 * Callees:
 *     ??$_Copy_unchecked@PEAULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@PEAU12@@std@@YAPEAULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@PEAU12@00@Z @ 0x1800CF70C (--$_Copy_unchecked@PEAULockedListEntry@-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallback@@@.c)
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@0@@Z @ 0x1800CF768 (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents.c)
 *     ??0?$CComPtrBase@UIAudioEndpointVolumeCallback@@@ATL@@IEAA@PEAUIAudioEndpointVolumeCallback@@@Z @ 0x1800CFAB4 (--0-$CComPtrBase@UIAudioEndpointVolumeCallback@@@ATL@@IEAA@PEAUIAudioEndpointVolumeCallback@@@Z.c)
 *     ?_Clear_and_reserve_geometric@?$vector@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@AEAAX_K@Z @ 0x1800D0D80 (-_Clear_and_reserve_geometric@-$vector@ULockedListEntry@-$CLockedList@VCAudioSessionNotification.c)
 */

__int64 __fastcall std::vector<CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::LockedListEntry,std::allocator<CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::LockedListEntry>>::_Assign_range<CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::LockedListEntry *>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // r8
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  __int64 v10; // rdi
  __int64 i; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 result; // rax

  v3 = a3 - a2;
  v5 = *a1;
  v7 = v3 >> 4;
  v8 = (a1[1] - *a1) >> 4;
  if ( v7 <= v8 )
  {
    i = v5 + 16 * v7;
    std::_Copy_unchecked<CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::LockedListEntry *,CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::LockedListEntry *>(
      a2,
      a3);
    v13 = a1[1];
    v12 = i;
  }
  else
  {
    if ( v7 > (a1[2] - v5) >> 4 )
    {
      std::vector<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry,std::allocator<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry>>::_Clear_and_reserve_geometric(
        a1,
        v7);
      v8 = 0LL;
    }
    v10 = a2 + 16 * v8;
    std::_Copy_unchecked<CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::LockedListEntry *,CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::LockedListEntry *>(
      a2,
      v10);
    for ( i = a1[1]; ; i += 16LL )
    {
      v12 = i;
      if ( v10 == a3 )
        break;
      ATL::CComPtrBase<IAudioEndpointVolumeCallback>::CComPtrBase<IAudioEndpointVolumeCallback>(i, *(_QWORD *)v10);
      *(_DWORD *)(i + 8) = *(_DWORD *)(v10 + 8);
      v10 += 16LL;
    }
    v13 = i;
  }
  result = std::_Destroy_range<std::allocator<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry>>(
             v12,
             v13);
  a1[1] = i;
  return result;
}
