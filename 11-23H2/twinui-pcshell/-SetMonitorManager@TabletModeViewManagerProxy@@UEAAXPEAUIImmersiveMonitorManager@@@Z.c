/*
 * XREFs of ?SetMonitorManager@TabletModeViewManagerProxy@@UEAAXPEAUIImmersiveMonitorManager@@@Z @ 0x18013A3A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TabletModeViewManagerProxy::SetMonitorManager(
        TabletModeViewManagerProxy *this,
        struct IImmersiveMonitorManager *a2)
{
  Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::operator=((char *)this + 24, a2);
}
