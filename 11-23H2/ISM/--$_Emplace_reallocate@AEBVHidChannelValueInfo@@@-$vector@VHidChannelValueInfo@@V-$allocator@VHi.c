/*
 * XREFs of ??$_Emplace_reallocate@AEBVHidChannelValueInfo@@@?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@QEAAPEAVHidChannelValueInfo@@QEAV2@AEBV2@@Z @ 0x1800EECB0
 * Callers:
 *     ?ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AEAV?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@PEAI@Z @ 0x1800F06CC (-ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AE.c)
 *     ?TryCreateAndInitialize@HidLampMultiUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800F5AA0 (-TryCreateAndInitialize@HidLampMultiUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEA.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0EI@@std@@YA_K_K@Z @ 0x18003D17C (--$_Get_size_of_n@$0EI@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAVHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@YAPEAVHidChannelValueInfo@@QEAV1@0PEAV1@AEAV?$allocator@VHidChannelValueInfo@@@0@@Z @ 0x1800EFECC (--$_Uninitialized_move@PEAVHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo@@@std@@@std@@Y.c)
 *     ?_Change_array@?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@AEAAXQEAVHidChannelValueInfo@@_K1@Z @ 0x1800F2C6C (-_Change_array@-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo@@@std@@@std@@AEA.c)
 */

char *__fastcall std::vector<HidChannelValueInfo>::_Emplace_reallocate<HidChannelValueInfo const &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rdi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t size_of; // rax
  char *v13; // rax
  char *v14; // rdi
  __int64 v15; // rdx
  char *v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r10
  char *result; // rax
  void *v20; // [rsp+58h] [rbp+10h]

  v6 = (a2 - *a1) / 72;
  v7 = 0x8E38E38E38E38E39uLL * ((a1[1] - *a1) >> 3);
  v8 = 0x38E38E38E38E38ELL;
  if ( v7 == 0x38E38E38E38E38ELL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = 0x8E38E38E38E38E39uLL * ((a1[2] - *a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 <= 0x38E38E38E38E38ELL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v9;
  }
  size_of = std::_Get_size_of_n<72>(v8);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v20 = v13;
  try
  {
    v14 = &v13[72 * v6];
    *(_OWORD *)v14 = *(_OWORD *)a3;
    *((_OWORD *)v14 + 1) = *(_OWORD *)(a3 + 16);
    *((_OWORD *)v14 + 2) = *(_OWORD *)(a3 + 32);
    *((_OWORD *)v14 + 3) = *(_OWORD *)(a3 + 48);
    *((_QWORD *)v14 + 8) = *(_QWORD *)(a3 + 64);
    v15 = a1[1];
    v16 = v13;
    v17 = *a1;
    if ( a2 != v15 )
    {
      std::_Uninitialized_move<HidChannelValueInfo *>(v17, a2, v13);
      v16 = v14 + 72;
      v15 = a1[1];
      v17 = a2;
    }
    std::_Uninitialized_move<HidChannelValueInfo *>(v17, v15, v16);
    std::vector<HidChannelValueInfo>::_Change_array(a1, v18, v9, v8);
    result = v14;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v20, 72 * v8);
    throw;
  }
  return result;
}
