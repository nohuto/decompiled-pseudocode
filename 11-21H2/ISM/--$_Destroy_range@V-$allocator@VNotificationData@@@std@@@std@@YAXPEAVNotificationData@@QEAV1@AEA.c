/*
 * XREFs of ??$_Destroy_range@V?$allocator@VNotificationData@@@std@@@std@@YAXPEAVNotificationData@@QEAV1@AEAV?$allocator@VNotificationData@@@0@@Z @ 0x1800804E8
 * Callers:
 *     ??$_Emplace_reallocate@W4NotificationType@@AEA_KAEA_K@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAAPEAVNotificationData@@QEAV2@$$QEAW4NotificationType@@AEA_K2@Z @ 0x180003FA4 (--$_Emplace_reallocate@W4NotificationType@@AEA_KAEA_K@-$vector@VNotificationData@@V-$allocator@V.c)
 *     ??1InputSinkDataCache@@QEAA@XZ @ 0x180049770 (--1InputSinkDataCache@@QEAA@XZ.c)
 *     _std::vector_NotificationData_std::allocator_NotificationData___::_Emplace_reallocate_unsigned___int64_&_tagINPUT_TRANSFORM_const_&__::_1_::catch$11 @ 0x180054670 (_std--vector_NotificationData_std--allocator_NotificationData___--_Emplace_reallocate_unsigned__.c)
 *     _std::vector_NotificationData_std::allocator_NotificationData___::_Emplace_reallocate_enum_NotificationType_unsigned___int64_&_unsigned___int64_&__::_1_::catch$8 @ 0x1800546D2 (_std--vector_NotificationData_std--allocator_NotificationData___--_Emplace_reallocate_enum_Notif.c)
 *     _std::vector_NotificationData_std::allocator_NotificationData___::_Emplace_reallocate_enum_NotificationType_unsigned___int64_&_int__::_1_::catch$2 @ 0x18008065D (_std--vector_NotificationData_std--allocator_NotificationData___--_Emplace_realloca_ea_18008065D.c)
 *     ??$_Uninitialized_move@PEAVNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@YAPEAVNotificationData@@QEAV1@0PEAV1@AEAV?$allocator@VNotificationData@@@0@@Z @ 0x180080704 (--$_Uninitialized_move@PEAVNotificationData@@V-$allocator@VNotificationData@@@std@@@std@@YAPEAVN.c)
 *     ??1?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAA@XZ @ 0x180080920 (--1-$vector@VNotificationData@@V-$allocator@VNotificationData@@@std@@@std@@QEAA@XZ.c)
 *     ?_Change_array@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@AEAAXQEAVNotificationData@@_K1@Z @ 0x180080AC8 (-_Change_array@-$vector@VNotificationData@@V-$allocator@VNotificationData@@@std@@@std@@AEAAXQEAV.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180013EC0 (--1-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositionInputSink@@YAJ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<NotificationData>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v5 = a1;
    do
    {
      result = wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>(
                 (__int64 *)(v5 + 16),
                 a2,
                 a3,
                 a4);
      v5 += 96LL;
    }
    while ( v5 != a2 );
  }
  return result;
}
