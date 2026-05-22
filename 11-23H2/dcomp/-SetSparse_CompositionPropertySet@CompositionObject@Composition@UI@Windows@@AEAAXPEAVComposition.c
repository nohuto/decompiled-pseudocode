/*
 * XREFs of ?SetSparse_CompositionPropertySet@CompositionObject@Composition@UI@Windows@@AEAAXPEAVCompositionPropertySet@234@@Z @ 0x1801098F0
 * Callers:
 *     ?Destroy@KeyFrameAnimation@Composition@UI@Windows@@UEAAXXZ @ 0x18003E270 (-Destroy@KeyFrameAnimation@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@CompositionSurfaceWrapper@Composition@UI@Windows@@UEAAXXZ @ 0x18007E120 (-Destroy@CompositionSurfaceWrapper@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18005DC0C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall Windows::UI::Composition::CompositionObject::SetSparse_CompositionPropertySet(
        Windows::UI::Composition::CompositionObject *this,
        struct Windows::UI::Composition::CompositionPropertySet *a2)
{
  CSparseStorage *v2; // rcx
  struct Windows::UI::Composition::CompositionPropertySet *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  v2 = (Windows::UI::Composition::CompositionObject *)((char *)this + 112);
  if ( a2 == (struct Windows::UI::Composition::CompositionPropertySet *)`Windows::UI::Composition::CompositionObject::SetSparse_CompositionPropertySet'::`2'::sc_defaultValue )
    *(_DWORD *)(*(_QWORD *)v2 + 4LL) &= ~0x10000000u;
  else
    CSparseStorage::SetData(v2, 4, 8u, &v3);
}
