/*
 * XREFs of ??$_Emplace_reallocate@AEBW4D3D_FEATURE_LEVEL@@@?$vector@W4D3D_FEATURE_LEVEL@@V?$allocator@W4D3D_FEATURE_LEVEL@@@std@@@std@@QEAAPEAW4D3D_FEATURE_LEVEL@@QEAW42@AEBW42@@Z @ 0x1800DAC64
 * Callers:
 *     ?CreateDeviceResources@CDXDeviceFactory@@AEAAJAEAV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@AEAV?$ComPtr@UID3D11Device1@@@34@AEAV?$ComPtr@UID3D11DeviceContext1@@@34@W4GraphicsDeviceType@@W4AdditionalDeviceFlags@@W4AdditionalDevicePerformanceFlags@@W4D3D_FEATURE_LEVEL@@6W4DeviceFeatureFlags@@@Z @ 0x1800DB070 (-CreateDeviceResources@CDXDeviceFactory@@AEAAJAEAV-$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@AEAV-.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x180017028 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@W4D3D_FEATURE_LEVEL@@V?$allocator@W4D3D_FEATURE_LEVEL@@@std@@@std@@AEBA_K_K@Z @ 0x18001F4CC (-_Calculate_growth@-$vector@W4D3D_FEATURE_LEVEL@@V-$allocator@W4D3D_FEATURE_LEVEL@@@std@@@std@@A.c)
 *     ??$_Uninitialized_move@PEAW4D3D_FEATURE_LEVEL@@V?$allocator@W4D3D_FEATURE_LEVEL@@@std@@@std@@YAPEAW4D3D_FEATURE_LEVEL@@QEAW41@0PEAW41@AEAV?$allocator@W4D3D_FEATURE_LEVEL@@@0@@Z @ 0x1800DAF3C (--$_Uninitialized_move@PEAW4D3D_FEATURE_LEVEL@@V-$allocator@W4D3D_FEATURE_LEVEL@@@std@@@std@@YAP.c)
 *     ?_Change_array@?$vector@W4D3D_FEATURE_LEVEL@@V?$allocator@W4D3D_FEATURE_LEVEL@@@std@@@std@@AEAAXQEAW4D3D_FEATURE_LEVEL@@_K1@Z @ 0x1800DBAEC (-_Change_array@-$vector@W4D3D_FEATURE_LEVEL@@V-$allocator@W4D3D_FEATURE_LEVEL@@@std@@@std@@AEAAX.c)
 */

char *__fastcall std::vector<enum D3D_FEATURE_LEVEL>::_Emplace_reallocate<enum D3D_FEATURE_LEVEL const &>(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // r12
  unsigned __int64 size_of; // rax
  char *v11; // rdi
  _DWORD *v12; // r8
  char *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx

  v3 = *a1;
  v6 = (a1[1] - *a1) >> 2;
  if ( v6 == 0x3FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = std::vector<enum D3D_FEATURE_LEVEL>::_Calculate_growth(a1, v6 + 1);
  size_of = std::_Get_size_of_n<4>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = v11;
  v13 = &v11[4 * ((a2 - v3) >> 2)];
  *(_DWORD *)v13 = *a3;
  v14 = a1[1];
  v15 = *a1;
  if ( a2 != v14 )
  {
    std::_Uninitialized_move<enum D3D_FEATURE_LEVEL *>(v15, a2, v11);
    v14 = a1[1];
    v12 = v13 + 4;
    v15 = a2;
  }
  std::_Uninitialized_move<enum D3D_FEATURE_LEVEL *>(v15, v14, v12);
  std::vector<enum D3D_FEATURE_LEVEL>::_Change_array(a1, v11, v8, v9);
  return &v11[4 * ((a2 - v3) >> 2)];
}
