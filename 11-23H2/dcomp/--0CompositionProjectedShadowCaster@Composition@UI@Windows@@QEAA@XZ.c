/*
 * XREFs of ??0CompositionProjectedShadowCaster@Composition@UI@Windows@@QEAA@XZ @ 0x1800072E4
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionProjectedShadowCaster@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionProjectedShadowCaster@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180006FBC (--$MakeAndInitialize2@VCompositionProjectedShadowCaster@Composition@UI@Windows@@V1234@PEAVCompos.c)
 *     ??$MakeAndInitialize2@VCompositionProjectedShadowCaster@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionProjectedShadowCaster@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAPEAX@Z @ 0x180120424 (--$MakeAndInitialize2@VCompositionProjectedShadowCaster@Composition@UI@Windows@@V12_ea_180120424.c)
 *     ??$MakeAndInitialize2@VCompositionProjectedShadowCaster@Composition@UI@Windows@@V1234@PEAVCompositor@234@_N@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionProjectedShadowCaster@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEA_N@Z @ 0x1801204E4 (--$MakeAndInitialize2@VCompositionProjectedShadowCaster@Composition@UI@Windows@@V12_ea_1801204E4.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::CompositionProjectedShadowCaster *__fastcall Windows::UI::Composition::CompositionProjectedShadowCaster::CompositionProjectedShadowCaster(
        Windows::UI::Composition::CompositionProjectedShadowCaster *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *(_QWORD *)this = &Windows::UI::Composition::CompositionProjectedShadowCaster::`vftable';
  *((_QWORD *)this + 17) = &Windows::UI::Composition::CompositionProjectedShadowCaster::Api::`vftable';
  *((_QWORD *)this + 19) = &Windows::UI::Composition::CompositionProjectedShadowCaster::Velocity::`vftable';
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  return this;
}
