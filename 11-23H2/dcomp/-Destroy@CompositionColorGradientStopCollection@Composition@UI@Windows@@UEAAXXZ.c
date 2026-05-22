/*
 * XREFs of ?Destroy@CompositionColorGradientStopCollection@Composition@UI@Windows@@UEAAXXZ @ 0x180012E00
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$VectorBasedCollection@V?$RefPtr@VSceneNode@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@Composition@UI@Windows@@QEAAXXZ @ 0x18000CEC0 (-Clear@-$VectorBasedCollection@V-$RefPtr@VSceneNode@Scenes@Composition@UI@Windows@@@WRL2@Microso.c)
 */

void __fastcall Windows::UI::Composition::CompositionColorGradientStopCollection::Destroy(
        Windows::UI::Composition::CompositionColorGradientStopCollection *this)
{
  *((_QWORD *)this + 24) = 0LL;
  Windows::UI::Composition::VectorBasedCollection<Microsoft::WRL2::RefPtr<Windows::UI::Composition::Scenes::SceneNode>>::Clear((__int64 *)this + 16);
  Windows::UI::Composition::CompositionObject::Destroy(this);
}
