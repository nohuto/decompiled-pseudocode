/*
 * XREFs of ?ApplyImageProcessing@ImageProcessingManager@Engine@Spectre@@IEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@PEAVRenderDevice@23@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@V45@@Z @ 0x1800724E0
 * Callers:
 *     ?ApplySpecialEffects@ImageProcessingManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@V45@@Z @ 0x1800725CC (-ApplySpecialEffects@ImageProcessingManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VTexture@Engine@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@std@@AEAAXXZ @ 0x180013300 (-_Tidy@-$vector@V-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VLigh.c)
 *     _anonymous_namespace_::GetEffects__lambda_efc75f2d1525ae07ca13eee5dee967eb___ @ 0x1800710F0 (_anonymous_namespace_--GetEffects__lambda_efc75f2d1525ae07ca13eee5dee967eb___.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Spectre::Engine::ImageProcessingManager::ApplyImageProcessing(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  _QWORD *v8; // rbp
  _QWORD *i; // rbx
  __int64 *v10; // rax
  std::_Ref_count_base *v11; // rcx
  _BYTE v13[8]; // [rsp+38h] [rbp-40h] BYREF
  std::_Ref_count_base *v14; // [rsp+40h] [rbp-38h]
  _QWORD v15[3]; // [rsp+48h] [rbp-30h] BYREF

  anonymous_namespace_::GetEffects__lambda_efc75f2d1525ae07ca13eee5dee967eb___(v15, a1 + 40);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(a2, a5);
  v8 = (_QWORD *)v15[1];
  for ( i = (_QWORD *)v15[0]; i != v8; i += 2 )
  {
    v10 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64, __int64, _QWORD *))(*(_QWORD *)*i + 16LL))(
                       *i,
                       v13,
                       a3,
                       a4,
                       a2);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(a2, v10);
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
  }
  std::vector<std::shared_ptr<Spectre::Engine::LightProbe>>::_Tidy((__int64)v15);
  v11 = (std::_Ref_count_base *)a5[1];
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  return a2;
}
