/*
 * XREFs of ??0?$vector@PEAVCResource@@V?$allocator@PEAVCResource@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800DE3F0
 * Callers:
 *     ?OnResourceDestroyed@CWeakResourceReference@@AEAAXXZ @ 0x1800DE334 (-OnResourceDestroyed@CWeakResourceReference@@AEAAXXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800B7030 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 */

_QWORD *__fastcall std::vector<CResource *>::vector<CResource *>(_QWORD *a1, __int64 a2)
{
  const void *v3; // r14
  __int64 v4; // rbp
  signed __int64 v6; // rbp
  SIZE_T size_of; // rax
  char *v8; // rax
  char *v9; // rbx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v3 = *(const void **)a2;
  v4 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a2 != v4 )
  {
    v6 = v4 - (_QWORD)v3;
    size_of = std::_Get_size_of_n<8>(v6 >> 3);
    v8 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *a1 = v8;
    a1[1] = v8;
    v9 = v8;
    a1[2] = &v8[8 * (v6 >> 3)];
    memmove_0(v8, v3, v6);
    a1[1] = &v9[8 * (v6 >> 3)];
  }
  return a1;
}
