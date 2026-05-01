/*
 * XREFs of ??$_Emplace_reallocate@USecondaryViewInfo@JointResize@@@?$vector@USecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@QEAAPEAUSecondaryViewInfo@JointResize@@QEAU23@$$QEAU23@@Z @ 0x1805E06E0
 * Callers:
 *     ??$emplace_back@USecondaryViewInfo@JointResize@@@?$vector@USecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@QEAA?A_T$$QEAUSecondaryViewInfo@JointResize@@@Z @ 0x1805E0FE0 (--$emplace_back@USecondaryViewInfo@JointResize@@@-$vector@USecondaryViewInfo@JointResize@@V-$all.c)
 * Callees:
 *     ??$_Get_size_of_n@$0GA@@std@@YA_K_K@Z @ 0x1800A9E2C (--$_Get_size_of_n@$0GA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAUSecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAPEAUSecondaryViewInfo@JointResize@@QEAU12@0PEAU12@AEAV?$allocator@USecondaryViewInfo@JointResize@@@0@@Z @ 0x1805E08BC (--$_Uninitialized_move@PEAUSecondaryViewInfo@JointResize@@V-$allocator@USecondaryViewInfo@JointR.c)
 *     ?_Change_array@?$vector@USecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@AEAAXQEAUSecondaryViewInfo@JointResize@@_K1@Z @ 0x1805E59FC (-_Change_array@-$vector@USecondaryViewInfo@JointResize@@V-$allocator@USecondaryViewInfo@JointRes.c)
 */

char *__fastcall std::vector<JointResize::SecondaryViewInfo>::_Emplace_reallocate<JointResize::SecondaryViewInfo>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t size_of; // rax
  __int64 *v13; // rax
  __int64 *v14; // rdi
  char *v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 *v19; // r8
  __int64 v20; // rcx
  char *result; // rax
  char *v22; // [rsp+20h] [rbp-48h]
  void *v23; // [rsp+20h] [rbp-48h]
  __int64 *v24; // [rsp+70h] [rbp+8h]

  v6 = (a2 - *a1) / 96;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 5);
  v8 = 0x2AAAAAAAAAAAAAALL;
  if ( v7 == 0x2AAAAAAAAAAAAAALL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = 0xAAAAAAAAAAAAAAABuLL * ((a1[2] - *a1) >> 5);
  v11 = v10 >> 1;
  if ( v10 <= 0x2AAAAAAAAAAAAAALL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<96>(v8);
  v13 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v22 = (char *)v13;
  v15 = (char *)&v13[12 * v6];
  try
  {
    v16 = *a3;
    *a3 = 0LL;
    *(_QWORD *)v15 = v16;
    *((_DWORD *)v15 + 2) = *((_DWORD *)a3 + 2);
    *((_QWORD *)v15 + 2) = a3[2];
    *(_OWORD *)(v15 + 24) = *(_OWORD *)(a3 + 3);
    v15[40] = *((_BYTE *)a3 + 40);
    v17 = a3[6];
    a3[6] = 0LL;
    *((_QWORD *)v15 + 6) = v17;
    *((_QWORD *)v15 + 7) = a3[7];
    *((_DWORD *)v15 + 16) = *((_DWORD *)a3 + 16);
    *(_QWORD *)(v15 + 68) = *(__int64 *)((char *)a3 + 68);
    *((_DWORD *)v15 + 19) = *((_DWORD *)a3 + 19);
    *((_OWORD *)v15 + 5) = *((_OWORD *)a3 + 5);
    v24 = (__int64 *)v15;
    v18 = a1[1];
    v19 = v14;
    v20 = *a1;
    if ( a2 != v18 )
    {
      std::_Uninitialized_move<JointResize::SecondaryViewInfo *>(v20, a2, v14);
      v24 = v14;
      v19 = (__int64 *)(v15 + 96);
      v18 = a1[1];
      v20 = a2;
    }
    std::_Uninitialized_move<JointResize::SecondaryViewInfo *>(v20, v18, v19);
    std::vector<JointResize::SecondaryViewInfo>::_Change_array(a1, v14, v9, v8, v22);
    result = v15;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<JointResize::SecondaryViewInfo>>(v24, (__int64 *)v15 + 12);
    std::_Deallocate<16,0>(v23, 96 * v8);
    throw;
  }
  return result;
}
