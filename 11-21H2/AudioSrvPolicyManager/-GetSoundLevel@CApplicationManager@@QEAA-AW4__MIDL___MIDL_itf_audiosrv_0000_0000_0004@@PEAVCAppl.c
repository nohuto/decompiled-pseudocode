/*
 * XREFs of ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCApplication@@@Z @ 0x18001FF3C
 * Callers:
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x18001F894 (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProcess@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x180020078 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProc.c)
 * Callees:
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x180015ED8 (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x180017B0C (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     ?GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ @ 0x180017B84 (-GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x180017DF4 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?HasDuckedStream@CApplication@@QEAAHXZ @ 0x180017E90 (-HasDuckedStream@CApplication@@QEAAHXZ.c)
 *     ?HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z @ 0x180018048 (-HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x1800182B0 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ @ 0x180018370 (-IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ.c)
 *     ?IsMutedForSleep@CApplication@@QEAAHXZ @ 0x1800184AC (-IsMutedForSleep@CApplication@@QEAAHXZ.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x1800186B8 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?IsInPlmSponsoredGracePeriod@CApplication@@QEAAHXZ @ 0x180020780 (-IsInPlmSponsoredGracePeriod@CApplication@@QEAAHXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::GetSoundLevel(__int64 a1, CApplication *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  unsigned int v4; // ebx
  __int64 v5; // rsi

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  if ( *((_DWORD *)a2 + 158) )
  {
    v4 = *((_DWORD *)a2 + 159);
    goto LABEL_18;
  }
  if ( *((_DWORD *)a2 + 52) )
    goto LABEL_4;
  v5 = (int)CApplication::Category((__int64)a2);
  if ( (unsigned int)CApplication::IsMutedForSleep(a2) )
    goto LABEL_6;
  if ( (unsigned int)CApplication::HasBackgroundAudioTask(a2)
    || (unsigned int)CApplication::IsBackgroundAudioCapable(a2)
    && !(unsigned int)CApplication::IsRestrictedBackgroundAudioCapable(a2)
    && (unsigned int)CApplication::HasSmtcSubscription((__int64)a2, 1)
    && ((unsigned int)CApplication::GetTotalActiveRenderStreamCount(a2)
     || (unsigned int)CApplication::IsInPlmSponsoredGracePeriod(a2))
    || (unsigned int)CApplication::IsBackgroundMediaRecordingCapable(a2)
    && ((unsigned int)CApplication::GetTotalActiveCaptureStreamCount(a2)
     || (unsigned int)CApplication::IsInPlmSponsoredGracePeriod(a2)) )
  {
LABEL_4:
    v4 = 2;
    goto LABEL_18;
  }
  if ( !dword_18004E588[v5] )
LABEL_6:
    v4 = 0;
  else
    v4 = 2 - ((unsigned int)CApplication::HasDuckedStream(a2) != 0);
LABEL_18:
  if ( v3 )
    LeaveCriticalSection(v3);
  return v4;
}
