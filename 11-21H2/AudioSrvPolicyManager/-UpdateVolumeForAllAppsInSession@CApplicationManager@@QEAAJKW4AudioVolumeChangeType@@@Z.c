/*
 * XREFs of ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x1800253E0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_80aa732c9f0abca8142808a505c7029f__void_::_Do_call @ 0x18000E1A0 (std--_Func_impl_no_alloc__lambda_80aa732c9f0abca8142808a505c7029f__void_--_Do_call.c)
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@IH@Z @ 0x180016B1C (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMP.c)
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x18001AB8C (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180021714 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?UpdateModernStandbyAudioState@CApplicationManager@@QEAAJK@Z @ 0x18002531C (-UpdateModernStandbyAudioState@CApplicationManager@@QEAAJK@Z.c)
 *     std::_Func_impl_no_alloc__lambda_450436a14271dedc9936bb949bbf07b2__void_::_Do_call @ 0x180027D20 (std--_Func_impl_no_alloc__lambda_450436a14271dedc9936bb949bbf07b2__void_--_Do_call.c)
 *     ??1CAastPreStartContext@@UEAA@XZ @ 0x18002A1C8 (--1CAastPreStartContext@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18002A418 (-RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180031D70 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180032264 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 * Callees:
 *     ?RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z @ 0x1800197A0 (-RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::UpdateVolumeForAllAppsInSession(__int64 a1, int a2, unsigned int a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  _QWORD *v7; // rbx
  __int64 v8; // rsi

  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v7 = *(_QWORD **)(a1 + 72);
  while ( v7 )
  {
    v8 = v7[2];
    v7 = (_QWORD *)*v7;
    if ( *(_DWORD *)(v8 + 212) == a2 )
    {
      EnterCriticalSection(v6);
      CApplication::RecalculateVolume(v8, a3);
      if ( v6 )
        LeaveCriticalSection(v6);
    }
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}
