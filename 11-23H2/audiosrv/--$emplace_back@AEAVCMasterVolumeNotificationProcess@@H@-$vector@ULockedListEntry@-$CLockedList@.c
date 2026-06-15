/*
 * XREFs of ??$emplace_back@AEAVCMasterVolumeNotificationProcess@@H@?$vector@ULockedListEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@@std@@@std@@QEAA?A_TAEAVCMasterVolumeNotificationProcess@@$$QEAH@Z @ 0x18000B134
 * Callers:
 *     ?AddInterface@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJVCMasterVolumeNotificationProcess@@@Z @ 0x18000B0AC (-AddInterface@-$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJVCMasterVolumeNotif.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<CLockedList<CMasterVolumeNotificationProcess,1,0>::LockedListEntry,std::allocator<CLockedList<CMasterVolumeNotificationProcess,1,0>::LockedListEntry>>::emplace_back<CMasterVolumeNotificationProcess &,int>(
        __int64 a1,
        _DWORD *a2,
        int *a3)
{
  _DWORD *v4; // rdx
  __int64 result; // rax
  int v6; // r8d

  v4 = *(_DWORD **)(a1 + 8);
  if ( v4 == *(_DWORD **)(a1 + 16) )
    return std::vector<CLockedList<CMasterVolumeNotificationProcess,1,0>::LockedListEntry,std::allocator<CLockedList<CMasterVolumeNotificationProcess,1,0>::LockedListEntry>>::_Emplace_reallocate<CMasterVolumeNotificationProcess &,int>(
             a1,
             v4,
             a2,
             a3);
  v6 = *a3;
  *v4 = *a2;
  v4[1] = v6;
  result = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 8;
  return result;
}
