/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@?$vector@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@V?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VCXvmPowerReferenceManager@@@1@QEAV21@AEBV21@@Z @ 0x1801034E8
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x1800222B0 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180025468 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18005B3F8 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@VCXvmPowerReferenceManager@@@std@@V?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@2@@std@@YAPEAV?$shared_ptr@VCXvmPowerReferenceManager@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@0@@Z @ 0x180103858 (--$_Uninitialized_move@PEAV-$shared_ptr@VCXvmPowerReferenceManager@@@std@@V-$allocator@V-$shared.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@V?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@VCXvmPowerReferenceManager@@@2@_K1@Z @ 0x180104930 (-_Change_array@-$vector@V-$shared_ptr@VCXvmPowerReferenceManager@@@std@@V-$allocator@V-$shared_p.c)
 */

char *__fastcall std::vector<std::shared_ptr<CXvmPowerReferenceManager>>::_Emplace_reallocate<std::shared_ptr<CXvmPowerReferenceManager> const &>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  SIZE_T size_of; // rax
  char *v12; // rax
  _QWORD *v13; // rdi
  char *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // r8
  __int64 v18; // rcx
  char *result; // rax
  char *v20; // [rsp+20h] [rbp-48h]
  void *v21; // [rsp+20h] [rbp-48h]
  __int64 v22; // [rsp+70h] [rbp+8h]

  v5 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 4;
  v7 = 0xFFFFFFFFFFFFFFFLL;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = (a1[2] - *a1) >> 4;
  v10 = v9 >> 1;
  if ( v9 <= 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v7);
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = v12;
  v20 = v12;
  v14 = &v12[v5 & 0xFFFFFFFFFFFFFFF0uLL];
  try
  {
    *(_QWORD *)v14 = 0LL;
    *((_QWORD *)v14 + 1) = 0LL;
    v15 = a3[1];
    if ( v15 )
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
    *(_QWORD *)v14 = *a3;
    *((_QWORD *)v14 + 1) = a3[1];
    v22 = (__int64)v14;
    v16 = a1[1];
    v17 = v13;
    v18 = *a1;
    if ( a2 != v16 )
    {
      std::_Uninitialized_move<std::shared_ptr<CXvmPowerReferenceManager> *,std::allocator<std::shared_ptr<CXvmPowerReferenceManager>>>(
        v18,
        a2,
        v13);
      v22 = (__int64)v13;
      v17 = v14 + 16;
      v16 = a1[1];
      v18 = a2;
    }
    std::_Uninitialized_move<std::shared_ptr<CXvmPowerReferenceManager> *,std::allocator<std::shared_ptr<CXvmPowerReferenceManager>>>(
      v18,
      v16,
      v17);
    std::vector<std::shared_ptr<CXvmPowerReferenceManager>>::_Change_array(a1, v13, v8, v7, v20);
    result = v14;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<CXvmPowerReferenceManager>>>(v22, (__int64)(v14 + 16));
    std::_Deallocate<16,0>(v21, 16 * v7);
    throw;
  }
  return result;
}
