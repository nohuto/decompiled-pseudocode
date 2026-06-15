/*
 * XREFs of ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCApplication@@@Z @ 0x18000D430
 * Callers:
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProcess@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x18002CB0C (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProc.c)
 * Callees:
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x180005D80 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?IsUnrestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x180008BA0 (-IsUnrestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ @ 0x18000A5D0 (-IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ.c)
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18000BA70 (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x180026F9C (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     ?GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ @ 0x180027020 (-GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ.c)
 *     ?HasDuckedStream@CApplication@@QEAAHXZ @ 0x180027380 (-HasDuckedStream@CApplication@@QEAAHXZ.c)
 *     ?IsMutedForSleep@CApplication@@QEAAHXZ @ 0x180027790 (-IsMutedForSleep@CApplication@@QEAAHXZ.c)
 *     ?IsInPlmSponsoredGracePeriod@CApplication@@QEAAHXZ @ 0x18002D038 (-IsInPlmSponsoredGracePeriod@CApplication@@QEAAHXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GetSoundLevel(__int64 a1, CApplication *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v4; // edi
  __int64 v5; // rsi

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  if ( *((_DWORD *)a2 + 158) )
  {
    v4 = *((_DWORD *)a2 + 159);
    goto LABEL_20;
  }
  if ( *((_DWORD *)a2 + 52) )
  {
    v4 = 2;
    goto LABEL_20;
  }
  v5 = (int)CApplication::Category((__int64)a2);
  if ( (unsigned int)CApplication::IsMutedForSleep(a2) )
  {
    v4 = 0;
    goto LABEL_20;
  }
  if ( (unsigned int)CApplication::HasBackgroundAudioTask(a2) )
  {
    v4 = 2;
    goto LABEL_20;
  }
  if ( CApplication::IsUnrestrictedBackgroundAudioCapable(a2)
    && (CApplication::GetTotalActiveRenderStreamCount(a2) || (unsigned int)CApplication::IsInPlmSponsoredGracePeriod(a2)) )
  {
    goto LABEL_12;
  }
  if ( !(unsigned int)CApplication::IsBackgroundMediaRecordingCapable(a2) )
    goto LABEL_25;
  if ( CApplication::GetTotalActiveCaptureStreamCount(a2) )
  {
LABEL_12:
    v4 = 2;
    goto LABEL_20;
  }
  if ( (unsigned int)CApplication::IsInPlmSponsoredGracePeriod(a2) )
  {
    v4 = 2;
  }
  else
  {
LABEL_25:
    if ( dword_180051280[v5] )
      v4 = 2 - ((unsigned int)CApplication::HasDuckedStream(a2) != 0);
    else
      v4 = 0;
  }
LABEL_20:
  if ( v3 )
    LeaveCriticalSection(v3);
  return v4;
}
