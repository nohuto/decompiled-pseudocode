/*
 * XREFs of ?do_truename@?$numpunct@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x18006B630
 * Callers:
 *     <none>
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x180069F34 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 */

unsigned __int64 *__fastcall std::numpunct<unsigned short>::do_truename(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v3; // r8
  char *v4; // rdx
  __int64 v5; // rax

  v3 = 0LL;
  v4 = *(char **)(a1 + 40);
  a2[3] = 7LL;
  a2[2] = 0LL;
  *(_WORD *)a2 = 0;
  if ( *(_WORD *)v4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_WORD *)&v4[2 * v5] );
    v3 = v5;
  }
  std::wstring::assign(a2, v4, v3);
  return a2;
}
