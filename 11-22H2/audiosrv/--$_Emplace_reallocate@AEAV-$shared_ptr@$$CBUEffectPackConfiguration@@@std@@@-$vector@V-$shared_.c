/*
 * XREFs of ??$_Emplace_reallocate@AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@?$vector@V?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@V?$allocator@V?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@1@QEAV21@AEAV21@@Z @ 0x18010D730
 * Callers:
 *     ?AddEffectPackConfigurationToList@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z @ 0x18010DC70 (-AddEffectPackConfigurationToList@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z.c)
 * Callees:
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180025520 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180027A18 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800282D8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@VCXvmPowerReferenceManager@@@std@@V?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@2@@std@@YAPEAV?$shared_ptr@VCXvmPowerReferenceManager@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@0@@Z @ 0x18010D880 (--$_Uninitialized_move@PEAV-$shared_ptr@VCXvmPowerReferenceManager@@@std@@V-$allocator@V-$shared.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@V?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@VCXvmPowerReferenceManager@@@2@_K1@Z @ 0x18010E470 (-_Change_array@-$vector@V-$shared_ptr@VCXvmPowerReferenceManager@@@std@@V-$allocator@V-$shared_p.c)
 */

char *__fastcall std::vector<std::shared_ptr<EffectPackConfiguration const>>::_Emplace_reallocate<std::shared_ptr<EffectPackConfiguration const> &>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  SIZE_T size_of; // rax
  char *v12; // rax
  _QWORD *v13; // rdi
  char *v14; // r14
  __int64 v15; // rdx
  _QWORD *v16; // r8
  __int64 v17; // rcx
  char *result; // rax
  char *v19; // [rsp+20h] [rbp-48h]
  void *v20; // [rsp+20h] [rbp-48h]
  __int64 v21; // [rsp+70h] [rbp+8h]

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
  v19 = v12;
  v14 = &v12[v5 & 0xFFFFFFFFFFFFFFF0uLL];
  try
  {
    std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(v14, a3);
    v21 = (__int64)v14;
    v15 = a1[1];
    v16 = v13;
    v17 = *a1;
    if ( a2 != v15 )
    {
      std::_Uninitialized_move<std::shared_ptr<CXvmPowerReferenceManager> *,std::allocator<std::shared_ptr<CXvmPowerReferenceManager>>>(
        v17,
        a2,
        v13);
      v21 = (__int64)v13;
      v16 = v14 + 16;
      v15 = a1[1];
      v17 = a2;
    }
    std::_Uninitialized_move<std::shared_ptr<CXvmPowerReferenceManager> *,std::allocator<std::shared_ptr<CXvmPowerReferenceManager>>>(
      v17,
      v15,
      v16);
    std::vector<std::shared_ptr<CXvmPowerReferenceManager>>::_Change_array(a1, v13, v8, v7, v19);
    result = v14;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<EffectPackConfiguration const>>>(v21, (__int64)(v14 + 16));
    std::_Deallocate<16,0>(v20, 16 * v7);
    throw;
  }
  return result;
}
