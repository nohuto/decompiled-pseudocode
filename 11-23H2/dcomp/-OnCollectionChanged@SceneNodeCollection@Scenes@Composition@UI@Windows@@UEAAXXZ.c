/*
 * XREFs of ?OnCollectionChanged@SceneNodeCollection@Scenes@Composition@UI@Windows@@UEAAXXZ @ 0x1801926D0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnChildrenChanged@SceneNode@Scenes@Composition@UI@Windows@@QEAAXXZ @ 0x180143AA0 (-OnChildrenChanged@SceneNode@Scenes@Composition@UI@Windows@@QEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::Scenes::SceneNodeCollection::OnCollectionChanged(
        Windows::UI::Composition::Scenes::SceneNodeCollection *this)
{
  Windows::UI::Composition::Scenes::SceneNode *v1; // rcx

  v1 = (Windows::UI::Composition::Scenes::SceneNode *)*((_QWORD *)this + 9);
  if ( v1 )
    Windows::UI::Composition::Scenes::SceneNode::OnChildrenChanged(v1);
}
