/*
 * XREFs of ?ApplySpecialEffects@ImageProcessingManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@V45@@Z @ 0x1800725CC
 * Callers:
 *     ?ProcessScene@ImageProcessingManager@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@_N@Z @ 0x1800735A4 (-ProcessScene@ImageProcessingManager@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VIRenderOutput@Engine.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ @ 0x180026598 (-GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ?GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ @ 0x1800347F0 (-GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ.c)
 *     ?FindProperty@ShaderManager@Engine@Spectre@@QEBA?AW4ShaderProperty@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18004F9DC (-FindProperty@ShaderManager@Engine@Spectre@@QEBA-AW4ShaderProperty@23@AEBV-$basic_string@DU-$cha.c)
 *     ?GetGlobalProperties@ShaderManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@std@@XZ @ 0x18004FA88 (-GetGlobalProperties@ShaderManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderPropertyBlock@Engi.c)
 *     ?ApplyImageProcessing@ImageProcessingManager@Engine@Spectre@@IEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@PEAVRenderDevice@23@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@V45@@Z @ 0x1800724E0 (-ApplyImageProcessing@ImageProcessingManager@Engine@Spectre@@IEAA-AV-$shared_ptr@VTexture@Engine.c)
 *     ?GetTexture@ShaderPropertyBlock@Engine@Spectre@@QEBA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@W4ShaderProperty@23@@Z @ 0x1800850D4 (-GetTexture@ShaderPropertyBlock@Engine@Spectre@@QEBA-AV-$shared_ptr@VTexture@Engine@Spectre@@@st.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall Spectre::Engine::ImageProcessingManager::ApplySpecialEffects(
        __int64 a1,
        _QWORD *a2,
        Spectre::Engine::RenderDevice **a3,
        __int64 a4,
        _QWORD *a5)
{
  Spectre::Engine::Engine *Engine; // rax
  struct Spectre::Engine::ShaderManager *ShaderManager; // rdi
  _QWORD *GlobalProperties; // rax
  __int64 *Texture; // rax
  _QWORD *v13; // rax
  void (__fastcall *v14)(__int64, _QWORD *); // r8
  __int64 v15; // r11
  _QWORD *v16; // rax
  __int64 *v17; // rax
  __int64 v19; // [rsp+30h] [rbp-41h] BYREF
  std::_Ref_count_base *v20; // [rsp+38h] [rbp-39h]
  _QWORD *v21; // [rsp+48h] [rbp-29h]
  __int64 v22; // [rsp+50h] [rbp-21h] BYREF
  std::_Ref_count_base *v23; // [rsp+58h] [rbp-19h]

  v21 = a5;
  if ( byte_1801D3D88 )
  {
    Engine = Spectre::Engine::RenderDevice::GetEngine(*a3);
    ShaderManager = Spectre::Engine::Engine::GetShaderManager(Engine);
    std::string::string(&v22, (__int64)"Global/PlanarReflection");
    Spectre::Engine::ShaderManager::FindProperty((__int64)ShaderManager, &v22);
    std::string::_Tidy_deallocate((__int64)&v22);
    GlobalProperties = (_QWORD *)Spectre::Engine::ShaderManager::GetGlobalProperties((__int64)ShaderManager, &v22);
    Texture = (__int64 *)Spectre::Engine::ShaderPropertyBlock::GetTexture(*GlobalProperties);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(a5, Texture);
    if ( v20 )
      std::_Ref_count_base::_Decref(v20);
    if ( v23 )
      std::_Ref_count_base::_Decref(v23);
  }
  v13 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          &v22,
          a3);
  v14(v15, v13);
  v16 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          &v22,
          a5);
  v17 = Spectre::Engine::ImageProcessingManager::ApplyImageProcessing(a1, &v19, (__int64)*a3, a4, v16);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(a5, v17);
  if ( v20 )
    std::_Ref_count_base::_Decref(v20);
  *a2 = 0LL;
  a2[1] = 0LL;
  *a2 = *a5;
  a2[1] = a5[1];
  *a5 = 0LL;
  a5[1] = 0LL;
  return a2;
}
