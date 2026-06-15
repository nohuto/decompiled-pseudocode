/*
 * XREFs of ?AddAudioSystemEffectsPropertyStoreNotificationClient@CAPOProcessingHost@@AEAAJPEAUAUDIO_SYSTEMEFFECTS_PROPERTY_CHANGE_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x14006BFFC
 * Callers:
 *     ?RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z @ 0x1400227E0 (-RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1400190C0 (-IsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAudioSystemEffectPropertyChangeNotificationHandler@CAPOProcessingHost@@AEAAJPEAUIMMDevice@@U_GUID@@PEAPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@Z @ 0x14006C4DC (-GetAudioSystemEffectPropertyChangeNotificationHandler@CAPOProcessingHost@@AEAAJPEAUIMMDevice@@U.c)
 *     ?AddNotificationClient@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x140072CE8 (-AddNotificationClient@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAXPEAVCAPOProce.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAPOProcessingHost::AddAudioSystemEffectsPropertyStoreNotificationClient(
        CAPOProcessingHost *this,
        struct AUDIO_SYSTEMEFFECTS_PROPERTY_CHANGE_APO_NOTIFICATION_DESCRIPTOR *a2,
        struct CAPOProcessingHostObject *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  struct _GUID *v6; // r8
  struct IMMDevice *v7; // r10
  CAPOProcessingHost *v8; // r11
  int v9; // eax
  struct _GUID v11; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CAudioSystemEffectsPropertyChangeNotificationsHandler *v13; // [rsp+48h] [rbp+10h] BYREF

  if ( !*(_QWORD *)a2 )
  {
    v4 = -2147467261;
    v5 = 206LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)v4);
    return v4;
  }
  if ( IsEqualGUID((const struct _GUID *)((char *)a2 + 8), &GUID_00000000_0000_0000_0000_000000000000) )
  {
    v4 = -2147024809;
    v5 = 207LL;
    goto LABEL_3;
  }
  v13 = 0LL;
  v11 = *v6;
  v9 = CAPOProcessingHost::GetAudioSystemEffectPropertyChangeNotificationHandler(v8, v7, &v11, &v13);
  v4 = v9;
  if ( v9 >= 0 )
  {
    CAudioSystemEffectsPropertyChangeNotificationsHandler::AddNotificationClient(v13, a3);
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD2,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)(unsigned int)v9);
  }
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v13);
  return v4;
}
