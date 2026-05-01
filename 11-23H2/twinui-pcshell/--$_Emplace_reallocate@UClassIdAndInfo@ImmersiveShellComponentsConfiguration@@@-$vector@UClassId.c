/*
 * XREFs of ??$_Emplace_reallocate@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@QEAAPEAUClassIdAndInfo@ImmersiveShellComponentsConfiguration@@QEAU23@$$QEAU23@@Z @ 0x1804895E4
 * Callers:
 *     ??$emplace_back@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@QEAA?A_T$$QEAUClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@Z @ 0x180489794 (--$emplace_back@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@-$vector@UClassIdAndInfo.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800C14DC (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@AEAAXQEAUClassIdAndInfo@ImmersiveShellComponentsConfiguration@@_K1@Z @ 0x18048AD64 (-_Change_array@-$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V-$allocator@UCla.c)
 */

char *__fastcall std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::_Emplace_reallocate<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rbx
  __int64 v6; // r14
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t size_of; // rax
  char *v13; // rax
  char *v14; // rdx
  char *v15; // r14
  __int64 v16; // r8
  __int64 v17; // rax
  char *v18; // rcx
  __int64 v19; // rcx
  char *v20; // rax
  char *result; // rax
  void *v22; // [rsp+58h] [rbp+10h]

  v4 = a2;
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
      v8 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<24>(v8);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v22 = v13;
  try
  {
    v15 = &v13[24 * v6];
    *(_OWORD *)v15 = *(_OWORD *)a3;
    *((_QWORD *)v15 + 2) = *(_QWORD *)(a3 + 16);
    v16 = a1[1];
    v17 = *a1;
    v18 = v14;
    if ( v4 == v16 )
    {
      while ( v17 != v16 )
      {
        *(_OWORD *)v18 = *(_OWORD *)v17;
        *((_QWORD *)v18 + 2) = *(_QWORD *)(v17 + 16);
        v18 += 24;
        v17 += 24LL;
      }
    }
    else
    {
      while ( v17 != v4 )
      {
        *(_OWORD *)v18 = *(_OWORD *)v17;
        *((_QWORD *)v18 + 2) = *(_QWORD *)(v17 + 16);
        v18 += 24;
        v17 += 24LL;
      }
      v19 = a1[1];
      if ( v4 != v19 )
      {
        v20 = &v15[-v4 + 24];
        do
        {
          *(_OWORD *)&v20[v4] = *(_OWORD *)v4;
          *(_QWORD *)&v20[v4 + 16] = *(_QWORD *)(v4 + 16);
          v4 += 24LL;
        }
        while ( v4 != v19 );
      }
    }
    std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::_Change_array(a1, v14, v9, v8);
    result = v15;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v22, 24 * v8);
    throw;
  }
  return result;
}
