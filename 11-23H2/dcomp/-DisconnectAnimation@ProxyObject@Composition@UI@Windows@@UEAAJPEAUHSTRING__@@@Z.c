/*
 * XREFs of ?DisconnectAnimation@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z @ 0x180147190
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBindingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationBindingManager@234@XZ @ 0x18004EA04 (-GetBindingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationBindingManager@234@.c)
 */

int __fastcall Windows::UI::Composition::ProxyObject::DisconnectAnimation(
        Windows::UI::Composition::CompositorCommon **this,
        HSTRING a2)
{
  Windows::UI::Composition::AnimationBindingManager *BindingManager; // rax

  BindingManager = Windows::UI::Composition::CompositorCommon::GetBindingManager(this[3]);
  return Windows::UI::Composition::AnimationBindingManager::UnregisterAnimationTarget(
           BindingManager,
           (struct Windows::UI::Composition::ProxyObject *)this,
           a2,
           0);
}
