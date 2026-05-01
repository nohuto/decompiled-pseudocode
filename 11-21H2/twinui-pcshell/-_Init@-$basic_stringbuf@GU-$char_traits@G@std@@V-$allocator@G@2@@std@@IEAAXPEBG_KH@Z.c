/*
 * XREFs of ?_Init@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IEAAXPEBG_KH@Z @ 0x1805BDEDC
 * Callers:
 *     ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x1805BC8AC (--0-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV-$basic_string@GU.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x18008964C (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     memcpy_0 @ 0x1801EACEF (memcpy_0.c)
 */

void __fastcall std::basic_stringbuf<unsigned short>::_Init(__int64 a1, const void *a2, unsigned __int64 a3, int a4)
{
  size_t size_of; // rax
  size_t v9; // rbx
  char *v10; // rbp
  char *v11; // r8

  if ( a3 > 0x7FFFFFFF )
  {
    std::_Xbad_alloc();
    __debugbreak();
  }
  if ( !a3 || (a4 & 6) == 6 )
  {
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  else
  {
    size_of = std::_Get_size_of_n<2>(a3);
    v9 = 2 * a3;
    v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    memcpy_0(v10, a2, v9);
    *(_QWORD *)(a1 + 104) = &v10[v9];
    if ( (a4 & 4) == 0 )
      std::basic_streambuf<unsigned short>::setg(a1, v10, v10, &v10[v9]);
    if ( (a4 & 2) == 0 )
    {
      v11 = v10;
      if ( (a4 & 0x18) != 0 )
        v11 = *(char **)(a1 + 104);
      std::basic_streambuf<unsigned short>::setp(a1, v10, v11, *(_QWORD *)(a1 + 104));
      if ( (a4 & 4) != 0 )
        std::basic_streambuf<unsigned short>::setg(a1, v10, 0LL, v10);
    }
    a4 |= 1u;
  }
  *(_DWORD *)(a1 + 112) = a4;
}
