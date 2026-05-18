/*
 * XREFs of ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@U_String_constructor_concat_tag@1@AEAV01@1@Z @ 0x180030AF4
 * Callers:
 *     ??$?H_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@$$QEAV10@0@Z @ 0x18002DA5C (--$-H_WU-$char_traits@_W@std@@V-$allocator@_W@1@@std@@YA-AV-$basic_string@_WU-$char_traits@_W@st.c)
 * Callees:
 *     memcpy_0 @ 0x18000CA61 (memcpy_0.c)
 *     memmove_0 @ 0x18000CA85 (memmove_0.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x180011B60 (-_Xlen_string@std@@YAXXZ.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x18001217C (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@CA_K_K00@Z @ 0x18001E5D0 (-_Calculate_growth@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@CA_K_K00@Z.c)
 */

__int64 *__fastcall std::wstring::wstring(__int64 *a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v5; // rdi
  _QWORD *v6; // rsi
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  __int64 v10; // r13
  __int64 *v11; // rax
  size_t v12; // r8
  const void *v13; // rdx
  char *v14; // rcx
  __int64 v15; // r12
  char *v16; // rbx
  unsigned __int64 v17; // rbx
  unsigned __int64 size_of; // rax
  char *v19; // rax
  char *v20; // rbp
  size_t v21; // r12

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
    a3[3] = 7LL;
    *(_WORD *)a3 = 0;
    if ( (unsigned __int64)a1[3] >= 8 )
      v11 = (__int64 *)*a1;
    if ( a4[3] >= 8uLL )
      v5 = (_QWORD *)*a4;
    v12 = 2 * v8 + 2;
    v13 = v5;
    v14 = (char *)v11 + 2 * v7;
LABEL_8:
    memcpy_0(v14, v13, v12);
    a1[2] = v10;
    return a1;
  }
  if ( v7 <= v9 - v8 )
  {
    v15 = 2 * v7;
    *(_OWORD *)a1 = *(_OWORD *)a4;
    *((_OWORD *)a1 + 1) = *((_OWORD *)a4 + 1);
    a4[2] = 0LL;
    *(_WORD *)a4 = 0;
    a4[3] = 7LL;
    v16 = (char *)*a1;
    memmove_0((void *)(v15 + *a1), (const void *)*a1, 2 * v8 + 2);
    if ( v6[3] >= 8uLL )
      v6 = (_QWORD *)*v6;
    v12 = v15;
    v13 = v6;
    v14 = v16;
    goto LABEL_8;
  }
  if ( 0x7FFFFFFFFFFFFFFELL - v7 < v8 )
    std::_Xlen_string();
  v17 = std::wstring::_Calculate_growth(v8 + v7, 7uLL, 0x7FFFFFFFFFFFFFFEuLL);
  size_of = std::_Get_size_of_n<2>(v17 + 1);
  v19 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *a1 = (__int64)v19;
  v20 = v19;
  a1[2] = v10;
  a1[3] = v17;
  if ( v6[3] >= 8uLL )
    v6 = (_QWORD *)*v6;
  v21 = 2 * v7;
  memcpy_0(v19, v6, v21);
  if ( v5[3] >= 8uLL )
    v5 = (_QWORD *)*v5;
  memcpy_0(&v20[v21], v5, 2 * v8 + 2);
  return a1;
}
