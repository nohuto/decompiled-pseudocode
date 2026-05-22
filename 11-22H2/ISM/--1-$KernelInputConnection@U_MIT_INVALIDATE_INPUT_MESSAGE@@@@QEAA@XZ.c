/*
 * XREFs of ??1?$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@QEAA@XZ @ 0x1800B34F0
 * Callers:
 *     _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$3 @ 0x18008030F (_InputDeliveryServer--InputDeliveryServer_--_1_--dtor$3.c)
 *     _CBaseInputObserverServer_11_::CBaseInputObserverServer_11__::_1_::dtor$0 @ 0x180080350 (_CBaseInputObserverServer_11_--CBaseInputObserverServer_11__--_1_--dtor$0.c)
 *     _PenEventsDispatcherPrincipal::PenEventsDispatcherPrincipal_::_1_::dtor$4 @ 0x180080C25 (_PenEventsDispatcherPrincipal--PenEventsDispatcherPrincipal_--_1_--dtor$4.c)
 *     _NonBamoInputDeliveryServer::NonBamoInputDeliveryServer_::_1_::dtor$6 @ 0x180082388 (_NonBamoInputDeliveryServer--NonBamoInputDeliveryServer_--_1_--dtor$6.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$17 @ 0x180083307 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$17.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$18 @ 0x180083320 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$18.c)
 *     ??1ForegroundManager@@UEAA@XZ @ 0x1800B37A4 (--1ForegroundManager@@UEAA@XZ.c)
 *     ??1RIMRawInputProvider@@MEAA@XZ @ 0x1800E25C0 (--1RIMRawInputProvider@@MEAA@XZ.c)
 *     ??1Win32kInterop@@UEAA@XZ @ 0x180106D44 (--1Win32kInterop@@UEAA@XZ.c)
 *     ??1InputConfigContextProvider@@EEAA@XZ @ 0x18012414C (--1InputConfigContextProvider@@EEAA@XZ.c)
 *     ??_E?$CBaseInputObserverServer@$0L@@@MEAAPEAXI@Z @ 0x180156B80 (--_E-$CBaseInputObserverServer@$0L@@@MEAAPEAXI@Z.c)
 *     ??1InputDeliveryServer@@UEAA@XZ @ 0x180180F48 (--1InputDeliveryServer@@UEAA@XZ.c)
 *     ??1NonBamoInputDeliveryServer@@EEAA@XZ @ 0x1801815D4 (--1NonBamoInputDeliveryServer@@EEAA@XZ.c)
 *     ??1PenEventsDispatcherPrincipal@@UEAA@XZ @ 0x1801BBFAC (--1PenEventsDispatcherPrincipal@@UEAA@XZ.c)
 *     ??1DWMInputRouter@@MEAA@XZ @ 0x1801C56F4 (--1DWMInputRouter@@MEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x18004D390 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18004D3D4 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
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
