/*
 * XREFs of ?PreRemoveItem@SceneNodeCollection@Scenes@Composition@UI@Windows@@UEAAXAEBV?$RefPtr@VSceneNode@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@Z @ 0x1801927B0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateRoot@SceneNode@Scenes@Composition@UI@Windows@@QEAAXPEAV12345@@Z @ 0x1801447E8 (-UpdateRoot@SceneNode@Scenes@Composition@UI@Windows@@QEAAXPEAV12345@@Z.c)
 */

void __fastcall Windows::UI::Composition::Scenes::SceneNodeCollection::PreRemoveItem(
        __int64 a1,
        Windows::UI::Composition::Scenes::SceneNode **a2)
{
  if ( *a2 )
  {
    *(_QWORD *)(*((_QWORD *)*a2 + 20) + 208LL) = 0LL;
    Windows::UI::Composition::Scenes::SceneNode::UpdateRoot(*a2, *a2);
  }
}
