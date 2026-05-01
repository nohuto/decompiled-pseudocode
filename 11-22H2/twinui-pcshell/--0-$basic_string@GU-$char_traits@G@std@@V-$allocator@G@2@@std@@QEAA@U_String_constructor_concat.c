/*
 * XREFs of ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@U_String_constructor_concat_tag@1@AEAV01@1@Z @ 0x180091BF8
 * Callers:
 *     ??0RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180090368 (--0RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@$$QEAV10@0@Z @ 0x1806EDFF4 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_1806EDFF4.c)
 * Callees:
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180093044 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CA_K_K00@Z @ 0x1800C3DC4 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CA_K_K00@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1801C934B (memcpy_0.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x180392130 (-_Xlen_string@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
char **__fastcall std::wstring::wstring(char **a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v4; // rsi
  _QWORD *v5; // rdi
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  char *v10; // r13
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 size_of; // rax
  char *v16; // rax
  char *v17; // rbp
  size_t v18; // r12
  __int64 *v20; // rax
  char *v21; // rcx
  size_t v22; // r8
  const void *v23; // rdx
  char *v24; // rbx
  __int64 v25; // r12

  v4 = a4;
  v5 = a3;
  *a1 = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  v7 = a3[2];
  v8 = a4[2];
  v9 = a4[3];
  v10 = (char *)(v8 + v7);
  if ( v8 <= a3[3] - v7 && v9 <= a3[3] )
  {
    *(_OWORD *)a1 = *(_OWORD *)a3;
    *((_OWORD *)a1 + 1) = *((_OWORD *)a3 + 1);
    a3[2] = 0LL;
    a3[3] = 7LL;
    *(_WORD *)a3 = 0;
    v20 = (__int64 *)a1;
    if ( (unsigned __int64)a1[3] >= 8 )
      v20 = (__int64 *)*a1;
    if ( a4[3] >= 8uLL )
      v4 = (_QWORD *)*a4;
    v21 = (char *)v20 + 2 * v7;
    v22 = 2 * v8 + 2;
    v23 = v4;
LABEL_18:
    memcpy_0(v21, v23, v22);
    a1[2] = v10;
    return a1;
  }
  if ( v7 <= v9 - v8 )
  {
    *(_OWORD *)a1 = *(_OWORD *)a4;
    *((_OWORD *)a1 + 1) = *((_OWORD *)a4 + 1);
    a4[2] = 0LL;
    a4[3] = 7LL;
    *(_WORD *)a4 = 0;
    v24 = *a1;
    v25 = 2 * v7;
    memmove_0(&(*a1)[v25], *a1, 2 * v8 + 2);
    if ( v5[3] >= 8uLL )
      v5 = (_QWORD *)*v5;
    v22 = v25;
    v23 = v5;
    v21 = v24;
    goto LABEL_18;
  }
  if ( 0x7FFFFFFFFFFFFFFELL - v7 < v8 )
    std::_Xlen_string();
  v11 = std::wstring::_Calculate_growth(v8 + v7, 7LL);
  size_of = std::_Get_size_of_n<2>(v11 + 1, v12, v13, v14);
  v16 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v17 = v16;
  *a1 = v16;
  a1[2] = v10;
  a1[3] = (char *)v11;
  if ( v5[3] >= 8uLL )
    v5 = (_QWORD *)*v5;
  v18 = 2 * v7;
  memcpy_0(v16, v5, v18);
  if ( v4[3] >= 8uLL )
    v4 = (_QWORD *)*v4;
  memcpy_0(&v17[v18], v4, 2 * v8 + 2);
  return a1;
}
