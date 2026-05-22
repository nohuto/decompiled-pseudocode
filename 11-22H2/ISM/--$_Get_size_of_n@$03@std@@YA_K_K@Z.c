/*
 * XREFs of ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x18004ECF4
 * Callers:
 *     ??0?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@G_N@std@@@1@AEBV?$allocator@U?$pair@G_N@std@@@1@@Z @ 0x18004EC44 (--0-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@G_N@std@@@2@@std@@QEAA@V-$initializer_list@U-$.c)
 *     ??$_Emplace_reallocate@AEBI@?$vector@IV?$allocator@I@std@@@std@@QEAAPEAIQEAIAEBI@Z @ 0x1800B051C (--$_Emplace_reallocate@AEBI@-$vector@IV-$allocator@I@std@@@std@@QEAAPEAIQEAIAEBI@Z.c)
 *     ??$_Emplace_reallocate@AEBK@?$vector@KV?$allocator@K@std@@@std@@QEAAPEAKQEAKAEBK@Z @ 0x1800DD948 (--$_Emplace_reallocate@AEBK@-$vector@KV-$allocator@K@std@@@std@@QEAAPEAKQEAKAEBK@Z.c)
 *     ??$_Emplace_reallocate@AEBUColor@UI@Windows@@@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAAPEAUColor@UI@Windows@@QEAU234@AEBU234@@Z @ 0x1800F9F94 (--$_Emplace_reallocate@AEBUColor@UI@Windows@@@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800FA1E4 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@.c)
 *     ?_Reallocate_exactly@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAX_K@Z @ 0x1800FBE58 (-_Reallocate_exactly@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEA.c)
 *     ?RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAXH@Z @ 0x180109D20 (-RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$equal.c)
 *     ??$_Emplace_reallocate@AEAI@?$vector@IV?$allocator@I@std@@@std@@QEAAPEAIQEAIAEAI@Z @ 0x18010AE3C (--$_Emplace_reallocate@AEAI@-$vector@IV-$allocator@I@std@@@std@@QEAAPEAIQEAIAEAI@Z.c)
 *     ?_Reallocate_exactly@?$vector@IV?$allocator@I@std@@@std@@AEAAX_K@Z @ 0x18010BE1C (-_Reallocate_exactly@-$vector@IV-$allocator@I@std@@@std@@AEAAX_K@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@IV?$allocator@I@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180183E24 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@IV-$allocator@I@std@@@std@@AEAAX_KAEBU_Val.c)
 *     ?_Buy_raw@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAX_K@Z @ 0x1801A7960 (-_Buy_raw@-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@G_N@std@@@2@@std@@AEAAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEBW4GameInputGamepadButtons@@@?$vector@W4GameInputGamepadButtons@@V?$allocator@W4GameInputGamepadButtons@@@std@@@std@@QEAAPEAW4GameInputGamepadButtons@@QEAW42@AEBW42@@Z @ 0x1801A80F8 (--$_Emplace_reallocate@AEBW4GameInputGamepadButtons@@@-$vector@W4GameInputGamepadButtons@@V-$all.c)
 *     ??$_Emplace_reallocate@AEAW4_Button@@@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAAPEAW4_Button@@QEAW42@AEAW42@@Z @ 0x1801D23C0 (--$_Emplace_reallocate@AEAW4_Button@@@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QE.c)
 *     ??$_Emplace_reallocate@K@?$vector@KV?$allocator@K@std@@@std@@QEAAPEAKQEAK$$QEAK@Z @ 0x1801E95B0 (--$_Emplace_reallocate@K@-$vector@KV-$allocator@K@std@@@std@@QEAAPEAKQEAK$$QEAK@Z.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800AA78C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<4>(unsigned __int64 a1)
{
  if ( a1 > 0x3FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  return 4 * a1;
}
