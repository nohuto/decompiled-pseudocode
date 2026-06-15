/*
 * XREFs of ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140023E2C
 * Callers:
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x140002A9C (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?GetObjectCacheForEndpoint_UnderLock@CDeviceGraphObjectCacheManager@@AEAAPEAUIDeviceGraphObjectCache@@PEBG@Z @ 0x140017C5C (-GetObjectCacheForEndpoint_UnderLock@CDeviceGraphObjectCacheManager@@AEAAPEAUIDeviceGraphObjectC.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x14001C2FC (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z @ 0x140021C70 (-RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegis.c)
 *     ??1?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAA@XZ @ 0x140037E20 (--1-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RegisterDevice@CpuManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z @ 0x1400545D0 (-RegisterDevice@CpuManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z.c)
 *     ?GetBridgeSourceEndpoint@@YAJ_JPEAPEAUIBridgeSourceEndpointControl@@@Z @ 0x1400798B8 (-GetBridgeSourceEndpoint@@YAJ_JPEAPEAUIBridgeSourceEndpointControl@@@Z.c)
 *     ??$?RUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@0PEA_N@Z @ 0x14007BB08 (--$-RUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEA.c)
 *     ??$?RUIAudioDeviceModule@Devices@Media@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEAUIAudioDeviceModule@Devices@Media@Windows@@0PEA_N@Z @ 0x14007BC14 (--$-RUIAudioDeviceModule@Devices@Media@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEAUIAudioDeviceMo.c)
 *     ??$?RUIBuffer@Streams@Storage@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEAUIBuffer@Streams@Storage@Windows@@0PEA_N@Z @ 0x14007BD20 (--$-RUIBuffer@Streams@Storage@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEAUIBuffer@Streams@Storage.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(__int64 *a1)
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
