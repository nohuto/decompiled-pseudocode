/*
 * XREFs of ?allocate@?$allocator@K@std@@QEAAPEAK_K@Z @ 0x18002B744
 * Callers:
 *     ??$_Emplace_reallocate@AEBK@?$vector@KV?$allocator@K@std@@@std@@QEAAPEAKQEAKAEBK@Z @ 0x180024274 (--$_Emplace_reallocate@AEBK@-$vector@KV-$allocator@K@std@@@std@@QEAAPEAKQEAKAEBK@Z.c)
 *     ??$_Emplace_reallocate@AEAK@?$vector@KV?$allocator@K@std@@@std@@QEAAPEAKQEAKAEAK@Z @ 0x1800331B0 (--$_Emplace_reallocate@AEAK@-$vector@KV-$allocator@K@std@@@std@@QEAAPEAKQEAKAEAK@Z.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180015BF0 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

_QWORD *__fastcall std::allocator<unsigned long>::allocate(__int64 a1, unsigned __int64 a2)
{
  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  return std::_Allocate<16,std::_Default_allocate_traits,0>(4 * a2);
}
