/*
 * XREFs of ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800E768C
 * Callers:
 *     _AtmosCheck::QueryLicenseForSpatialSubtypeAndEndpoint_::_1_::dtor$2 @ 0x18007B6D0 (_AtmosCheck--QueryLicenseForSpatialSubtypeAndEndpoint_--_1_--dtor$2.c)
 *     _AtmosCheck::QueryLicenseForSpatialSubtypeAndEndpoint_::_1_::dtor$10 @ 0x18007B710 (_AtmosCheck--QueryLicenseForSpatialSubtypeAndEndpoint_--_1_--dtor$10.c)
 *     _AtmosCheck::PerformLicenseCheckInternalLegacy_::_1_::dtor$109 @ 0x18007B950 (_AtmosCheck--PerformLicenseCheckInternalLegacy_--_1_--dtor$109.c)
 *     _AtmosCheck::PerformLicenseCheckInternalLegacy_::_1_::dtor$114 @ 0x18007B990 (_AtmosCheck--PerformLicenseCheckInternalLegacy_--_1_--dtor$114.c)
 *     _CPlaybackNotifier::UpdateAudioPlaybackStatus_::_1_::dtor$0 @ 0x18007B9F4 (_CPlaybackNotifier--UpdateAudioPlaybackStatus_--_1_--dtor$0.c)
 *     _CConstraintModel::Initialize_::_1_::dtor$7 @ 0x18007D2EA (_CConstraintModel--Initialize_--_1_--dtor$7.c)
 *     _case_insensitive_hash::operator()_::_1_::dtor$0 @ 0x18007D614 (_case_insensitive_hash--operator()_--_1_--dtor$0.c)
 *     _GetCurrentLoopbackEndpointIdInternal_::_1_::dtor$0 @ 0x1801076FD (_GetCurrentLoopbackEndpointIdInternal_--_1_--dtor$0.c)
 *     _CSharedStreamGroupProxy::RegisterForLoopbackEndpointChangeNotifications_::_1_::dtor$1 @ 0x1801098C2 (_CSharedStreamGroupProxy--RegisterForLoopbackEndpointChangeNotifications_--_1_--dtor$1.c)
 *     _CMonitorManager::CaptureMonitor::CaptureMonitor_::_1_::dtor$2 @ 0x18012B9B4 (_CMonitorManager--CaptureMonitor--CaptureMonitor_--_1_--dtor$2.c)
 *     _AtmosCheck::CheckInstalledAppServicesAvailable_::_1_::dtor$1 @ 0x18015AC44 (_AtmosCheck--CheckInstalledAppServicesAvailable_--_1_--dtor$1.c)
 *     _AtmosCheck::EnableAllSpatialCapabilities_::_1_::dtor$1 @ 0x18015AE2E (_AtmosCheck--EnableAllSpatialCapabilities_--_1_--dtor$1.c)
 *     _AtmosCheck::GetCurrentEndpointsUnderLock_::_1_::dtor$1 @ 0x18015B1ED (_AtmosCheck--GetCurrentEndpointsUnderLock_--_1_--dtor$1.c)
 *     _AtmosCheck::GetEndpointExtendedSpatialLicenseInfo_::_1_::dtor$3 @ 0x18015B73E (_AtmosCheck--GetEndpointExtendedSpatialLicenseInfo_--_1_--dtor$3.c)
 *     _AtmosCheck::GetLicenseStatusForEndpointId_::_1_::dtor$2 @ 0x18015BB78 (_AtmosCheck--GetLicenseStatusForEndpointId_--_1_--dtor$2.c)
 *     _AtmosCheck::IsLogLicenseResult_::_1_::dtor$1 @ 0x18015C16D (_AtmosCheck--IsLogLicenseResult_--_1_--dtor$1.c)
 *     _AtmosCheck::UpdateEndpointUnderLock_::_1_::dtor$1 @ 0x18015E1F0 (_AtmosCheck--UpdateEndpointUnderLock_--_1_--dtor$1.c)
 *     _AtmosCheck::UpdateLicenseMapForAllEndpoints_::_1_::dtor$4 @ 0x18015E573 (_AtmosCheck--UpdateLicenseMapForAllEndpoints_--_1_--dtor$4.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D2CB0 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

__int64 __fastcall std::wstring::~wstring(__int64 a1)
{
  unsigned __int64 v1; // rdx
  void *v3; // rcx
  __int64 result; // rax
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  void *v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 >= 8 )
  {
    v3 = *(void **)a1;
    v5 = 2 * v1 + 2;
    v6 = v3;
    if ( v5 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v6, &v5);
      v3 = v6;
    }
    operator delete(v3);
  }
  result = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)a1 = 0;
  return result;
}
