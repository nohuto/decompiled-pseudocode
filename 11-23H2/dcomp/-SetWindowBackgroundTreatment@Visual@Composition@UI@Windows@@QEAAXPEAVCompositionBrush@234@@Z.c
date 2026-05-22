/*
 * XREFs of ?SetWindowBackgroundTreatment@Visual@Composition@UI@Windows@@QEAAXPEAVCompositionBrush@234@@Z @ 0x180015900
 * Callers:
 *     ?SetWindowBackgroundTreatment@Partner@Visual@Composition@UI@Windows@@UEAAJPEAUICompositionBrush@345@@Z @ 0x180015860 (-SetWindowBackgroundTreatment@Partner@Visual@Composition@UI@Windows@@UEAAJPEAUICompositionBrush@.c)
 * Callees:
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?SetReference@CSparseStorage@@QEAAXIPEAXPEBVReferenceAdapter@1@@Z @ 0x180078828 (-SetReference@CSparseStorage@@QEAAXIPEAXPEBVReferenceAdapter@1@@Z.c)
 *     ?GetReference@CSparseStorage@@QEBAPEAXI@Z @ 0x18007CDA8 (-GetReference@CSparseStorage@@QEBAPEAXI@Z.c)
 */

void __fastcall Windows::UI::Composition::Visual::SetWindowBackgroundTreatment(
        Windows::UI::Composition::Visual *this,
        struct Windows::UI::Composition::CompositionBrush *a2)
{
  CSparseStorage *v2; // rdi
  __int64 v4; // r10
  unsigned int v5; // eax

  v2 = (Windows::UI::Composition::Visual *)((char *)this + 112);
  if ( CSparseStorage::GetReference((Windows::UI::Composition::Visual *)((char *)this + 112), 0xEu) != a2 )
  {
    v5 = 0;
    if ( a2 )
      v5 = *((_DWORD *)a2 + 32);
    DirectComposition::CDevice::ResourceSetReferenceProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)(v4 + 24) + 456LL),
      *(_DWORD *)(v4 + 128),
      0x27u,
      v5);
    CSparseStorage::SetReference(
      v2,
      0xEu,
      a2,
      (const struct CSparseStorage::ReferenceAdapter *)&Windows::UI::Composition::SparsePropertyStore::g_adapter_NestableRuntimeClass);
  }
}
