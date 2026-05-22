/*
 * XREFs of ??$_Destroy_range@V?$allocator@VNotificationData@@@std@@@std@@YAXPEAVNotificationData@@QEAV1@AEAV?$allocator@VNotificationData@@@0@@Z @ 0x180097A04
 * Callers:
 *     ??1InputSinkDataCache@@QEAA@XZ @ 0x1800551A0 (--1InputSinkDataCache@@QEAA@XZ.c)
 *     _std::vector_NotificationData_std::allocator_NotificationData___::_Emplace_reallocate_unsigned___int64_&_tagINPUT_TRANSFORM_const_&__::_1_::catch$10 @ 0x18006B8E0 (_std--vector_NotificationData_std--allocator_NotificationData___--_Emplace_reallocate_unsigned__.c)
 *     _std::vector_NotificationData_std::allocator_NotificationData___::_Emplace_reallocate_enum_NotificationType_unsigned___int64_&_unsigned___int64_&__::_1_::catch$10 @ 0x18006B930 (_std--vector_NotificationData_std--allocator_NotificationData___--_Emplace_reallocate_enum_Notif.c)
 *     _std::vector_NotificationData_std::allocator_NotificationData___::_Emplace_reallocate_enum_NotificationType_unsigned___int64_&_int__::_1_::catch$2 @ 0x180097B89 (_std--vector_NotificationData_std--allocator_NotificationData___--_Emplace_realloca_ea_180097B89.c)
 *     ??$_Uninitialized_move@PEAVNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@YAPEAVNotificationData@@QEAV1@0PEAV1@AEAV?$allocator@VNotificationData@@@0@@Z @ 0x180097C00 (--$_Uninitialized_move@PEAVNotificationData@@V-$allocator@VNotificationData@@@std@@@std@@YAPEAVN.c)
 *     ??1?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAA@XZ @ 0x180097DEC (--1-$vector@VNotificationData@@V-$allocator@VNotificationData@@@std@@@std@@QEAA@XZ.c)
 *     ?_Change_array@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@AEAAXQEAVNotificationData@@_K1@Z @ 0x180097FE4 (-_Change_array@-$vector@VNotificationData@@V-$allocator@VNotificationData@@@std@@@std@@AEAAXQEAV.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Destroy_range<std::allocator<NotificationData>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v5 = a1;
    do
    {
      v6 = *(_QWORD *)(v5 + 16);
      result = v6 - 1;
      if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        result = NtCloseCompositionInputSink(v6, a2, a3, a4);
      v5 += 96LL;
    }
    while ( v5 != a2 );
  }
  return result;
}
