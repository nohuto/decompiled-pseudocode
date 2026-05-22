/*
 * XREFs of ??$_Emplace_reallocate@AEB_K@?$vector@_KV?$allocator@_K@std@@@std@@QEAAPEA_KQEA_KAEB_K@Z @ 0x180013ABC
 * Callers:
 *     ?UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x180014E30 (-UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x18004E99F (memmove_0.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18007FD24 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800804A0 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180080E10 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

char *__fastcall std::vector<unsigned __int64>::_Emplace_reallocate<unsigned __int64 const &>(
        const void **a1,
        _BYTE *a2,
        _QWORD *a3)
{
  __int64 v5; // r15
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  __int64 v11; // r14
  char *v12; // rbx
  char *v13; // rsi
  _BYTE *v14; // r8
  _BYTE *v15; // rdx
  void *v16; // rcx
  size_t v17; // r8
  _BYTE *v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v21; // [rsp+60h] [rbp+8h] BYREF
  void *v22; // [rsp+68h] [rbp+10h] BYREF
  _QWORD *v23; // [rsp+70h] [rbp+18h]

  v23 = a3;
  v5 = (a2 - (_BYTE *)*a1) >> 3;
  v6 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v7 = v6 + 1;
  v8 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3;
  v9 = v8 >> 1;
  if ( v8 > 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) )
  {
    v21 = 0x1FFFFFFFFFFFFFFFLL;
    v11 = -8LL;
LABEL_20:
    v12 = (char *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v11);
    v22 = v12;
    goto LABEL_10;
  }
  v10 = v6 + 1;
  if ( v9 + v8 >= v7 )
    v10 = v9 + v8;
  if ( v10 > 0x1FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v11 = 8 * v10;
  v21 = v10;
  if ( 8 * v10 >= 0x1000 )
    goto LABEL_20;
  if ( v11 )
  {
    v12 = (char *)operator new(8 * v10);
    v22 = v12;
  }
  else
  {
    v12 = 0LL;
    v22 = 0LL;
  }
  v21 = v10;
LABEL_10:
  v13 = &v12[8 * v5];
  *(_QWORD *)v13 = *v23;
  v14 = a1[1];
  v15 = *a1;
  v16 = v12;
  if ( a2 == v14 )
  {
    v17 = v14 - v15;
  }
  else
  {
    memmove_0(v12, v15, a2 - (_BYTE *)*a1);
    v16 = v13 + 8;
    v17 = (_BYTE *)a1[1] - a2;
    v15 = a2;
  }
  memmove_0(v16, v15, v17);
  v18 = *a1;
  if ( *a1 )
  {
    v19 = ((_BYTE *)a1[2] - v18) & 0xFFFFFFFFFFFFFFF8uLL;
    v21 = v19;
    v22 = v18;
    if ( v19 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v22, &v21);
      v19 = v21;
      v18 = v22;
    }
    operator delete(v18, v19);
  }
  *a1 = v12;
  a1[1] = &v12[8 * v7];
  a1[2] = &v12[v11];
  return &v12[8 * v5];
}
