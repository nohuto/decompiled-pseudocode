/*
 * XREFs of ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180006E90
 * Callers:
 *     _lambda_2f91230d5263cfdecd1c9667b3e483e9_::operator() @ 0x18000FD90 (_lambda_2f91230d5263cfdecd1c9667b3e483e9_--operator().c)
 *     ?OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0007@@@Z @ 0x18002D728 (-OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0.c)
 *     ?OnDialogSessionStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@_N@Z @ 0x18002D830 (-OnDialogSessionStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@_N@Z.c)
 *     ?OnVoipCallStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@_N@Z @ 0x18002DC70 (-OnVoipCallStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@_N@Z.c)
 *     ?OnAppStateChanged@CApplicationManager@@QEAAXPEBG_KHK@Z @ 0x18003ADC4 (-OnAppStateChanged@CApplicationManager@@QEAAXPEBG_KHK@Z.c)
 * Callees:
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x180005D80 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x180006BD0 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z @ 0x180007C70 (-RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x180007E90 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?NotifyVolumePolicyChange@CApplication@@IEAAXXZ @ 0x180008670 (-NotifyVolumePolicyChange@CApplication@@IEAAXXZ.c)
 *     ?RecalculateVolume@AudioStateMonitorManager@@QEAAJXZ @ 0x180008780 (-RecalculateVolume@AudioStateMonitorManager@@QEAAJXZ.c)
 *     ?GetPLMExemptionStatus@CApplicationManager@@QEAA?AW4_PLM_EXEMPTION@@PEAVCApplication@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x1800088F0 (-GetPLMExemptionStatus@CApplicationManager@@QEAA-AW4_PLM_EXEMPTION@@PEAVCApplication@@W4__MIDL__.c)
 *     ?IsUnrestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x180008BA0 (-IsUnrestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x180008FE0 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x1800092E0 (-ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ.c)
 *     ?ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ @ 0x1800093D0 (-ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ.c)
 *     ?IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ @ 0x18000A5D0 (-IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ.c)
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18000BA70 (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x180015328 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180015534 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     WPP_SF_ @ 0x18001F1CC (WPP_SF_.c)
 *     ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180025BD0 (-BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x180026F9C (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     ?GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ @ 0x180027020 (-GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ.c)
 *     ?HasDuckedStream@CApplication@@QEAAHXZ @ 0x180027380 (-HasDuckedStream@CApplication@@QEAAHXZ.c)
 *     ?HasPlayToStreams@CApplication@@QEAAHXZ @ 0x18002751C (-HasPlayToStreams@CApplication@@QEAAHXZ.c)
 *     ?IsMutedForSleep@CApplication@@QEAAHXZ @ 0x180027790 (-IsMutedForSleep@CApplication@@QEAAHXZ.c)
 *     ?RawCategory@CProcess@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x1800284D8 (-RawCategory@CProcess@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ @ 0x180029174 (-RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ.c)
 *     WPP_SF_SS @ 0x18002B9E0 (WPP_SF_SS.c)
 *     ?GrantExemptionForBCMStartupLatency@@YAHXZ @ 0x18002CC10 (-GrantExemptionForBCMStartupLatency@@YAHXZ.c)
 *     ?IsInPlmSponsoredGracePeriod@CApplication@@QEAAHXZ @ 0x18002D038 (-IsInPlmSponsoredGracePeriod@CApplication@@QEAAHXZ.c)
 *     ?SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18002F4D4 (-SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     WPP_SF_SSSSSSS @ 0x18002FC20 (WPP_SF_SSSSSSS.c)
 *     ?TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x180037E18 (-TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z @ 0x18003969C (-TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z.c)
 *     memmove_0 @ 0x180047698 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15
void __fastcall CApplicationManager::OnApplicationInteractivityChanged(
        CApplicationManager *this,
        struct CApplication *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r12
  const wchar_t *v5; // rax
  __int64 v6; // r15
  struct _RTL_CRITICAL_SECTION *v7; // r13
  _DWORD *v8; // rbx
  int v9; // esi
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // esi
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  int v16; // edi
  int v17; // esi
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  int v20; // r8d
  int v21; // eax
  __int64 v22; // rcx
  __int64 Next; // rax
  unsigned int v24; // r12d
  __int64 v25; // rbx
  unsigned int v26; // esi
  int PLMExemptionStatus; // eax
  const wchar_t *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r10
  const wchar_t *v33; // r11
  const wchar_t *v34; // rdx
  unsigned int v35; // ebp
  int v36; // edi
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // ebx
  __int64 v43; // rax
  __int64 v44; // r10
  _QWORD *v45; // rsi
  __int64 v46; // rbp
  _QWORD *v47; // rdi
  _QWORD *i; // rbx
  __int64 v49; // rcx
  int v50; // r12d
  AudioStateMonitorManager *v51; // rcx
  unsigned int v52; // edi
  int v53; // ebx
  _QWORD *v54; // rcx
  __int64 v55; // rdx
  int v56; // esi
  int v57; // ebx
  _QWORD *v58; // rdx
  __int64 v59; // r8
  BOOL v60; // edx
  struct _RTL_CRITICAL_SECTION *v61; // rbx
  _QWORD *v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rax
  struct TSSession *v65; // rdi
  struct CApplication **v66; // r8
  struct CApplication **v67; // rcx
  struct CApplication **v68; // rdx
  int v69; // [rsp+20h] [rbp-B8h]
  __int64 v70; // [rsp+50h] [rbp-88h] BYREF
  __int64 v71; // [rsp+58h] [rbp-80h] BYREF
  __int64 v72; // [rsp+60h] [rbp-78h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+68h] [rbp-70h]
  struct _RTL_CRITICAL_SECTION *v74; // [rsp+70h] [rbp-68h]
  char *v75; // [rsp+78h] [rbp-60h]
  char *v76; // [rsp+80h] [rbp-58h]
  __int64 v77; // [rsp+88h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]
  char *v79; // [rsp+E0h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v80; // [rsp+E8h] [rbp+10h]
  struct _RTL_CRITICAL_SECTION *v81; // [rsp+F0h] [rbp+18h]
  int v82; // [rsp+F8h] [rbp+20h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v74 = v4;
  if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v5 = L"INTERACTIVE";
    if ( !*((_DWORD *)a2 + 52) )
      v5 = L"NOT_INTERACTIVE";
    WPP_SF_SS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      45,
      (unsigned int)&WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids,
      *((_QWORD *)a2 + 3),
      (__int64)v5);
  }
  if ( !*((_DWORD *)a2 + 52) )
  {
    v8 = (_DWORD *)((char *)a2 + 692);
    *((_DWORD *)a2 + 172) = 1;
    *((_DWORD *)a2 + 173) = 1;
    v7 = (struct _RTL_CRITICAL_SECTION *)((char *)a2 + 32);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
    v6 = 0LL;
    v9 = 0;
    v10 = (_QWORD *)*((_QWORD *)a2 + 9);
    while ( v10 )
    {
      v11 = v10[2];
      v10 = (_QWORD *)*v10;
      if ( !*(_DWORD *)(v11 + 416) )
      {
        v12 = *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 - *(_QWORD *)(v11 + 520);
        if ( *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 == *(_QWORD *)(v11 + 520) )
          v12 = *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 - *(_QWORD *)(v11 + 528);
        if ( v12 )
        {
          v9 = 1;
          break;
        }
      }
    }
    if ( a2 != (struct CApplication *)-32LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
    if ( v9 )
    {
      *v8 = 0;
    }
    else
    {
      if ( (unsigned int)CApplication::IsUnrestrictedBackgroundAudioCapable(a2) )
        goto LABEL_216;
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
      v13 = 0;
      v14 = (_QWORD *)*((_QWORD *)a2 + 9);
      while ( v14 )
      {
        v15 = v14[2];
        v14 = (_QWORD *)*v14;
        if ( !*(_DWORD *)(v15 + 416) && *(_DWORD *)(v15 + 440) )
        {
          v13 = 1;
          break;
        }
      }
      if ( a2 != (struct CApplication *)-32LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
      if ( v13 )
      {
LABEL_216:
        if ( (unsigned int)CApplication::IsUnrestrictedBackgroundAudioCapable(a2) )
        {
          if ( !CApplication::GetTotalActiveRenderStreamCount(a2) )
            CApplication::BeginBCMStartupLatencyGracePeriod(a2);
          *v8 = 0;
        }
        if ( (unsigned int)CApplication::IsBackgroundMediaRecordingCapable(a2) )
        {
          if ( !CApplication::GetTotalActiveCaptureStreamCount(a2) )
            CApplication::BeginBCMStartupLatencyGracePeriod(a2);
          *((_DWORD *)a2 + 172) = 0;
        }
      }
      else
      {
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
        v16 = 4;
        v17 = 4;
        if ( *((_DWORD *)a2 + 153) )
        {
          v17 = *((_DWORD *)a2 + 154);
        }
        else
        {
          v18 = (_QWORD *)*((_QWORD *)a2 + 9);
          while ( v18 )
          {
            v19 = v18[2];
            v18 = (_QWORD *)*v18;
            if ( !*(_DWORD *)(v19 + 416) || *(_QWORD *)(v19 + 360) )
            {
              v20 = *(_DWORD *)(v19 + 480);
              v21 = v20 ? *(_DWORD *)(v19 + 484) : *(_DWORD *)(v19 + 312);
              if ( v21 < v17 )
              {
                if ( v20 )
                  v17 = *(_DWORD *)(v19 + 484);
                else
                  v17 = *(_DWORD *)(v19 + 312);
              }
            }
          }
        }
        if ( a2 != (struct CApplication *)-32LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
        if ( dword_180051280[v17] )
        {
          EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
          v79 = (char *)*((_QWORD *)a2 + 9);
          while ( v79 )
          {
            Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v22, &v79);
            v22 = *(_QWORD *)Next;
            if ( !*(_DWORD *)(*(_QWORD *)Next + 416LL) && (int)CProcess::RawCategory() < v16 )
              v16 = CProcess::RawCategory();
          }
          if ( a2 != (struct CApplication *)-32LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
          if ( !dword_180051280[v16] && *((_DWORD *)a2 + 54) )
            CApplication::RestrictAudioPlaybackToPrimaryCategories(a2);
          *v8 = 0;
        }
        else if ( (unsigned int)CApplication::IsBackgroundAudioCapable(a2) )
        {
          if ( !(unsigned int)CApplication::HasBackgroundAudioTask(a2)
            && !CApplication::GetTotalActiveCaptureStreamCount(a2)
            && (unsigned int)GrantExemptionForBCMStartupLatency() )
          {
            CApplication::BeginBCMStartupLatencyGracePeriod(a2);
            *v8 = 0;
          }
        }
        else if ( *((_DWORD *)a2 + 155) != 1 )
        {
          *((_DWORD *)a2 + 155) = 1;
          *((_QWORD *)a2 + 78) = 1LL;
          *((_QWORD *)a2 + 79) = 1LL;
          *((_DWORD *)a2 + 160) = 1;
          *((_DWORD *)a2 + 161) = 1;
        }
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    v75 = (char *)this + 32;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    v79 = (char *)this + 32;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    v80 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
    if ( *((_DWORD *)a2 + 158) )
    {
      v24 = *((_DWORD *)a2 + 159);
      goto LABEL_92;
    }
    if ( *((_DWORD *)a2 + 52) )
    {
      v24 = 2;
      goto LABEL_92;
    }
    v25 = (int)CApplication::Category(a2);
    if ( (unsigned int)CApplication::IsMutedForSleep(a2) )
    {
      v24 = 0;
      goto LABEL_92;
    }
    if ( (unsigned int)CApplication::HasBackgroundAudioTask(a2) )
    {
      v24 = 2;
      goto LABEL_92;
    }
    if ( (unsigned int)CApplication::IsUnrestrictedBackgroundAudioCapable(a2)
      && (CApplication::GetTotalActiveRenderStreamCount(a2)
       || (unsigned int)CApplication::IsInPlmSponsoredGracePeriod(a2)) )
    {
      goto LABEL_84;
    }
    if ( !(unsigned int)CApplication::IsBackgroundMediaRecordingCapable(a2) )
      goto LABEL_217;
    if ( CApplication::GetTotalActiveCaptureStreamCount(a2) )
    {
LABEL_84:
      v24 = 2;
      goto LABEL_92;
    }
    if ( (unsigned int)CApplication::IsInPlmSponsoredGracePeriod(a2) )
    {
      v24 = 2;
    }
    else
    {
LABEL_217:
      if ( dword_180051280[v25] )
        v24 = 2 - ((unsigned int)CApplication::HasDuckedStream(a2) != 0);
      else
        v24 = 0;
    }
LABEL_92:
    LODWORD(v79) = v24;
    if ( this != (CApplicationManager *)-32LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    if ( *((_DWORD *)a2 + 156) )
      v26 = *((_DWORD *)a2 + 157);
    else
      v26 = v24;
    LODWORD(v80) = v26;
    PLMExemptionStatus = CApplicationManager::GetPLMExemptionStatus(this, a2, v24);
    v82 = PLMExemptionStatus;
    if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      v28 = L"(override)";
      if ( !*((_DWORD *)a2 + 160) )
        v28 = L" ";
      SoundLevelToString(v26);
      v29 = SoundLevelToString(v24);
      v34 = v33;
      if ( !*((_DWORD *)a2 + 156) )
        v34 = L" ";
      if ( !*((_DWORD *)a2 + 158) )
        v33 = L" ";
      WPP_SF_SSSSSSS(
        *(_QWORD *)(v32 + 16),
        (_DWORD)v34,
        v30,
        *((_QWORD *)a2 + 3),
        v29,
        (__int64)v33,
        v30,
        (__int64)v34,
        v31,
        (__int64)v28);
    }
    if ( this != (CApplicationManager *)-32LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    v35 = 209;
    LODWORD(v81) = 209;
    while ( 1 )
    {
      v36 = 0;
      v37 = v35 & 7;
      if ( v37 != 1 )
      {
        v38 = v37 - 2;
        if ( v38 )
        {
          v39 = v38 - 1;
          if ( v39 )
          {
            if ( v39 == 1 )
              Sleep(0xAu);
          }
          else
          {
            EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 336));
            v40 = v82;
            *((_DWORD *)a2 + 95) = v82;
            if ( v40 == 1 )
              v36 = *((_DWORD *)a2 + 68) != 0;
            if ( a2 != (struct CApplication *)-336LL )
              LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 336));
            if ( !v36 )
              CApplication::ProcessPendingPLMExemptionChange(a2);
          }
        }
        else
        {
          EnterCriticalSection((LPCRITICAL_SECTION)a2 + 7);
          *((_DWORD *)a2 + 81) = v24;
          if ( (signed int)v24 < *((_DWORD *)a2 + 82) )
            v36 = *((_DWORD *)a2 + 68) != 0;
          if ( a2 != (struct CApplication *)-280LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)a2 + 7);
          if ( !v36 )
            CApplication::ProcessPendingSoundLevelNotification(a2);
        }
        goto LABEL_162;
      }
      v41 = *((_DWORD *)a2 + 54);
      v42 = v41 == 0;
      *((_DWORD *)a2 + 54) = v26;
      if ( v41 != v26 )
        break;
      CApplication::RecalculateVolume(a2, 3LL);
LABEL_162:
      v35 >>= 3;
      LODWORD(v81) = v35;
      if ( !v35 )
      {
        if ( !v24 && !v26 )
        {
          if ( v82 == 1 )
          {
            *((_DWORD *)a2 + 155) = 1;
            *((_QWORD *)a2 + 78) = 1LL;
            *((_QWORD *)a2 + 79) = 1LL;
            *((_DWORD *)a2 + 160) = 1;
            *((_DWORD *)a2 + 161) = 1;
          }
          else if ( *((_DWORD *)a2 + 155) != 6 )
          {
            *((_DWORD *)a2 + 155) = 6;
            *((_QWORD *)a2 + 78) = 1LL;
            *((_QWORD *)a2 + 79) = 1LL;
          }
        }
        v4 = lpCriticalSection;
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
        goto LABEL_172;
      }
    }
    if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v43 = SoundLevelToString(v26);
      WPP_SF_SS(
        *(_QWORD *)(v44 + 16),
        12,
        (unsigned int)&WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids,
        *((_QWORD *)a2 + 3),
        v43);
    }
    LOBYTE(v36) = v26 == 0;
    if ( v42 != v36 )
      CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)g_ApplicationManager, *((_DWORD *)a2 + 53), 3u);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
    v76 = (char *)a2 + 32;
    v45 = (_QWORD *)*((_QWORD *)a2 + 9);
    if ( !v45 )
    {
LABEL_153:
      CApplication::NotifyVolumePolicyChange(a2);
      if ( a2 != (struct CApplication *)-32LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 224));
      v81 = (struct _RTL_CRITICAL_SECTION *)((char *)a2 + 224);
      *((_DWORD *)a2 + 68) = 1;
      if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids);
      }
      v72 = -4400000LL;
      v69 = 0;
      (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, __int64 *, _QWORD))(*(_QWORD *)ThreadPool + 24LL))(
        ThreadPool,
        *((_QWORD *)a2 + 33),
        &v72,
        0LL);
      if ( a2 != (struct CApplication *)-224LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 224));
      v26 = (unsigned int)v80;
      goto LABEL_162;
    }
LABEL_135:
    v46 = v45[2];
    v45 = (_QWORD *)*v45;
    if ( *(_DWORD *)(v46 + 416) )
      goto LABEL_151;
    EnterCriticalSection((LPCRITICAL_SECTION)(v46 + 24));
    v77 = v46 + 24;
    v47 = *(_QWORD **)(v46 + 72);
    for ( i = (_QWORD *)*v47; ; i = (_QWORD *)*i )
    {
      if ( i == v47 )
      {
        v51 = *(AudioStateMonitorManager **)(v46 + 704);
        if ( v51 )
          AudioStateMonitorManager::RecalculateVolume(v51);
        if ( v46 != -24 )
          LeaveCriticalSection((LPCRITICAL_SECTION)(v46 + 24));
LABEL_151:
        if ( !v45 )
        {
          v35 = (unsigned int)v81;
          v6 = 0LL;
          v24 = (unsigned int)v79;
          goto LABEL_153;
        }
        goto LABEL_135;
      }
      v49 = i[3];
      v70 = 0LL;
      v50 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v49 + 24LL))(
              v49,
              &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
              &v71);
      if ( v50 >= 0 )
      {
        if ( !v71 )
          goto LABEL_144;
        v50 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v71)(
                v71,
                &GUID_fe394136_900b_469c_bdfc_4321bcd92f34,
                &v70);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v71 + 16LL))(v71);
      }
      if ( v50 >= 0 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v70 + 32LL))(v70) != 2 )
      {
        LOBYTE(v69) = 0;
        (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64, int, _QWORD))(*(_QWORD *)v70 + 152LL))(
          v70,
          3LL,
          0LL,
          0xFFFFFFFFLL,
          v69,
          0LL);
      }
LABEL_144:
      if ( v70 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 16LL))(v70);
    }
  }
  v6 = 0LL;
  *((_QWORD *)a2 + 86) = 0LL;
  if ( (unsigned int)CApplication::IsBackgroundAudioCapable(a2) )
    CApplication::CleanupBCMStartupLatencyGracePeriod(a2);
  *(_QWORD *)((char *)a2 + 620) = 0LL;
  *(_QWORD *)((char *)a2 + 628) = 0LL;
  *(_QWORD *)((char *)a2 + 636) = 0LL;
  *((_DWORD *)a2 + 161) = 1;
  CApplicationManager::ApplyPBMPolicyForAllAppsInSession(this, *((_DWORD *)a2 + 53), 1);
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)a2 + 32);
LABEL_172:
  EnterCriticalSection(v4);
  v80 = v4;
  v52 = *((_DWORD *)a2 + 53);
  LODWORD(v79) = v52;
  EnterCriticalSection(v7);
  v53 = 0;
  v54 = (_QWORD *)*((_QWORD *)a2 + 9);
  while ( v54 )
  {
    v55 = v54[2];
    v54 = (_QWORD *)*v54;
    if ( !*(_DWORD *)(v55 + 416) && *(_DWORD *)(v55 + 496) )
    {
      v56 = 1;
      v53 = 1;
      goto LABEL_178;
    }
  }
  v56 = 1;
LABEL_178:
  if ( v7 )
    LeaveCriticalSection(v7);
  if ( !v53 || !*((_DWORD *)a2 + 52) )
  {
    EnterCriticalSection(v7);
    v57 = 0;
    v58 = (_QWORD *)*((_QWORD *)a2 + 9);
    while ( v58 )
    {
      v59 = v58[2];
      v58 = (_QWORD *)*v58;
      if ( !*(_DWORD *)(v59 + 416) && *(_DWORD *)(v59 + 500) )
      {
        v57 = 1;
        break;
      }
    }
    if ( v7 )
      LeaveCriticalSection(v7);
    if ( !v57 || !(unsigned int)CApplication::IsBackgroundAudioCapable(a2) )
      v56 = 0;
  }
  v60 = CApplication::HasPlayToStreams(a2) != 0;
  if ( v56 && !v60 )
  {
    TsSessionIdAddActiveMediaApp(v52, a2);
    goto LABEL_212;
  }
  v61 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v81 = v61;
  EnterCriticalSection(&stru_180061648);
  v62 = (_QWORD *)(qword_1800616F8
                 + 16
                 * (qword_180061710 & (0x100000001B3LL
                                     * (BYTE3(v79) ^ (0x100000001B3LL
                                                    * (BYTE2(v79) ^ (0x100000001B3LL
                                                                   * (BYTE1(v79) ^ (0x100000001B3LL
                                                                                  * ((unsigned __int8)v52 ^ 0xCBF29CE484222325uLL))))))))));
  v63 = v62[1];
  if ( v63 != qword_1800616E8 )
  {
    while ( v52 != *(_DWORD *)(v63 + 16) )
    {
      if ( v63 == *v62 )
        goto LABEL_200;
      v63 = *(_QWORD *)(v63 + 8);
    }
    v6 = v63;
  }
LABEL_200:
  v64 = qword_1800616E8;
  if ( v6 )
    v64 = v6;
  if ( v64 == qword_1800616E8 )
  {
    LeaveCriticalSection(&stru_180061648);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x52A,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)0x80070490LL,
      v69);
    if ( !v61 )
      goto LABEL_212;
LABEL_211:
    LeaveCriticalSection(v61);
    goto LABEL_212;
  }
  v65 = *(struct TSSession **)(v64 + 24);
  LeaveCriticalSection(&stru_180061648);
  v66 = (struct CApplication **)*((_QWORD *)v65 + 7);
  v67 = (struct CApplication **)*((_QWORD *)v65 + 6);
  if ( v67 != v66 )
  {
    while ( 1 )
    {
      v68 = v67 + 1;
      if ( *v67 == a2 )
        break;
      ++v67;
      if ( v68 == v66 )
        goto LABEL_210;
    }
    memmove_0(v67, v68, (char *)v66 - (char *)v68);
    *((_QWORD *)v65 + 7) -= 8LL;
    TsSessionSendAppManagerNotification(v65);
  }
LABEL_210:
  if ( v61 )
    goto LABEL_211;
LABEL_212:
  if ( v4 )
  {
    LeaveCriticalSection(v4);
    LeaveCriticalSection(v4);
  }
}
