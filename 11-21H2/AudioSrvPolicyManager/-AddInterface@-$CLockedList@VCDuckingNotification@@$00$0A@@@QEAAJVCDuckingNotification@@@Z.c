/*
 * XREFs of ?AddInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x18001051C
 * Callers:
 *     ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x180010330 (-AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreStartContext@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BF70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreS.c)
 *     ??$_Emplace_reallocate@AEAVCDuckingNotification@@H@?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@QEAAPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAU23@AEAVCDuckingNotification@@$$QEAH@Z @ 0x18000EC68 (--$_Emplace_reallocate@AEAVCDuckingNotification@@H@-$vector@ULockedListEntry@-$CLockedList@VCDuc.c)
 *     ??$construct@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@AEAVCDuckingNotification@@H@?$_Default_allocator_traits@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@SAXAEAV?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@1@QEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@AEAVCDuckingNotification@@$$QEAH@Z @ 0x18000F130 (--$construct@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@AEAVCDuckingNotifica.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CLockedList<CDuckingNotification,1,0>::AddInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        __int64 a2)
{
  __int64 v4; // rcx
  const char *v5; // r9
  char *v6; // rdx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rax
  volatile signed __int32 *v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // rdi
  volatile signed __int32 *v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned int v14; // [rsp+20h] [rbp-38h] BYREF
  LPCRITICAL_SECTION v15; // [rsp+28h] [rbp-30h]
  __int64 v16; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v16 = a2;
  EnterCriticalSection(lpCriticalSection);
  try
  {
    v15 = lpCriticalSection;
    v6 = *(char **)&lpCriticalSection[1].LockCount;
    DebugInfo = lpCriticalSection[1].DebugInfo;
    if ( DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)v6 )
      goto LABEL_10;
    while ( 1 )
    {
      if ( LODWORD(DebugInfo->CriticalSection) == *(_DWORD *)(a2 + 8) )
      {
        if ( !*(_QWORD *)&DebugInfo->Type )
          break;
        v4 = *(_QWORD *)a2;
        if ( !*(_QWORD *)a2 || *(_QWORD *)&DebugInfo->Type == v4 )
          break;
      }
      DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)((char *)DebugInfo + 64);
      if ( DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)v6 )
        goto LABEL_10;
    }
    if ( DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)v6 )
    {
LABEL_10:
      v14 = 1;
      if ( v6 == lpCriticalSection[1].OwningThread )
      {
        std::vector<CLockedList<CDuckingNotification,1,0>::LockedListEntry,std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>::_Emplace_reallocate<CDuckingNotification &,int>(
          &lpCriticalSection[1],
          v6,
          a2,
          (__int64)&v14);
      }
      else
      {
        std::_Default_allocator_traits<std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>::construct<CLockedList<CDuckingNotification,1,0>::LockedListEntry,CDuckingNotification &,int>(
          v4,
          (__int64)v6,
          (__int64 *)a2,
          (int *)&v14);
        *(_QWORD *)&lpCriticalSection[1].LockCount += 64LL;
      }
    }
    else
    {
      ++LODWORD(DebugInfo[1].CriticalSection);
    }
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    v8 = *(volatile signed __int32 **)(a2 + 48);
    if ( v8 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release(v8);
    v9 = *(_QWORD *)(a2 + 40);
    if ( v9 >= 8 )
      std::_Deallocate<16,0>(*(char **)(a2 + 16), 2 * v9 + 2);
    *(_QWORD *)(a2 + 32) = 0LL;
    *(_QWORD *)(a2 + 40) = 7LL;
    *(_WORD *)(a2 + 16) = 0;
    result = 0LL;
  }
  catch ( ... )
  {
    v14 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x89,
            (int)"onecoreuap\\internal\\avcore\\inc\\audiocore\\LockedList.h",
            v5);
    v11 = v16;
    v12 = *(volatile signed __int32 **)(v16 + 48);
    if ( v12 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release(v12);
    v13 = *(_QWORD *)(v11 + 40);
    if ( v13 >= 8 )
      std::_Deallocate<16,0>(*(char **)(v11 + 16), 2 * v13 + 2);
    *(_QWORD *)(v11 + 32) = 0LL;
    *(_QWORD *)(v11 + 40) = 7LL;
    *(_WORD *)(v11 + 16) = 0;
    return v14;
  }
  return result;
}
