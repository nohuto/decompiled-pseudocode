/*
 * XREFs of ?OnComponentsChanged@SceneNode@Scenes@Composition@UI@Windows@@QEAAXXZ @ 0x180143AF0
 * Callers:
 *     ?OnCollectionChanged@SceneComponentCollection@Scenes@Composition@UI@Windows@@UEAAXXZ @ 0x180192850 (-OnCollectionChanged@SceneComponentCollection@Scenes@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     ?AddDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z @ 0x18003BDBC (-AddDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z.c)
 */

void __fastcall Windows::UI::Composition::Scenes::SceneNode::OnComponentsChanged(
        Windows::UI::Composition::Scenes::SceneNode *this)
{
  char v1; // al

  v1 = *((_BYTE *)this + 192);
  *((_BYTE *)this + 225) = 1;
  if ( (v1 & 1) == 0 )
  {
    *((_BYTE *)this + 192) = v1 | 1;
    DirectComposition::CDevice::AddDirtyRebuildableObject(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      (struct DirectComposition::CRebuildableObject *)(((unsigned __int64)this + 176) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  }
}
