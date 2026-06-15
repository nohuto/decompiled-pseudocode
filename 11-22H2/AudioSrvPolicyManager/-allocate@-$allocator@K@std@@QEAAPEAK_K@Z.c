/*
 * XREFs of ?allocate@?$allocator@K@std@@QEAAPEAK_K@Z @ 0x18002B934
 * Callers:
 *     ??$_Emplace_reallocate@AEBK@?$vector@KV?$allocator@K@std@@@std@@QEAAPEAKQEAKAEBK@Z @ 0x180024464 (--$_Emplace_reallocate@AEBK@-$vector@KV-$allocator@K@std@@@std@@QEAAPEAKQEAKAEBK@Z.c)
 *     ??$_Emplace_reallocate@AEAK@?$vector@KV?$allocator@K@std@@@std@@QEAAPEAKQEAKAEAK@Z @ 0x18003331C (--$_Emplace_reallocate@AEAK@-$vector@KV-$allocator@K@std@@@std@@QEAAPEAKQEAKAEAK@Z.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180015DE0 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

_QWORD *__fastcall std::allocator<unsigned long>::allocate(__int64 a1, unsigned __int64 a2)
{
  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  return std::_Allocate<16,std::_Default_allocate_traits,0>(4 * a2);
}
