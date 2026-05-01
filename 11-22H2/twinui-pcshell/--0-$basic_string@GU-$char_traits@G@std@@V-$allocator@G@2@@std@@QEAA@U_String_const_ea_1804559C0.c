/*
 * XREFs of ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@U_String_constructor_concat_tag@1@AEBV01@QEBG_K23@Z @ 0x1804559C0
 * Callers:
 *     ?LaunchSnippingToolApp@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x18045645C (-LaunchSnippingToolApp@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experie.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEBV10@QEBG@Z @ 0x18051DA28 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_18051DA28.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEBV10@0@Z @ 0x18072C23C (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_18072C23C.c)
 * Callees:
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180093044 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CA_K_K00@Z @ 0x1800C3DC4 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CA_K_K00@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1801C934B (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall std::wstring::wstring(
        char *a1,
        __int64 a2,
        __int64 a3,
        const void *a4,
        __int64 a5,
        void *Src,
        __int64 a7)
{
  __int64 v9; // rbp
  unsigned __int64 v10; // rbx
  char *v11; // rsi
  size_t size_of; // rax

  *(_QWORD *)a1 = 0LL;
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
  memcpy_0(&v11[2 * a5], Src, 2 * a7);
  *(_WORD *)&v11[2 * v9] = 0;
  return a1;
}
