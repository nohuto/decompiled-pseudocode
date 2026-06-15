/*
 * XREFs of ??$_Emplace_reallocate@AEAVCAudioSessionNotificationProcess@@H@?$vector@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@QEAAPEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAU23@AEAVCAudioSessionNotificationProcess@@$$QEAH@Z @ 0x1800DE314
 * Callers:
 *     ??$emplace_back@AEAVCAudioSessionNotificationProcess@@H@?$vector@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@QEAAAEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@AEAVCAudioSessionNotificationProcess@@$$QEAH@Z @ 0x1800DEB08 (--$emplace_back@AEAVCAudioSessionNotificationProcess@@H@-$vector@ULockedListEntry@-$CLockedList@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180025468 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18005B3F8 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@ULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@@std@@@std@@AEBA_K_K@Z @ 0x1800D0CC8 (-_Calculate_growth@-$vector@ULockedListEntry@-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallb.c)
 *     ?_Change_array@?$vector@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@AEAAXQEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@_K1@Z @ 0x1800D0D04 (-_Change_array@-$vector@ULockedListEntry@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A.c)
 *     ??$_Uninitialized_move@PEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@YAPEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAU12@0PEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@0@@Z @ 0x1800DE714 (--$_Uninitialized_move@PEAULockedListEntry@-$CLockedList@VCAudioSessionNotificationProcess@@$00$.c)
 *     ??$construct@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@AEAVCAudioSessionNotificationProcess@@H@?$_Default_allocator_traits@V?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@SAXAEAV?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@1@QEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@AEAVCAudioSessionNotificationProcess@@$$QEAH@Z @ 0x1800DE80C (--$construct@ULockedListEntry@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@AEAVCAud.c)
 */

__int64 *__fastcall std::vector<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry,std::allocator<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry>>::_Emplace_reallocate<CAudioSessionNotificationProcess &,int>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // r15
  SIZE_T size_of; // rax
  char *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 *result; // rax
  __int64 v19; // [rsp+20h] [rbp-48h]
  void *v20; // [rsp+28h] [rbp-40h]
  __int64 *v21; // [rsp+70h] [rbp+8h]

  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = std::vector<CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::LockedListEntry,std::allocator<CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::LockedListEntry>>::_Calculate_growth(
         a1,
         v7 + 1);
  size_of = std::_Get_size_of_n<16>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = (__int64)v11;
  v14 = (__int64 *)&v11[v6 & 0xFFFFFFFFFFFFFFF0uLL];
  try
  {
    std::_Default_allocator_traits<std::allocator<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry>>::construct<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry,CAudioSessionNotificationProcess &,int>(
      v12,
      v14,
      a3,
      a4,
      v9,
      v11);
    v21 = v14;
    v15 = a1[1];
    v16 = v13;
    v17 = *a1;
    if ( a2 != v15 )
    {
      std::_Uninitialized_move<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry *,std::allocator<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry>>(
        v17,
        a2,
        v13);
      v21 = (__int64 *)v13;
      v16 = (__int64)(v14 + 2);
      v15 = a1[1];
      v17 = a2;
    }
    std::_Uninitialized_move<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry *,std::allocator<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry>>(
      v17,
      v15,
      v16);
    std::vector<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry,std::allocator<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry>>::_Change_array(
      (__int64)a1,
      v13,
      v8,
      v9);
    result = v14;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry>>(
      v21,
      v14 + 2);
    std::_Deallocate<16,0>(v20, 16 * v19);
    throw;
  }
  return result;
}
