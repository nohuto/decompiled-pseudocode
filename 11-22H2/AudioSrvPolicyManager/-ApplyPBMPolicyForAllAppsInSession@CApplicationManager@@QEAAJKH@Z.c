/*
 * XREFs of ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x180007EE0
 * Callers:
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180005E70 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180006EE0 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000CD30 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     std::_Func_impl_no_alloc__lambda_083813e9f63eb05ca4d70f9ca4f2f4c2__void_::_Do_call @ 0x18001EF00 (std--_Func_impl_no_alloc__lambda_083813e9f63eb05ca4d70f9ca4f2f4c2__void_--_Do_call.c)
 *     ?UnmuteDesktopAppsInSession@CApplicationManager@@QEAAXK@Z @ 0x18002F6FC (-UnmuteDesktopAppsInSession@CApplicationManager@@QEAAXK@Z.c)
 *     ?UpdateModernStandbyAudioState@CApplicationManager@@QEAAJK@Z @ 0x18002FBA0 (-UpdateModernStandbyAudioState@CApplicationManager@@QEAAJK@Z.c)
 *     _lambda_1c9ff73393079898664ba9c0b1342f4a_::operator() @ 0x180034520 (_lambda_1c9ff73393079898664ba9c0b1342f4a_--operator().c)
 * Callees:
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x180005DD0 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x180006C20 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z @ 0x180007CC0 (-RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?NotifyVolumePolicyChange@CApplication@@IEAAXXZ @ 0x1800086C0 (-NotifyVolumePolicyChange@CApplication@@IEAAXXZ.c)
 *     ?RecalculateVolume@AudioStateMonitorManager@@QEAAJXZ @ 0x1800087D0 (-RecalculateVolume@AudioStateMonitorManager@@QEAAJXZ.c)
 *     ?GetPLMExemptionStatus@CApplicationManager@@QEAA?AW4_PLM_EXEMPTION@@PEAVCApplication@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x180008940 (-GetPLMExemptionStatus@CApplicationManager@@QEAA-AW4_PLM_EXEMPTION@@PEAVCApplication@@W4__MIDL__.c)
 *     ?IsUnrestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x180008BF0 (-IsUnrestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x180009330 (-ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ.c)
 *     ?ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ @ 0x180009420 (-ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ.c)
 *     ?IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ @ 0x18000A620 (-IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ.c)
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18000BAC0 (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     WPP_SF_ @ 0x18001F3BC (WPP_SF_.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x18002718C (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     ?GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ @ 0x180027210 (-GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ.c)
 *     ?HasDuckedStream@CApplication@@QEAAHXZ @ 0x180027570 (-HasDuckedStream@CApplication@@QEAAHXZ.c)
 *     ?IsMutedForSleep@CApplication@@QEAAHXZ @ 0x180027980 (-IsMutedForSleep@CApplication@@QEAAHXZ.c)
 *     WPP_SF_SS @ 0x18002BBD0 (WPP_SF_SS.c)
 *     ?IsInPlmSponsoredGracePeriod@CApplication@@QEAAHXZ @ 0x18002D228 (-IsInPlmSponsoredGracePeriod@CApplication@@QEAAHXZ.c)
 *     ?SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18002F6C4 (-SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     WPP_SF_SSSSSSS @ 0x18002FE10 (WPP_SF_SSSSSSS.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CApplicationManager::ApplyPBMPolicyForAllAppsInSession(CApplicationManager *this, int a2, int a3)
{
  int v3; // edi
  CApplicationManager *v4; // rbp
  struct _RTL_CRITICAL_SECTION *v5; // r12
  _QWORD *v6; // rbx
  __int64 v7; // r14
  unsigned int v8; // r15d
  __int64 v9; // rbx
  unsigned int v10; // esi
  int PLMExemptionStatus; // r13d
  const wchar_t *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 v16; // r11
  const wchar_t *v17; // r8
  const wchar_t *v18; // rdx
  unsigned int v19; // ebp
  int v20; // edi
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // ebx
  __int64 v26; // rax
  __int64 v27; // r10
  _QWORD *v28; // rsi
  __int64 v29; // rbp
  _QWORD *v30; // rdi
  _QWORD *v31; // rbx
  __int64 v32; // rcx
  int v33; // r15d
  AudioStateMonitorManager *v34; // rcx
  int v36; // [rsp+20h] [rbp-C8h]
  unsigned int v37; // [rsp+50h] [rbp-98h]
  int v38; // [rsp+54h] [rbp-94h]
  int v39; // [rsp+58h] [rbp-90h]
  struct _RTL_CRITICAL_SECTION *v40; // [rsp+60h] [rbp-88h] BYREF
  __int64 v41; // [rsp+68h] [rbp-80h] BYREF
  __int64 v42; // [rsp+70h] [rbp-78h] BYREF
  _QWORD *v43; // [rsp+78h] [rbp-70h]
  __int64 v44; // [rsp+80h] [rbp-68h]
  struct _RTL_CRITICAL_SECTION *v45; // [rsp+88h] [rbp-60h]
  struct _RTL_CRITICAL_SECTION *v46; // [rsp+90h] [rbp-58h]
  __int64 v47; // [rsp+98h] [rbp-50h]
  unsigned int v51; // [rsp+108h] [rbp+20h]

  v3 = a2;
  v4 = this;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v45 = v5;
  v6 = (_QWORD *)*((_QWORD *)v4 + 9);
  if ( v6 )
  {
    while ( 1 )
    {
      v7 = v6[2];
      v6 = (_QWORD *)*v6;
      v43 = v6;
      if ( *(_DWORD *)(v7 + 212) == v3 )
        break;
LABEL_104:
      if ( !v6 )
        goto LABEL_105;
    }
    EnterCriticalSection(v5);
    v46 = v5;
    EnterCriticalSection(v5);
    EnterCriticalSection(v5);
    v40 = v5;
    if ( *(_DWORD *)(v7 + 632) )
    {
      v8 = *(_DWORD *)(v7 + 636);
LABEL_22:
      v51 = v8;
      if ( v5 )
        LeaveCriticalSection(v5);
      if ( *(_DWORD *)(v7 + 624) )
        v10 = *(_DWORD *)(v7 + 628);
      else
        v10 = v8;
      v37 = v10;
      PLMExemptionStatus = CApplicationManager::GetPLMExemptionStatus(v4, v7, v8);
      v38 = PLMExemptionStatus;
      if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        v12 = L"(override)";
        if ( !*(_DWORD *)(v7 + 640) )
          v12 = L" ";
        SoundLevelToString(v10);
        v13 = SoundLevelToString(v8);
        v17 = L"(override)";
        if ( !*(_DWORD *)(v7 + 624) )
          v17 = L" ";
        v18 = L"(override)";
        if ( !*(_DWORD *)(v7 + 632) )
          v18 = L" ";
        WPP_SF_SSSSSSS(
          *(_QWORD *)(v15 + 16),
          (_DWORD)v18,
          (_DWORD)v17,
          *(_QWORD *)(v7 + 24),
          v13,
          (__int64)v18,
          v14,
          (__int64)v17,
          v16,
          (__int64)v12);
      }
      if ( v5 )
        LeaveCriticalSection(v5);
      v19 = 209;
      v39 = 209;
      while ( 1 )
      {
        v20 = 0;
        v21 = v19 & 7;
        if ( v21 == 1 )
        {
          v24 = *(_DWORD *)(v7 + 216);
          v25 = v24 == 0;
          *(_DWORD *)(v7 + 216) = v10;
          if ( v24 == v10 )
          {
            if ( a3 )
              CApplication::RecalculateVolume(v7, 3u);
            goto LABEL_92;
          }
          if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            v26 = SoundLevelToString(v10);
            WPP_SF_SS(
              *(_QWORD *)(v27 + 16),
              12,
              (unsigned int)&WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids,
              *(_QWORD *)(v7 + 24),
              v26);
          }
          LOBYTE(v20) = v10 == 0;
          if ( v25 != v20 )
            CApplicationManager::UpdateVolumeForAllAppsInSession(
              (__int64)g_ApplicationManager,
              *(_DWORD *)(v7 + 212),
              3u);
          EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 32));
          v47 = v7 + 32;
          v28 = *(_QWORD **)(v7 + 72);
          if ( v28 )
          {
            while ( 2 )
            {
              v29 = v28[2];
              v28 = (_QWORD *)*v28;
              if ( *(_DWORD *)(v29 + 416) )
                goto LABEL_81;
              EnterCriticalSection((LPCRITICAL_SECTION)(v29 + 24));
              v44 = v29 + 24;
              v30 = *(_QWORD **)(v29 + 72);
              v31 = (_QWORD *)*v30;
LABEL_67:
              if ( v31 == v30 )
              {
                v34 = *(AudioStateMonitorManager **)(v29 + 704);
                if ( v34 )
                  AudioStateMonitorManager::RecalculateVolume(v34);
                if ( v29 != -24 )
                  LeaveCriticalSection((LPCRITICAL_SECTION)(v29 + 24));
LABEL_81:
                if ( !v28 )
                {
                  v19 = v39;
                  v8 = v51;
                  goto LABEL_83;
                }
                continue;
              }
              break;
            }
            v32 = v31[3];
            v40 = 0LL;
            v33 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v32 + 24LL))(
                    v32,
                    &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                    &v41);
            if ( v33 < 0 )
            {
LABEL_71:
              if ( v33 >= 0
                && (*(unsigned int (__fastcall **)(struct _RTL_CRITICAL_SECTION *))&v40->DebugInfo->EntryCount)(v40) != 2 )
              {
                LOBYTE(v36) = 0;
                ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *, __int64, _QWORD, __int64, int, _QWORD))v40->DebugInfo[3].CriticalSection)(
                  v40,
                  3LL,
                  0LL,
                  0xFFFFFFFFLL,
                  v36,
                  0LL);
              }
            }
            else if ( v41 )
            {
              v33 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct _RTL_CRITICAL_SECTION **))v41)(
                      v41,
                      &GUID_fe394136_900b_469c_bdfc_4321bcd92f34,
                      &v40);
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
              goto LABEL_71;
            }
            if ( v40 )
              ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v40->DebugInfo->ProcessLocksList.Flink)(v40);
            v31 = (_QWORD *)*v31;
            goto LABEL_67;
          }
LABEL_83:
          CApplication::NotifyVolumePolicyChange((CApplication *)v7);
          if ( v7 != -32 )
            LeaveCriticalSection((LPCRITICAL_SECTION)(v7 + 32));
          EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 224));
          v44 = v7 + 224;
          *(_DWORD *)(v7 + 272) = 1;
          if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids);
          }
          v42 = -4400000LL;
          (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, __int64 *, _QWORD, _DWORD))(*(_QWORD *)ThreadPool
                                                                                               + 24LL))(
            ThreadPool,
            *(_QWORD *)(v7 + 264),
            &v42,
            0LL,
            0);
          if ( v7 != -224 )
            LeaveCriticalSection((LPCRITICAL_SECTION)(v7 + 224));
          PLMExemptionStatus = v38;
          v10 = v37;
        }
        else
        {
          v22 = v21 - 2;
          if ( v22 )
          {
            v23 = v22 - 1;
            if ( v23 )
            {
              if ( v23 == 1 )
                Sleep(0xAu);
            }
            else
            {
              EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 336));
              *(_DWORD *)(v7 + 380) = PLMExemptionStatus;
              if ( PLMExemptionStatus == 1 )
                v20 = *(_DWORD *)(v7 + 272) != 0;
              if ( v7 != -336 )
                LeaveCriticalSection((LPCRITICAL_SECTION)(v7 + 336));
              if ( !v20 )
                CApplication::ProcessPendingPLMExemptionChange((CApplication *)v7);
            }
          }
          else
          {
            EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 280));
            *(_DWORD *)(v7 + 324) = v8;
            if ( (signed int)v8 < *(_DWORD *)(v7 + 328) )
              v20 = *(_DWORD *)(v7 + 272) != 0;
            if ( v7 != -280 )
              LeaveCriticalSection((LPCRITICAL_SECTION)(v7 + 280));
            if ( !v20 )
              CApplication::ProcessPendingSoundLevelNotification((CApplication *)v7);
          }
        }
LABEL_92:
        v19 >>= 3;
        v39 = v19;
        if ( !v19 )
        {
          if ( !v8 && !v10 )
          {
            if ( PLMExemptionStatus == 1 )
            {
              *(_DWORD *)(v7 + 620) = 1;
              *(_QWORD *)(v7 + 624) = 1LL;
              *(_QWORD *)(v7 + 632) = 1LL;
              *(_DWORD *)(v7 + 640) = 1;
              *(_DWORD *)(v7 + 644) = 1;
            }
            else if ( *(_DWORD *)(v7 + 620) != 6 )
            {
              *(_DWORD *)(v7 + 620) = 6;
              *(_QWORD *)(v7 + 624) = 1LL;
              *(_QWORD *)(v7 + 632) = 1LL;
            }
          }
          v4 = this;
          v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
          if ( this != (CApplicationManager *)-32LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
          v3 = a2;
          v6 = v43;
          goto LABEL_104;
        }
      }
    }
    if ( *(_DWORD *)(v7 + 208) )
    {
      v8 = 2;
      goto LABEL_22;
    }
    v9 = (int)CApplication::Category(v7);
    if ( (unsigned int)CApplication::IsMutedForSleep((CApplication *)v7) )
    {
      v8 = 0;
      goto LABEL_22;
    }
    if ( (unsigned int)CApplication::HasBackgroundAudioTask((CApplication *)v7) )
    {
      v8 = 2;
      goto LABEL_22;
    }
    if ( (unsigned int)CApplication::IsUnrestrictedBackgroundAudioCapable((CApplication *)v7)
      && (CApplication::GetTotalActiveRenderStreamCount((CApplication *)v7)
       || (unsigned int)CApplication::IsInPlmSponsoredGracePeriod((CApplication *)v7)) )
    {
LABEL_14:
      v8 = 2;
      goto LABEL_22;
    }
    if ( (unsigned int)CApplication::IsBackgroundMediaRecordingCapable((CApplication *)v7) )
    {
      if ( CApplication::GetTotalActiveCaptureStreamCount((CApplication *)v7) )
        goto LABEL_14;
      if ( (unsigned int)CApplication::IsInPlmSponsoredGracePeriod((CApplication *)v7) )
      {
        v8 = 2;
        goto LABEL_22;
      }
    }
    if ( dword_1800522B0[v9] )
      v8 = 2 - ((unsigned int)CApplication::HasDuckedStream((CApplication *)v7) != 0);
    else
      v8 = 0;
    goto LABEL_22;
  }
LABEL_105:
  if ( v5 )
    LeaveCriticalSection(v5);
  return 0LL;
}
