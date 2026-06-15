/*
 * XREFs of ?ForEachDuckableSession@CDuckingManager@@AEAAJPEBG$$QEAV?$function@$$A6AJPEAUIAudioSessionInfo@@@Z@std@@@Z @ 0x18001099C
 * Callers:
 *     _lambda_1e03ffd0b3816784b19a9acf2aab20e8_::operator() @ 0x18000FAB0 (_lambda_1e03ffd0b3816784b19a9acf2aab20e8_--operator().c)
 *     ?ApplyDuckingGainStages@CDuckingManager@@AEAAJPEAUIDuckingController@@PEBG@Z @ 0x1800106B0 (-ApplyDuckingGainStages@CDuckingManager@@AEAAJPEAUIDuckingController@@PEBG@Z.c)
 *     ?NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z @ 0x1800110C8 (-NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z.c)
 *     ?RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z @ 0x1800121A8 (-RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Copy_assign@?$forward_list@PEAUIAudioSessionInfo@@V?$allocator@PEAUIAudioSessionInfo@@@std@@@std@@AEAAXAEBV12@U?$integral_constant@_N$0A@@2@@Z @ 0x1800129D4 (-_Copy_assign@-$forward_list@PEAUIAudioSessionInfo@@V-$allocator@PEAUIAudioSessionInfo@@@std@@@s.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDuckingManager::ForEachDuckableSession(__int64 a1, __int64 a2, __int64 a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  const char *v7; // r9
  char *v8; // rcx
  char *v9; // rbx
  struct _RTL_CRITICAL_SECTION *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  char *v13; // rbx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char *v16; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+58h] [rbp+20h] BYREF

  v16 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  try
  {
    v17 = v6;
    if ( &v16 != (char **)(a1 + 64) )
      std::forward_list<IAudioSessionInfo *>::_Copy_assign(&v16);
    if ( v6 )
      LeaveCriticalSection(v6);
    v8 = v16;
    v9 = v16;
    while ( v9 )
    {
      v10 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)v9 + 1);
      v11 = ((__int64 (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v10->DebugInfo[1].ProcessLocksList.Blink)(v10);
      if ( !(unsigned int)_o__wcsicmp(a2, v11) )
      {
        v17 = v10;
        v12 = *(_QWORD *)(a3 + 56);
        if ( !v12 )
          std::_Xbad_function_call();
        (*(void (__fastcall **)(__int64, struct _RTL_CRITICAL_SECTION **))(*(_QWORD *)v12 + 16LL))(v12, &v17);
      }
      v9 = *(char **)v9;
      v8 = v16;
    }
    v16 = 0LL;
    if ( v8 )
    {
      do
      {
        v13 = *(char **)v8;
        std::_Deallocate<16,0>(v8, 0x10uLL);
        v8 = v13;
      }
      while ( v13 );
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3E5,
                           (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
                           v7);
  }
  return result;
}
