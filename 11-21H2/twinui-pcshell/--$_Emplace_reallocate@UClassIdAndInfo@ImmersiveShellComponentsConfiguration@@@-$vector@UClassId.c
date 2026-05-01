/*
 * XREFs of ??$_Emplace_reallocate@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@QEAAPEAUClassIdAndInfo@ImmersiveShellComponentsConfiguration@@QEAU23@$$QEAU23@@Z @ 0x1803AF17C
 * Callers:
 *     ??$emplace_back@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@QEAAAEAUClassIdAndInfo@ImmersiveShellComponentsConfiguration@@$$QEAU23@@Z @ 0x1803AF30C (--$emplace_back@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@-$vector@UClassIdAndInfo.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x18010B0F4 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@YAPEAUClassIdAndInfo@ImmersiveShellComponentsConfiguration@@QEAU12@0PEAU12@AEAV?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@0@@Z @ 0x1803AF2E0 (--$_Uninitialized_move@PEAUClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V-$allocator@UC.c)
 *     ?_Change_array@?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@AEAAXQEAUClassIdAndInfo@ImmersiveShellComponentsConfiguration@@_K1@Z @ 0x1803B1468 (-_Change_array@-$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V-$allocator@UCla.c)
 */

char *__fastcall std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::_Emplace_reallocate<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t size_of; // rax
  char *v13; // rax
  char *v14; // rsi
  __int64 v15; // rdx
  char *v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r10
  char *result; // rax
  void *v20; // [rsp+58h] [rbp+10h]

  v6 = (a2 - *a1) / 24;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 3);
  v8 = 0xAAAAAAAAAAAAAAALL;
  if ( v7 == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = 0xAAAAAAAAAAAAAAABuLL * ((a1[2] - *a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 <= 0xAAAAAAAAAAAAAAALL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v9;
  }
  size_of = std::_Get_size_of_n<24>(v8);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v20 = v13;
  try
  {
    v14 = &v13[24 * v6];
    *(_OWORD *)v14 = *(_OWORD *)a3;
    *((_QWORD *)v14 + 2) = *(_QWORD *)(a3 + 16);
    v15 = a1[1];
    v16 = v13;
    v17 = *a1;
    if ( a2 != v15 )
    {
      std::_Uninitialized_move<ImmersiveShellComponentsConfiguration::ClassIdAndInfo *>(v17, a2, v13);
      v16 = v14 + 24;
      v15 = a1[1];
      v17 = a2;
    }
    std::_Uninitialized_move<ImmersiveShellComponentsConfiguration::ClassIdAndInfo *>(v17, v15, v16);
    std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::_Change_array(a1, v18, v9, v8);
    result = v14;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v20, 24 * v8);
    throw;
  }
  return result;
}
