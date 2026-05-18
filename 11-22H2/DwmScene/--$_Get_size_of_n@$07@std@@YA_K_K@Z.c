/*
 * XREFs of ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180017058
 * Callers:
 *     ??$_Emplace_reallocate@PEAVSpectreWorld@@@?$vector@PEAVSpectreWorld@@V?$allocator@PEAVSpectreWorld@@@std@@@std@@QEAAPEAPEAVSpectreWorld@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x180016DFC (--$_Emplace_reallocate@PEAVSpectreWorld@@@-$vector@PEAVSpectreWorld@@V-$allocator@PEAVSpectreWor.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@@std@@@std@@@2@@Z @ 0x180042718 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18006E374 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_s.c)
 *     ??$_Emplace_reallocate@AEBQEAVSceneNode@Engine@Spectre@@@?$vector@PEAVSceneNode@Engine@Spectre@@V?$allocator@PEAVSceneNode@Engine@Spectre@@@std@@@std@@QEAAPEAPEAVSceneNode@Engine@Spectre@@QEAPEAV234@AEBQEAV234@@Z @ 0x180070BAC (--$_Emplace_reallocate@AEBQEAVSceneNode@Engine@Spectre@@@-$vector@PEAVSceneNode@Engine@Spectre@@.c)
 *     ?_Buy_raw@?$vector@UMessageEvent@Engine@Spectre@@V?$allocator@UMessageEvent@Engine@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18007444C (-_Buy_raw@-$vector@UMessageEvent@Engine@Spectre@@V-$allocator@UMessageEvent@Engine@Spectre@@@std.c)
 *     ?_Buy_nonzero@?$vector@_KV?$allocator@_K@std@@@std@@AEAAX_K@Z @ 0x18007E4DC (-_Buy_nonzero@-$vector@_KV-$allocator@_K@std@@@std@@AEAAX_K@Z.c)
 *     ??$_Emplace_reallocate@U?$pair@II@std@@@?$vector@U?$pair@II@std@@V?$allocator@U?$pair@II@std@@@2@@std@@QEAAPEAU?$pair@II@1@QEAU21@$$QEAU21@@Z @ 0x180081864 (--$_Emplace_reallocate@U-$pair@II@std@@@-$vector@U-$pair@II@std@@V-$allocator@U-$pair@II@std@@@2.c)
 *     ??$_Emplace_reallocate@AEBUVector2@Math@Utils@Spectre@@@?$vector@UVector2@Math@Utils@Spectre@@V?$allocator@UVector2@Math@Utils@Spectre@@@std@@@std@@QEAAPEAUVector2@Math@Utils@Spectre@@QEAU2345@AEBU2345@@Z @ 0x18008C8D8 (--$_Emplace_reallocate@AEBUVector2@Math@Utils@Spectre@@@-$vector@UVector2@Math@Utils@Spectre@@V-.c)
 *     ??$_Emplace_reallocate@UVector2@Math@Utils@Spectre@@@?$vector@UVector2@Math@Utils@Spectre@@V?$allocator@UVector2@Math@Utils@Spectre@@@std@@@std@@QEAAPEAUVector2@Math@Utils@Spectre@@QEAU2345@$$QEAU2345@@Z @ 0x18008CBD4 (--$_Emplace_reallocate@UVector2@Math@Utils@Spectre@@@-$vector@UVector2@Math@Utils@Spectre@@V-$al.c)
 *     ?_Growmap@?$deque@_KV?$allocator@_K@std@@@std@@AEAAX_K@Z @ 0x1800A18C0 (-_Growmap@-$deque@_KV-$allocator@_K@std@@@std@@AEAAX_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KVBoundingBox@Transcoder@Spectre@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KVBoundingBox@Transcoder@Spectre@@@std@@@std@@@std@@@2@@Z @ 0x1800A5570 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_1800A5570.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180011AC4 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<8>(unsigned __int64 a1)
{
  if ( a1 > 0x1FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  return 8 * a1;
}
