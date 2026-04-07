/*
 * XREFs of ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x1800440A4
 * Callers:
 *     ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z @ 0x180004130 (--$_Emplace_reallocate@AEBM@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009BC6C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<4>(unsigned __int64 a1)
{
  if ( a1 > 0x3FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  return 4 * a1;
}
