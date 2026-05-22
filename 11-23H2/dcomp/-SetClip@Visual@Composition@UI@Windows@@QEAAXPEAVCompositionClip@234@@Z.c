/*
 * XREFs of ?SetClip@Visual@Composition@UI@Windows@@QEAAXPEAVCompositionClip@234@@Z @ 0x18000F51C
 * Callers:
 *     ?DestroyContent@VisualIslandSite@Composition@UI@Windows@@MEAAXXZ @ 0x18000F450 (-DestroyContent@VisualIslandSite@Composition@UI@Windows@@MEAAXXZ.c)
 * Callees:
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?SetReference@CSparseStorage@@QEAAXIPEAXPEBVReferenceAdapter@1@@Z @ 0x180078828 (-SetReference@CSparseStorage@@QEAAXIPEAXPEBVReferenceAdapter@1@@Z.c)
 *     ?GetReference@CSparseStorage@@QEBAPEAXI@Z @ 0x18007CDA8 (-GetReference@CSparseStorage@@QEBAPEAXI@Z.c)
 *     ?AddDeferredPropertyChangeNotification@CompositorCommon@Composition@UI@Windows@@QEAAXPEAVProxyObject@234@I@Z @ 0x180093FC0 (-AddDeferredPropertyChangeNotification@CompositorCommon@Composition@UI@Windows@@QEAAXPEAVProxyOb.c)
 */

void __fastcall Windows::UI::Composition::Visual::SetClip(
        Windows::UI::Composition::Visual *this,
        struct Windows::UI::Composition::CompositionClip *a2)
{
  unsigned int v4; // r9d
  unsigned int v5; // r8d

  if ( CSparseStorage::GetReference((Windows::UI::Composition::Visual *)((char *)this + 112), 6u) != a2 )
  {
    if ( a2 )
      v4 = *((_DWORD *)a2 + 32);
    DirectComposition::CDevice::ResourceSetReferenceProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      6u,
      v4);
    CSparseStorage::SetReference(
      (Windows::UI::Composition::Visual *)((char *)this + 112),
      6u,
      a2,
      (const struct CSparseStorage::ReferenceAdapter *)&Windows::UI::Composition::SparsePropertyStore::g_adapter_NestableRuntimeClass);
    if ( (*((_DWORD *)this + 65) & 0x8000) != 0 )
      Windows::UI::Composition::CompositorCommon::AddDeferredPropertyChangeNotification(
        *((Windows::UI::Composition::CompositorCommon **)this + 3),
        this,
        v5);
  }
}
