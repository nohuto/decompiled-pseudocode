/*
 * XREFs of ??1?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@QEAA@XZ @ 0x1800104D0
 * Callers:
 *     _lambda_e6f097a164894528a3d2285fefe0cca7_::operator() @ 0x180069720 (_lambda_e6f097a164894528a3d2285fefe0cca7_--operator().c)
 *     __lambda_e6f097a164894528a3d2285fefe0cca7_::operator()_::_1_::dtor$0 @ 0x1800699E4 (__lambda_e6f097a164894528a3d2285fefe0cca7_--operator()_--_1_--dtor$0.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$0 @ 0x18006CEE6 (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::AugmentOEMSpeechProcessingSupport_::_1_::dtor$3 @ 0x18006EF70 (_CEndpointCharacteristics--AugmentOEMSpeechProcessingSupport_--_1_--dtor$3.c)
 *     _SystemEffectChainDescriptor::MarkAsUnresolved_::_1_::dtor$0 @ 0x18006F13B (_SystemEffectChainDescriptor--MarkAsUnresolved_--_1_--dtor$0.c)
 *     _std::function_long___cdecl(SystemEffectDescriptor___SystemEffectChainDescriptor__)_::function_long___cdecl(SystemEffectDescriptor___SystemEffectChainDescriptor__)__::_1_::dtor$0 @ 0x18006F1C3 (_std--function_long___cdecl(SystemEffectDescriptor___SystemEffectChainDescriptor__)_--function_l.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$0_0 @ 0x18006F204 (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$0_0.c)
 *     _CEndpointCharacteristics::GetInitializedSystemEffectInterface_::_1_::dtor$38 @ 0x180070240 (_CEndpointCharacteristics--GetInitializedSystemEffectInterface_--_1_--dtor$38.c)
 *     _AudioSessionManagerProvider::DisconnectSessionsForTsSession_::_1_::dtor$0 @ 0x1800E2720 (_AudioSessionManagerProvider--DisconnectSessionsForTsSession_--_1_--dtor$0.c)
 *     _AudioSessionManagerProvider::NotifyAudioDGTerminated_::_1_::dtor$0 @ 0x1800E295A (_AudioSessionManagerProvider--NotifyAudioDGTerminated_--_1_--dtor$0.c)
 *     _AudioSessionManagerProvider::NotifySessionTerminate_::_1_::dtor$0 @ 0x1800E29EA (_AudioSessionManagerProvider--NotifySessionTerminate_--_1_--dtor$0.c)
 *     _AudioSessionManagerProvider::RevokeSessionsWithoutDataFlowAccess_::_1_::dtor$0 @ 0x1800E2B8F (_AudioSessionManagerProvider--RevokeSessionsWithoutDataFlowAccess_--_1_--dtor$0.c)
 *     _AudioSessionManagerProvider::Shutdown_::_1_::dtor$0 @ 0x1800E2CEE (_AudioSessionManagerProvider--Shutdown_--_1_--dtor$0.c)
 *     _CDeviceGraphObjectsStore::FindFirstMatchingSaDevice_::_1_::dtor$0 @ 0x1800FC3BB (_CDeviceGraphObjectsStore--FindFirstMatchingSaDevice_--_1_--dtor$0.c)
 *     _DeviceGraphStore::FindSaDeviceByResourceId_::_1_::dtor$0 @ 0x1800FC580 (_DeviceGraphStore--FindSaDeviceByResourceId_--_1_--dtor$0.c)
 *     _DeviceGraphStore::GetAllStreamGroups_::_1_::dtor$0 @ 0x1800FC7DB (_DeviceGraphStore--GetAllStreamGroups_--_1_--dtor$0.c)
 *     _DeviceGraphStore::GetFilteredSubmixes_::_1_::dtor$0 @ 0x1800FCBD0 (_DeviceGraphStore--GetFilteredSubmixes_--_1_--dtor$0.c)
 *     _DeviceGraphStore::GetOffloadStreamGroups_::_1_::dtor$0 @ 0x1800FCE7F (_DeviceGraphStore--GetOffloadStreamGroups_--_1_--dtor$0.c)
 *     _DeviceGraphStore::GetSubmixHelper_::_1_::dtor$0 @ 0x1800FD18A (_DeviceGraphStore--GetSubmixHelper_--_1_--dtor$0.c)
 *     _DeviceGraphStore::GetSubmixesForApplication_::_1_::dtor$0 @ 0x1800FD29E (_DeviceGraphStore--GetSubmixesForApplication_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::function<bool (ISaDeviceProxy *)>::~function<bool (ISaDeviceProxy *)>(__int64 a1, __int64 a2)
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
