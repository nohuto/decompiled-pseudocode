/*
 * XREFs of _std::vector_NotificationData_std::allocator_NotificationData___::_Emplace_reallocate_enum_NotificationType_unsigned___int64_&_unsigned___int64_&__::_1_::catch$8 @ 0x1800546D2
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18004AFCA (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@VNotificationData@@@std@@@std@@YAXPEAVNotificationData@@QEAV1@AEAV?$allocator@VNotificationData@@@0@@Z @ 0x1800804E8 (--$_Destroy_range@V-$allocator@VNotificationData@@@std@@@std@@YAXPEAVNotificationData@@QEAV1@AEA.c)
 */

void __fastcall __noreturn std::vector_NotificationData_std::allocator_NotificationData___::_Emplace_reallocate_enum_NotificationType_unsigned___int64___unsigned___int64____::_1_::catch_8(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<NotificationData>>(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
  std::_Deallocate<16,0>(*(void **)(a2 + 120), 96LL * *(_QWORD *)(a2 + 112));
  throw;
}
