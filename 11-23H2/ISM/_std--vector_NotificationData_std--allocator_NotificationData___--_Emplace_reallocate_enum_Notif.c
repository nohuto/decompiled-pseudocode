/*
 * XREFs of _std::vector_NotificationData_std::allocator_NotificationData___::_Emplace_reallocate_enum_NotificationType_unsigned___int64_&_unsigned___int64_&__::_1_::catch$10 @ 0x18006B930
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180056DC6 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@VNotificationData@@@std@@@std@@YAXPEAVNotificationData@@QEAV1@AEAV?$allocator@VNotificationData@@@0@@Z @ 0x180097A04 (--$_Destroy_range@V-$allocator@VNotificationData@@@std@@@std@@YAXPEAVNotificationData@@QEAV1@AEA.c)
 */

void __fastcall __noreturn std::vector_NotificationData_std::allocator_NotificationData___::_Emplace_reallocate_enum_NotificationType_unsigned___int64___unsigned___int64____::_1_::catch_10(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<NotificationData>>(*(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 48));
  std::_Deallocate<16,0>(*(void **)(a2 + 136), 96LL * *(_QWORD *)(a2 + 128));
  throw;
}
