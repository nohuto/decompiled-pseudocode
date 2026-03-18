/*
 * XREFs of HUBMISC_RemoveDeviceInfoFromGlobalChildList @ 0x1C0030734
 * Callers:
 *     HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff @ 0x1C001F670 (HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff.c)
 *     HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup @ 0x1C001F720 (HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup.c)
 *     HUBDSM_RemovingDeviceInfoFromGlobalListOnReportedMissingOnHubStopOnDetach @ 0x1C001FDA0 (HUBDSM_RemovingDeviceInfoFromGlobalListOnReportedMissingOnHubStopOnDetach.c)
 *     HUBDSM_WaitingForPDORemovedOnDetachInConfigured @ 0x1C0020710 (HUBDSM_WaitingForPDORemovedOnDetachInConfigured.c)
 *     HUBDSM_RequestingDeviceCycleInReportingToPnp @ 0x1C0023410 (HUBDSM_RequestingDeviceCycleInReportingToPnp.c)
 *     HUBPDO_EvtDeviceSurpriseRemoval @ 0x1C007E890 (HUBPDO_EvtDeviceSurpriseRemoval.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBMISC_RemoveDeviceInfoFromGlobalChildList(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 2152) )
    return USBD_RemoveDeviceFromGlobalList();
  v1 = *(_QWORD *)(a1 + 8);
  if ( (*(_DWORD *)(v1 + 204) & 0x200) != 0 )
    _InterlockedAnd((volatile signed __int32 *)(v1 + 1336), 0xFFFFFFBF);
  if ( *(_QWORD *)(a1 + 2152) )
    return USBD_RemoveDeviceFromGlobalList();
  return result;
}
