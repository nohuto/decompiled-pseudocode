/*
 * XREFs of ?AddMicBoostNotificationClient@CAPOProcessingHost@@AEAAJPEAUAUDIO_MICROPHONE_BOOST_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x14002D628
 * Callers:
 *     ?RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z @ 0x1400227E0 (-RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMicBoostNotificationHandler@CAPOProcessingHost@@AEAAJPEAUIMMDevice@@PEAPEAVCMicBoostNotificationsHandler@@@Z @ 0x14006D13C (-GetMicBoostNotificationHandler@CAPOProcessingHost@@AEAAJPEAUIMMDevice@@PEAPEAVCMicBoostNotifica.c)
 *     ?AddNotificationClient@CMicBoostNotificationsHandler@@QEAAJPEAVCAPOProcessingHostObject@@@Z @ 0x140078038 (-AddNotificationClient@CMicBoostNotificationsHandler@@QEAAJPEAVCAPOProcessingHostObject@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAPOProcessingHost::AddMicBoostNotificationClient(
        CAPOProcessingHost *this,
        struct IMMDevice **a2,
        struct CAPOProcessingHostObject *a3)
{
  struct IMMDevice *v4; // rdx
  int MicBoostNotificationHandler; // ebx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CMicBoostNotificationsHandler *v9; // [rsp+38h] [rbp+10h] BYREF

  v4 = *a2;
  if ( v4 )
  {
    v9 = 0LL;
    MicBoostNotificationHandler = CAPOProcessingHost::GetMicBoostNotificationHandler(this, v4, &v9);
    if ( MicBoostNotificationHandler >= 0 )
    {
      CMicBoostNotificationsHandler::AddNotificationClient(v9, a3);
      MicBoostNotificationHandler = 0;
    }
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v9);
  }
  else
  {
    MicBoostNotificationHandler = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFF,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)0x80004003LL,
      v7);
  }
  return (unsigned int)MicBoostNotificationHandler;
}
