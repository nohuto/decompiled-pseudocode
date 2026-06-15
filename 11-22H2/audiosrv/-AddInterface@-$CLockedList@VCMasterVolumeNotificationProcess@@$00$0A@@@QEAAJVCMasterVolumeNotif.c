/*
 * XREFs of ?AddInterface@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJVCMasterVolumeNotificationProcess@@@Z @ 0x18000B0AC
 * Callers:
 *     ?AddVolumeClientNotification@CVolumeStrip@@UEAAJK@Z @ 0x18000B060 (-AddVolumeClientNotification@CVolumeStrip@@UEAAJK@Z.c)
 * Callees:
 *     ??$emplace_back@AEAVCMasterVolumeNotificationProcess@@H@?$vector@ULockedListEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@@std@@@std@@QEAA?A_TAEAVCMasterVolumeNotificationProcess@@$$QEAH@Z @ 0x18000B134 (--$emplace_back@AEAVCMasterVolumeNotificationProcess@@H@-$vector@ULockedListEntry@-$CLockedList@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLockedList<CMasterVolumeNotificationProcess,1,0>::AddInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        int a2)
{
  PRTL_CRITICAL_SECTION_DEBUG i; // rax
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  EnterCriticalSection(lpCriticalSection);
  for ( i = lpCriticalSection[1].DebugInfo;
        i != *(PRTL_CRITICAL_SECTION_DEBUG *)&lpCriticalSection[1].LockCount;
        i = (PRTL_CRITICAL_SECTION_DEBUG)((char *)i + 8) )
  {
    if ( *(_DWORD *)&i->Type == a2 )
    {
      ++*(_DWORD *)(&i->CreatorBackTraceIndex + 1);
      goto LABEL_6;
    }
  }
  try
  {
    std::vector<CLockedList<CMasterVolumeNotificationProcess,1,0>::LockedListEntry,std::allocator<CLockedList<CMasterVolumeNotificationProcess,1,0>::LockedListEntry>>::emplace_back<CMasterVolumeNotificationProcess &,int>();
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x89,
                           (unsigned int)"avcore\\audiocore\\Include\\LockedList.h",
                           v6);
  }
LABEL_6:
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
