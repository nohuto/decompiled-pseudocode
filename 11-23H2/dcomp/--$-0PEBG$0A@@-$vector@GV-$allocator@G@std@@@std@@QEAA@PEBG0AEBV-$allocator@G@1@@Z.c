/*
 * XREFs of ??$?0PEBG$0A@@?$vector@GV?$allocator@G@std@@@std@@QEAA@PEBG0AEBV?$allocator@G@1@@Z @ 0x18014DF48
 * Callers:
 *     ??$transform_primary@PEBG@?$_Regex_traits@G@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEBG0@Z @ 0x18014EB6C (--$transform_primary@PEBG@-$_Regex_traits@G@std@@QEBA-AV-$basic_string@GU-$char_traits@G@std@@V-.c)
 * Callees:
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 *     ?_Buy_nonzero@?$vector@GV?$allocator@G@std@@@std@@AEAAX_K@Z @ 0x180150460 (-_Buy_nonzero@-$vector@GV-$allocator@G@std@@@std@@AEAAX_K@Z.c)
 */

__int64 *__fastcall std::vector<unsigned short>::vector<unsigned short>(__int64 *a1, const void *a2, __int64 a3)
{
  size_t v3; // rbp
  __int64 v4; // rsi
  __int64 v7; // rbx

  v3 = a3 - (_QWORD)a2;
  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = (a3 - (__int64)a2) >> 1;
  a1[2] = 0LL;
  if ( v4 )
  {
    std::vector<unsigned short>::_Buy_nonzero(a1, (a3 - (__int64)a2) >> 1);
    v7 = *a1;
    memmove_0((void *)*a1, a2, v3);
    a1[1] = v7 + 2 * v4;
  }
  return a1;
}
