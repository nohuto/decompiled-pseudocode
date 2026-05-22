/*
 * XREFs of ??$_Emplace_reallocate@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAPEAUPointData3D@@QEAU2@AEBU2@@Z @ 0x1800C548C
 * Callers:
 *     ??$emplace_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAA?A_TAEBUPointData3D@@@Z @ 0x1800C56D8 (--$emplace_back@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001EAA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800793AC (memmove_0.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800AA78C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ?_Change_array@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@AEAAXQEAUPointData3D@@_K1@Z @ 0x1800C9C3C (-_Change_array@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@AEAAXQEAUPointData3.c)
 */

char *__fastcall std::vector<PointData3D>::_Emplace_reallocate<PointData3D const &>(
        const void **a1,
        _BYTE *a2,
        _OWORD *a3)
{
  __int64 v6; // r13
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  char *v12; // rax
  char *v13; // rdi
  char *v14; // r13
  _OWORD *v15; // r14
  _BYTE *v16; // r8
  _BYTE *v17; // rdx
  void *v18; // rcx
  size_t v19; // r8
  char *result; // rax
  __int64 v21; // [rsp+50h] [rbp+8h]
  void *v22; // [rsp+58h] [rbp+10h]

  v6 = (a2 - (_BYTE *)*a1) / 184;
  v7 = 0xD37A6F4DE9BD37A7uLL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3);
  if ( v7 == 0x1642C8590B21642LL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = 0xD37A6F4DE9BD37A7uLL * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3);
  v10 = v9 >> 1;
  if ( v9 <= 0x1642C8590B21642LL - (v9 >> 1) )
  {
    v11 = v7 + 1;
    if ( v10 + v9 >= v8 )
      v11 = v10 + v9;
    v21 = v11;
    if ( v11 > 0x1642C8590B21642LL )
      std::_Throw_bad_array_new_length();
  }
  else
  {
    v11 = 0x1642C8590B21642LL;
    v21 = 0x1642C8590B21642LL;
  }
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(184 * v11);
  v13 = v12;
  v22 = v12;
  try
  {
    v14 = &v12[184 * v6];
    *(_OWORD *)v14 = *a3;
    *((_OWORD *)v14 + 1) = a3[1];
    *((_OWORD *)v14 + 2) = a3[2];
    *((_OWORD *)v14 + 3) = a3[3];
    *((_OWORD *)v14 + 4) = a3[4];
    *((_OWORD *)v14 + 5) = a3[5];
    *((_OWORD *)v14 + 6) = a3[6];
    *((_OWORD *)v14 + 7) = a3[7];
    v15 = a3 + 8;
    *((_OWORD *)v14 + 8) = *v15;
    *((_OWORD *)v14 + 9) = v15[1];
    *((_OWORD *)v14 + 10) = v15[2];
    *((_QWORD *)v14 + 22) = *((_QWORD *)v15 + 6);
    v16 = a1[1];
    v17 = *a1;
    v18 = v12;
    if ( a2 == v16 )
    {
      v19 = v16 - v17;
    }
    else
    {
      memmove_0(v12, v17, a2 - (_BYTE *)*a1);
      v18 = v14 + 184;
      v19 = (_BYTE *)a1[1] - a2;
      v17 = a2;
    }
    memmove_0(v18, v17, v19);
    std::vector<PointData3D>::_Change_array(a1, v13, v8, v11);
    result = v14;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v22, 184 * v21);
    throw;
  }
  return result;
}
