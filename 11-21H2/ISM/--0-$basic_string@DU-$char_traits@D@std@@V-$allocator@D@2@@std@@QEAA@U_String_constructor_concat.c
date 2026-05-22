/*
 * XREFs of ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@U_String_constructor_concat_tag@1@AEAV01@1@Z @ 0x1800ACE50
 * Callers:
 *     ?GetVector3AsString@ISMTracing@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAUVector3@Numerics@Foundation@Windows@@@Z @ 0x1800AD2A0 (-GetVector3AsString@ISMTracing@@SA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18004E993 (memcpy_0.c)
 *     memmove_0 @ 0x18004E99F (memmove_0.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x180082D28 (-_Xlen_string@std@@YAXXZ.c)
 *     ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@CA_K_K00@Z @ 0x1800AF398 (-_Calculate_growth@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@CA_K_K00@Z.c)
 */

// Hidden C++ exception states: #wind=1
char **__fastcall std::string::string(char **a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rsi
  size_t v7; // rbp
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r13
  __int64 *v11; // rax
  char *v12; // rcx
  size_t v13; // r8
  const void *v14; // rdx
  char *v15; // rbx
  __int64 v16; // rbx
  char *v17; // rax
  char *v18; // r12

  v4 = a4;
  v5 = a3;
  a1[2] = 0LL;
  a1[3] = 0LL;
  v7 = a3[2];
  v8 = a4[2];
  v9 = a4[3];
  v10 = v8 + v7;
  if ( v8 <= a3[3] - v7 && v9 <= a3[3] )
  {
    *(_OWORD *)a1 = *(_OWORD *)a3;
    *((_OWORD *)a1 + 1) = *((_OWORD *)a3 + 1);
    a3[2] = 0LL;
    a3[3] = 15LL;
    *(_BYTE *)a3 = 0;
    v11 = (__int64 *)a1;
    if ( (unsigned __int64)a1[3] >= 0x10 )
      v11 = (__int64 *)*a1;
    if ( a4[3] >= 0x10uLL )
      v4 = (_QWORD *)*a4;
    v12 = (char *)v11 + v7;
    v13 = v8 + 1;
    v14 = v4;
LABEL_8:
    memcpy_0(v12, v14, v13);
    a1[2] = (char *)v10;
    return a1;
  }
  if ( v7 <= v9 - v8 )
  {
    *(_OWORD *)a1 = *(_OWORD *)a4;
    *((_OWORD *)a1 + 1) = *((_OWORD *)a4 + 1);
    a4[2] = 0LL;
    a4[3] = 15LL;
    *(_BYTE *)a4 = 0;
    v15 = *a1;
    memmove_0(&(*a1)[v7], *a1, v8 + 1);
    if ( v5[3] >= 0x10uLL )
      v5 = (_QWORD *)*v5;
    v13 = v7;
    v14 = v5;
    v12 = v15;
    goto LABEL_8;
  }
  if ( 0x7FFFFFFFFFFFFFFFLL - v7 < v8 )
    std::_Xlen_string();
  v16 = std::string::_Calculate_growth(v8 + v7, 15LL);
  v17 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v16 + 1);
  v18 = v17;
  *a1 = v17;
  a1[2] = (char *)v10;
  a1[3] = (char *)v16;
  if ( v5[3] >= 0x10uLL )
    v5 = (_QWORD *)*v5;
  memcpy_0(v17, v5, v7);
  if ( v4[3] >= 0x10uLL )
    v4 = (_QWORD *)*v4;
  memcpy_0(&v18[v7], v4, v8 + 1);
  return a1;
}
