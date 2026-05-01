/*
 * XREFs of ?SetMonitorManager@CAllUpViewService@@UEAAXPEAUIImmersiveMonitorManager@@@Z @ 0x1800FE100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAllUpViewService::SetMonitorManager(CAllUpViewService *this, struct IImmersiveMonitorManager *a2)
{
  Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::operator=((char *)this + 40, a2);
}
