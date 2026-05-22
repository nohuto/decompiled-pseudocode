/*
 * XREFs of ?Destroy@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAXXZ @ 0x18011D840
 * Callers:
 *     ?Destroy@EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@UEAAXXZ @ 0x180131240 (-Destroy@EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x18008C060 (-Release@CWeakReferenceBase@@QEAAKXZ.c)
 */

void __fastcall Windows::UI::Composition::Interactions::VisualInteractionSource::Destroy(
        Windows::UI::Composition::Interactions::VisualInteractionSource *this)
{
  __int64 v1; // rax
  CWeakReferenceBase *v3; // rcx

  v1 = *((_QWORD *)this + 30);
  v3 = *(CWeakReferenceBase **)(v1 + 168);
  if ( v3 )
  {
    *(_QWORD *)(v1 + 168) = 0LL;
    CWeakReferenceBase::Release(v3);
  }
  Windows::UI::Composition::CompositionObject::Destroy(this);
}
