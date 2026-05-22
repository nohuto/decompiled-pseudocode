/*
 * XREFs of ??1?$function@$$A6AXPEAUIMPCInputProviderBase@@@Z@std@@QEAA@XZ @ 0x18004CA94
 * Callers:
 *     _ActivationWatcherBamoPrincipal::find_and_return_if_::_1_::dtor$0 @ 0x18004CCD1 (_ActivationWatcherBamoPrincipal--find_and_return_if_--_1_--dtor$0.c)
 *     _Win32kInterop::ProcessMouseInputMessage_::_1_::dtor$37 @ 0x180057C90 (_Win32kInterop--ProcessMouseInputMessage_--_1_--dtor$37.c)
 *     _Win32kInterop::ProcessMouseInputMessage_::_1_::dtor$38 @ 0x180057CB0 (_Win32kInterop--ProcessMouseInputMessage_--_1_--dtor$38.c)
 *     _ActivationWatcherBamoPrincipal::find_and_remove_if_::_1_::dtor$0 @ 0x18008EBC3 (_ActivationWatcherBamoPrincipal--find_and_remove_if_--_1_--dtor$0.c)
 *     _MPCHolographicInputManager::ForEachActiveProvider_::_1_::dtor$0 @ 0x18009D4F7 (_MPCHolographicInputManager--ForEachActiveProvider_--_1_--dtor$0.c)
 *     _Win32kInterop::DeliverToContextualProcessing_::_1_::dtor$0 @ 0x1800DF9C1 (_Win32kInterop--DeliverToContextualProcessing_--_1_--dtor$0.c)
 *     _Win32kInterop::DeliverToContextualProcessing_::_1_::dtor$1 @ 0x1800DF9CD (_Win32kInterop--DeliverToContextualProcessing_--_1_--dtor$1.c)
 *     _CBaseInputObserverServer_12_::DeliverToApps_::_1_::dtor$0 @ 0x18012E496 (_CBaseInputObserverServer_12_--DeliverToApps_--_1_--dtor$0.c)
 *     _std::function_void___cdecl(long)_::function_void___cdecl(long)__::_1_::dtor$0 @ 0x18016E466 (_std--function_void___cdecl(long)_--function_void___cdecl(long)__--_1_--dtor$0.c)
 *     _AsyncPVPrincipal::AsyncPVPrincipal_::_1_::dtor$0 @ 0x18016E587 (_AsyncPVPrincipal--AsyncPVPrincipal_--_1_--dtor$0.c)
 *     _AsyncPVPrincipal::AsyncPVPrincipal_::_1_::dtor$1 @ 0x18016E593 (_AsyncPVPrincipal--AsyncPVPrincipal_--_1_--dtor$1.c)
 *     _AsyncPVPrincipal::AsyncPVPrincipal_::_1_::dtor$8 @ 0x18016E5B7 (_AsyncPVPrincipal--AsyncPVPrincipal_--_1_--dtor$8.c)
 *     _AsyncPVPrincipal::AsyncPVPrincipal_::_1_::dtor$3 @ 0x18016E5C3 (_AsyncPVPrincipal--AsyncPVPrincipal_--_1_--dtor$3.c)
 *     _AsyncStringPrincipal::AsyncStringPrincipal_::_1_::dtor$0 @ 0x18016F08F (_AsyncStringPrincipal--AsyncStringPrincipal_--_1_--dtor$0.c)
 *     _AsyncStringPrincipal::AsyncStringPrincipal_::_1_::dtor$1 @ 0x18016F09B (_AsyncStringPrincipal--AsyncStringPrincipal_--_1_--dtor$1.c)
 *     _AsyncStringPrincipal::AsyncStringPrincipal_::_1_::dtor$8 @ 0x18016F0BF (_AsyncStringPrincipal--AsyncStringPrincipal_--_1_--dtor$8.c)
 *     _AsyncStringPrincipal::AsyncStringPrincipal_::_1_::dtor$3 @ 0x18016F0CB (_AsyncStringPrincipal--AsyncStringPrincipal_--_1_--dtor$3.c)
 *     _AsyncHRESULTPrincipal::AsyncHRESULTPrincipal_::_1_::dtor$0 @ 0x18016FA3B (_AsyncHRESULTPrincipal--AsyncHRESULTPrincipal_--_1_--dtor$0.c)
 *     _PenEventsDispatcherPrincipal::FireEvents_::_1_::dtor$0 @ 0x180190618 (_PenEventsDispatcherPrincipal--FireEvents_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
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
