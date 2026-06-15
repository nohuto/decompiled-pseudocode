/*
 * XREFs of ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800E76DC
 * Callers:
 *     _AtmosCheck::QueryLicenseForSpatialSubtypeAndEndpoint_::_1_::dtor$2 @ 0x18007B700 (_AtmosCheck--QueryLicenseForSpatialSubtypeAndEndpoint_--_1_--dtor$2.c)
 *     _AtmosCheck::QueryLicenseForSpatialSubtypeAndEndpoint_::_1_::dtor$10 @ 0x18007B740 (_AtmosCheck--QueryLicenseForSpatialSubtypeAndEndpoint_--_1_--dtor$10.c)
 *     _AtmosCheck::PerformLicenseCheckInternalLegacy_::_1_::dtor$109 @ 0x18007B980 (_AtmosCheck--PerformLicenseCheckInternalLegacy_--_1_--dtor$109.c)
 *     _AtmosCheck::PerformLicenseCheckInternalLegacy_::_1_::dtor$114 @ 0x18007B9C0 (_AtmosCheck--PerformLicenseCheckInternalLegacy_--_1_--dtor$114.c)
 *     _CPlaybackNotifier::UpdateAudioPlaybackStatus_::_1_::dtor$0 @ 0x18007BA24 (_CPlaybackNotifier--UpdateAudioPlaybackStatus_--_1_--dtor$0.c)
 *     _CConstraintModel::Initialize_::_1_::dtor$7 @ 0x18007D31A (_CConstraintModel--Initialize_--_1_--dtor$7.c)
 *     _case_insensitive_hash::operator()_::_1_::dtor$0 @ 0x18007D644 (_case_insensitive_hash--operator()_--_1_--dtor$0.c)
 *     _GetCurrentLoopbackEndpointIdInternal_::_1_::dtor$0 @ 0x18010774D (_GetCurrentLoopbackEndpointIdInternal_--_1_--dtor$0.c)
 *     _CSharedStreamGroupProxy::RegisterForLoopbackEndpointChangeNotifications_::_1_::dtor$1 @ 0x180109912 (_CSharedStreamGroupProxy--RegisterForLoopbackEndpointChangeNotifications_--_1_--dtor$1.c)
 *     _CMonitorManager::CaptureMonitor::CaptureMonitor_::_1_::dtor$2 @ 0x18012BA04 (_CMonitorManager--CaptureMonitor--CaptureMonitor_--_1_--dtor$2.c)
 *     _AtmosCheck::CheckInstalledAppServicesAvailable_::_1_::dtor$1 @ 0x18015AC94 (_AtmosCheck--CheckInstalledAppServicesAvailable_--_1_--dtor$1.c)
 *     _AtmosCheck::EnableAllSpatialCapabilities_::_1_::dtor$1 @ 0x18015AE7E (_AtmosCheck--EnableAllSpatialCapabilities_--_1_--dtor$1.c)
 *     _AtmosCheck::GetCurrentEndpointsUnderLock_::_1_::dtor$1 @ 0x18015B23D (_AtmosCheck--GetCurrentEndpointsUnderLock_--_1_--dtor$1.c)
 *     _AtmosCheck::GetEndpointExtendedSpatialLicenseInfo_::_1_::dtor$3 @ 0x18015B78E (_AtmosCheck--GetEndpointExtendedSpatialLicenseInfo_--_1_--dtor$3.c)
 *     _AtmosCheck::GetLicenseStatusForEndpointId_::_1_::dtor$2 @ 0x18015BBC8 (_AtmosCheck--GetLicenseStatusForEndpointId_--_1_--dtor$2.c)
 *     _AtmosCheck::IsLogLicenseResult_::_1_::dtor$1 @ 0x18015C1BD (_AtmosCheck--IsLogLicenseResult_--_1_--dtor$1.c)
 *     _AtmosCheck::UpdateEndpointUnderLock_::_1_::dtor$1 @ 0x18015E240 (_AtmosCheck--UpdateEndpointUnderLock_--_1_--dtor$1.c)
 *     _AtmosCheck::UpdateLicenseMapForAllEndpoints_::_1_::dtor$4 @ 0x18015E5C3 (_AtmosCheck--UpdateLicenseMapForAllEndpoints_--_1_--dtor$4.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D2D00 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
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
