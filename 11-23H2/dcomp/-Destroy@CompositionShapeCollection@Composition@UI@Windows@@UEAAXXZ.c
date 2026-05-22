/*
 * XREFs of ?Destroy@CompositionShapeCollection@Composition@UI@Windows@@UEAAXXZ @ 0x18000CE90
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$VectorBasedCollection@V?$RefPtr@VSceneNode@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@Composition@UI@Windows@@QEAAXXZ @ 0x18000CEC0 (-Clear@-$VectorBasedCollection@V-$RefPtr@VSceneNode@Scenes@Composition@UI@Windows@@@WRL2@Microso.c)
 */

void __fastcall Windows::UI::Composition::CompositionShapeCollection::Destroy(
        Windows::UI::Composition::CompositionShapeCollection *this)
{
  *((_QWORD *)this + 23) = 0LL;
  Windows::UI::Composition::VectorBasedCollection<Microsoft::WRL2::RefPtr<Windows::UI::Composition::Scenes::SceneNode>>::Clear((char *)this + 128);
  Windows::UI::Composition::CompositionObject::Destroy(this);
}
