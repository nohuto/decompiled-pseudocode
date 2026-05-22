/*
 * XREFs of ?OnChildrenChanged@SceneNode@Scenes@Composition@UI@Windows@@QEAAXXZ @ 0x180143AA0
 * Callers:
 *     ?OnCollectionChanged@SceneNodeCollection@Scenes@Composition@UI@Windows@@UEAAXXZ @ 0x1801926D0 (-OnCollectionChanged@SceneNodeCollection@Scenes@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     ?AddDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z @ 0x18003BDBC (-AddDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z.c)
 */

void __fastcall Windows::UI::Composition::Scenes::SceneNode::OnChildrenChanged(
        Windows::UI::Composition::Scenes::SceneNode *this)
{
  char v1; // al

  v1 = *((_BYTE *)this + 192);
  *((_BYTE *)this + 224) = 1;
  if ( (v1 & 1) == 0 )
  {
    *((_BYTE *)this + 192) = v1 | 1;
    DirectComposition::CDevice::AddDirtyRebuildableObject(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      (struct DirectComposition::CRebuildableObject *)(((unsigned __int64)this + 176) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  }
}
