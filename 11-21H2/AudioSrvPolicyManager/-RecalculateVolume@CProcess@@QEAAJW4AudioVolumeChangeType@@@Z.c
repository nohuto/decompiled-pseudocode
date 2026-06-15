/*
 * XREFs of ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x180019830
 * Callers:
 *     ?RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z @ 0x1800197A0 (-RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x18001AB8C (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002BBC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x18001DE58 (-query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW4AUDIO_DIRECTION@@PEAKPEBG@Z @ 0x1800398B4 (-GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA-AW4__MIDL___MIDL_itf_audio.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CProcess::RecalculateVolume(__int64 a1, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r14
  __int64 ***v5; // rdi
  __int64 **i; // rbx
  __int64 v7; // rsi
  _QWORD *v8; // rbx
  __int64 v9; // r13
  __int64 v10; // r15
  int SoundLevelForExtendedAudioCategory; // r12d
  _DWORD *v12; // rax
  void *v13; // rdi
  int v15; // [rsp+20h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  void *v17; // [rsp+80h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+90h] [rbp+18h]
  __int64 v19; // [rsp+98h] [rbp+20h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v18 = v4;
  v5 = *(__int64 ****)(a1 + 72);
  for ( i = *v5; i != (__int64 **)v5; i = (__int64 **)*i )
  {
    v17 = 0LL;
    if ( (int)wil::details::weak_query_policy::query(
                (struct IWeakReference *)i[3],
                &GUID_fe394136_900b_469c_bdfc_4321bcd92f34,
                &v17) >= 0
      && (*(unsigned int (__fastcall **)(void *))(*(_QWORD *)v17 + 32LL))(v17) != 2 )
    {
      LOBYTE(v15) = 0;
      (*(void (__fastcall **)(void *, _QWORD, _QWORD, __int64, int, _QWORD))(*(_QWORD *)v17 + 152LL))(
        v17,
        a2,
        0LL,
        0xFFFFFFFFLL,
        v15,
        0LL);
    }
    if ( v17 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v7 = *(_QWORD *)(a1 + 704);
  if ( v7 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 16));
    v19 = v7 + 16;
    v8 = *(_QWORD **)(v7 + 64);
    while ( 1 )
    {
      v8 = (_QWORD *)*v8;
      if ( v8 == *(_QWORD **)(v7 + 64) )
        break;
      v9 = v8[2];
      v10 = v8[3];
      SoundLevelForExtendedAudioCategory = AudioStateMonitorManager::GetSoundLevelForExtendedAudioCategory(
                                             v7,
                                             *(_QWORD *)v10,
                                             *(_QWORD *)(v10 + 8),
                                             *(_QWORD *)(v10 + 16));
      if ( **(_DWORD **)(v10 + 24) != SoundLevelForExtendedAudioCategory )
      {
        LODWORD(v17) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 128) + 40LL))(*(_QWORD *)(v7 + 128));
        v12 = operator new[](0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
        v13 = v12;
        if ( v12 )
        {
          *((_QWORD *)v12 + 2) = 0LL;
          *v12 = 32;
          v12[1] = 0x80000;
          *((_QWORD *)v12 + 1) = 0LL;
          *((_QWORD *)v12 + 3) = v9;
          GenerateMediaEvent(v12, (unsigned int)v17);
          operator delete(v13);
          **(_DWORD **)(v10 + 24) = SoundLevelForExtendedAudioCategory;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xC2,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\audiostatemonitormanager\\audiostatemonitormanager.cpp",
            (const char *)0x8007000ELL);
        }
      }
    }
    if ( v7 != -16 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v7 + 16));
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
