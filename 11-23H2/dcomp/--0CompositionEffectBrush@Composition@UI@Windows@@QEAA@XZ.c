/*
 * XREFs of ??0CompositionEffectBrush@Composition@UI@Windows@@QEAA@XZ @ 0x18002E0E0
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionEffectBrush@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAVCompositionEffectFactory@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionEffectBrush@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAPEAVCompositionEffectFactory@456@@Z @ 0x18002E024 (--$MakeAndInitialize2@VCompositionEffectBrush@Composition@UI@Windows@@V1234@PEAVCompositor@234@P.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::CompositionEffectBrush *__fastcall Windows::UI::Composition::CompositionEffectBrush::CompositionEffectBrush(
        Windows::UI::Composition::CompositionEffectBrush *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *((_QWORD *)this + 17) = &Windows::UI::Composition::CompositionBrushT<Windows::UI::Composition::CompositionBrush,Windows::UI::Composition::ProxyObject>::Api::`vftable';
  *((_QWORD *)this + 19) = &Windows::UI::Composition::CompositionEffectBrushT<Windows::UI::Composition::CompositionEffectBrush,Windows::UI::Composition::CompositionBrush>::Api::`vftable';
  *(_QWORD *)this = &Windows::UI::Composition::CompositionEffectBrush::`vftable';
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = 0;
  return this;
}
