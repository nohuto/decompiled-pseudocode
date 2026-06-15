/*
 * XREFs of ?InternalRelease@?$ComPtr@UIPolicyConfig@@@WRL@Microsoft@@IEAAKXZ @ 0x180047D64
 * Callers:
 *     ??1SpatialAudioIO@@UEAA@XZ @ 0x18000606C (--1SpatialAudioIO@@UEAA@XZ.c)
 *     ??_GSpatialAudioDeviceStateReader@@UEAAPEAXI@Z @ 0x1800219A0 (--_GSpatialAudioDeviceStateReader@@UEAAPEAXI@Z.c)
 *     ?Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18002E520 (-Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ?RuntimeClassInitialize@CAudioResourceManager@@QEAAJXZ @ 0x180057E94 (-RuntimeClassInitialize@CAudioResourceManager@@QEAAJXZ.c)
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x1800594F8 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 *     ??4?$ComPtr@VCPolicyConfig@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180059F88 (--4-$ComPtr@VCPolicyConfig@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??$Initialize@USecurityPolicyEveryoneLocal@ServiceModuleBase@Internal@Windows@@$01UDefaultServerDescriptor@34@@ServiceModuleBase@Internal@Windows@@QEAAJEEEEPEAXK@Z @ 0x18005B950 (--$Initialize@USecurityPolicyEveryoneLocal@ServiceModuleBase@Internal@Windows@@$01UDefaultServer.c)
 *     ?RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x18005C7C8 (-RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ.c)
 *     ?GetExtendedProperties@CCompositeSystemEffect@@UEAAJPEAW4EXTENDED_APO_FLAGS@@@Z @ 0x1800655F0 (-GetExtendedProperties@CCompositeSystemEffect@@UEAAJPEAW4EXTENDED_APO_FLAGS@@@Z.c)
 *     _dynamic_atexit_destructor_for__g_PolicyConfig__ @ 0x18007E090 (_dynamic_atexit_destructor_for__g_PolicyConfig__.c)
 *     ??_GCAudioResourceManager@@UEAAPEAXI@Z @ 0x1800D8BE0 (--_GCAudioResourceManager@@UEAAPEAXI@Z.c)
 *     ??1ServiceModuleBase@Internal@Windows@@QEAA@XZ @ 0x1800EF0B8 (--1ServiceModuleBase@Internal@Windows@@QEAA@XZ.c)
 *     ?Uninitialize@ServiceModuleBase@Internal@Windows@@QEAAJXZ @ 0x1800F07F8 (-Uninitialize@ServiceModuleBase@Internal@Windows@@QEAAJXZ.c)
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x1800F0C74 (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 *     ??1SpatialAudioDevicePropertyWriter@@UEAA@XZ @ 0x1801426E8 (--1SpatialAudioDevicePropertyWriter@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@SpatialAudioDevicePropertyWriter@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x180142E30 (-RuntimeClassInitialize@SpatialAudioDevicePropertyWriter@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ??1?$ComPtr@UIPackageCatalog@ApplicationModel@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180159E0C (--1-$ComPtr@UIPackageCatalog@ApplicationModel@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1AtmosCheck@@UEAA@XZ @ 0x18015A088 (--1AtmosCheck@@UEAA@XZ.c)
 *     ?UnregisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x18015DE6C (-UnregisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IPolicyConfig>::InternalRelease(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
