/*
 * XREFs of ??0ImageProcessingEffectBloom@Engine@Spectre@@QEAA@XZ @ 0x180095BA4
 * Callers:
 *     ??$make_shared@VImageProcessingEffectBloom@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VImageProcessingEffectBloom@Engine@Spectre@@@0@XZ @ 0x180063918 (--$make_shared@VImageProcessingEffectBloom@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@VImageProc.c)
 * Callees:
 *     ??0ImageProcessingEffect@Engine@Spectre@@QEAA@XZ @ 0x180097C70 (--0ImageProcessingEffect@Engine@Spectre@@QEAA@XZ.c)
 */

Spectre::Engine::ImageProcessingEffectBloom *__fastcall Spectre::Engine::ImageProcessingEffectBloom::ImageProcessingEffectBloom(
        Spectre::Engine::ImageProcessingEffectBloom *this)
{
  Spectre::Engine::ImageProcessingEffectBloom *result; // rax

  Spectre::Engine::ImageProcessingEffect::ImageProcessingEffect(this);
  *(_QWORD *)this = &Spectre::Engine::ImageProcessingEffectBloom::`vftable';
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  result = this;
  *((_DWORD *)this + 70) = 1056964608;
  return result;
}
