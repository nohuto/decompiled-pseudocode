/*
 * XREFs of ?RemoveInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x1800122B0
 * Callers:
 *     ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x180010760 (-DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@0@@Z @ 0x1800082D4 (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@@s.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreStartContext@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BF70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreS.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18000E4A8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CLockedList<CDuckingNotification,1,0>::RemoveInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        __int64 a2)
{
  struct _RTL_CRITICAL_SECTION_DEBUG *v4; // r14
  PRTL_CRITICAL_SECTION_DEBUG i; // rbx
  struct _RTL_CRITICAL_SECTION_DEBUG *v6; // rdi
  LIST_ENTRY *p_ProcessLocksList; // rbp
  LIST_ENTRY *v8; // rdx
  __int64 v9; // rdx
  volatile signed __int32 *Flink; // r8
  bool j; // zf
  signed __int32 v12; // eax
  struct _RTL_CRITICAL_SECTION_DEBUG *v13; // r15
  DWORD *p_Flags; // rdi
  char *v15; // rbp
  DWORD *v16; // rdx
  char **v17; // rcx
  __int64 v18; // rdx
  volatile signed __int32 *v19; // r8
  bool k; // zf
  signed __int32 v21; // eax
  volatile signed __int32 *v22; // rcx
  unsigned __int64 v23; // rdx

  EnterCriticalSection(lpCriticalSection);
  v4 = *(struct _RTL_CRITICAL_SECTION_DEBUG **)&lpCriticalSection[1].LockCount;
  for ( i = lpCriticalSection[1].DebugInfo; i != v4; i = (PRTL_CRITICAL_SECTION_DEBUG)((char *)i + 64) )
  {
    if ( LODWORD(i->CriticalSection) == *(_DWORD *)(a2 + 8)
      && (!*(_QWORD *)&i->Type || !*(_QWORD *)a2 || *(_QWORD *)&i->Type == *(_QWORD *)a2) )
    {
      j = LODWORD(i[1].CriticalSection)-- == 1;
      if ( j )
        break;
    }
  }
  if ( i != v4 )
  {
    v6 = (PRTL_CRITICAL_SECTION_DEBUG)((char *)i + 64);
    if ( &i[1].ProcessLocksList != (LIST_ENTRY *)v4 )
    {
      p_ProcessLocksList = &i->ProcessLocksList;
      do
      {
        if ( LODWORD(v6->CriticalSection) != *(_DWORD *)(a2 + 8)
          || *(_QWORD *)&v6->Type && *(_QWORD *)a2 && *(_QWORD *)&v6->Type != *(_QWORD *)a2
          || (j = LODWORD(v6[1].CriticalSection) == 1, --LODWORD(v6[1].CriticalSection), !j) )
        {
          *(_QWORD *)&i->Type = *(_QWORD *)&v6->Type;
          LODWORD(p_ProcessLocksList[-1].Blink) = v6->CriticalSection;
          v8 = &v6->ProcessLocksList;
          if ( p_ProcessLocksList != &v6->ProcessLocksList )
          {
            if ( *(_QWORD *)&v6->Flags >= 8uLL )
              v8 = v8->Flink;
            std::wstring::assign((char **)p_ProcessLocksList, v8, *(_QWORD *)&v6->EntryCount);
          }
          v9 = *(_QWORD *)&v6[1].Type;
          Flink = (volatile signed __int32 *)p_ProcessLocksList[2].Flink;
          p_ProcessLocksList[2].Flink = (struct _LIST_ENTRY *)v9;
          for ( j = v9 == 0; !j; j = v12 == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)(v9 + 12),
                                              v12 + 1,
                                              v12) )
          {
            v12 = *(_DWORD *)(v9 + 12);
            if ( v12 == 0x7FFFFFFF )
              break;
          }
          if ( Flink )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release(Flink);
          LODWORD(p_ProcessLocksList[2].Blink) = v6[1].CriticalSection;
          i = (PRTL_CRITICAL_SECTION_DEBUG)((char *)i + 64);
          p_ProcessLocksList += 4;
        }
        v6 = (struct _RTL_CRITICAL_SECTION_DEBUG *)((char *)v6 + 64);
      }
      while ( v6 != v4 );
    }
    if ( i != v4 )
    {
      v13 = *(struct _RTL_CRITICAL_SECTION_DEBUG **)&lpCriticalSection[1].LockCount;
      if ( v4 != v13 )
      {
        p_Flags = &v4->Flags;
        v15 = (char *)((char *)i - (char *)v4);
        do
        {
          *(_QWORD *)&i->Type = *((_QWORD *)p_Flags - 5);
          *(_DWORD *)&v15[(_QWORD)p_Flags - 32] = *(p_Flags - 8);
          v16 = p_Flags - 6;
          v17 = (char **)&v15[(_QWORD)p_Flags - 24];
          if ( v17 != (char **)(p_Flags - 6) )
          {
            if ( *(_QWORD *)p_Flags >= 8uLL )
              v16 = *(DWORD **)v16;
            std::wstring::assign(v17, v16, *((_QWORD *)p_Flags - 1));
          }
          v18 = *((_QWORD *)p_Flags + 1);
          v19 = *(volatile signed __int32 **)&v15[(_QWORD)p_Flags + 8];
          *(_QWORD *)&v15[(_QWORD)p_Flags + 8] = v18;
          for ( k = v18 == 0;
                !k;
                k = v21 == _InterlockedCompareExchange((volatile signed __int32 *)(v18 + 12), v21 + 1, v21) )
          {
            v21 = *(_DWORD *)(v18 + 12);
            if ( v21 == 0x7FFFFFFF )
              break;
          }
          if ( v19 )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release(v19);
          *(_DWORD *)&v15[(_QWORD)p_Flags + 16] = p_Flags[4];
          i = (PRTL_CRITICAL_SECTION_DEBUG)((char *)i + 64);
          p_Flags += 16;
        }
        while ( p_Flags - 10 != (DWORD *)v13 );
        v13 = *(struct _RTL_CRITICAL_SECTION_DEBUG **)&lpCriticalSection[1].LockCount;
      }
      std::_Destroy_range<std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>(i, v13);
      *(_QWORD *)&lpCriticalSection[1].LockCount = i;
    }
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  v22 = *(volatile signed __int32 **)(a2 + 48);
  if ( v22 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release(v22);
  v23 = *(_QWORD *)(a2 + 40);
  if ( v23 >= 8 )
    std::_Deallocate<16,0>(*(char **)(a2 + 16), 2 * v23 + 2);
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 40) = 7LL;
  *(_WORD *)(a2 + 16) = 0;
  return 0LL;
}
