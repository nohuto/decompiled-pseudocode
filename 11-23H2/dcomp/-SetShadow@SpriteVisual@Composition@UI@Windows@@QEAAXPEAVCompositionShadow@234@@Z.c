/*
 * XREFs of ?SetShadow@SpriteVisual@Composition@UI@Windows@@QEAAXPEAVCompositionShadow@234@@Z @ 0x18017BF18
 * Callers:
 *     ?put_Shadow@Api@SpriteVisual@Composition@UI@Windows@@UEAAJPEAUICompositionShadow@345@@Z @ 0x18017C060 (-put_Shadow@Api@SpriteVisual@Composition@UI@Windows@@UEAAJPEAUICompositionShadow@345@@Z.c)
 * Callees:
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?SetReference@CSparseStorage@@QEAAXIPEAXPEBVReferenceAdapter@1@@Z @ 0x180078828 (-SetReference@CSparseStorage@@QEAAXIPEAXPEBVReferenceAdapter@1@@Z.c)
 *     ?GetReference@CSparseStorage@@QEBAPEAXI@Z @ 0x18007CDA8 (-GetReference@CSparseStorage@@QEBAPEAXI@Z.c)
 */

void __fastcall Windows::UI::Composition::SpriteVisual::SetShadow(
        Windows::UI::Composition::SpriteVisual *this,
        struct Windows::UI::Composition::CompositionShadow *a2)
{
  CSparseStorage *v2; // rdi
  __int64 v4; // r10
  int v5; // eax

  v2 = (Windows::UI::Composition::SpriteVisual *)((char *)this + 112);
  if ( a2 != CSparseStorage::GetReference((Windows::UI::Composition::SpriteVisual *)((char *)this + 112), 16) )
  {
    v5 = 0;
    if ( a2 )
      v5 = *((_DWORD *)a2 + 32);
    DirectComposition::CDevice::ResourceSetReferenceProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)(v4 + 24) + 456LL),
      *(_DWORD *)(v4 + 128),
      53,
      v5);
    CSparseStorage::SetReference(
      v2,
      16,
      a2,
      (const struct CSparseStorage::ReferenceAdapter *)&Windows::UI::Composition::SparsePropertyStore::g_adapter_NestableRuntimeClass);
  }
}
