/*
 * XREFs of ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@U_String_constructor_concat_tag@1@AEAV01@1@Z @ 0x18001CEE0
 * Callers:
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@0@Z @ 0x18001C578 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C578.c)
 * Callees:
 *     memcpy_0 @ 0x18000CA61 (memcpy_0.c)
 *     memmove_0 @ 0x18000CA85 (memmove_0.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@CA_K_K00@Z @ 0x18001187C (-_Calculate_growth@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@CA_K_K00@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x180011B60 (-_Xlen_string@std@@YAXXZ.c)
 */

__int64 *__fastcall std::string::string(__int64 *a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v5; // rdi
  _QWORD *v6; // rsi
  size_t v7; // rbp
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r13
  __int64 *v11; // rax
  size_t v12; // r8
  const void *v13; // rdx
  char *v14; // rcx
  char *v15; // rbx
  unsigned __int64 v16; // rbx
  char *v17; // rax
  char *v18; // r12

  *a1 = 0LL;
  v5 = a4;
  a1[2] = 0LL;
  v6 = a3;
  a1[3] = 0LL;
  v7 = a3[2];
  v8 = a4[2];
  v9 = a4[3];
  v10 = v8 + v7;
  if ( v8 <= a3[3] - v7 && v9 <= a3[3] )
  {
    v11 = a1;
    *(_OWORD *)a1 = *(_OWORD *)a3;
    *((_OWORD *)a1 + 1) = *((_OWORD *)a3 + 1);
    a3[2] = 0LL;
    a3[3] = 15LL;
    *(_BYTE *)a3 = 0;
    if ( (unsigned __int64)a1[3] >= 0x10 )
      v11 = (__int64 *)*a1;
    if ( a4[3] >= 0x10uLL )
      v5 = (_QWORD *)*a4;
    v12 = v8 + 1;
    v13 = v5;
    v14 = (char *)v11 + v7;
LABEL_8:
    memcpy_0(v14, v13, v12);
    a1[2] = v10;
    return a1;
  }
  if ( v7 <= v9 - v8 )
  {
    *(_OWORD *)a1 = *(_OWORD *)a4;
    *((_OWORD *)a1 + 1) = *((_OWORD *)a4 + 1);
    a4[2] = 0LL;
    *(_BYTE *)a4 = 0;
    a4[3] = 15LL;
    v15 = (char *)*a1;
    memmove_0((void *)(*a1 + v7), (const void *)*a1, v8 + 1);
    if ( v6[3] >= 0x10uLL )
      v6 = (_QWORD *)*v6;
    v12 = v7;
    v13 = v6;
    v14 = v15;
    goto LABEL_8;
  }
  if ( 0x7FFFFFFFFFFFFFFFLL - v7 < v8 )
    std::_Xlen_string();
  v16 = std::string::_Calculate_growth(v8 + v7, 0xFuLL, 0x7FFFFFFFFFFFFFFFuLL);
  v17 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v16 + 1);
  *a1 = (__int64)v17;
  v18 = v17;
  a1[2] = v10;
  a1[3] = v16;
  if ( v6[3] >= 0x10uLL )
    v6 = (_QWORD *)*v6;
  memcpy_0(v17, v6, v7);
  if ( v5[3] >= 0x10uLL )
    v5 = (_QWORD *)*v5;
  memcpy_0(&v18[v7], v5, v8 + 1);
  return a1;
}
