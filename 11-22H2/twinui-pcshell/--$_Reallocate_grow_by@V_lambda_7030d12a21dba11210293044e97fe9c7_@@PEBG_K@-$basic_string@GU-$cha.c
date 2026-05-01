/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_7030d12a21dba11210293044e97fe9c7_@@PEBG_K@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_7030d12a21dba11210293044e97fe9c7_@@PEBG_K@Z @ 0x180091A20
 * Callers:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180090D28 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180093044 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CA_K_K00@Z @ 0x1800C3DC4 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CA_K_K00@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1801C934B (memcpy_0.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x180392130 (-_Xlen_string@std@@YAXXZ.c)
 */

const void **__fastcall std::wstring::_Reallocate_grow_by<_lambda_7030d12a21dba11210293044e97fe9c7_,unsigned short const *,unsigned __int64>(
        const void **Src,
        unsigned __int64 a2,
        __int64 a3,
        const void *a4,
        __int64 a5)
{
  const void *v5; // r15
  unsigned __int64 v8; // r13
  char *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 size_of; // rax
  char *v15; // rax
  size_t v16; // r8
  __int64 v17; // r15
  char *v18; // r14
  char *v19; // r12
  size_t v20; // rdi
  const void *v21; // rbx

  v5 = Src[2];
  if ( 0x7FFFFFFFFFFFFFFELL - (__int64)v5 < a2 )
    std::_Xlen_string();
  v8 = (unsigned __int64)Src[3];
  v9 = (char *)v5 + a2;
  v10 = std::wstring::_Calculate_growth((char *)v5 + a2, v8);
  size_of = std::_Get_size_of_n<2>(v10 + 1, v11, v12, v13);
  v15 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v16 = 2LL * (_QWORD)v5;
  v17 = (__int64)v5 + a5;
  Src[2] = v9;
  Src[3] = (const void *)v10;
  v18 = v15;
  v19 = &v15[v16];
  v20 = 2 * a5;
  if ( v8 < 8 )
  {
    memcpy_0(v15, Src, v16);
    memcpy_0(v19, a4, v20);
    *(_WORD *)&v18[2 * v17] = 0;
  }
  else
  {
    v21 = *Src;
    memcpy_0(v15, *Src, v16);
    memcpy_0(v19, a4, v20);
    *(_WORD *)&v18[2 * v17] = 0;
    std::_Deallocate<16,0>(v21, 2 * v8 + 2);
  }
  *Src = v18;
  return Src;
}
