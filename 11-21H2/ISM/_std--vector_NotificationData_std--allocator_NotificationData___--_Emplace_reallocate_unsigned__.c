/*
 * XREFs of _std::vector_NotificationData_std::allocator_NotificationData___::_Emplace_reallocate_unsigned___int64_&_tagINPUT_TRANSFORM_const_&__::_1_::catch$11 @ 0x180054670
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18004AFCA (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@VNotificationData@@@std@@@std@@YAXPEAVNotificationData@@QEAV1@AEAV?$allocator@VNotificationData@@@0@@Z @ 0x1800804E8 (--$_Destroy_range@V-$allocator@VNotificationData@@@std@@@std@@YAXPEAVNotificationData@@QEAV1@AEA.c)
 */

void __fastcall __noreturn std::vector_NotificationData_std::allocator_NotificationData___::_Emplace_reallocate_unsigned___int64___tagINPUT_TRANSFORM_const____::_1_::catch_11(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<NotificationData>>(*(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 48));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), 96LL * *(_QWORD *)(a2 + 128));
  throw;
}
