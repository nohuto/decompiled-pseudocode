/*
 * XREFs of ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@U_String_constructor_concat_tag@1@AEBV01@QEBG_K23@Z @ 0x1805D0290
 * Callers:
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEBV10@QEBG@Z @ 0x1805CFD6C (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_1805CFD6C.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x18008964C (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CA_K_K00@Z @ 0x18008AC40 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CA_K_K00@Z.c)
 *     memcpy_0 @ 0x1801EACEF (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall std::wstring::wstring(
        char *a1,
        __int64 a2,
        __int64 a3,
        const void *a4,
        __int64 a5,
        int a6,
        __int64 a7)
{
  __int64 v9; // rsi
  unsigned __int64 v10; // rbx
  char *v11; // r14
  size_t size_of; // rax

  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  v9 = a5 + a7;
  v10 = 7LL;
  v11 = a1;
  if ( (unsigned __int64)(a5 + a7) > 7 )
  {
    v10 = std::wstring::_Calculate_growth(a5 + a7, 7uLL, 0x7FFFFFFFFFFFFFFEuLL);
    size_of = std::_Get_size_of_n<2>(v10 + 1);
    v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *(_QWORD *)a1 = v11;
  }
  *((_QWORD *)a1 + 2) = v9;
  *((_QWORD *)a1 + 3) = v10;
  memcpy_0(v11, a4, 2 * a5);
  memcpy_0(&v11[2 * a5], L":", 2 * a7);
  *(_WORD *)&v11[2 * v9] = 0;
  return a1;
}
