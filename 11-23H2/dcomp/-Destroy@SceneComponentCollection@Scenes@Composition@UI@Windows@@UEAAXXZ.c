/*
 * XREFs of ?Destroy@SceneComponentCollection@Scenes@Composition@UI@Windows@@UEAAXXZ @ 0x1801926A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$VectorBasedCollection@V?$RefPtr@VSceneNode@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@Composition@UI@Windows@@QEAAXXZ @ 0x18000CEC0 (-Clear@-$VectorBasedCollection@V-$RefPtr@VSceneNode@Scenes@Composition@UI@Windows@@@WRL2@Microso.c)
 */

void __fastcall Windows::UI::Composition::Scenes::SceneComponentCollection::Destroy(
        Windows::UI::Composition::Scenes::SceneComponentCollection *this)
{
  *((_QWORD *)this + 25) = 0LL;
  Windows::UI::Composition::VectorBasedCollection<Microsoft::WRL2::RefPtr<Windows::UI::Composition::Scenes::SceneNode>>::Clear((__int64 *)this + 16);
  Windows::UI::Composition::CompositionObject::Destroy(this);
}
