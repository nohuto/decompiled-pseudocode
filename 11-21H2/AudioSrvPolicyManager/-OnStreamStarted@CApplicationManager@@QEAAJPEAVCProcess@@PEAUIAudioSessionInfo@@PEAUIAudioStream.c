/*
 * XREFs of ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180031D70
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_78bc9aa717e0c7ae8337a2b0ddd14613__void_::_Do_call @ 0x1800277E0 (std--_Func_impl_no_alloc__lambda_78bc9aa717e0c7ae8337a2b0ddd14613__void_--_Do_call.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x1800118C0 (-OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioS.c)
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x180015950 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180015FC8 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ @ 0x180016270 (-CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ.c)
 *     ?DeleteInactivityTimer@CProcess@@QEAAXXZ @ 0x180016588 (-DeleteInactivityTimer@CProcess@@QEAAXXZ.c)
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x180017114 (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x180017DF4 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z @ 0x180018048 (-HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x1800182B0 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ @ 0x180018370 (-IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x1800186B8 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ @ 0x18001AAA8 (-RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ.c)
 *     ?SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18001BD88 (-SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x18001CDB8 (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x18001F2CC (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
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
__int64 __fastcall CApplicationManager::OnStreamStarted(
        CApplicationManager *this,
        CApplication **a2,
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
  unsigned __int16 *v16; // r15
  int ActiveRenderStreamCount; // r14d
  int v18; // r14d
  int v19; // r14d
  int v20; // r14d
  unsigned __int8 v21; // al
  CApplication *v22; // rbx
  CProcess *v23; // rax
  int v24; // ecx
  CApplication *v25; // rbx
  CApplication *v26; // rbx
  struct IDuckingController *v27; // rbx
  CApplication *v28; // [rsp+40h] [rbp-30h] BYREF
  struct IDuckingController *v29[4]; // [rsp+48h] [rbp-28h] BYREF
  char v30; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  CApplicationManager *v32; // [rsp+B0h] [rbp+40h] BYREF
  CProcess *v33; // [rsp+B8h] [rbp+48h] BYREF
  int v34; // [rsp+C8h] [rbp+58h] BYREF

  v33 = (CProcess *)a2;
  v32 = this;
  v6 = g_ApplicationManager;
  v28 = a2[28];
  LODWORD(v32) = 0;
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
    WPP_SF_dSd(*((_QWORD *)WPP_GLOBAL_Control + 2), 10, (_DWORD)v9, *((_DWORD *)v33 + 40), (__int64)v9, v7);
  }
  v10 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 48LL))(a4);
  PBMRelatedAudioStreamCategory = GetPBMRelatedAudioStreamCategory(v33, v10, (unsigned int *)&v32);
  v12 = PBMRelatedAudioStreamCategory;
  if ( PBMRelatedAudioStreamCategory >= 0 )
  {
    if ( (_DWORD)v32 == 3 && !(*(unsigned int (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 56LL))(a4) )
      CDuckingManager::OnRenderCommunicationsStreamStateChanged(
        v14,
        (__int64)a3,
        v15,
        1,
        (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))a4);
    v29[1] = (struct IDuckingController *)&v33;
    v29[2] = (struct IDuckingController *)&v28;
    v29[3] = (struct IDuckingController *)&v32;
    v30 = 1;
    v16 = (unsigned __int16 *)(*(__int64 (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)a3 + 72LL))(a3);
    ActiveRenderStreamCount = CProcess::GetActiveRenderStreamCount(v33, 0xBu);
    v18 = CProcess::GetActiveRenderStreamCount(v33, 0xAu) + ActiveRenderStreamCount;
    v19 = CProcess::GetActiveRenderStreamCount(v33, 2u) + v18;
    v20 = CProcess::GetActiveRenderStreamCount(v33, 1u) + v19;
    v21 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 64LL))(a4);
    CProcess::UpdateStreamCountAndProcessCategory(v33, v16, (unsigned int)v32, 1, v21, 0LL, 0LL);
    if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 64LL))(a4)
      || (_DWORD)v32 == 2
      || (v22 = v28, (unsigned int)CApplication::IsBackgroundAudioCapable(v28))
      && !(unsigned int)CApplication::IsRestrictedBackgroundAudioCapable(v22)
      && (unsigned int)CApplication::HasSmtcSubscription((__int64)v22, 1) )
    {
      v23 = v33;
      if ( *((_DWORD *)v33 + 119) == 3 )
      {
        *(_QWORD *)((char *)v33 + 476) = 0LL;
        *((_DWORD *)v23 + 121) = 4;
      }
      CApplication::RemoveAudioPlaybackRestriction(v28);
      CProcess::DeleteInactivityTimer(v33);
      CApplication::CleanupBCMStartupLatencyGracePeriod(v28);
    }
    v24 = (int)v32;
    if ( (_DWORD)v32 == 2 )
    {
      CApplication::ApplySmtcRelatedPolicy(v28);
      v24 = (int)v32;
    }
    if ( *((_DWORD *)v33 + 106) )
    {
      if ( v24 == 2
        || (v25 = v28, (unsigned int)CApplication::IsBackgroundAudioCapable(v28))
        && !(unsigned int)CApplication::IsRestrictedBackgroundAudioCapable(v25)
        && (unsigned int)CApplication::HasSmtcSubscription((__int64)v25, 1) )
      {
        v26 = v28;
        if ( *((_DWORD *)v28 + 108) )
        {
          CApplication::CleanupGoodFaithExemptionTimer(v28);
          if ( *((_DWORD *)v26 + 155) == 2 )
          {
            *(_QWORD *)((char *)v26 + 620) = 0LL;
            *(_QWORD *)((char *)v26 + 628) = 0LL;
            *(_QWORD *)((char *)v26 + 636) = 0LL;
            *((_DWORD *)v26 + 161) = 1;
          }
          *((_DWORD *)v26 + 108) = 0;
          CApplicationManager::ApplyPBMPolicy(g_ApplicationManager, v26, 0xD1u, 0);
        }
      }
    }
    if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 64LL))(a4)
      && (unsigned int)CApplication::IsBackgroundMediaRecordingCapable(v28) )
    {
      CApplicationManager::ApplyPBMPolicyForAllAppsInSession(v6, *((_DWORD *)v28 + 53), 0);
    }
    v34 = 0;
    v29[0] = 0LL;
    (**(void (__fastcall ***)(struct IAudioStreamInfo *, GUID *, struct IDuckingController **))a4)(
      a4,
      &GUID_390561ae_7375_4558_aff9_667acfe35ac5,
      v29);
    v27 = v29[0];
    (*(void (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 64LL))(a4);
    TsSessionIdUpdateStreamClassPolicyGains(*((_DWORD *)v33 + 41), v16, (unsigned int)v32, 0, v27, &v34);
    if ( v29[0] )
      (*(void (__fastcall **)(struct IDuckingController *))(*(_QWORD *)v29[0] + 16LL))(v29[0]);
    if ( v34 )
      CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)v6, *((_DWORD *)v28 + 53), 3u);
    CApplicationManager::ApplyPBMPolicyForAllAppsInSession(v6, *((_DWORD *)v28 + 53), 0);
    if ( ((unsigned int)((_DWORD)v32 - 10) <= 1 || (unsigned int)((_DWORD)v32 - 1) <= 1) && !v20 )
      CApplication::SendTrackStateNotification((__int64)v28);
    if ( (unsigned int)CApplication::HasBackgroundAudioTask(v28) )
      CApplicationManager::SendBackgroundStreamStateChangedNotifiction(v6);
    if ( *((_DWORD *)v33 + 106) )
    {
      if ( Microsoft_Windows_AudioEnableBits < 0 )
        McTemplateU0zqq_EventWriteTransfer(
          (_DWORD)v33,
          (unsigned int)&EVT_PBM_STREAM_STARTED,
          *((_QWORD *)v28 + 3),
          *((_DWORD *)v33 + 40),
          (char)v32);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\workitem.cpp",
      (const char *)(unsigned int)PBMRelatedAudioStreamCategory);
    return v12;
  }
}
