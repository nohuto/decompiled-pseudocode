/*
 * XREFs of ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180015BF0
 * Callers:
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x180009F20 (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18000AAD0 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ABD0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@2@@Z @ 0x180013380 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_180013380.c)
 *     ?allocate@?$allocator@G@std@@QEAAPEAG_K@Z @ 0x1800154C8 (-allocate@-$allocator@G@std@@QEAAPEAG_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180015F60 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?allocate@?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@QEAAPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@_K@Z @ 0x1800236C4 (-allocate@-$allocator@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@QEAAP.c)
 *     ?allocate@?$allocator@K@std@@QEAAPEAK_K@Z @ 0x18002B744 (-allocate@-$allocator@K@std@@QEAAPEAK_K@Z.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180047674 (_CxxThrowException_0.c)
 */

void __noreturn std::_Throw_bad_array_new_length(void)
{
  _QWORD pExceptionObject[5]; // [rsp+20h] [rbp-28h] BYREF

  pExceptionObject[2] = 0LL;
  pExceptionObject[1] = "bad array new length";
  pExceptionObject[0] = &std::bad_alloc::`vftable';
  throw (std::bad_array_new_length *)pExceptionObject;
}
