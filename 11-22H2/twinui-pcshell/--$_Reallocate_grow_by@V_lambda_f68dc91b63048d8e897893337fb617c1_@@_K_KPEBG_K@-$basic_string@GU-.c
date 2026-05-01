/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_f68dc91b63048d8e897893337fb617c1_@@_K_KPEBG_K@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_f68dc91b63048d8e897893337fb617c1_@@_K2PEBG2@Z @ 0x180633AA8
 * Callers:
 *     ?replace@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K_KQEBG0@Z @ 0x180634ADC (-replace@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_K_KQEBG0@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180093044 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CA_K_K00@Z @ 0x1800C3DC4 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CA_K_K00@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1801C934B (memcpy_0.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x180392130 (-_Xlen_string@std@@YAXXZ.c)
 */

char **__fastcall std::wstring::_Reallocate_grow_by<_lambda_f68dc91b63048d8e897893337fb617c1_,unsigned __int64,unsigned __int64,unsigned short const *,unsigned __int64>(
        char **a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7)
{
  char *v7; // r14
  unsigned __int64 v9; // r12
  char *v10; // rdi
  unsigned __int64 v11; // rbx
  size_t size_of; // rax
  char *v13; // rax
  char *v14; // rbp
  size_t v15; // r8
  char *v16; // r15
  size_t v17; // r14
  char *v18; // rbx

  v7 = a1[2];
  if ( 0x7FFFFFFFFFFFFFFELL - (__int64)v7 < a2 )
    std::_Xlen_string();
  v9 = (unsigned __int64)a1[3];
  v10 = &v7[a2];
  v11 = std::wstring::_Calculate_growth((__int64)&v7[a2], v9, 0x7FFFFFFFFFFFFFFEuLL);
  size_of = std::_Get_size_of_n<2>(v11 + 1);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  a1[2] = v10;
  v14 = v13;
  a1[3] = (char *)v11;
  v15 = 2 * a7;
  v16 = &v13[2 * a7];
  v17 = 2LL * (_QWORD)&v7[-a5] + 2;
  if ( v9 < 8 )
  {
    memcpy_0(v13, &LocaleName, v15);
    memcpy_0(v16, (char *)a1 + 2 * a5, v17);
  }
  else
  {
    v18 = *a1;
    memcpy_0(v13, &LocaleName, v15);
    memcpy_0(v16, &v18[2 * a5], v17);
    std::_Deallocate<16,0>(v18, 2 * v9 + 2);
  }
  *a1 = v14;
  return a1;
}
