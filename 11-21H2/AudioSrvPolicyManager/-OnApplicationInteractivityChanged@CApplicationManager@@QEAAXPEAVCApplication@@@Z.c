/*
 * XREFs of ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180020BE8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_7be77f52425797de9629a1559daf9291__void_::_Do_call @ 0x18000DF00 (std--_Func_impl_no_alloc__lambda_7be77f52425797de9629a1559daf9291__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_7d69d41627b1d936e688f09992cbd28e__void_::_Do_call @ 0x18000E050 (std--_Func_impl_no_alloc__lambda_7d69d41627b1d936e688f09992cbd28e__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_bc5d681da67d9384ebd56f302790ab0c__void_::_Do_call @ 0x180025570 (std--_Func_impl_no_alloc__lambda_bc5d681da67d9384ebd56f302790ab0c__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_2f91230d5263cfdecd1c9667b3e483e9__void_::_Do_call @ 0x180026B10 (std--_Func_impl_no_alloc__lambda_2f91230d5263cfdecd1c9667b3e483e9__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_574d5d0e55cfdb3d7e70cee17ad133ad__void_::_Do_call @ 0x180028060 (std--_Func_impl_no_alloc__lambda_574d5d0e55cfdb3d7e70cee17ad133ad__void_--_Do_call.c)
 * Callees:
 *     ?AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ @ 0x18001578C (-AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ.c)
 *     ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180015AF0 (-BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x180015ED8 (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180015FC8 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x180017B0C (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     ?GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ @ 0x180017B84 (-GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x180017DF4 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z @ 0x180018048 (-HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x1800182B0 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ @ 0x180018370 (-IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x1800186B8 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?RawCategory@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x1800196E8 (-RawCategory@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ @ 0x18001AB1C (-RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ.c)
 *     WPP_SF_SS @ 0x18001DF64 (WPP_SF_SS.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x18001F2CC (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x18001F3D0 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x180024F20 (-UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplicationManager::OnApplicationInteractivityChanged(
        CApplicationManager *this,
        struct CApplication *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  const wchar_t *v5; // rax
  DWORD pcbData; // [rsp+70h] [rbp+8h] BYREF
  int pvData; // [rsp+78h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+80h] [rbp+18h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v8 = v4;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v5 = L"INTERACTIVE";
    if ( !*((_DWORD *)a2 + 52) )
      v5 = L"NOT_INTERACTIVE";
    WPP_SF_SS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Du,
      &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids,
      *((const wchar_t **)a2 + 3),
      v5);
  }
  if ( !*((_DWORD *)a2 + 52) )
  {
    *((_DWORD *)a2 + 172) = 1;
    *((_DWORD *)a2 + 173) = 1;
    if ( !(unsigned int)CApplication::HasBackgroundAudioTask(a2) )
    {
      if ( (unsigned int)CApplication::IsBackgroundAudioCapable(a2)
        && !(unsigned int)CApplication::IsRestrictedBackgroundAudioCapable(a2)
        && (unsigned int)CApplication::HasSmtcSubscription((__int64)a2, 1)
        || (unsigned int)CApplication::IsBackgroundMediaRecordingCapable(a2) )
      {
        if ( (unsigned int)CApplication::IsBackgroundAudioCapable(a2)
          && !(unsigned int)CApplication::IsRestrictedBackgroundAudioCapable(a2)
          && (unsigned int)CApplication::HasSmtcSubscription((__int64)a2, 1) )
        {
          if ( !(unsigned int)CApplication::GetTotalActiveRenderStreamCount(a2) )
            CApplication::BeginBCMStartupLatencyGracePeriod(a2);
          *((_DWORD *)a2 + 173) = 0;
        }
        if ( (unsigned int)CApplication::IsBackgroundMediaRecordingCapable(a2) )
        {
          if ( !(unsigned int)CApplication::GetTotalActiveCaptureStreamCount(a2) )
            CApplication::BeginBCMStartupLatencyGracePeriod(a2);
          *((_DWORD *)a2 + 172) = 0;
        }
        goto LABEL_38;
      }
      if ( dword_18004E588[(int)CApplication::Category((__int64)a2)] )
      {
        if ( !dword_18004E588[(int)CApplication::RawCategory((__int64)a2)] && *((_DWORD *)a2 + 54) )
          CApplication::RestrictAudioPlaybackToPrimaryCategories(a2);
      }
      else
      {
        if ( !(unsigned int)CApplication::IsBackgroundAudioCapable(a2) )
        {
          CApplication::AddPBMStatusOverrideToSilenceAndRevokePLMExemption(a2);
LABEL_38:
          CApplicationManager::ApplyPBMPolicy(this, a2, 0xD1u, 1);
          goto LABEL_39;
        }
        if ( (unsigned int)CApplication::HasBackgroundAudioTask(a2) )
          goto LABEL_38;
        if ( (unsigned int)CApplication::GetTotalActiveCaptureStreamCount(a2) )
          goto LABEL_38;
        pcbData = 4;
        if ( !RegGetValueW(
                HKEY_LOCAL_MACHINE,
                L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
                L"DisableExemptionForBCMStartupLatency",
                0x18u,
                0LL,
                &pvData,
                &pcbData) )
        {
          if ( pvData )
            goto LABEL_38;
        }
        CApplication::BeginBCMStartupLatencyGracePeriod(a2);
      }
    }
    *((_DWORD *)a2 + 173) = 0;
    goto LABEL_38;
  }
  *((_QWORD *)a2 + 86) = 0LL;
  if ( (unsigned int)CApplication::IsBackgroundAudioCapable(a2) )
    CApplication::CleanupBCMStartupLatencyGracePeriod(a2);
  *(_QWORD *)((char *)a2 + 620) = 0LL;
  *(_QWORD *)((char *)a2 + 628) = 0LL;
  *(_QWORD *)((char *)a2 + 636) = 0LL;
  *((_DWORD *)a2 + 161) = 1;
  CApplicationManager::ApplyPBMPolicyForAllAppsInSession(this, *((_DWORD *)a2 + 53), 1);
LABEL_39:
  CApplicationManager::UpdateActiveMediaAppForSession(this, a2, 0);
  if ( v4 )
    LeaveCriticalSection(v4);
}
