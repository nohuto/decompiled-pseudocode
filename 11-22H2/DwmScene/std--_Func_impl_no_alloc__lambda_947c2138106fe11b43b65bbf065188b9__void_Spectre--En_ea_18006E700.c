/*
 * XREFs of std::_Func_impl_no_alloc__lambda_947c2138106fe11b43b65bbf065188b9__void_Spectre::Engine::ImageProcessingEffect_const_&_std::shared_ptr_Spectre::Engine::Texture__const_&_::_Do_call @ 0x18006E700
 * Callers:
 *     <none>
 * Callees:
 *     ?GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ @ 0x1800347F0 (-GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ.c)
 *     ?SetGlobalTexture@ShaderManager@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@5@@Z @ 0x180050764 (-SetGlobalTexture@ShaderManager@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V.c)
 *     ?GetReflectionSampler@ImageProcessingEffectPlanarReflection@Engine@Spectre@@QEBAAEBV?$shared_ptr@VSampler@Engine@Spectre@@@std@@XZ @ 0x180093E30 (-GetReflectionSampler@ImageProcessingEffectPlanarReflection@Engine@Spectre@@QEBAAEBV-$shared_ptr.c)
 *     __RTDynamicCast_0 @ 0x1800E38E0 (__RTDynamicCast_0.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_947c2138106fe11b43b65bbf065188b9__void_Spectre::Engine::ImageProcessingEffect_const___std::shared_ptr_Spectre::Engine::Texture__const___::_Do_call(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rdi
  struct Spectre::Engine::ShaderManager *ShaderManager; // rbx
  _QWORD *ReflectionSampler; // rax

  v5 = _RTDynamicCast_0(
         a2,
         0LL,
         &Spectre::Engine::ImageProcessingEffect `RTTI Type Descriptor',
         &Spectre::Engine::ImageProcessingEffectPlanarReflection `RTTI Type Descriptor',
         1);
  ShaderManager = Spectre::Engine::Engine::GetShaderManager(*(Spectre::Engine::Engine **)(a1 + 8));
  Spectre::Engine::ShaderManager::SetGlobalTexture(
    (__int64)ShaderManager,
    (__int64)&Spectre::Engine::ShaderConstants::kGlobal_PlanarReflection,
    a3);
  ReflectionSampler = (_QWORD *)Spectre::Engine::ImageProcessingEffectPlanarReflection::GetReflectionSampler(v5);
  return Spectre::Engine::ShaderManager::SetGlobalTextureSampler(
           (__int64)ShaderManager,
           (__int64)&Spectre::Engine::ShaderConstants::kGlobal_PlanarReflection,
           ReflectionSampler);
}
