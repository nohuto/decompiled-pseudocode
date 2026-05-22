/*
 * XREFs of ??1?$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@QEAA@XZ @ 0x1800A0EC8
 * Callers:
 *     _NonBamoInputDeliveryServer::NonBamoInputDeliveryServer_::_1_::dtor$6 @ 0x18006C75A (_NonBamoInputDeliveryServer--NonBamoInputDeliveryServer_--_1_--dtor$6.c)
 *     _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$3 @ 0x18006DCE6 (_InputDeliveryServer--InputDeliveryServer_--_1_--dtor$3.c)
 *     _CBaseInputObserverServer_11_::CBaseInputObserverServer_11__::_1_::dtor$0 @ 0x18006DD27 (_CBaseInputObserverServer_11_--CBaseInputObserverServer_11__--_1_--dtor$0.c)
 *     _PenEventsDispatcherPrincipal::PenEventsDispatcherPrincipal_::_1_::dtor$4 @ 0x18006E5A4 (_PenEventsDispatcherPrincipal--PenEventsDispatcherPrincipal_--_1_--dtor$4.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$16 @ 0x18006E98A (_DWMInputRouter--DWMInputRouter_--_1_--dtor$16.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$17 @ 0x18006E9A3 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$17.c)
 *     ??1ForegroundManager@@UEAA@XZ @ 0x1800A117C (--1ForegroundManager@@UEAA@XZ.c)
 *     ??1RIMRawInputProvider@@MEAA@XZ @ 0x1800D3684 (--1RIMRawInputProvider@@MEAA@XZ.c)
 *     ??1Win32kInterop@@UEAA@XZ @ 0x1800F82B8 (--1Win32kInterop@@UEAA@XZ.c)
 *     ??1InputConfigContextProvider@@EEAA@XZ @ 0x1801160DC (--1InputConfigContextProvider@@EEAA@XZ.c)
 *     ??_E?$CBaseInputObserverServer@$0L@@@MEAAPEAXI@Z @ 0x1801488A0 (--_E-$CBaseInputObserverServer@$0L@@@MEAAPEAXI@Z.c)
 *     ??1InputDeliveryServer@@UEAA@XZ @ 0x180173138 (--1InputDeliveryServer@@UEAA@XZ.c)
 *     ??1NonBamoInputDeliveryServer@@EEAA@XZ @ 0x1801737C4 (--1NonBamoInputDeliveryServer@@EEAA@XZ.c)
 *     ??1PenEventsDispatcherPrincipal@@UEAA@XZ @ 0x1801ADFCC (--1PenEventsDispatcherPrincipal@@UEAA@XZ.c)
 *     ??1DWMInputRouter@@MEAA@XZ @ 0x1801B7FD4 (--1DWMInputRouter@@MEAA@XZ.c)
 * Callees:
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18004CC48 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x18004E88C (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 */

__int64 __fastcall KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>::~KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v3; // r8

  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(a1 + 64, a2);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)(a1 + 8),
    0LL,
    v3);
  return Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)a1);
}
