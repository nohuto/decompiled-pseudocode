/*
 * XREFs of ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@U_String_constructor_concat_tag@1@AEBV01@QEBD_K23@Z @ 0x1800133F4
 * Callers:
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@AEBV10@0@Z @ 0x18001338C (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@AEBV10@QEBD@Z @ 0x18001C600 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C600.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEBDAEBV10@@Z @ 0x18001C6CC (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C6CC.c)
 * Callees:
 *     memcpy_0 @ 0x18000CA61 (memcpy_0.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@CA_K_K00@Z @ 0x18001187C (-_Calculate_growth@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@CA_K_K00@Z.c)
 */

char *__fastcall std::string::string(
        char *a1,
        __int64 a2,
        __int64 a3,
        const void *a4,
        size_t Size,
        void *Src,
        size_t a7)
{
  unsigned __int64 v7; // rbp
  char *v10; // rdi
  size_t v11; // rsi
  char *result; // rax

  *(_QWORD *)a1 = 0LL;
  v7 = 15LL;
  *((_QWORD *)a1 + 2) = 0LL;
  v10 = a1;
  *((_QWORD *)a1 + 3) = 0LL;
  v11 = Size + a7;
  if ( Size + a7 > 0xF )
  {
    v7 = std::string::_Calculate_growth(Size + a7, 0xFuLL, 0x7FFFFFFFFFFFFFFFuLL);
    v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v7 + 1);
    *(_QWORD *)a1 = v10;
  }
  *((_QWORD *)a1 + 2) = v11;
  *((_QWORD *)a1 + 3) = v7;
  memcpy_0(v10, a4, Size);
  memcpy_0(&v10[Size], Src, a7);
  result = a1;
  v10[v11] = 0;
  return result;
}
