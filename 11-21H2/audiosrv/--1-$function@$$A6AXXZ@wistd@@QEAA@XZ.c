/*
 * XREFs of ??1?$function@$$A6AXXZ@wistd@@QEAA@XZ @ 0x1800E3AE0
 * Callers:
 *     ??1?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@UEAA@XZ @ 0x1800E3C00 (--1-$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@UEAA@XZ.c)
 *     ?SetUpAudioEffectsChangedWnfState@CAudioStream@@IEAAJXZ @ 0x1800E5954 (-SetUpAudioEffectsChangedWnfState@CAudioStream@@IEAAJXZ.c)
 *     _CAudioStream::SetUpAudioEffectsChangedWnfState_::_1_::dtor$2 @ 0x1800E5C59 (_CAudioStream--SetUpAudioEffectsChangedWnfState_--_1_--dtor$2.c)
 *     ?RegisterForLoopbackEndpointChangeNotifications@CAecAttributes@@QEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x180105D2C (-RegisterForLoopbackEndpointChangeNotifications@CAecAttributes@@QEAAJAEAVWeakRef@WRL@Microsoft@@.c)
 *     ?PerformLicenseCheckHelperLegacy@AtmosCheck@@AEAAXPEAUHSTRING__@@HV?$function@$$A6AJXZ@wistd@@PEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x180155A3C (-PerformLicenseCheckHelperLegacy@AtmosCheck@@AEAAXPEAUHSTRING__@@HV-$function@$$A6AJXZ@wistd@@PE.c)
 *     _AtmosCheck::PerformLicenseCheckHelperLegacy_::_1_::dtor$0 @ 0x180155AEE (_AtmosCheck--PerformLicenseCheckHelperLegacy_--_1_--dtor$0.c)
 *     ?RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ @ 0x180156110 (-RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::function<void (void)>::~function<void (void)>(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
  return result;
}
