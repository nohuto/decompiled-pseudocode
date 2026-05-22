/*
 * XREFs of ?Destroy@SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@UEAAXXZ @ 0x180133660
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z @ 0x1800094A4 (-RemoveDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 */

void __fastcall Windows::UI::Composition::Scenes::SceneMeshRendererComponent::Destroy(
        Microsoft::WRL2::NestableRuntimeClass **this)
{
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(this + 31);
  if ( ((_BYTE)this[25] & 1) != 0 )
    DirectComposition::CDevice::RemoveDirtyRebuildableObject(
      this[26],
      (struct DirectComposition::CRebuildableObject *)((unsigned __int64)(this + 23) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  Windows::UI::Composition::ProxyObject::Destroy((Windows::UI::Composition::ProxyObject *)this);
}
