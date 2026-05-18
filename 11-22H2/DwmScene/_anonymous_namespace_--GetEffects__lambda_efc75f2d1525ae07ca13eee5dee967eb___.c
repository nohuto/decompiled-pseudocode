/*
 * XREFs of _anonymous_namespace_::GetEffects__lambda_efc75f2d1525ae07ca13eee5dee967eb___ @ 0x1800710F0
 * Callers:
 *     ?ApplyImageProcessing@ImageProcessingManager@Engine@Spectre@@IEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@PEAVRenderDevice@23@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@V45@@Z @ 0x1800724E0 (-ApplyImageProcessing@ImageProcessingManager@Engine@Spectre@@IEAA-AV-$shared_ptr@VTexture@Engine.c)
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@@?$vector@V?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@1@QEAV21@AEBV21@@Z @ 0x1800711A8 (--$_Emplace_reallocate@AEBV-$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@@-$vector@V.c)
 *     ??$_Sort_unchecked@PEAV?$shared_ptr@VLight@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VLight@Engine@Spectre@@@0@0_JP6A_NAEBV10@2@Z@Z @ 0x180071A1C (--$_Sort_unchecked@PEAV-$shared_ptr@VLight@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV-$s.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall anonymous_namespace_::GetEffects__lambda_efc75f2d1525ae07ca13eee5dee967eb___(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rsi
  _QWORD *i; // rdi
  _QWORD *v5; // rcx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v3 = *(_QWORD **)(a2 + 8);
  for ( i = *(_QWORD **)a2; i != v3; i += 2 )
  {
    if ( *(_BYTE *)(*i + 136LL) && !*(_DWORD *)(*i + 176LL) )
    {
      v5 = (_QWORD *)a1[1];
      if ( v5 == (_QWORD *)a1[2] )
      {
        std::vector<std::shared_ptr<Spectre::Engine::ImageProcessingEffect>>::_Emplace_reallocate<std::shared_ptr<Spectre::Engine::ImageProcessingEffect> const &>(
          a1,
          a1[1],
          i);
      }
      else
      {
        std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(v5, i);
        a1[1] += 16LL;
      }
    }
  }
  std::_Sort_unchecked<std::shared_ptr<Spectre::Engine::Light> *,bool (*)(std::shared_ptr<Spectre::Engine::Light> const &,std::shared_ptr<Spectre::Engine::Light> const &)>(
    *a1,
    a1[1],
    (__int64)(a1[1] - *a1) >> 4,
    Spectre::Engine::ImageProcessingEffect::CompareByPriority,
    1);
  return a1;
}
