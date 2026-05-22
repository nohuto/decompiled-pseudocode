/*
 * XREFs of ??1?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAA@XZ @ 0x180080920
 * Callers:
 *     _InputSiteHierarchyManager::UpdateHierarchyFromInputSinkDataCache_::_1_::dtor$0 @ 0x1800576D0 (_InputSiteHierarchyManager--UpdateHierarchyFromInputSinkDataCache_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@VNotificationData@@@std@@@std@@YAXPEAVNotificationData@@QEAV1@AEAV?$allocator@VNotificationData@@@0@@Z @ 0x1800804E8 (--$_Destroy_range@V-$allocator@VNotificationData@@@std@@@std@@YAXPEAVNotificationData@@QEAV1@AEA.c)
 */

void __fastcall std::vector<NotificationData>::~vector<NotificationData>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v5; // rcx

  v5 = *(void **)a1;
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<NotificationData>>((__int64)v5, *(_QWORD *)(a1 + 8), a3, a4);
    std::_Deallocate<16,0>(*(void **)a1, 32 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 5));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
