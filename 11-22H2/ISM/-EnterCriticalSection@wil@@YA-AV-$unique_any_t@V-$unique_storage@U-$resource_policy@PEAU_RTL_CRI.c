/*
 * XREFs of ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x1800A5868
 * Callers:
 *     ?InterceptGamepadInput@GamepadInterceptionHelper@@QEAAXG_N@Z @ 0x18006A8E4 (-InterceptGamepadInput@GamepadInterceptionHelper@@QEAAXG_N@Z.c)
 *     ?start@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA?AU_GUID@@XZ @ 0x18006CEE0 (-start@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x1800A65AC (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 *     ?Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x1800A8678 (-Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSC.c)
 *     _lambda_ee4fb4173948ca8af83f1cabbba8acb3_::operator() @ 0x18010710C (_lambda_ee4fb4173948ca8af83f1cabbba8acb3_--operator().c)
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ @ 0x18015233C (-ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ.c)
 *     ?OnDisconnected@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x180152C90 (-OnDisconnected@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?TraceCurrentState@VirtualTouchpadControllerProxy@@SAXXZ @ 0x180154084 (-TraceCurrentState@VirtualTouchpadControllerProxy@@SAXXZ.c)
 *     ?GetCurrentContext@VirtualTouchpadContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x1801C97D0 (-GetCurrentContext@VirtualTouchpadContextProvider@@UEAAJPEAV-$variant@Umonostate@std@@UInputConf.c)
 *     ?OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z @ 0x1801C9970 (-OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z.c)
 *     ?OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z @ 0x1801C9B04 (-OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z.c)
 *     ?OnTouchpadUpdated@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z @ 0x1801C9C7C (-OnTouchpadUpdated@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z.c)
 * Callees:
 *     <none>
 */

struct _RTL_CRITICAL_SECTION **__fastcall wil::EnterCriticalSection(
        struct _RTL_CRITICAL_SECTION **a1,
        struct _RTL_CRITICAL_SECTION *a2)
{
  EnterCriticalSection(a2);
  *a1 = a2;
  return a1;
}
