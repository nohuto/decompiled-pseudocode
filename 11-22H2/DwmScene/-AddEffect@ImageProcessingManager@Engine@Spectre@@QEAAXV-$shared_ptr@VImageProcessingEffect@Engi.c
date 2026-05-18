/*
 * XREFs of ?AddEffect@ImageProcessingManager@Engine@Spectre@@QEAAXV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@@Z @ 0x18007210C
 * Callers:
 *     ?ApplyImageProcessing@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180064B30 (-ApplyImageProcessing@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@.c)
 *     ?UpdatePlanarReflection@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@IAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18006D03C (-UpdatePlanarReflection@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@@?$vector@V?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@1@QEAV21@AEBV21@@Z @ 0x1800711A8 (--$_Emplace_reallocate@AEBV-$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@@-$vector@V.c)
 *     ?SetEffectResources@ImageProcessingManager@Engine@Spectre@@IEAAXV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@@Z @ 0x180073ACC (-SetEffectResources@ImageProcessingManager@Engine@Spectre@@IEAAXV-$shared_ptr@VImageProcessingEf.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::ImageProcessingManager::AddEffect(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  std::_Ref_count_base *v6; // rcx
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF

  v4 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(v7, a2);
  Spectre::Engine::ImageProcessingManager::SetEffectResources(a1, v4);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))(*(_QWORD *)*a2 + 8LL))(
    *a2,
    *(_QWORD *)(a1 + 32),
    *(unsigned int *)(a1 + 8),
    *(unsigned int *)(a1 + 12),
    *(_DWORD *)(a1 + 20),
    *(_DWORD *)(a1 + 28));
  v5 = *(_QWORD **)(a1 + 48);
  if ( v5 == *(_QWORD **)(a1 + 56) )
  {
    std::vector<std::shared_ptr<Spectre::Engine::ImageProcessingEffect>>::_Emplace_reallocate<std::shared_ptr<Spectre::Engine::ImageProcessingEffect> const &>(
      (char **)(a1 + 40),
      *(char **)(a1 + 48),
      a2);
  }
  else
  {
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(v5, a2);
    *(_QWORD *)(a1 + 48) += 16LL;
  }
  v6 = (std::_Ref_count_base *)a2[1];
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
}
