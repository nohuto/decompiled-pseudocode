/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$shared_ptr@VEffectPack@@@std@@@?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VEffectPack@@@1@QEAV21@AEBV21@@Z @ 0x18014A0EC
 * Callers:
 *     ?GetEffectPacks@CEndpointCharacteristics@@QEAAJAEAV?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@@Z @ 0x18014C8FC (-GetEffectPacks@CEndpointCharacteristics@@QEAAJAEAV-$vector@V-$shared_ptr@VEffectPack@@@std@@V-$.c)
 * Callees:
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180025520 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     ?_Calculate_growth@?$vector@ULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@@std@@@std@@AEBA_K_K@Z @ 0x180026D28 (-_Calculate_growth@-$vector@ULockedListEntry@-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallb.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180027A18 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800282D8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@YAPEAV?$shared_ptr@VEffectPack@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@VEffectPack@@@std@@@0@@Z @ 0x1800425AC (--$_Uninitialized_move@PEAV-$shared_ptr@VEffectPack@@@std@@V-$allocator@V-$shared_ptr@VEffectPac.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@VEffectPack@@@2@_K1@Z @ 0x1800425DC (-_Change_array@-$vector@V-$shared_ptr@VEffectPack@@@std@@V-$allocator@V-$shared_ptr@VEffectPack@.c)
 */

_QWORD *__fastcall std::vector<std::shared_ptr<EffectPack>>::_Emplace_reallocate<std::shared_ptr<EffectPack> const &>(
        _QWORD *a1,
        char *a2,
        _QWORD *a3)
{
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // r15
  SIZE_T size_of; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rdi
  _QWORD *v13; // rsi
  char *v14; // rdx
  _QWORD *v15; // r8
  char *v16; // rcx
  _QWORD *result; // rax
  void *v18; // [rsp+20h] [rbp-48h]
  __int64 v19; // [rsp+70h] [rbp+8h]

  v6 = (unsigned __int64)&a2[-*a1];
  v7 = (__int64)(a1[1] - *a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = std::vector<CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::LockedListEntry,std::allocator<CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::LockedListEntry>>::_Calculate_growth(
         a1,
         v7 + 1);
  size_of = std::_Get_size_of_n<16>(v9);
  v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = v11;
  v18 = v11;
  v13 = (_QWORD *)((char *)v11 + (v6 & 0xFFFFFFFFFFFFFFF0uLL));
  try
  {
    std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(v13, a3);
    v19 = (__int64)v13;
    v14 = (char *)a1[1];
    v15 = v12;
    v16 = (char *)*a1;
    if ( a2 != v14 )
    {
      std::_Uninitialized_move<std::shared_ptr<EffectPack> *,std::allocator<std::shared_ptr<EffectPack>>>(v16, a2, v12);
      v19 = (__int64)v12;
      v15 = v13 + 2;
      v14 = (char *)a1[1];
      v16 = a2;
    }
    std::_Uninitialized_move<std::shared_ptr<EffectPack> *,std::allocator<std::shared_ptr<EffectPack>>>(v16, v14, v15);
    std::vector<std::shared_ptr<EffectPack>>::_Change_array(a1, (__int64)v12, v8, v9);
    result = v13;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<EffectPack>>>(v19, (__int64)(v13 + 2));
    std::_Deallocate<16,0>(v18, 16 * v9);
    throw;
  }
  return result;
}
