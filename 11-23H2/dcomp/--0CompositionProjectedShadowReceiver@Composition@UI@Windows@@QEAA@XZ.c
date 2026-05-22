/*
 * XREFs of ??0CompositionProjectedShadowReceiver@Composition@UI@Windows@@QEAA@XZ @ 0x18000799C
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionProjectedShadowReceiver@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionProjectedShadowReceiver@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180006870 (--$MakeAndInitialize2@VCompositionProjectedShadowReceiver@Composition@UI@Windows@@V1234@PEAVComp.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::CompositionProjectedShadowReceiver *__fastcall Windows::UI::Composition::CompositionProjectedShadowReceiver::CompositionProjectedShadowReceiver(
        Windows::UI::Composition::CompositionProjectedShadowReceiver *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *(_QWORD *)this = &Windows::UI::Composition::CompositionProjectedShadowReceiver::`vftable';
  *((_QWORD *)this + 17) = &Windows::UI::Composition::CompositionProjectedShadowReceiver::Api::`vftable';
  *((_QWORD *)this + 19) = &Windows::UI::Composition::CompositionProjectedShadowReceiver::Velocity::`vftable';
  *((_DWORD *)this + 42) = 0;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  return this;
}
