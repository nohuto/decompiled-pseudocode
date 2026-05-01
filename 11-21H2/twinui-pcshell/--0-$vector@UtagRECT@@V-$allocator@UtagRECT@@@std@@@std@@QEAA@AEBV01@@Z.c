/*
 * XREFs of ??0?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18019B7B0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6e59436657fdc730ce46c13d2be9f9a3___::CTaskWrapper__lambda_6e59436657fdc730ce46c13d2be9f9a3_____lambda_6e59436657fdc730ce46c13d2be9f9a3___ @ 0x180198A20 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6e59436657fdc730ce46c13d2be9f9a3___--CTaskW.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_731699364cbddcd54af95a8546718700_____lambda_731699364cbddcd54af95a8546718700___ @ 0x180199310 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_731699364cbdd.c)
 *     ?SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@AEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1801A10D4 (-SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@A.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18012166C (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??1?$_Tidy_guard@V?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@std@@QEAA@XZ @ 0x18019BBD0 (--1-$_Tidy_guard@V-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@std@@QEAA@XZ.c)
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 */

_QWORD *__fastcall std::vector<tagRECT>::vector<tagRECT>(_QWORD *a1, __int64 a2)
{
  const void *v3; // r14
  __int64 v4; // rbp
  signed __int64 v5; // rbp
  size_t size_of; // rax
  char *v7; // rax
  char *v8; // rbx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v3 = *(const void **)a2;
  v4 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a2 != v4 )
  {
    v5 = v4 - (_QWORD)v3;
    size_of = std::_Get_size_of_n<16>(v5 >> 4);
    v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *a1 = v7;
    a1[1] = v7;
    v8 = v7;
    a1[2] = &v7[16 * (v5 >> 4)];
    memmove_0(v7, v3, v5);
    v10 = 0LL;
    a1[1] = &v8[16 * (v5 >> 4)];
    std::_Tidy_guard<std::vector<tagRECT>>::~_Tidy_guard<std::vector<tagRECT>>(&v10);
  }
  return a1;
}
