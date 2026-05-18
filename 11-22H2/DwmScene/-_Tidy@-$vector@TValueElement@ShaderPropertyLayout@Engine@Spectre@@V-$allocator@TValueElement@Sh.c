/*
 * XREFs of ?_Tidy@?$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@TValueElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAXXZ @ 0x18001B850
 * Callers:
 *     ??1?$_Tidy_guard@V?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@std@@QEAA@XZ @ 0x180017994 (--1-$_Tidy_guard@V-$vector@W4EShaderModel@Engine@Spectre@@V-$allocator@W4EShaderModel@Engine@Spe.c)
 *     ??1?$vector@W4D3D_FEATURE_LEVEL@@V?$allocator@W4D3D_FEATURE_LEVEL@@@std@@@std@@QEAA@XZ @ 0x1800179F0 (--1-$vector@W4D3D_FEATURE_LEVEL@@V-$allocator@W4D3D_FEATURE_LEVEL@@@std@@@std@@QEAA@XZ.c)
 *     ??1DeviceDescription@Engine@Spectre@@QEAA@XZ @ 0x1800179FC (--1DeviceDescription@Engine@Spectre@@QEAA@XZ.c)
 *     ??1SceneNode@Engine@Spectre@@UEAA@XZ @ 0x18003B364 (--1SceneNode@Engine@Spectre@@UEAA@XZ.c)
 *     ??1ShaderPropertyDefinition@Engine@Spectre@@QEAA@XZ @ 0x1800451F0 (--1ShaderPropertyDefinition@Engine@Spectre@@QEAA@XZ.c)
 *     ??1ShaderManager@Engine@Spectre@@QEAA@XZ @ 0x18004EBA4 (--1ShaderManager@Engine@Spectre@@QEAA@XZ.c)
 *     ??1ShaderFamily@Engine@Spectre@@QEAA@XZ @ 0x18005FC40 (--1ShaderFamily@Engine@Spectre@@QEAA@XZ.c)
 *     ??1ShaderPropertyLayout@Engine@Spectre@@QEAA@XZ @ 0x180081EF8 (--1ShaderPropertyLayout@Engine@Spectre@@QEAA@XZ.c)
 *     ?SetPropertyDefaultFromDefinition@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@AEBUShaderPropertyDefinition@23@@Z @ 0x18008342C (-SetPropertyDefaultFromDefinition@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@.c)
 *     ??1ShaderPropertyBlock@Engine@Spectre@@QEAA@XZ @ 0x180084568 (--1ShaderPropertyBlock@Engine@Spectre@@QEAA@XZ.c)
 *     ??1ColorTransform@Engine@Spectre@@UEAA@XZ @ 0x18008F58C (--1ColorTransform@Engine@Spectre@@UEAA@XZ.c)
 *     ?CreateDeviceResources@CDXDeviceFactory@@AEAAJAEAV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@AEAV?$ComPtr@UID3D11Device1@@@34@AEAV?$ComPtr@UID3D11DeviceContext1@@@34@W4GraphicsDeviceType@@W4AdditionalDeviceFlags@@W4AdditionalDevicePerformanceFlags@@W4D3D_FEATURE_LEVEL@@6W4DeviceFeatureFlags@@@Z @ 0x1800DB070 (-CreateDeviceResources@CDXDeviceFactory@@AEAAJAEAV-$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@AEAV-.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<Spectre::Engine::ShaderPropertyLayout::ValueElement>::_Tidy(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFFCuLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
