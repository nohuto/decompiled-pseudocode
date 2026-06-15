/*
 * XREFs of ?AddEndpointVolumeNotificationClient@CAPOEndpointNotificationsHandler@@QEAAXW4APO_NOTIFICATION_TYPE@@PEAVCAPOProcessingHostObject@@@Z @ 0x140071A48
 * Callers:
 *     ?AddEndpointVolumeNotificationClient@CAPOProcessingHost@@AEAAJW4APO_NOTIFICATION_TYPE@@PEAUAUDIO_ENDPOINT_VOLUME_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x14006C344 (-AddEndpointVolumeNotificationClient@CAPOProcessingHost@@AEAAJW4APO_NOTIFICATION_TYPE@@PEAUAUDIO.c)
 * Callees:
 *     ?AddEndpointVolumeNotificationClient@CAPOEndpointNotificationsHandler@@AEAAXAEAV?$forward_list@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAVCAPOProcessingHostObject@@@Z @ 0x140071978 (-AddEndpointVolumeNotificationClient@CAPOEndpointNotificationsHandler@@AEAAXAEAV-$forward_list@V.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAPOEndpointNotificationsHandler::AddEndpointVolumeNotificationClient(__int64 a1, int a2, __int64 a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  _QWORD *v7; // rdx

  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
  v7 = (_QWORD *)(a1 + 152);
  if ( a2 != 1 )
    v7 = (_QWORD *)(a1 + 160);
  CAPOEndpointNotificationsHandler::AddEndpointVolumeNotificationClient((CAPOEndpointNotificationsHandler *)a1, v7, a3);
  if ( v6 )
    LeaveCriticalSection(v6);
}
