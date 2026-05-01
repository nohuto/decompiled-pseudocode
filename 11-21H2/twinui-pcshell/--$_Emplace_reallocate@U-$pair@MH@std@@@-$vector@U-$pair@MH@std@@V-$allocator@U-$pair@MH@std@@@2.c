/*
 * XREFs of ??$_Emplace_reallocate@U?$pair@MH@std@@@?$vector@U?$pair@MH@std@@V?$allocator@U?$pair@MH@std@@@2@@std@@QEAAPEAU?$pair@MH@1@QEAU21@$$QEAU21@@Z @ 0x18055F794
 * Callers:
 *     ?GetAssistantLight@AssistantLightFactory@Lighting@TwinUI@@SAJV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@Z @ 0x180560224 (-GetAssistantLight@AssistantLightFactory@Lighting@TwinUI@@SAJV-$ComPtr@UILampArray@Lights@Device.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18009B6E0 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@U?$pair@MH@std@@V?$allocator@U?$pair@MH@std@@@2@@std@@AEAAXQEAU?$pair@MH@2@_K1@Z @ 0x180560B70 (-_Change_array@-$vector@U-$pair@MH@std@@V-$allocator@U-$pair@MH@std@@@2@@std@@AEAAXQEAU-$pair@MH.c)
 */

char *__fastcall std::vector<std::pair<float,int>>::_Emplace_reallocate<std::pair<float,int>>(
        char **a1,
        char *a2,
        _QWORD *a3)
{
  char *v4; // rbx
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t size_of; // rax
  char *v13; // rax
  char *v14; // r14
  char *v15; // rdx
  char *v16; // rcx
  _QWORD *v17; // r8
  signed __int64 v18; // rcx
  char *result; // rax
  void *v20; // [rsp+58h] [rbp+10h]

  v4 = a2;
  v6 = (a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  v8 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = (a1[2] - *a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v8);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v20 = v13;
  try
  {
    v14 = &v13[8 * v6];
    *(_QWORD *)v14 = *a3;
    v15 = a1[1];
    v16 = *a1;
    v17 = v13;
    if ( v4 == v15 )
    {
      while ( v16 != v15 )
      {
        *v17++ = *(_QWORD *)v16;
        v16 += 8;
      }
    }
    else
    {
      if ( v16 != v4 )
      {
        do
        {
          *v17++ = *(_QWORD *)v16;
          v16 += 8;
        }
        while ( v16 != v4 );
        v15 = a1[1];
      }
      if ( v4 != v15 )
      {
        v18 = v14 + 8 - v4;
        do
        {
          *(_QWORD *)&v4[v18] = *(_QWORD *)v4;
          v4 += 8;
        }
        while ( v4 != v15 );
      }
    }
    std::vector<std::pair<float,int>>::_Change_array(a1, v13, v9, v8);
    result = v14;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v20, 8 * v8);
    throw;
  }
  return result;
}
