/*
 * XREFs of ?AddEndpointVolumeNotificationClient@CAPOProcessingHost@@AEAAJW4APO_NOTIFICATION_TYPE@@PEAUAUDIO_ENDPOINT_VOLUME_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x14006C394
 * Callers:
 *     ?RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z @ 0x1400227E0 (-RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetEndpointNotificationHandler@CAPOProcessingHost@@AEAAJPEAUIMMDevice@@PEAPEAVCAPOEndpointNotificationsHandler@@@Z @ 0x14006CCCC (-GetEndpointNotificationHandler@CAPOProcessingHost@@AEAAJPEAUIMMDevice@@PEAPEAVCAPOEndpointNotif.c)
 *     ?AddEndpointVolumeNotificationClient@CAPOEndpointNotificationsHandler@@QEAAXW4APO_NOTIFICATION_TYPE@@PEAVCAPOProcessingHostObject@@@Z @ 0x140071A98 (-AddEndpointVolumeNotificationClient@CAPOEndpointNotificationsHandler@@QEAAXW4APO_NOTIFICATION_T.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAPOProcessingHost::AddEndpointVolumeNotificationClient(
        CAPOProcessingHost *a1,
        unsigned int a2,
        struct IMMDevice **a3,
        __int64 a4)
{
  struct IMMDevice *v6; // rdx
  unsigned int v7; // ebx
  int EndpointNotificationHandler; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CAPOEndpointNotificationsHandler *v11; // [rsp+40h] [rbp+18h] BYREF

  v6 = *a3;
  if ( *a3 )
  {
    v11 = 0LL;
    EndpointNotificationHandler = CAPOProcessingHost::GetEndpointNotificationHandler(a1, v6, &v11);
    v7 = EndpointNotificationHandler;
    if ( EndpointNotificationHandler >= 0 )
    {
      CAPOEndpointNotificationsHandler::AddEndpointVolumeNotificationClient(v11, a2, a4);
      v7 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC5,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
        (const char *)(unsigned int)EndpointNotificationHandler);
    }
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v11);
  }
  else
  {
    v7 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC2,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)0x80004003LL);
  }
  return v7;
}
