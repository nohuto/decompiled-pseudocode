/*
 * XREFs of ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@U_String_constructor_concat_tag@1@AEBV01@QEBG_K23@Z @ 0x1800AAACC
 * Callers:
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBGAEBV10@@Z @ 0x1800AA0B8 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CA_K_K00@Z @ 0x180047FF0 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CA_K_K00@Z.c)
 *     memcpy_0 @ 0x180065920 (memcpy_0.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800981B4 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall std::wstring::wstring(char *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, void *Src, __int64 a7)
{
  __int64 v8; // rbp
  unsigned __int64 v9; // rbx
  char *v10; // rsi

  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  v8 = a5 + a7;
  v9 = 7LL;
  v10 = a1;
  if ( (unsigned __int64)(a5 + a7) > 7 )
  {
    v9 = std::wstring::_Calculate_growth(a5 + a7, 7uLL, 0x7FFFFFFFFFFFFFFEuLL);
    if ( v9 + 1 > 0x7FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(2 * (v9 + 1));
    *(_QWORD *)a1 = v10;
  }
  *((_QWORD *)a1 + 2) = v8;
  *((_QWORD *)a1 + 3) = v9;
  memcpy_0(v10, L",", 2 * a5);
  memcpy_0(&v10[2 * a5], Src, 2 * a7);
  *(_WORD *)&v10[2 * v8] = 0;
  return a1;
}
