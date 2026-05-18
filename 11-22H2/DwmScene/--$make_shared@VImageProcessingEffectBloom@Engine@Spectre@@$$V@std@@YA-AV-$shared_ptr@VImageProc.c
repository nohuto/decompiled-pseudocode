/*
 * XREFs of ??$make_shared@VImageProcessingEffectBloom@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VImageProcessingEffectBloom@Engine@Spectre@@@0@XZ @ 0x180063918
 * Callers:
 *     ?ApplyImageProcessing@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180064B30 (-ApplyImageProcessing@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0ImageProcessingEffectBloom@Engine@Spectre@@QEAA@XZ @ 0x180095BA4 (--0ImageProcessingEffectBloom@Engine@Spectre@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<Spectre::Engine::ImageProcessingEffectBloom,>(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x130uLL);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::ImageProcessingEffectBloom>::`vftable';
    Spectre::Engine::ImageProcessingEffectBloom::ImageProcessingEffectBloom((Spectre::Engine::ImageProcessingEffectBloom *)(v2 + 4));
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  return a1;
}
