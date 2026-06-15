/*
 * XREFs of ??$_Assign_range@PEAULockedListEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@@?$vector@ULockedListEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@@std@@@std@@AEAAXPEAULockedListEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@0Uforward_iterator_tag@1@@Z @ 0x1800CF64C
 * Callers:
 *     ?ForEachEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x1800D00AC (-ForEachEntry@-$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJ$$QEAVCListWorker@1.c)
 * Callees:
 *     ?_Clear_and_reserve_geometric@?$vector@ULockedListEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@@std@@@std@@AEAAX_K@Z @ 0x1800D0E20 (-_Clear_and_reserve_geometric@-$vector@ULockedListEntry@-$CLockedList@VCMasterVolumeNotification.c)
 */

unsigned __int64 __fastcall std::vector<CLockedList<CMasterVolumeNotificationProcess,1,0>::LockedListEntry,std::allocator<CLockedList<CMasterVolumeNotificationProcess,1,0>::LockedListEntry>>::_Assign_range<CLockedList<CMasterVolumeNotificationProcess,1,0>::LockedListEntry *>(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  unsigned __int64 *v4; // rbx
  unsigned __int64 v6; // rcx
  unsigned __int64 *v7; // r9
  unsigned __int64 v8; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 *v10; // rcx
  signed __int64 v11; // r9
  unsigned __int64 *v12; // rdx

  v4 = a2;
  v6 = a3 - a2;
  v7 = *(unsigned __int64 **)a1;
  v8 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( v6 <= v8 )
  {
    v12 = &v7[v6];
    while ( v4 != a3 )
    {
      result = *v4++;
      *v7++ = result;
    }
  }
  else
  {
    result = (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v7) >> 3;
    if ( v6 > result )
    {
      result = std::vector<CLockedList<CMasterVolumeNotificationProcess,1,0>::LockedListEntry,std::allocator<CLockedList<CMasterVolumeNotificationProcess,1,0>::LockedListEntry>>::_Clear_and_reserve_geometric(
                 a1,
                 v6);
      v7 = *(unsigned __int64 **)a1;
      v8 = 0LL;
    }
    v10 = &v4[v8];
    if ( v4 != v10 )
    {
      v11 = (char *)v7 - (char *)v4;
      do
      {
        result = *v4;
        *(unsigned __int64 *)((char *)v4 + v11) = *v4;
        ++v4;
      }
      while ( v4 != v10 );
    }
    v12 = *(unsigned __int64 **)(a1 + 8);
    while ( v10 != a3 )
    {
      result = *v10;
      *v12++ = *v10++;
    }
  }
  *(_QWORD *)(a1 + 8) = v12;
  return result;
}
