/*
 * XREFs of ??1WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAA@XZ @ 0x1805A90AC
 * Callers:
 *     ??1HotkeyHandler@@UEAA@XZ @ 0x1805A903C (--1HotkeyHandler@@UEAA@XZ.c)
 *     ??4WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1805A9104 (--4WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x1805A9A60 (-HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z.c)
 *     _HotkeyHandler::HandleHotkey_::_1_::dtor$4 @ 0x1805AA544 (_HotkeyHandler--HandleHotkey_--_1_--dtor$4.c)
 *     _HotkeyHandler::HandleHotkey_::_1_::dtor$6 @ 0x1805AA550 (_HotkeyHandler--HandleHotkey_--_1_--dtor$6.c)
 *     ?_OnHotkeyModeEnd@HotkeyHandler@@AEAAXPEAUISnappedWindow@@W4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x1805AAF28 (-_OnHotkeyModeEnd@HotkeyHandler@@AEAAXPEAUISnappedWindow@@W4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@.c)
 *     _HotkeyHandler::_OnHotkeyModeEnd_::_1_::dtor$0 @ 0x1805AB057 (_HotkeyHandler--_OnHotkeyModeEnd_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180052854 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Par.c)
 */

void __fastcall CSnapComponentTelemetry::WindowArrangementHotkeyMode::~WindowArrangementHotkeyMode(
        volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&CSnapComponentTelemetry::WindowArrangementHotkeyMode::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
