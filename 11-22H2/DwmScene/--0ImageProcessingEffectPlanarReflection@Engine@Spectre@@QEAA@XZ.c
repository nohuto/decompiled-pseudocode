/*
 * XREFs of ??0ImageProcessingEffectPlanarReflection@Engine@Spectre@@QEAA@XZ @ 0x180093B84
 * Callers:
 *     ??$make_shared@VImageProcessingEffectPlanarReflection@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VImageProcessingEffectPlanarReflection@Engine@Spectre@@@0@XZ @ 0x18006398C (--$make_shared@VImageProcessingEffectPlanarReflection@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr.c)
 * Callees:
 *     ??0ImageProcessingEffect@Engine@Spectre@@QEAA@XZ @ 0x180097C70 (--0ImageProcessingEffect@Engine@Spectre@@QEAA@XZ.c)
 */

Spectre::Engine::ImageProcessingEffectPlanarReflection *__fastcall Spectre::Engine::ImageProcessingEffectPlanarReflection::ImageProcessingEffectPlanarReflection(
        Spectre::Engine::ImageProcessingEffectPlanarReflection *this)
{
  Spectre::Engine::ImageProcessingEffectPlanarReflection *result; // rax

  Spectre::Engine::ImageProcessingEffect::ImageProcessingEffect(this);
  *(_QWORD *)this = &Spectre::Engine::ImageProcessingEffectPlanarReflection::`vftable';
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  result = this;
  *((_BYTE *)this + 232) = 1;
  return result;
}
