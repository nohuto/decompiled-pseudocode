/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_3fdb14453883e86a37ebade6a7a0ebb0_@@G@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_3fdb14453883e86a37ebade6a7a0ebb0_@@G@Z @ 0x180091B14
 * Callers:
 *     ?push_back@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXG@Z @ 0x180090DA0 (-push_back@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXG@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180093044 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CA_K_K00@Z @ 0x1800C3DC4 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CA_K_K00@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1801C934B (memcpy_0.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x180392130 (-_Xlen_string@std@@YAXXZ.c)
 */

const void **__fastcall std::wstring::_Reallocate_grow_by<_lambda_3fdb14453883e86a37ebade6a7a0ebb0_,unsigned short>(
        const void **Src,
        __int64 a2,
        __int64 a3,
        __int16 a4)
{
  const void *v4; // r15
  unsigned __int64 v7; // r12
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 size_of; // rax
  char *v13; // rax
  __int64 v14; // rdi
  size_t v15; // r8
  char *v16; // rbp
  const void *v17; // rbx

  v4 = Src[2];
  if ( v4 == (const void *)0x7FFFFFFFFFFFFFFELL )
    std::_Xlen_string();
  v7 = (unsigned __int64)Src[3];
  v8 = std::wstring::_Calculate_growth((char *)v4 + 1, v7);
  size_of = std::_Get_size_of_n<2>(v8 + 1, v9, v10, v11);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  Src[2] = (char *)v4 + 1;
  v14 = 2LL * (_QWORD)v4;
  Src[3] = (const void *)v8;
  v15 = 2LL * (_QWORD)v4;
  v16 = v13;
  if ( v7 < 8 )
  {
    memcpy_0(v13, Src, v15);
    *(_WORD *)&v16[v14] = a4;
    *(_WORD *)&v16[v14 + 2] = 0;
  }
  else
  {
    v17 = *Src;
    memcpy_0(v13, *Src, v15);
    *(_WORD *)&v16[v14] = a4;
    *(_WORD *)&v16[v14 + 2] = 0;
    std::_Deallocate<16,0>(v17, 2 * v7 + 2);
  }
  *Src = v16;
  return Src;
}
