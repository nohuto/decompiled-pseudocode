/*
 * XREFs of ??$_Get_size_of_n@$0IA@@std@@YA_K_K@Z @ 0x180040F28
 * Callers:
 *     ??$_Emplace_reallocate@AEBVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAAPEAVEdge@@QEAV2@AEBV2@@Z @ 0x1801C8CB8 (--$_Emplace_reallocate@AEBVEdge@@@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAAPEAVEdge@@.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800981B4 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

unsigned __int64 __fastcall std::_Get_size_of_n<128>(unsigned __int64 a1)
{
  if ( a1 > 0x1FFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  return a1 << 7;
}
