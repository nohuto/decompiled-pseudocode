/*
 * XREFs of ?_Change_array@?$vector@ULockedListEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@@std@@@std@@AEAAXQEAULockedListEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@_K1@Z @ 0x18000B3E4
 * Callers:
 *     ??$_Emplace_reallocate@AEAVCMasterVolumeNotificationProcess@@H@?$vector@ULockedListEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@@std@@@std@@QEAAPEAULockedListEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAU23@AEAVCMasterVolumeNotificationProcess@@$$QEAH@Z @ 0x18000B170 (--$_Emplace_reallocate@AEAVCMasterVolumeNotificationProcess@@H@-$vector@ULockedListEntry@-$CLock.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<CLockedList<CMasterVolumeNotificationProcess,1,0>::LockedListEntry,std::allocator<CLockedList<CMasterVolumeNotificationProcess,1,0>::LockedListEntry>>::_Change_array(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (a1[2] - v6) & 0xFFFFFFFFFFFFFFF8uLL);
  *a1 = a2;
  a1[1] = a2 + 8 * a3;
  result = a2 + 8 * a4;
  a1[2] = result;
  return result;
}
