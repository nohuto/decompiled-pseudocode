/*
 * XREFs of _std::vector_CLockedList_CAudioSessionNotificationProcess_1_0_::LockedListEntry_std::allocator_CLockedList_CAudioSessionNotificationProcess_1_0_::LockedListEntry___::_Emplace_reallocate_CAudioSessionNotificationProcess_&_int__::_1_::catch$0 @ 0x18007CC88
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@0@@Z @ 0x18000B7AC (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList@VCAudioSessionNotificationProcess@.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1800759A0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_CLockedList_CAudioSessionNotificationProcess_1_0_::LockedListEntry_std::allocator_CLockedList_CAudioSessionNotificationProcess_1_0_::LockedListEntry___::_Emplace_reallocate_CAudioSessionNotificationProcess___int__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry>>(
    *(__int64 **)(a2 + 112),
    *(__int64 **)(a2 + 120));
  std::_Deallocate<16,0>(*(void **)(a2 + 40), 16LL * *(_QWORD *)(a2 + 32));
  throw;
}
