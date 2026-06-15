/*
 * XREFs of ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800C6A48
 * Callers:
 *     ??1?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@UEAA@XZ @ 0x180063180 (--1-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothCont.c)
 *     _AtmosCheck::UpdateEndpointUnderLock_::_1_::dtor$1 @ 0x18006E700 (_AtmosCheck--UpdateEndpointUnderLock_--_1_--dtor$1.c)
 *     _CConstraintModel::Initialize_::_1_::dtor$7 @ 0x180071868 (_CConstraintModel--Initialize_--_1_--dtor$7.c)
 *     _AtmosCheck::PerformLicenseCheckInternalLegacy_::_1_::dtor$25 @ 0x180071F58 (_AtmosCheck--PerformLicenseCheckInternalLegacy_--_1_--dtor$25.c)
 *     _AtmosCheck::QueryLicenseForSpatialSubtypeAndEndpoint_::_1_::dtor$10 @ 0x180071F70 (_AtmosCheck--QueryLicenseForSpatialSubtypeAndEndpoint_--_1_--dtor$10.c)
 *     _case_insensitive_hash::operator()_::_1_::dtor$0 @ 0x180071FB0 (_case_insensitive_hash--operator()_--_1_--dtor$0.c)
 *     _CMonitorManager::CaptureMonitor::CaptureMonitor_::_1_::dtor$2 @ 0x18011934E (_CMonitorManager--CaptureMonitor--CaptureMonitor_--_1_--dtor$2.c)
 *     _AtmosCheck::CheckInstalledAppServicesAvailable_::_1_::dtor$1 @ 0x180153AD4 (_AtmosCheck--CheckInstalledAppServicesAvailable_--_1_--dtor$1.c)
 *     _AtmosCheck::EnableAllSpatialCapabilities_::_1_::dtor$1 @ 0x180153CB3 (_AtmosCheck--EnableAllSpatialCapabilities_--_1_--dtor$1.c)
 *     _AtmosCheck::GetCurrentEndpointsUnderLock_::_1_::dtor$1 @ 0x18015413A (_AtmosCheck--GetCurrentEndpointsUnderLock_--_1_--dtor$1.c)
 *     _AtmosCheck::GetEndpointExtendedSpatialLicenseInfo_::_1_::dtor$3 @ 0x1801546CE (_AtmosCheck--GetEndpointExtendedSpatialLicenseInfo_--_1_--dtor$3.c)
 *     _AtmosCheck::GetLicenseStatusForEndpointId_::_1_::dtor$2 @ 0x180154AC7 (_AtmosCheck--GetLicenseStatusForEndpointId_--_1_--dtor$2.c)
 *     _AtmosCheck::IsLogLicenseResult_::_1_::dtor$1 @ 0x180155108 (_AtmosCheck--IsLogLicenseResult_--_1_--dtor$1.c)
 *     _AtmosCheck::UpdateEndpointUnderLock_::_1_::dtor$1_0 @ 0x180156F2F (_AtmosCheck--UpdateEndpointUnderLock_--_1_--dtor$1_0.c)
 *     _AtmosCheck::UpdateLicenseMapForAllEndpoints_::_1_::dtor$4 @ 0x180157277 (_AtmosCheck--UpdateLicenseMapForAllEndpoints_--_1_--dtor$4.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::wstring::~wstring(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 >= 8 )
    std::_Deallocate<16,0>(*(void **)a1, 2 * v1 + 2);
  result = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)a1 = 0;
  return result;
}
