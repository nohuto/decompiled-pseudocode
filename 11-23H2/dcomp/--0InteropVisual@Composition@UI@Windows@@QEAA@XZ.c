/*
 * XREFs of ??0InteropVisual@Composition@UI@Windows@@QEAA@XZ @ 0x18005E298
 * Callers:
 *     ??$MakeAndInitialize2@VInteropVisual@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVInteropVisual@Composition@UI@Windows@@$$QEAPEAVInteropCompositor@456@@Z @ 0x18000D058 (--$MakeAndInitialize2@VInteropVisual@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@@De.c)
 *     ??$MakeAndInitialize2@VInteropVisual@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@_NAEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVInteropVisual@Composition@UI@Windows@@$$QEAPEAVInteropCompositor@456@$$QEA_NAEAPEAX@Z @ 0x1800608A4 (--$MakeAndInitialize2@VInteropVisual@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@_NA.c)
 *     ??$MakeAndInitialize2@VInteropVisual@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@_N@Details@WRL2@Microsoft@@YAJPEAPEAVInteropVisual@Composition@UI@Windows@@$$QEAPEAVInteropCompositor@456@$$QEA_N@Z @ 0x180089BC4 (--$MakeAndInitialize2@VInteropVisual@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@_N@.c)
 *     ??$MakeAndInitialize2@VInteropRedirectVisual@Composition@UI@Windows@@V1234@PEAVInteropDwmCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVInteropRedirectVisual@Composition@UI@Windows@@$$QEAPEAVInteropDwmCompositor@456@@Z @ 0x18015B174 (--$MakeAndInitialize2@VInteropRedirectVisual@Composition@UI@Windows@@V1234@PEAVInteropDwmComposi.c)
 *     ??$MakeAndInitialize2@VInteropVisual@Composition@UI@Windows@@V1234@PEAVInteropDwmCompositor@234@AEA_NAEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVInteropVisual@Composition@UI@Windows@@$$QEAPEAVInteropDwmCompositor@456@AEA_NAEAPEAX@Z @ 0x18015B318 (--$MakeAndInitialize2@VInteropVisual@Composition@UI@Windows@@V1234@PEAVInteropDwmCompositor@234@.c)
 * Callees:
 *     ??0Visual@Composition@UI@Windows@@QEAA@XZ @ 0x18005D570 (--0Visual@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::InteropVisual *__fastcall Windows::UI::Composition::InteropVisual::InteropVisual(
        Windows::UI::Composition::InteropVisual *this)
{
  Windows::UI::Composition::Visual::Visual((unsigned __int64)this);
  *(_QWORD *)this = &Windows::UI::Composition::InteropVisual::`vftable';
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 37) = &Windows::UI::Composition::InteropVisual::Api::`vftable';
  return this;
}
