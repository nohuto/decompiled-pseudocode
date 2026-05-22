/*
 * XREFs of ??1BatchMember@Composition@UI@Windows@@QEAA@XZ @ 0x18008AF28
 * Callers:
 *     ??1CompositionEffectFactory@Composition@UI@Windows@@UEAA@XZ @ 0x18008AE84 (--1CompositionEffectFactory@Composition@UI@Windows@@UEAA@XZ.c)
 *     ??1CompositionPropertyAnimator@Composition@UI@Windows@@UEAA@XZ @ 0x180161958 (--1CompositionPropertyAnimator@Composition@UI@Windows@@UEAA@XZ.c)
 * Callees:
 *     ?Do@FailFast@WRL2@Microsoft@@SAXXZ @ 0x180108A5C (-Do@FailFast@WRL2@Microsoft@@SAXXZ.c)
 */

void __fastcall Windows::UI::Composition::BatchMember::~BatchMember(Windows::UI::Composition::BatchMember *this)
{
  if ( *(_QWORD *)this || *((_QWORD *)this + 1) )
    Microsoft::WRL2::FailFast::Do();
}
