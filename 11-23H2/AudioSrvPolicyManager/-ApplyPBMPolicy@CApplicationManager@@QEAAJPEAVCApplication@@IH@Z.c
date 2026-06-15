/*
 * XREFs of ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x180012290
 * Callers:
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x1800259B0 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?CommitGoodFaithPLMExemption@CApplication@@QEAAJXZ @ 0x180026468 (-CommitGoodFaithPLMExemption@CApplication@@QEAAJXZ.c)
 *     ?GoodFaithPLMExemptionExpired@CApplication@@QEAAJXZ @ 0x1800270C0 (-GoodFaithPLMExemptionExpired@CApplication@@QEAAJXZ.c)
 *     ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x180027220 (-GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z.c)
 *     ?OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAVCApplication@@@Z @ 0x18002D674 (-OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAVCApplication@@@Z.c)
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18002F440 (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?OnProcessCategoryDowngraded@CApplicationManager@@QEAAXPEAVCProcess@@@Z @ 0x18003AE98 (-OnProcessCategoryDowngraded@CApplicationManager@@QEAAXPEAVCProcess@@@Z.c)
 * Callees:
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x180005D80 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@IH@Z @ 0x180006730 (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMP.c)
 *     ?GetPLMExemptionStatus@CApplicationManager@@QEAA?AW4_PLM_EXEMPTION@@PEAVCApplication@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x1800088F0 (-GetPLMExemptionStatus@CApplicationManager@@QEAA-AW4_PLM_EXEMPTION@@PEAVCApplication@@W4__MIDL__.c)
 *     ?IsUnrestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x180008BA0 (-IsUnrestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ @ 0x18000A5D0 (-IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ.c)
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18000BA70 (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x180026F9C (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     ?GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ @ 0x180027020 (-GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ.c)
 *     ?HasDuckedStream@CApplication@@QEAAHXZ @ 0x180027380 (-HasDuckedStream@CApplication@@QEAAHXZ.c)
 *     ?IsMutedForSleep@CApplication@@QEAAHXZ @ 0x180027790 (-IsMutedForSleep@CApplication@@QEAAHXZ.c)
 *     ?IsInPlmSponsoredGracePeriod@CApplication@@QEAAHXZ @ 0x18002D038 (-IsInPlmSponsoredGracePeriod@CApplication@@QEAAHXZ.c)
 *     ?SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18002F4D4 (-SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     WPP_SF_SSSSSSS @ 0x18002FC20 (WPP_SF_SSSSSSS.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::ApplyPBMPolicy(
        CApplicationManager *this,
        struct CApplication *a2,
        unsigned int a3,
        int a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  unsigned int v9; // esi
  __int64 v10; // rsi
  unsigned int v11; // r12d
  int PLMExemptionStatus; // ebp
  const wchar_t *v13; // r13
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r10
  __int64 v18; // r11
  const wchar_t *v19; // rdx

  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  EnterCriticalSection(v8);
  EnterCriticalSection(v8);
  if ( *((_DWORD *)a2 + 158) )
  {
    v9 = *((_DWORD *)a2 + 159);
    goto LABEL_20;
  }
  if ( *((_DWORD *)a2 + 52) )
  {
    v9 = 2;
    goto LABEL_20;
  }
  v10 = (int)CApplication::Category((__int64)a2);
  if ( (unsigned int)CApplication::IsMutedForSleep(a2) )
  {
    v9 = 0;
    goto LABEL_20;
  }
  if ( (unsigned int)CApplication::HasBackgroundAudioTask(a2) )
  {
    v9 = 2;
    goto LABEL_20;
  }
  if ( CApplication::IsUnrestrictedBackgroundAudioCapable(a2)
    && (CApplication::GetTotalActiveRenderStreamCount(a2) || (unsigned int)CApplication::IsInPlmSponsoredGracePeriod(a2)) )
  {
    goto LABEL_12;
  }
  if ( !(unsigned int)CApplication::IsBackgroundMediaRecordingCapable(a2) )
    goto LABEL_47;
  if ( CApplication::GetTotalActiveCaptureStreamCount(a2) )
  {
LABEL_12:
    v9 = 2;
    goto LABEL_20;
  }
  if ( (unsigned int)CApplication::IsInPlmSponsoredGracePeriod(a2) )
  {
    v9 = 2;
  }
  else
  {
LABEL_47:
    if ( dword_180051280[v10] )
      v9 = 2 - ((unsigned int)CApplication::HasDuckedStream(a2) != 0);
    else
      v9 = 0;
  }
LABEL_20:
  if ( v8 )
    LeaveCriticalSection(v8);
  if ( *((_DWORD *)a2 + 156) )
    v11 = *((_DWORD *)a2 + 157);
  else
    v11 = v9;
  PLMExemptionStatus = CApplicationManager::GetPLMExemptionStatus((__int64)this, (__int64)a2, v9);
  if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    v13 = L"(override)";
    SoundLevelToString(v11);
    v14 = SoundLevelToString(v9);
    v19 = L"(override)";
    if ( !*((_DWORD *)a2 + 156) )
      v19 = L" ";
    if ( !*((_DWORD *)a2 + 158) )
      v13 = L" ";
    WPP_SF_SSSSSSS(
      *(_QWORD *)(v17 + 16),
      (_DWORD)v19,
      v15,
      *((_QWORD *)a2 + 3),
      v14,
      (__int64)v13,
      v15,
      (__int64)v19,
      v16,
      v18);
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  CApplication::ExecutePBMActions((__int64)a2, v9, v11, PLMExemptionStatus, a3, a4);
  if ( !v9 && !v11 )
  {
    if ( PLMExemptionStatus == 1 )
    {
      *((_DWORD *)a2 + 155) = 1;
      *((_DWORD *)a2 + 160) = 1;
      *((_DWORD *)a2 + 161) = 1;
    }
    else
    {
      if ( *((_DWORD *)a2 + 155) == 6 )
        goto LABEL_42;
      *((_DWORD *)a2 + 155) = 6;
    }
    *((_QWORD *)a2 + 79) = 1LL;
    *((_QWORD *)a2 + 78) = 1LL;
  }
LABEL_42:
  if ( v8 )
    LeaveCriticalSection(v8);
  return 0LL;
}
