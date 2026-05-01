/*
 * XREFs of ?SetMonitorManager@CPPIAllUpViewService@@UEAAXPEAUIImmersiveMonitorManager@@@Z @ 0x18013A360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPPIAllUpViewService::SetMonitorManager(
        CPPIAllUpViewService *this,
        struct IImmersiveMonitorManager *a2)
{
  Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::operator=((char *)this + 32, a2);
}
