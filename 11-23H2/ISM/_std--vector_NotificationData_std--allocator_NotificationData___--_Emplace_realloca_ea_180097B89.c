/*
 * XREFs of _std::vector_NotificationData_std::allocator_NotificationData___::_Emplace_reallocate_enum_NotificationType_unsigned___int64_&_int__::_1_::catch$2 @ 0x180097B89
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180056DC6 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@VNotificationData@@@std@@@std@@YAXPEAVNotificationData@@QEAV1@AEAV?$allocator@VNotificationData@@@0@@Z @ 0x180097A04 (--$_Destroy_range@V-$allocator@VNotificationData@@@std@@@std@@YAXPEAVNotificationData@@QEAV1@AEA.c)
 */

void __fastcall __noreturn std::vector_NotificationData_std::allocator_NotificationData___::_Emplace_reallocate_enum_NotificationType_unsigned___int64___int__::_1_::catch_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  std::_Destroy_range<std::allocator<NotificationData>>(*(_QWORD *)(a2 + 112), *(_QWORD *)(a2 + 120), a3, a4);
  std::_Deallocate<16,0>(*(void **)(a2 + 40), 96LL * *(_QWORD *)(a2 + 32));
  throw;
}
