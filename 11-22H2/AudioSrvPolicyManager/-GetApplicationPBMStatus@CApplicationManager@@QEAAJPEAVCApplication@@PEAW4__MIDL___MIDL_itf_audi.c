/*
 * XREFs of ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x18000B1D0
 * Callers:
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x1800293CC (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 * Callees:
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x180005DD0 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?GetPLMExemptionStatus@CApplicationManager@@QEAA?AW4_PLM_EXEMPTION@@PEAVCApplication@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x180008940 (-GetPLMExemptionStatus@CApplicationManager@@QEAA-AW4_PLM_EXEMPTION@@PEAVCApplication@@W4__MIDL__.c)
 *     ?IsUnrestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x180008BF0 (-IsUnrestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ @ 0x18000A620 (-IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ.c)
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18000BAC0 (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x18002718C (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     ?GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ @ 0x180027210 (-GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ.c)
 *     ?HasDuckedStream@CApplication@@QEAAHXZ @ 0x180027570 (-HasDuckedStream@CApplication@@QEAAHXZ.c)
 *     ?IsMutedForSleep@CApplication@@QEAAHXZ @ 0x180027980 (-IsMutedForSleep@CApplication@@QEAAHXZ.c)
 *     ?IsInPlmSponsoredGracePeriod@CApplication@@QEAAHXZ @ 0x18002D228 (-IsInPlmSponsoredGracePeriod@CApplication@@QEAAHXZ.c)
 *     ?SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18002F6C4 (-SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     WPP_SF_SSSSSSS @ 0x18002FE10 (WPP_SF_SSSSSSS.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::GetApplicationPBMStatus(
        CApplicationManager *this,
        struct CApplication *a2,
        enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *a3,
        enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *a4,
        enum _PLM_EXEMPTION *a5)
{
  struct _RTL_CRITICAL_SECTION *v9; // rbx
  unsigned int v10; // r15d
  __int64 v11; // r15
  const wchar_t *v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  const wchar_t *v17; // r10
  __int64 v18; // r11

  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  EnterCriticalSection(v9);
  if ( *((_DWORD *)a2 + 158) )
  {
    v10 = *((_DWORD *)a2 + 159);
    goto LABEL_20;
  }
  if ( *((_DWORD *)a2 + 52) )
  {
    v10 = 2;
    goto LABEL_20;
  }
  v11 = (int)CApplication::Category(a2);
  if ( (unsigned int)CApplication::IsMutedForSleep(a2) )
  {
    v10 = 0;
    goto LABEL_20;
  }
  if ( (unsigned int)CApplication::HasBackgroundAudioTask(a2) )
  {
    v10 = 2;
    goto LABEL_20;
  }
  if ( CApplication::IsUnrestrictedBackgroundAudioCapable(a2)
    && (CApplication::GetTotalActiveRenderStreamCount(a2) || (unsigned int)CApplication::IsInPlmSponsoredGracePeriod(a2)) )
  {
    goto LABEL_12;
  }
  if ( !(unsigned int)CApplication::IsBackgroundMediaRecordingCapable(a2) )
    goto LABEL_45;
  if ( CApplication::GetTotalActiveCaptureStreamCount(a2) )
  {
LABEL_12:
    v10 = 2;
    goto LABEL_20;
  }
  if ( (unsigned int)CApplication::IsInPlmSponsoredGracePeriod(a2) )
  {
    v10 = 2;
  }
  else
  {
LABEL_45:
    if ( dword_1800522B0[v11] )
      v10 = 2 - ((unsigned int)CApplication::HasDuckedStream(a2) != 0);
    else
      v10 = 0;
  }
LABEL_20:
  if ( v9 )
    LeaveCriticalSection(v9);
  if ( a3 )
    *(_DWORD *)a3 = v10;
  if ( a4 )
  {
    if ( *((_DWORD *)a2 + 156) )
      *(_DWORD *)a4 = *((_DWORD *)a2 + 157);
    else
      *(_DWORD *)a4 = v10;
  }
  if ( a5 )
    *(_DWORD *)a5 = CApplicationManager::GetPLMExemptionStatus((__int64)this, (__int64)a2, v10);
  if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    v12 = L"(override)";
    if ( !*((_DWORD *)a2 + 160) )
      v12 = L" ";
    if ( a4 )
      SoundLevelToString(*(unsigned int *)a4);
    v13 = SoundLevelToString(v10);
    if ( !*((_DWORD *)a2 + 158) )
      v17 = L" ";
    WPP_SF_SSSSSSS(*(_QWORD *)(v14 + 16), v14, v15, *((_QWORD *)a2 + 3), v13, (__int64)v17, v18, v16, v15, (__int64)v12);
  }
  if ( v9 )
    LeaveCriticalSection(v9);
  return 0LL;
}
