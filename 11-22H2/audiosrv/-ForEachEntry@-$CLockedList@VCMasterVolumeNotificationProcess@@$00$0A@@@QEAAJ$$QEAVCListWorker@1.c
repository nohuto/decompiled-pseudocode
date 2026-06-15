/*
 * XREFs of ?ForEachEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x180003DA0
 * Callers:
 *     ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x180003870 (-OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Clear_and_reserve_geometric@?$vector@ULockedListEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@@std@@@std@@AEAAX_K@Z @ 0x18008403E (-_Clear_and_reserve_geometric@-$vector@ULockedListEntry@-$CLockedList@VCMasterVolumeNotification.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CLockedList<CMasterVolumeNotificationProcess,1,0>::ForEachEntry(
        LPCRITICAL_SECTION lpCriticalSection,
        void (__fastcall ***a2)(_QWORD, _QWORD))
{
  unsigned int *v4; // rcx
  char *v5; // rsi
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  _QWORD *v9; // r8
  unsigned int *v10; // rbx
  unsigned int *v11; // rdi
  _QWORD *v13; // rdx
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h]

  v14 = 0LL;
  v15 = 0LL;
  EnterCriticalSection(lpCriticalSection);
  v4 = 0LL;
  if ( &v14 != (__int128 *)&lpCriticalSection[1] )
  {
    v5 = *(char **)&lpCriticalSection[1].LockCount;
    DebugInfo = lpCriticalSection[1].DebugInfo;
    v7 = (v5 - (char *)DebugInfo) >> 3;
    v8 = (__int64)(*((_QWORD *)&v14 + 1) - v14) >> 3;
    if ( v7 > v8 )
    {
      if ( v7 > (v15 - (__int64)v14) >> 3 )
      {
        std::vector<CLockedList<CMasterVolumeNotificationProcess,1,0>::LockedListEntry,std::allocator<CLockedList<CMasterVolumeNotificationProcess,1,0>::LockedListEntry>>::_Clear_and_reserve_geometric(&v14);
        v8 = 0LL;
        v4 = (unsigned int *)v14;
      }
      v13 = &DebugInfo->Type + 4 * v8;
      if ( DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)v13 )
      {
        do
        {
          *(_QWORD *)v4 = *(_QWORD *)&DebugInfo->Type;
          v4 += 2;
          DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)((char *)DebugInfo + 8);
        }
        while ( DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)v13 );
        v4 = (unsigned int *)v14;
      }
      v9 = (_QWORD *)*((_QWORD *)&v14 + 1);
      if ( v13 == (_QWORD *)v5 )
        goto LABEL_4;
      do
        *v9++ = *v13++;
      while ( v13 != (_QWORD *)v5 );
    }
    else
    {
      v9 = (_QWORD *)(v14 + 8 * v7);
      if ( DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)v5 )
      {
LABEL_4:
        *((_QWORD *)&v14 + 1) = v9;
        goto LABEL_5;
      }
      do
      {
        *(_QWORD *)v4 = *(_QWORD *)&DebugInfo->Type;
        v4 += 2;
        DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)((char *)DebugInfo + 8);
      }
      while ( DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)v5 );
    }
    v4 = (unsigned int *)v14;
    goto LABEL_4;
  }
LABEL_5:
  if ( lpCriticalSection )
  {
    LeaveCriticalSection(lpCriticalSection);
    v4 = (unsigned int *)v14;
  }
  v10 = v4;
  v11 = (unsigned int *)*((_QWORD *)&v14 + 1);
  while ( v10 != v11 )
  {
    (**a2)(a2, *v10);
    v10 += 2;
    v4 = (unsigned int *)v14;
  }
  if ( v4 )
    std::_Deallocate<16,0>(v4, (v15 - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL);
  return 0LL;
}
