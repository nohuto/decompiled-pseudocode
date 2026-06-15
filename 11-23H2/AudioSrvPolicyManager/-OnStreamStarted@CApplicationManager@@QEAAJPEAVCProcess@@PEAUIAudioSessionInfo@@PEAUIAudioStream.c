/*
 * XREFs of ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180005E20
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_78bc9aa717e0c7ae8337a2b0ddd14613__void_::_Do_call @ 0x180030B40 (std--_Func_impl_no_alloc__lambda_78bc9aa717e0c7ae8337a2b0ddd14613__void_--_Do_call.c)
 * Callees:
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x180005D80 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x180006BD0 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x180007E90 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?IsUnrestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x180008BA0 (-IsUnrestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ @ 0x18000A5D0 (-IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetActiveStreamCountStatsForEndpoint@CProcess@@IEAAJPEBGHPEAPEAI@Z @ 0x180013170 (-GetActiveStreamCountStatsForEndpoint@CProcess@@IEAAJPEBGHPEAPEAI@Z.c)
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x1800135B0 (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 *     ?UpdatePolicyGainsFromStreamClassPolicyTable@@YAJPEAVTSSession@@PEBGKHHPEAUIDuckingController@@PEAH@Z @ 0x180013F40 (-UpdatePolicyGainsFromStreamClassPolicyTable@@YAJPEAVTSSession@@PEBGKHHPEAUIDuckingController@@P.c)
 *     ?RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ @ 0x1800153B4 (-RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180015534 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?DeleteInactivityTimer@CProcess@@QEAAXXZ @ 0x18001564C (-DeleteInactivityTimer@CProcess@@QEAAXXZ.c)
 *     ?OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x1800221B8 (-OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioS.c)
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x1800259B0 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?CommitGoodFaithPLMExemption@CApplication@@QEAAJXZ @ 0x180026468 (-CommitGoodFaithPLMExemption@CApplication@@QEAAJXZ.c)
 *     ?EnsureBamExemption@CProcess@@IEAAXXZ @ 0x180026810 (-EnsureBamExemption@CProcess@@IEAAXXZ.c)
 *     ?SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180029E8C (-SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x18002AE04 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     WPP_SF_dSS @ 0x18002BB14 (WPP_SF_dSS.c)
 *     ?SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ @ 0x18002F23C (-SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x1800376B4 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 *     ?StreamTypeToString@@YAPEBGW4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x18003AF58 (-StreamTypeToString@@YAPEBGW4SYSTEM_AUDIO_STREAM_TYPE@@@Z.c)
 *     McTemplateU0zqq_EventWriteTransfer @ 0x18003AF7C (McTemplateU0zqq_EventWriteTransfer.c)
 *     WPP_SF_dSd @ 0x18003B020 (WPP_SF_dSd.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::OnStreamStarted(
        CApplicationManager *this,
        CApplication **a2,
        struct IAudioSessionInfo *a3,
        struct IAudioStreamInfo *a4)
{
  CApplicationManager *v6; // r13
  char v7; // bl
  unsigned int v8; // eax
  __int64 v9; // rax
  int v10; // r8d
  unsigned int v11; // eax
  CProcess *v12; // rbx
  int v14; // eax
  __int16 *v15; // rdx
  int v16; // ecx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  _DWORD *v20; // rdx
  __int64 v21; // r8
  int v22; // esi
  signed int v23; // r9d
  signed int v24; // ecx
  int v25; // edi
  signed int v26; // r9d
  int v27; // ebx
  signed int v28; // r9d
  int v29; // r11d
  __int64 v30; // r9
  int v31; // r15d
  int v32; // esi
  __int64 v33; // rdi
  CProcess *v34; // rbx
  __int64 v35; // r14
  __int64 v36; // rax
  CProcess *v37; // rax
  int v38; // ecx
  DWORD v39; // r13d
  __int64 v40; // rsi
  struct _RTL_CRITICAL_SECTION *v41; // r12
  __int64 v42; // rcx
  __int64 v43; // rax
  int v44; // eax
  unsigned int v45; // ebx
  unsigned __int64 v46; // r9
  __int64 v47; // rdx
  int v48; // ebx
  bool v49; // zf
  CApplicationManager *v50; // rbx
  struct TSSession *v51; // rdi
  struct IDuckingController *v52; // rsi
  unsigned int v53; // r14d
  unsigned __int16 *v54; // r13
  int updated; // eax
  int v56; // eax
  int v57; // [rsp+20h] [rbp-59h]
  int v58; // [rsp+20h] [rbp-59h]
  int v59; // [rsp+20h] [rbp-59h]
  CApplication *v60; // [rsp+40h] [rbp-39h] BYREF
  int v61; // [rsp+48h] [rbp-31h]
  unsigned int v62; // [rsp+4Ch] [rbp-2Dh]
  struct IDuckingController *v63; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int16 *v64; // [rsp+58h] [rbp-21h]
  CApplicationManager *v65; // [rsp+60h] [rbp-19h]
  struct IDuckingController *v66; // [rsp+68h] [rbp-11h]
  struct _RTL_CRITICAL_SECTION *v67; // [rsp+70h] [rbp-9h]
  CProcess **v68; // [rsp+78h] [rbp-1h]
  CApplication **v69; // [rsp+80h] [rbp+7h]
  CApplicationManager **v70; // [rsp+88h] [rbp+Fh]
  char v71; // [rsp+90h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  CApplicationManager *v73; // [rsp+E0h] [rbp+67h] BYREF
  CProcess *v74; // [rsp+E8h] [rbp+6Fh] BYREF
  struct TSSession *v75; // [rsp+F8h] [rbp+7Fh] BYREF

  v74 = (CProcess *)a2;
  v73 = this;
  v6 = g_ApplicationManager;
  v65 = g_ApplicationManager;
  v60 = a2[28];
  if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v7 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 48LL))(a4);
    v8 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 56LL))(a4);
    v9 = StreamTypeToString(v8);
    WPP_SF_dSd(*((_QWORD *)WPP_GLOBAL_Control + 2), 10, v10, *((_DWORD *)v74 + 40), v9, v7);
  }
  v11 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 48LL))(a4);
  v12 = v74;
  if ( v11 >= 0x18 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\workitem.cpp",
      (const char *)0x80070057LL,
      v57);
    return 2147942487LL;
  }
  LODWORD(v73) = v11;
  v14 = (*(__int64 (__fastcall **)(CProcess *))(*(_QWORD *)v74 + 96LL))(v74);
  v15 = &_ImageBase;
  if ( !v14 )
    goto LABEL_13;
  v16 = (int)v73;
  if ( !dword_180053FA0[(unsigned int)v73] )
    goto LABEL_14;
  if ( (*(unsigned int (__fastcall **)(CProcess *, __int16 *))(*(_QWORD *)v12 + 136LL))(v12, &_ImageBase) )
  {
LABEL_13:
    v16 = (int)v73;
    goto LABEL_14;
  }
  v17 = (*(__int64 (__fastcall **)(CProcess *))(*(_QWORD *)v12 + 376LL))(v12);
  v16 = (int)v73;
  if ( !v17 )
    v16 = 0;
  LODWORD(v73) = v16;
LABEL_14:
  if ( v16 == 3
    && !(*(unsigned int (__fastcall **)(struct IAudioStreamInfo *, __int16 *))(*(_QWORD *)a4 + 56LL))(a4, v15) )
  {
    v57 = (int)a4;
    CDuckingManager::OnRenderCommunicationsStreamStateChanged(v18, a3, v19, 1LL);
  }
  v68 = &v74;
  v69 = &v60;
  v70 = &v73;
  v71 = 1;
  v64 = (unsigned __int16 *)(*(__int64 (__fastcall **)(struct IAudioSessionInfo *, __int16 *))(*(_QWORD *)a3 + 72LL))(
                              a3,
                              v15);
  v22 = 0;
  v23 = 0;
  v24 = *((_DWORD *)v74 + 68);
  if ( v24 > 0 )
  {
    v21 = 0LL;
    do
    {
      if ( v21 < 0 || v23 >= v24 )
      {
        ATL::_AtlRaiseException(v24, (unsigned int)v20);
        __debugbreak();
      }
      v20 = *(_DWORD **)(v21 + *((_QWORD *)v74 + 33));
      v22 += v20[11];
      ++v23;
      v21 += 8LL;
    }
    while ( v23 < v24 );
  }
  v25 = 0;
  v26 = 0;
  if ( v24 > 0 )
  {
    v21 = 0LL;
    do
    {
      if ( v21 < 0 || v26 >= v24 )
      {
        ATL::_AtlRaiseException(v24, (unsigned int)v20);
        __debugbreak();
      }
      v20 = *(_DWORD **)(v21 + *((_QWORD *)v74 + 33));
      v25 += v20[10];
      ++v26;
      v21 += 8LL;
    }
    while ( v26 < v24 );
  }
  v27 = 0;
  v28 = 0;
  if ( v24 > 0 )
  {
    v21 = 0LL;
    do
    {
      if ( v21 < 0 || v28 >= v24 )
      {
        ATL::_AtlRaiseException(v24, (unsigned int)v20);
        __debugbreak();
      }
      v20 = *(_DWORD **)(v21 + *((_QWORD *)v74 + 33));
      v27 += v20[2];
      ++v28;
      v21 += 8LL;
    }
    while ( v28 < v24 );
  }
  v29 = 0;
  v30 = 0LL;
  if ( v24 > 0 )
  {
    v21 = 0LL;
    do
    {
      if ( v21 < 0 || (int)v30 >= v24 )
      {
        ATL::_AtlRaiseException(v24, (unsigned int)v20);
        __debugbreak();
      }
      v20 = *(_DWORD **)(v21 + *((_QWORD *)v74 + 33));
      v29 += v20[1];
      v30 = (unsigned int)(v30 + 1);
      v21 += 8LL;
    }
    while ( (int)v30 < v24 );
  }
  v31 = v22 + v25 + v29 + v27;
  v32 = (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *, _DWORD *, __int64, __int64))(*(_QWORD *)a4 + 64LL))(
          a4,
          v20,
          v21,
          v30);
  v33 = (unsigned int)v73;
  v34 = v74;
  v35 = *((int *)v74 + 78);
  if ( CProcess::GetActiveStreamCountStatsForEndpoint(v74, v64, v32, (unsigned int **)&v75) >= 0 )
  {
    ++*((_DWORD *)v75 + v33);
    if ( v32 )
    {
      ++*((_DWORD *)v34 + 77);
    }
    else
    {
      ++*((_DWORD *)v34 + 76);
      if ( CProcess::GetActiveRenderStreamCount(v34, 3u) || CProcess::GetActiveRenderStreamCount(v34, 8u) )
      {
        *((_DWORD *)v34 + 78) = 0;
      }
      else if ( CProcess::GetActiveRenderStreamCount(v34, 2u) )
      {
        *((_DWORD *)v34 + 78) = 1;
      }
      else
      {
        *((_DWORD *)v34 + 78) = CProcess::GetActiveRenderStreamCount(v34, 0xBu)
                             || CProcess::GetActiveRenderStreamCount(v34, 0xAu)
                             || CProcess::GetActiveRenderStreamCount(v34, 1u)
                              ? 2
                              : (CProcess::GetActiveRenderStreamCount(v34, 7u) == 0) + 3;
      }
    }
    if ( *((_DWORD *)v34 + 77) + *((_DWORD *)v34 + 76) == 1 )
      CProcess::EnsureBamExemption(v34);
  }
  v36 = *((int *)v34 + 78);
  if ( (_DWORD)v35 != (_DWORD)v36
    && WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dSS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      (unsigned int)off_18004F628[v36],
      (_DWORD)WPP_GLOBAL_Control,
      *((_DWORD *)v34 + 40),
      (__int64)off_18004F628[v35],
      (__int64)off_18004F628[v36]);
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 64LL))(a4)
    || (_DWORD)v73 == 2
    || (unsigned int)CApplication::IsUnrestrictedBackgroundAudioCapable(v60) )
  {
    v37 = v74;
    if ( *((_DWORD *)v74 + 119) == 3 )
    {
      *(_QWORD *)((char *)v74 + 476) = 0LL;
      *((_DWORD *)v37 + 121) = 4;
    }
    CApplication::RemoveAudioPlaybackRestriction(v60);
    CProcess::DeleteInactivityTimer(v74);
    CApplication::CleanupBCMStartupLatencyGracePeriod(v60);
  }
  v38 = (int)v73;
  if ( (_DWORD)v73 == 2 )
  {
    CApplication::ApplySmtcRelatedPolicy(v60);
    v38 = (int)v73;
  }
  if ( *((_DWORD *)v74 + 106)
    && (v38 == 2 || (unsigned int)CApplication::IsUnrestrictedBackgroundAudioCapable(v60))
    && *((_DWORD *)v60 + 108) )
  {
    CApplication::CommitGoodFaithPLMExemption(v60);
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 64LL))(a4)
    && (unsigned int)CApplication::IsBackgroundMediaRecordingCapable(v60) )
  {
    CApplicationManager::ApplyPBMPolicyForAllAppsInSession(v6, *((_DWORD *)v60 + 53), 0);
  }
  v61 = 0;
  v63 = 0LL;
  (**(void (__fastcall ***)(struct IAudioStreamInfo *, GUID *, struct IDuckingController **))a4)(
    a4,
    &GUID_390561ae_7375_4558_aff9_667acfe35ac5,
    &v63);
  v66 = v63;
  (*(void (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 64LL))(a4);
  v62 = (unsigned int)v73;
  v39 = *((_DWORD *)v74 + 41);
  v40 = HIBYTE(v39);
  v41 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v67 = v41;
  v75 = 0LL;
  EnterCriticalSection(&stru_180061648);
  v42 = *(_QWORD *)(qword_1800616F8
                  + 16
                  * (qword_180061710 & (0x100000001B3LL
                                      * (v40 ^ (0x100000001B3LL
                                              * (BYTE2(v39) ^ (0x100000001B3LL
                                                             * (BYTE1(v39) ^ (0x100000001B3LL
                                                                            * ((unsigned __int8)v39 ^ 0xCBF29CE484222325uLL)))))))))
                  + 8);
  if ( v42 == qword_1800616E8 )
  {
LABEL_81:
    v42 = 0LL;
  }
  else
  {
    while ( v39 != *(_DWORD *)(v42 + 16) )
    {
      if ( v42 == *(_QWORD *)(qword_1800616F8
                            + 16
                            * (qword_180061710 & (0x100000001B3LL
                                                * (v40 ^ (0x100000001B3LL
                                                        * (BYTE2(v39) ^ (0x100000001B3LL
                                                                       * (BYTE1(v39) ^ (0x100000001B3LL
                                                                                      * ((unsigned __int8)v39 ^ 0xCBF29CE484222325uLL)))))))))) )
        goto LABEL_81;
      v42 = *(_QWORD *)(v42 + 8);
    }
  }
  v43 = qword_1800616E8;
  if ( v42 )
    v43 = v42;
  if ( v43 == qword_1800616E8 )
  {
    LeaveCriticalSection(&stru_180061648);
    v44 = TsSessionCreate(v39, &v75);
    v45 = v44;
    if ( v44 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x436,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v44,
        v57);
      v46 = v45;
      v47 = 1695LL;
      goto LABEL_87;
    }
    v51 = v75;
  }
  else
  {
    v51 = *(struct TSSession **)(v43 + 24);
    LeaveCriticalSection(&stru_180061648);
  }
  LODWORD(v75) = 0;
  v52 = v66;
  v53 = v62;
  v54 = v64;
  updated = UpdatePolicyGainsFromStreamClassPolicyTable(v51, v64, v62, 1, 0, v66, (int *)&v75);
  if ( updated >= 0 )
  {
    v48 = (int)v75;
    v56 = UpdatePolicyGainsFromStreamClassPolicyTable(v51, v54, v53, 0, 0, v52, (int *)&v75);
    if ( v56 >= 0 )
    {
      if ( v48 || (_DWORD)v75 )
        v48 = 1;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6AB,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v56,
        v59);
    }
    if ( v41 )
      LeaveCriticalSection(v41);
    goto LABEL_90;
  }
  v46 = (unsigned int)updated;
  v47 = 1700LL;
LABEL_87:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v47,
    (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
    (const char *)v46,
    v58);
  if ( v41 )
    LeaveCriticalSection(v41);
  v48 = v61;
LABEL_90:
  if ( v63 )
    (*(void (__fastcall **)(struct IDuckingController *))(*(_QWORD *)v63 + 16LL))(v63);
  v49 = v48 == 0;
  v50 = v65;
  if ( !v49 )
    CApplicationManager::UpdateVolumeForAllAppsInSession(v65, *((unsigned int *)v60 + 53), 3LL);
  CApplicationManager::ApplyPBMPolicyForAllAppsInSession(v50, *((_DWORD *)v60 + 53), 0);
  if ( ((unsigned int)((_DWORD)v73 - 1) <= 1 || (unsigned int)((_DWORD)v73 - 10) <= 1) && !v31 )
    CApplication::SendTrackStateNotification(v60);
  if ( (unsigned int)CApplication::HasBackgroundAudioTask(v60) )
    CApplicationManager::SendBackgroundStreamStateChangedNotifiction(v50);
  if ( *((_DWORD *)v74 + 106) )
  {
    if ( Microsoft_Windows_AudioEnableBits < 0 )
      McTemplateU0zqq_EventWriteTransfer(
        (_DWORD)v74,
        (unsigned int)&EVT_PBM_STREAM_STARTED,
        *((_QWORD *)v60 + 3),
        *((_DWORD *)v74 + 40),
        (char)v73);
  }
  return 0LL;
}
