/*
 * XREFs of ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180015F60
 * Callers:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@std@@@std@@@2@@Z @ 0x180015060 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_180015060.c)
 *     ??$_Emplace_reallocate@AEBQEAUIAudioAppVolumePolicyChange@@@?$vector@PEAUIAudioAppVolumePolicyChange@@V?$allocator@PEAUIAudioAppVolumePolicyChange@@@std@@@std@@QEAAPEAPEAUIAudioAppVolumePolicyChange@@QEAPEAU2@AEBQEAU2@@Z @ 0x180024364 (--$_Emplace_reallocate@AEBQEAUIAudioAppVolumePolicyChange@@@-$vector@PEAUIAudioAppVolumePolicyCh.c)
 *     ??$_Emplace_reallocate@AEBQEAUIMixedRealitySpatialAudioFormatPolicyChange@@@?$vector@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@V?$allocator@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@@std@@@std@@QEAAPEAPEAUIMixedRealitySpatialAudioFormatPolicyChange@@QEAPEAU2@AEBQEAU2@@Z @ 0x180024490 (--$_Emplace_reallocate@AEBQEAUIMixedRealitySpatialAudioFormatPolicyChange@@@-$vector@PEAUIMixedR.c)
 *     ??$_Emplace_reallocate@AEAPEAVCApplication@@@?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@QEAAPEAPEAVCApplication@@QEAPEAV2@AEAPEAV2@@Z @ 0x1800332A0 (--$_Emplace_reallocate@AEAPEAVCApplication@@@-$vector@PEAVCApplication@@V-$allocator@PEAVCApplic.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180015BF0 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<8>(unsigned __int64 a1)
{
  if ( a1 > 0x1FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  return 8 * a1;
}
