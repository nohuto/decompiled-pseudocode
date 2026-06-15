/*
 * XREFs of ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180032264
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_318849112bdacfedbf03f674f146fe6c__void_::_Do_call @ 0x1800277C0 (std--_Func_impl_no_alloc__lambda_318849112bdacfedbf03f674f146fe6c__void_--_Do_call.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x1800118C0 (-OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioS.c)
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x180017114 (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x180017B0C (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x180017DF4 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z @ 0x180018048 (-HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x1800182B0 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ @ 0x180018370 (-IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x1800186B8 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ @ 0x18001AB1C (-RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ.c)
 *     ?SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18001BD88 (-SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 *     ?StartInactivityTimer@CProcess@@QEAAXXZ @ 0x18001C5CC (-StartInactivityTimer@CProcess@@QEAAXXZ.c)
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x18001CDB8 (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x18001F3D0 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ @ 0x180024AFC (-SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x1800253E0 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z @ 0x180029970 (-GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z.c)
 *     ?TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAUIDuckingController@@PEAH@Z @ 0x18002FA9C (-TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAUIDuckingController@@PEAH@Z.c)
 *     McTemplateU0zqq_EventWriteTransfer @ 0x1800329FC (McTemplateU0zqq_EventWriteTransfer.c)
 *     WPP_SF_dSd @ 0x180032AA0 (WPP_SF_dSd.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::OnStreamStopped(
        CApplicationManager *this,
        struct CProcess *a2,
        struct IAudioSessionInfo *a3,
        struct IAudioStreamInfo *a4)
{
  CApplicationManager *v6; // rsi
  char v7; // bl
  unsigned int v8; // eax
  const wchar_t *v9; // r8
  unsigned int v10; // eax
  int PBMRelatedAudioStreamCategory; // eax
  unsigned int v12; // ebx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int16 *v16; // r14
  unsigned __int8 v17; // al
  int v18; // edx
  int v19; // ecx
  CProcess *v20; // rax
  CApplication *v21; // rbx
  struct IDuckingController *v22; // rbx
  struct IDuckingController *v23; // [rsp+40h] [rbp-30h] BYREF
  CApplication *v24[4]; // [rsp+48h] [rbp-28h] BYREF
  char v25; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  CApplicationManager *v27; // [rsp+A0h] [rbp+30h] BYREF
  CProcess *v28; // [rsp+A8h] [rbp+38h] BYREF
  int v29; // [rsp+B8h] [rbp+48h] BYREF

  v28 = a2;
  v27 = this;
  v6 = g_ApplicationManager;
  v24[0] = *((CApplication **)a2 + 28);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v7 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 48LL))(a4);
    v8 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 56LL))(a4);
    if ( v8 > 2 )
      v9 = L"unknown";
    else
      v9 = off_18004B5B0[v8];
    WPP_SF_dSd(*((_QWORD *)WPP_GLOBAL_Control + 2), 11, (_DWORD)v9, *((_DWORD *)v28 + 40), (__int64)v9, v7);
  }
  LODWORD(v27) = 0;
  v10 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 48LL))(a4);
  PBMRelatedAudioStreamCategory = GetPBMRelatedAudioStreamCategory(v28, v10, (unsigned int *)&v27);
  v12 = PBMRelatedAudioStreamCategory;
  if ( PBMRelatedAudioStreamCategory >= 0 )
  {
    if ( (_DWORD)v27 == 3 && !(*(unsigned int (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 56LL))(a4) )
      CDuckingManager::OnRenderCommunicationsStreamStateChanged(
        v14,
        (__int64)a3,
        v15,
        0,
        (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))a4);
    v24[1] = (CApplication *)&v28;
    v24[2] = (CApplication *)v24;
    v24[3] = (CApplication *)&v27;
    v25 = 1;
    v16 = (unsigned __int16 *)(*(__int64 (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)a3 + 72LL))(a3);
    v17 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 64LL))(a4);
    CProcess::UpdateStreamCountAndProcessCategory(
      v28,
      v16,
      (unsigned int)v27,
      0,
      v17,
      &v29,
      (enum _APPLICATION_CATEGORY *)&v23);
    if ( v29 && (_DWORD)v23 == 1 )
    {
      v18 = *((_DWORD *)v28 + 120);
      v19 = v18 ? *((_DWORD *)v28 + 121) : *((_DWORD *)v28 + 78);
      if ( v19 != 1
        && !v18
        && !*((_DWORD *)v28 + 104)
        && !(unsigned int)CApplication::GetTotalActiveCaptureStreamCount(v24[0]) )
      {
        v20 = v28;
        if ( *((_DWORD *)v28 + 119) != 3 )
        {
          *((_DWORD *)v28 + 119) = 3;
          *((_DWORD *)v20 + 120) = 1;
          *((_DWORD *)v20 + 121) = 1;
        }
        if ( !*((_DWORD *)v24[0] + 52) && *((_DWORD *)v24[0] + 54) )
          CApplication::RestrictAudioPlaybackToPrimaryCategories(v24[0]);
        CProcess::StartInactivityTimer(v28);
      }
    }
    v21 = v24[0];
    if ( ((unsigned int)CApplication::IsBackgroundAudioCapable(v24[0])
       && !(unsigned int)CApplication::IsRestrictedBackgroundAudioCapable(v21)
       && (unsigned int)CApplication::HasSmtcSubscription((__int64)v21, 1)
       || (unsigned int)CApplication::IsBackgroundMediaRecordingCapable(v24[0]))
      && !*((_DWORD *)v24[0] + 52)
      && !*((_DWORD *)v28 + 104) )
    {
      CProcess::StartInactivityTimer(v28);
    }
    if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 64LL))(a4)
      && (unsigned int)CApplication::IsBackgroundMediaRecordingCapable(v24[0]) )
    {
      CApplicationManager::ApplyPBMPolicyForAllAppsInSession(v6, *((_DWORD *)v24[0] + 53), 0);
    }
    if ( ((unsigned int)((_DWORD)v27 - 10) <= 1 || (unsigned int)((_DWORD)v27 - 1) <= 1)
      && !(unsigned int)CProcess::GetActiveRenderStreamCount(v28, 0xBu)
      && !(unsigned int)CProcess::GetActiveRenderStreamCount(v28, 0xAu)
      && !(unsigned int)CProcess::GetActiveRenderStreamCount(v28, 2u)
      && !(unsigned int)CProcess::GetActiveRenderStreamCount(v28, 1u) )
    {
      CApplication::SendTrackStateNotification((__int64)v24[0]);
    }
    v29 = 0;
    v23 = 0LL;
    (**(void (__fastcall ***)(struct IAudioStreamInfo *, GUID *, struct IDuckingController **))a4)(
      a4,
      &GUID_390561ae_7375_4558_aff9_667acfe35ac5,
      &v23);
    v22 = v23;
    (*(void (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 64LL))(a4);
    TsSessionIdUpdateStreamClassPolicyGains(*((_DWORD *)v28 + 41), v16, (unsigned int)v27, 1, v22, &v29);
    if ( v23 )
      (*(void (__fastcall **)(struct IDuckingController *))(*(_QWORD *)v23 + 16LL))(v23);
    if ( v29 )
      CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)v6, *((_DWORD *)v24[0] + 53), 3u);
    CApplicationManager::ApplyPBMPolicyForAllAppsInSession(v6, *((_DWORD *)v24[0] + 53), 0);
    if ( (unsigned int)CApplication::HasBackgroundAudioTask(v24[0]) )
      CApplicationManager::SendBackgroundStreamStateChangedNotifiction(v6);
    if ( *((_DWORD *)v28 + 106) )
    {
      if ( Microsoft_Windows_AudioEnableBits < 0 )
        McTemplateU0zqq_EventWriteTransfer(
          (_DWORD)v28,
          (unsigned int)&EVT_PBM_STREAM_STOPPED,
          *((_QWORD *)v24[0] + 3),
          *((_DWORD *)v28 + 40),
          (char)v27);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAD,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\workitem.cpp",
      (const char *)(unsigned int)PBMRelatedAudioStreamCategory);
    return v12;
  }
}
