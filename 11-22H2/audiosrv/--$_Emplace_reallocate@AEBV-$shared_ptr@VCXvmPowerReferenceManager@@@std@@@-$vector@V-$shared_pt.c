/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@?$vector@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@V?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VCXvmPowerReferenceManager@@@1@QEAV21@AEBV21@@Z @ 0x1801193F8
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x18003A160 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180027A18 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800282D8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@VCXvmPowerReferenceManager@@@std@@V?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@2@@std@@YAPEAV?$shared_ptr@VCXvmPowerReferenceManager@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@0@@Z @ 0x18010D880 (--$_Uninitialized_move@PEAV-$shared_ptr@VCXvmPowerReferenceManager@@@std@@V-$allocator@V-$shared.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@V?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@VCXvmPowerReferenceManager@@@2@_K1@Z @ 0x18010E470 (-_Change_array@-$vector@V-$shared_ptr@VCXvmPowerReferenceManager@@@std@@V-$allocator@V-$shared_p.c)
 */

_QWORD *__fastcall std::vector<std::shared_ptr<CXvmPowerReferenceManager>>::_Emplace_reallocate<std::shared_ptr<CXvmPowerReferenceManager> const &>(
        _QWORD *a1,
        char *a2,
        _QWORD *a3)
{
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rdi
  _QWORD *v15; // r14
  __int64 v16; // rax
  char *v17; // rdx
  _QWORD *v18; // r8
  char *v19; // rcx
  _QWORD *result; // rax
  void *v21; // [rsp+20h] [rbp-48h]
  __int64 v22; // [rsp+70h] [rbp+8h]

  v6 = (unsigned __int64)&a2[-*a1];
  v7 = (__int64)(a1[1] - *a1) >> 4;
  v8 = 0xFFFFFFFFFFFFFFFLL;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = (__int64)(a1[2] - *a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v8);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v21 = v13;
  v15 = (_QWORD *)((char *)v13 + (v6 & 0xFFFFFFFFFFFFFFF0uLL));
  try
  {
    *v15 = 0LL;
    v15[1] = 0LL;
    v16 = a3[1];
    if ( v16 )
      _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
    *v15 = *a3;
    v15[1] = a3[1];
    v22 = (__int64)v15;
    v17 = (char *)a1[1];
    v18 = v14;
    v19 = (char *)*a1;
    if ( a2 != v17 )
    {
      std::_Uninitialized_move<std::shared_ptr<CXvmPowerReferenceManager> *,std::allocator<std::shared_ptr<CXvmPowerReferenceManager>>>(
        v19,
        a2,
        v14);
      v22 = (__int64)v14;
      v18 = v15 + 2;
      v17 = (char *)a1[1];
      v19 = a2;
    }
    std::_Uninitialized_move<std::shared_ptr<CXvmPowerReferenceManager> *,std::allocator<std::shared_ptr<CXvmPowerReferenceManager>>>(
      v19,
      v17,
      v18);
    std::vector<std::shared_ptr<CXvmPowerReferenceManager>>::_Change_array((__int64)a1, (__int64)v14, v9, v8);
    result = v15;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<EffectPackConfiguration const>>>(v22, (__int64)(v15 + 2));
    std::_Deallocate<16,0>(v21, 16 * v8);
    throw;
  }
  return result;
}
