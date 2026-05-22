/*
 * XREFs of ?OnCollectionChanged@SceneComponentCollection@Scenes@Composition@UI@Windows@@UEAAXXZ @ 0x180192850
 * Callers:
 *     <none>
 * Callees:
 *     ?OnComponentsChanged@SceneNode@Scenes@Composition@UI@Windows@@QEAAXXZ @ 0x180143AF0 (-OnComponentsChanged@SceneNode@Scenes@Composition@UI@Windows@@QEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::Scenes::SceneComponentCollection::OnCollectionChanged(
        Windows::UI::Composition::Scenes::SceneComponentCollection *this)
{
  Windows::UI::Composition::Scenes::SceneNode *v1; // rcx

  v1 = (Windows::UI::Composition::Scenes::SceneNode *)*((_QWORD *)this + 9);
  if ( v1 )
    Windows::UI::Composition::Scenes::SceneNode::OnComponentsChanged(v1);
}
