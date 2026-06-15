/*
 * XREFs of ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000CCE0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_318849112bdacfedbf03f674f146fe6c__void_::_Do_call @ 0x180030B20 (std--_Func_impl_no_alloc__lambda_318849112bdacfedbf03f674f146fe6c__void_--_Do_call.c)
 * Callees:
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x180005D80 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x180006BD0 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x180007E90 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?IsUnrestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x180008BA0 (-IsUnrestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ @ 0x18000A5D0 (-IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ.c)
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x18000AD90 (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 *     ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F510 (--1-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAUIDuckingController@@PEAH@Z @ 0x18000FAF0 (-TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAUIDuckingController@@PEAH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x1800135B0 (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 *     ??$try_com_query_to@UIDuckingController@@AEAPEAUIAudioStreamInfo@@@wil@@YA_NAEAPEAUIAudioStreamInfo@@PEAPEAUIDuckingController@@@Z @ 0x180015AA4 (--$try_com_query_to@UIDuckingController@@AEAPEAUIAudioStreamInfo@@@wil@@YA_NAEAPEAUIAudioStreamI.c)
 *     ?OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x1800221B8 (-OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioS.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x180026F9C (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     ?RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ @ 0x180029174 (-RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ.c)
 *     ?SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180029E8C (-SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 *     ?StartInactivityTimer@CProcess@@QEAAXXZ @ 0x18002A39C (-StartInactivityTimer@CProcess@@QEAAXXZ.c)
 *     ?SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ @ 0x18002F23C (-SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ.c)
 *     ?StreamTypeToString@@YAPEBGW4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x18003AF58 (-StreamTypeToString@@YAPEBGW4SYSTEM_AUDIO_STREAM_TYPE@@@Z.c)
 *     McTemplateU0zqq_EventWriteTransfer @ 0x18003AF7C (McTemplateU0zqq_EventWriteTransfer.c)
 *     WPP_SF_dSd @ 0x18003B020 (WPP_SF_dSd.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::OnStreamStopped(
        CApplicationManager *this,
        struct CProcess *a2,
        struct IAudioSessionInfo *a3,
        struct IAudioStreamInfo *a4)
{
  CApplicationManager *v6; // rsi
  char v7; // bl
  unsigned int v8; // eax
  __int64 v9; // rax
  int v10; // r8d
  unsigned int v11; // eax
  CProcess *v12; // rbx
  int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int16 *v17; // r14
  unsigned __int8 v18; // al
  int v19; // edx
  int v20; // ecx
  CProcess *v21; // rax
  struct IDuckingController *v22; // rbx
  int v23; // [rsp+20h] [rbp-60h]
  int v24; // [rsp+40h] [rbp-40h] BYREF
  struct IDuckingController *v25; // [rsp+48h] [rbp-38h] BYREF
  CApplication *v26[4]; // [rsp+50h] [rbp-30h] BYREF
  char v27; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  CApplicationManager *v29; // [rsp+B0h] [rbp+30h] BYREF
  CProcess *v30; // [rsp+B8h] [rbp+38h] BYREF
  struct IAudioStreamInfo *v31; // [rsp+C8h] [rbp+48h] BYREF

  v31 = a4;
  v30 = a2;
  v29 = this;
  v6 = g_ApplicationManager;
  v26[0] = *((CApplication **)a2 + 28);
  if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v7 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 48LL))(a4);
    v8 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 56LL))(a4);
    v9 = StreamTypeToString(v8);
    WPP_SF_dSd(*((_QWORD *)WPP_GLOBAL_Control + 2), 11, v10, *((_DWORD *)v30 + 40), v9, v7);
  }
  v11 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 48LL))(a4);
  v12 = v30;
  if ( v11 >= 0x18 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAD,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\workitem.cpp",
      (const char *)0x80070057LL,
      v23);
    return 2147942487LL;
  }
  LODWORD(v29) = v11;
  if ( !(*(unsigned int (__fastcall **)(CProcess *))(*(_QWORD *)v30 + 96LL))(v30) )
    goto LABEL_12;
  v14 = (int)v29;
  if ( !dword_180053FA0[(unsigned int)v29] )
    goto LABEL_13;
  if ( (*(unsigned int (__fastcall **)(CProcess *))(*(_QWORD *)v12 + 136LL))(v12)
    || (*(unsigned int (__fastcall **)(CProcess *))(*(_QWORD *)v12 + 376LL))(v12) )
  {
LABEL_12:
    v14 = (int)v29;
  }
  else
  {
    v14 = 0;
    LODWORD(v29) = 0;
  }
LABEL_13:
  if ( v14 == 3 && !(*(unsigned int (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 56LL))(a4) )
    CDuckingManager::OnRenderCommunicationsStreamStateChanged(v15, a3, v16, 0LL);
  v26[1] = (CApplication *)&v30;
  v26[2] = (CApplication *)v26;
  v26[3] = (CApplication *)&v29;
  v27 = 1;
  v17 = (unsigned __int16 *)(*(__int64 (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)a3 + 72LL))(a3);
  v18 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 64LL))(a4);
  CProcess::UpdateStreamCountAndProcessCategory(
    v30,
    v17,
    (unsigned int)v29,
    0,
    v18,
    &v24,
    (enum _APPLICATION_CATEGORY *)&v25);
  if ( v24 && (_DWORD)v25 == 1 )
  {
    v19 = *((_DWORD *)v30 + 120);
    v20 = v19 ? *((_DWORD *)v30 + 121) : *((_DWORD *)v30 + 78);
    if ( v20 != 1 && !v19 && !*((_DWORD *)v30 + 104) && !CApplication::GetTotalActiveCaptureStreamCount(v26[0]) )
    {
      v21 = v30;
      if ( *((_DWORD *)v30 + 119) != 3 )
      {
        *((_DWORD *)v30 + 119) = 3;
        *((_DWORD *)v21 + 120) = 1;
        *((_DWORD *)v21 + 121) = 1;
      }
      if ( !*((_DWORD *)v26[0] + 52) && *((_DWORD *)v26[0] + 54) )
        CApplication::RestrictAudioPlaybackToPrimaryCategories(v26[0]);
      CProcess::StartInactivityTimer(v30);
    }
  }
  if ( (CApplication::IsUnrestrictedBackgroundAudioCapable(v26[0])
     || (unsigned int)CApplication::IsBackgroundMediaRecordingCapable(v26[0]))
    && !*((_DWORD *)v26[0] + 52)
    && !*((_DWORD *)v30 + 104) )
  {
    CProcess::StartInactivityTimer(v30);
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 64LL))(a4)
    && (unsigned int)CApplication::IsBackgroundMediaRecordingCapable(v26[0]) )
  {
    CApplicationManager::ApplyPBMPolicyForAllAppsInSession(v6, *((_DWORD *)v26[0] + 53), 0);
  }
  if ( ((unsigned int)((_DWORD)v29 - 1) <= 1 || (unsigned int)((_DWORD)v29 - 10) <= 1)
    && !CProcess::GetActiveRenderStreamCount(v30, 0xBu)
    && !CProcess::GetActiveRenderStreamCount(v30, 0xAu)
    && !CProcess::GetActiveRenderStreamCount(v30, 2u)
    && !CProcess::GetActiveRenderStreamCount(v30, 1u) )
  {
    CApplication::SendTrackStateNotification(v26[0]);
  }
  v24 = 0;
  v25 = 0LL;
  wil::try_com_query_to<IDuckingController,IAudioStreamInfo * &>(&v31, &v25);
  v22 = v25;
  (*(void (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 64LL))(a4);
  TsSessionIdUpdateStreamClassPolicyGains(*((_DWORD *)v30 + 41), v17, (unsigned int)v29, 1, v22, &v24);
  wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(&v25);
  if ( v24 )
    CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)v6, *((_DWORD *)v26[0] + 53), 3u);
  CApplicationManager::ApplyPBMPolicyForAllAppsInSession(v6, *((_DWORD *)v26[0] + 53), 0);
  if ( (unsigned int)CApplication::HasBackgroundAudioTask(v26[0]) )
    CApplicationManager::SendBackgroundStreamStateChangedNotifiction(v6);
  if ( *((_DWORD *)v30 + 106) )
  {
    if ( Microsoft_Windows_AudioEnableBits < 0 )
      McTemplateU0zqq_EventWriteTransfer(
        (_DWORD)v30,
        (unsigned int)&EVT_PBM_STREAM_STOPPED,
        *((_QWORD *)v26[0] + 3),
        *((_DWORD *)v30 + 40),
        (char)v29);
  }
  return 0LL;
}
