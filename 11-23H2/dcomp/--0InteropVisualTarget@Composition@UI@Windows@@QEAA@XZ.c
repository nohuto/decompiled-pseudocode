/*
 * XREFs of ??0InteropVisualTarget@Composition@UI@Windows@@QEAA@XZ @ 0x18005DD30
 * Callers:
 *     ??$MakeAndInitialize2@VInteropVisualTarget@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@AEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVInteropVisualTarget@Composition@UI@Windows@@$$QEAPEAVInteropCompositor@456@AEAPEAX@Z @ 0x18005DC8C (--$MakeAndInitialize2@VInteropVisualTarget@Composition@UI@Windows@@V1234@PEAVInteropCompositor@2.c)
 *     ??$MakeAndInitialize2@VInteropVisualTarget@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVInteropVisualTarget@Composition@UI@Windows@@$$QEAPEAVInteropCompositor@456@@Z @ 0x180085A44 (--$MakeAndInitialize2@VInteropVisualTarget@Composition@UI@Windows@@V1234@PEAVIntero_ea_180085A44.c)
 *     ??$MakeAndInitialize2@VInteropVisualTarget@Composition@UI@Windows@@V1234@PEAVInteropDwmCompositor@234@AEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVInteropVisualTarget@Composition@UI@Windows@@$$QEAPEAVInteropDwmCompositor@456@AEAPEAX@Z @ 0x18015B3EC (--$MakeAndInitialize2@VInteropVisualTarget@Composition@UI@Windows@@V1234@PEAVInteropDwmComposito.c)
 * Callees:
 *     ??0VisualTarget@Composition@UI@Windows@@QEAA@XZ @ 0x18005DD68 (--0VisualTarget@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::InteropVisualTarget *__fastcall Windows::UI::Composition::InteropVisualTarget::InteropVisualTarget(
        Windows::UI::Composition::InteropVisualTarget *this)
{
  Windows::UI::Composition::VisualTarget::VisualTarget(this);
  *(_QWORD *)this = &Windows::UI::Composition::InteropVisualTarget::`vftable';
  *((_QWORD *)this + 23) = &Windows::UI::Composition::InteropVisualTarget::Api::`vftable';
  return this;
}
