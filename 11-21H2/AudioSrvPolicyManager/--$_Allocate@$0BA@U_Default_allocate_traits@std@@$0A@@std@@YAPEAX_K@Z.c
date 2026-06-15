/*
 * XREFs of ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800081EC
 * Callers:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18000DB90 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18000E4A8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$_Emplace_reallocate@AEAVCDuckingNotification@@H@?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@QEAAPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAU23@AEAVCDuckingNotification@@$$QEAH@Z @ 0x18000EC68 (--$_Emplace_reallocate@AEAVCDuckingNotification@@H@-$vector@ULockedListEntry@-$CLockedList@VCDuc.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18000F448 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Copy_assign@?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@AEAAXAEBV12@U?$integral_constant@_N$0A@@2@@Z @ 0x180012AF8 (-_Copy_assign@-$vector@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@V-$allocat.c)
 *     ??$_Emplace_reallocate@AEBK@?$vector@KV?$allocator@K@std@@@std@@QEAAPEAKQEAKAEBK@Z @ 0x180013F48 (--$_Emplace_reallocate@AEBK@-$vector@KV-$allocator@K@std@@@std@@QEAAPEAKQEAKAEBK@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAUIAudioAppVolumePolicyChange@@@?$vector@PEAUIAudioAppVolumePolicyChange@@V?$allocator@PEAUIAudioAppVolumePolicyChange@@@std@@@std@@QEAAPEAPEAUIAudioAppVolumePolicyChange@@QEAPEAU2@AEBQEAU2@@Z @ 0x180014080 (--$_Emplace_reallocate@AEBQEAUIAudioAppVolumePolicyChange@@@-$vector@PEAUIAudioAppVolumePolicyCh.c)
 *     ??$_Emplace_reallocate@AEBQEAUIMixedRealitySpatialAudioFormatPolicyChange@@@?$vector@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@V?$allocator@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@@std@@@std@@QEAAPEAPEAUIMixedRealitySpatialAudioFormatPolicyChange@@QEAPEAU2@AEBQEAU2@@Z @ 0x1800141B8 (--$_Emplace_reallocate@AEBQEAUIMixedRealitySpatialAudioFormatPolicyChange@@@-$vector@PEAUIMixedR.c)
 *     ??$_Emplace_reallocate@AEAK@?$vector@KV?$allocator@K@std@@@std@@QEAAPEAKQEAKAEAK@Z @ 0x18002A7A8 (--$_Emplace_reallocate@AEAK@-$vector@KV-$allocator@K@std@@@std@@QEAAPEAKQEAKAEAK@Z.c)
 *     ??$_Emplace_reallocate@AEAPEAVCApplication@@@?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@QEAAPEAPEAVCApplication@@QEAPEAV2@AEAPEAV2@@Z @ 0x18002A8E0 (--$_Emplace_reallocate@AEAPEAVCApplication@@@-$vector@PEAVCApplication@@V-$allocator@PEAVCApplic.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18000E460 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

_QWORD *__fastcall std::_Allocate<16,std::_Default_allocate_traits,0>(SIZE_T dwBytes)
{
  SIZE_T v2; // rdi
  HANDLE ProcessHeap; // rax
  LPVOID v4; // rax
  LPVOID v5; // rcx
  _QWORD *result; // rax
  HANDLE v7; // rax

  if ( dwBytes >= 0x1000 )
  {
    v2 = dwBytes + 39;
    if ( dwBytes + 39 < dwBytes )
      std::_Throw_bad_array_new_length();
    ProcessHeap = GetProcessHeap();
    v4 = HeapAlloc(ProcessHeap, 0, v2);
    v5 = v4;
    if ( v4 )
    {
      result = (_QWORD *)(((unsigned __int64)v4 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(result - 1) = v5;
      return result;
    }
    _o__invalid_parameter_noinfo_noreturn();
    __debugbreak();
  }
  if ( !dwBytes )
    return 0LL;
  v7 = GetProcessHeap();
  return HeapAlloc(v7, 0, dwBytes);
}
