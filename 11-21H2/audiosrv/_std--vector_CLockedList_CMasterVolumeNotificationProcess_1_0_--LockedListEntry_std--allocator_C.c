/*
 * XREFs of _std::vector_CLockedList_CMasterVolumeNotificationProcess_1_0_::LockedListEntry_std::allocator_CLockedList_CMasterVolumeNotificationProcess_1_0_::LockedListEntry___::_Emplace_reallocate_CMasterVolumeNotificationProcess_&_int__::_1_::catch$6 @ 0x18006D252
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18006A663 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_CLockedList_CMasterVolumeNotificationProcess_1_0_::LockedListEntry_std::allocator_CLockedList_CMasterVolumeNotificationProcess_1_0_::LockedListEntry___::_Emplace_reallocate_CMasterVolumeNotificationProcess___int__::_1_::catch_6(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 88), 8LL * *(_QWORD *)(a2 + 80));
  throw;
}
