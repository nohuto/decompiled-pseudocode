/*
 * XREFs of ?allocate@?$allocator@G@std@@QEAAPEAG_K@Z @ 0x1800154C8
 * Callers:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18001FEBC (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180015BF0 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

_QWORD *__fastcall std::allocator<unsigned short>::allocate(__int64 a1, unsigned __int64 a2)
{
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  return std::_Allocate<16,std::_Default_allocate_traits,0>(2 * a2);
}
