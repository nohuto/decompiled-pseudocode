/*
 * XREFs of ??$_Emplace_reallocate@AEB_K@?$vector@_KV?$allocator@_K@std@@@std@@QEAAPEA_KQEA_KAEB_K@Z @ 0x18001E8E8
 * Callers:
 *     ?UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x1800209E0 (-UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800793AC (memmove_0.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800A951C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800A9FB8 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800AA78C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

char *__fastcall std::vector<unsigned __int64>::_Emplace_reallocate<unsigned __int64 const &>(
        const void **a1,
        _BYTE *a2,
        _QWORD *a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  size_t v11; // rcx
  __int64 v12; // r15
  char *v13; // rbx
  char *v14; // rsi
  _BYTE *v15; // r8
  _BYTE *v16; // rdx
  void *v17; // rcx
  size_t v18; // r8
  _BYTE *v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v22; // [rsp+60h] [rbp+8h] BYREF
  void *v23; // [rsp+68h] [rbp+10h] BYREF
  _QWORD *v24; // [rsp+70h] [rbp+18h]

  v24 = a3;
  v5 = (a2 - (_BYTE *)*a1) >> 3;
  v6 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v7 = v6 + 1;
  v8 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3;
  v9 = v8 >> 1;
  if ( v8 > 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) )
  {
    v22 = 0x1FFFFFFFFFFFFFFFLL;
    v12 = -8LL;
LABEL_20:
    v13 = (char *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>();
    v23 = v13;
    goto LABEL_10;
  }
  v10 = v6 + 1;
  if ( v9 + v8 >= v7 )
    v10 = v9 + v8;
  if ( v10 > 0x1FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v11 = 8 * v10;
  v12 = 8 * v10;
  v22 = v10;
  if ( 8 * v10 >= 0x1000 )
    goto LABEL_20;
  if ( v11 )
  {
    v13 = (char *)operator new(v11);
    v23 = v13;
  }
  else
  {
    v13 = 0LL;
    v23 = 0LL;
  }
  v22 = v10;
LABEL_10:
  v14 = &v13[8 * v5];
  *(_QWORD *)v14 = *v24;
  v15 = a1[1];
  v16 = *a1;
  v17 = v13;
  if ( a2 == v15 )
  {
    v18 = v15 - v16;
  }
  else
  {
    memmove_0(v13, v16, a2 - (_BYTE *)*a1);
    v17 = v14 + 8;
    v18 = (_BYTE *)a1[1] - a2;
    v16 = a2;
  }
  memmove_0(v17, v16, v18);
  v19 = *a1;
  if ( *a1 )
  {
    v20 = ((_BYTE *)a1[2] - v19) & 0xFFFFFFFFFFFFFFF8uLL;
    v22 = v20;
    v23 = v19;
    if ( v20 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v23, &v22);
      v20 = v22;
      v19 = v23;
    }
    operator delete(v19, v20);
  }
  *a1 = v13;
  a1[1] = &v13[8 * v7];
  a1[2] = &v13[v12];
  return &v13[8 * v5];
}
