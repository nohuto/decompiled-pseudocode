/*
 * XREFs of ?SetMonitorManager@TabletModeViewManagerProxy@@UEAAXPEAUIImmersiveMonitorManager@@@Z @ 0x1800FE160
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
