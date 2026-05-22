/*
 * XREFs of ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180043FA0
 * Callers:
 *     ?_Insert@?$_Buf@G@std@@QEAAXG@Z @ 0x1800418BC (-_Insert@-$_Buf@G@std@@QEAAXG@Z.c)
 *     ?_Alternative@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x18004319C (-_Alternative@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 *     ??$_Reallocate_grow_by@V_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@Z @ 0x18014E970 (--$_Reallocate_grow_by@V_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@-$basic_string@GU-$char_t.c)
 *     ?_Buy_nonzero@?$vector@GV?$allocator@G@std@@@std@@AEAAX_K@Z @ 0x180150460 (-_Buy_nonzero@-$vector@GV-$allocator@G@std@@@std@@AEAAX_K@Z.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800E5D98 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<2>(unsigned __int64 a1)
{
  if ( a1 > 0x7FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  return 2 * a1;
}
