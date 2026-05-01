/*
 * XREFs of ??$_Emplace_reallocate@USecondaryViewInfo@JointResize@@@?$vector@USecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@QEAAPEAUSecondaryViewInfo@JointResize@@QEAU23@$$QEAU23@@Z @ 0x18052787C
 * Callers:
 *     ??$emplace_back@USecondaryViewInfo@JointResize@@@?$vector@USecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@QEAAAEAUSecondaryViewInfo@JointResize@@$$QEAU23@@Z @ 0x180527AFC (--$emplace_back@USecondaryViewInfo@JointResize@@@-$vector@USecondaryViewInfo@JointResize@@V-$all.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0FI@@std@@YA_K_K@Z @ 0x180106F2C (--$_Get_size_of_n@$0FI@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUSecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAPEAUSecondaryViewInfo@JointResize@@QEAU12@0PEAU12@AEAV?$allocator@USecondaryViewInfo@JointResize@@@0@@Z @ 0x180527A48 (--$_Uninitialized_move@PEAUSecondaryViewInfo@JointResize@@V-$allocator@USecondaryViewInfo@JointR.c)
 *     ?_Change_array@?$vector@USecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@AEAAXQEAUSecondaryViewInfo@JointResize@@_K1@Z @ 0x18052B1F0 (-_Change_array@-$vector@USecondaryViewInfo@JointResize@@V-$allocator@USecondaryViewInfo@JointRes.c)
 */

char *__fastcall std::vector<JointResize::SecondaryViewInfo>::_Emplace_reallocate<JointResize::SecondaryViewInfo>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t size_of; // rax
  __int64 *v12; // rax
  __int64 *v13; // rdi
  char *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdx
  char *v17; // r8
  __int64 v18; // rcx
  char *result; // rax
  __int64 *v20; // [rsp+20h] [rbp-48h]
  char *v21; // [rsp+28h] [rbp-40h]
  void *v22; // [rsp+28h] [rbp-40h]
  __int64 *v23; // [rsp+70h] [rbp+8h]

  v5 = (a2 - *a1) / 88;
  v6 = 0x2E8BA2E8BA2E8BA3LL * ((a1[1] - *a1) >> 3);
  v7 = 0x2E8BA2E8BA2E8BALL;
  if ( v6 == 0x2E8BA2E8BA2E8BALL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = 0x2E8BA2E8BA2E8BA3LL * ((a1[2] - *a1) >> 3);
  v10 = v9 >> 1;
  if ( v9 <= 0x2E8BA2E8BA2E8BALL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<88>(v7);
  v12 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = v12;
  v21 = (char *)v12;
  v14 = (char *)&v12[11 * v5];
  try
  {
    v15 = *a3;
    *a3 = 0LL;
    *(_QWORD *)v14 = v15;
    *((_DWORD *)v14 + 2) = *((_DWORD *)a3 + 2);
    *((_QWORD *)v14 + 2) = a3[2];
    *(_OWORD *)(v14 + 24) = *(_OWORD *)(a3 + 3);
    v14[40] = *((_BYTE *)a3 + 40);
    *(_QWORD *)(v14 + 44) = *(__int64 *)((char *)a3 + 44);
    *((_DWORD *)v14 + 13) = *((_DWORD *)a3 + 13);
    *((_QWORD *)v14 + 7) = a3[7];
    *((_DWORD *)v14 + 16) = *((_DWORD *)a3 + 16);
    *(_OWORD *)(v14 + 68) = *(_OWORD *)((char *)a3 + 68);
    v23 = (__int64 *)v14;
    v16 = a1[1];
    v17 = (char *)v12;
    v18 = *a1;
    if ( a2 != v16 )
    {
      std::_Uninitialized_move<JointResize::SecondaryViewInfo *>(v18, a2, v12);
      v23 = v13;
      v17 = v14 + 88;
      v16 = a1[1];
      v18 = a2;
    }
    std::_Uninitialized_move<JointResize::SecondaryViewInfo *>(v18, v16, v17);
    std::vector<JointResize::SecondaryViewInfo>::_Change_array(a1, v13, v8, v7, v14 + 88, v21);
    result = v14;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<JointResize::SecondaryViewInfo>>(v23, v20);
    std::_Deallocate<16,0>(v22, 88 * v7);
    throw;
  }
  return result;
}
