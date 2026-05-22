/*
 * XREFs of ??0CompositionEffectFactory@Composition@UI@Windows@@QEAA@XZ @ 0x18001A0A4
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionEffectFactory@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAUIGraphicsEffect@Effects@Graphics@4@AEAPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionEffectFactory@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAPEAUIGraphicsEffect@Effects@Graphics@6@AEAPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@6@@Z @ 0x180019F38 (--$MakeAndInitialize2@VCompositionEffectFactory@Composition@UI@Windows@@V1234@PEAVCompositor@234.c)
 *     ??$MakeAndInitialize2@VCompositionEffectFactory@Composition@UI@Windows@@V1234@PEAV1234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionEffectFactory@Composition@UI@Windows@@$$QEAPEAV3456@@Z @ 0x180019FF8 (--$MakeAndInitialize2@VCompositionEffectFactory@Composition@UI@Windows@@V1234@PEAV1234@@Details@.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::CompositionEffectFactory *__fastcall Windows::UI::Composition::CompositionEffectFactory::CompositionEffectFactory(
        Windows::UI::Composition::CompositionEffectFactory *this)
{
  Windows::UI::Composition::CompositionEffectFactory *result; // rax

  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *(_QWORD *)this = &Windows::UI::Composition::CompositionEffectFactory::`vftable';
  *((_QWORD *)this + 17) = &Windows::UI::Composition::CompositionEffectFactory::Api::`vftable';
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  result = this;
  *((_BYTE *)this + 232) = 1;
  return result;
}
