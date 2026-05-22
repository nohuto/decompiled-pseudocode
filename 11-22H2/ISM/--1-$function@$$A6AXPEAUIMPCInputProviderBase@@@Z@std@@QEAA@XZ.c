/*
 * XREFs of ??1?$function@$$A6AXPEAUIMPCInputProviderBase@@@Z@std@@QEAA@XZ @ 0x1800B6C00
 * Callers:
 *     _Win32kInterop::ProcessMouseInputMessage_::_1_::dtor$18 @ 0x180081950 (_Win32kInterop--ProcessMouseInputMessage_--_1_--dtor$18.c)
 *     _Win32kInterop::ProcessMouseInputMessage_::_1_::dtor$19 @ 0x180081970 (_Win32kInterop--ProcessMouseInputMessage_--_1_--dtor$19.c)
 *     _ActivationWatcherBamoPrincipal::find_and_return_if_::_1_::dtor$0 @ 0x180081B9B (_ActivationWatcherBamoPrincipal--find_and_return_if_--_1_--dtor$0.c)
 *     _ActivationWatcherBamoPrincipal::find_and_remove_if_::_1_::dtor$0 @ 0x1800B824B (_ActivationWatcherBamoPrincipal--find_and_remove_if_--_1_--dtor$0.c)
 *     _MPCHolographicInputManager::ForEachActiveProvider_::_1_::dtor$0 @ 0x1800C6117 (_MPCHolographicInputManager--ForEachActiveProvider_--_1_--dtor$0.c)
 *     _Win32kInterop::DeliverToContextualProcessing_::_1_::dtor$0 @ 0x1801080C9 (_Win32kInterop--DeliverToContextualProcessing_--_1_--dtor$0.c)
 *     _Win32kInterop::DeliverToContextualProcessing_::_1_::dtor$1 @ 0x1801080D5 (_Win32kInterop--DeliverToContextualProcessing_--_1_--dtor$1.c)
 *     _CBaseInputObserverServer_11_::DeliverToApps_::_1_::dtor$0 @ 0x180156E56 (_CBaseInputObserverServer_11_--DeliverToApps_--_1_--dtor$0.c)
 *     _GestureHandler::GestureHandler_::_1_::dtor$0 @ 0x18016495F (_GestureHandler--GestureHandler_--_1_--dtor$0.c)
 *     _GestureHandler::GestureHandler_::_1_::dtor$12 @ 0x180164977 (_GestureHandler--GestureHandler_--_1_--dtor$12.c)
 *     _std::function_void___cdecl(long)_::function_void___cdecl(long)__::_1_::dtor$0 @ 0x18019B966 (_std--function_void___cdecl(long)_--function_void___cdecl(long)__--_1_--dtor$0.c)
 *     _AsyncPVPrincipal::AsyncPVPrincipal_::_1_::dtor$0 @ 0x18019BA87 (_AsyncPVPrincipal--AsyncPVPrincipal_--_1_--dtor$0.c)
 *     _AsyncPVPrincipal::AsyncPVPrincipal_::_1_::dtor$1 @ 0x18019BA93 (_AsyncPVPrincipal--AsyncPVPrincipal_--_1_--dtor$1.c)
 *     _AsyncPVPrincipal::AsyncPVPrincipal_::_1_::dtor$8 @ 0x18019BAB7 (_AsyncPVPrincipal--AsyncPVPrincipal_--_1_--dtor$8.c)
 *     _AsyncPVPrincipal::AsyncPVPrincipal_::_1_::dtor$3 @ 0x18019BAC3 (_AsyncPVPrincipal--AsyncPVPrincipal_--_1_--dtor$3.c)
 *     _AsyncStringPrincipal::AsyncStringPrincipal_::_1_::dtor$0 @ 0x18019C61F (_AsyncStringPrincipal--AsyncStringPrincipal_--_1_--dtor$0.c)
 *     _AsyncStringPrincipal::AsyncStringPrincipal_::_1_::dtor$1 @ 0x18019C62B (_AsyncStringPrincipal--AsyncStringPrincipal_--_1_--dtor$1.c)
 *     _AsyncStringPrincipal::AsyncStringPrincipal_::_1_::dtor$8 @ 0x18019C64F (_AsyncStringPrincipal--AsyncStringPrincipal_--_1_--dtor$8.c)
 *     _AsyncStringPrincipal::AsyncStringPrincipal_::_1_::dtor$3 @ 0x18019C65B (_AsyncStringPrincipal--AsyncStringPrincipal_--_1_--dtor$3.c)
 *     _AsyncHRESULTPrincipal::AsyncHRESULTPrincipal_::_1_::dtor$0 @ 0x18019D04B (_AsyncHRESULTPrincipal--AsyncHRESULTPrincipal_--_1_--dtor$0.c)
 *     _PenEventsDispatcherPrincipal::FireEvents_::_1_::dtor$0 @ 0x1801BC82C (_PenEventsDispatcherPrincipal--FireEvents_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::function<void (IMPCInputProviderBase *)>::~function<void (IMPCInputProviderBase *)>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
