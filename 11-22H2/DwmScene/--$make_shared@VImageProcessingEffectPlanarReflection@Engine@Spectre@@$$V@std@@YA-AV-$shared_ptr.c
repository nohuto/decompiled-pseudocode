/*
 * XREFs of ??$make_shared@VImageProcessingEffectPlanarReflection@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VImageProcessingEffectPlanarReflection@Engine@Spectre@@@0@XZ @ 0x18006398C
 * Callers:
 *     ?UpdatePlanarReflection@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@IAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18006D03C (-UpdatePlanarReflection@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0ImageProcessingEffectPlanarReflection@Engine@Spectre@@QEAA@XZ @ 0x180093B84 (--0ImageProcessingEffectPlanarReflection@Engine@Spectre@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<Spectre::Engine::ImageProcessingEffectPlanarReflection,>(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x100uLL);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::ImageProcessingEffectPlanarReflection>::`vftable';
    Spectre::Engine::ImageProcessingEffectPlanarReflection::ImageProcessingEffectPlanarReflection((Spectre::Engine::ImageProcessingEffectPlanarReflection *)(v2 + 4));
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  return a1;
}
