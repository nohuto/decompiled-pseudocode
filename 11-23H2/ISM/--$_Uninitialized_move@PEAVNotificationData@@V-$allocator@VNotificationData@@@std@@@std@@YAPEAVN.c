/*
 * XREFs of ??$_Uninitialized_move@PEAVNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@YAPEAVNotificationData@@QEAV1@0PEAV1@AEAV?$allocator@VNotificationData@@@0@@Z @ 0x180097C00
 * Callers:
 *     ??$_Emplace_reallocate@AEA_KAEBUtagINPUT_TRANSFORM@@@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAAPEAVNotificationData@@QEAV2@AEA_KAEBUtagINPUT_TRANSFORM@@@Z @ 0x180009B50 (--$_Emplace_reallocate@AEA_KAEBUtagINPUT_TRANSFORM@@@-$vector@VNotificationData@@V-$allocator@VN.c)
 *     ??$_Emplace_reallocate@W4NotificationType@@AEA_KAEA_K@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAAPEAVNotificationData@@QEAV2@$$QEAW4NotificationType@@AEA_K2@Z @ 0x180009E60 (--$_Emplace_reallocate@W4NotificationType@@AEA_KAEA_K@-$vector@VNotificationData@@V-$allocator@V.c)
 *     ??$_Emplace_reallocate@W4NotificationType@@AEA_KH@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAAPEAVNotificationData@@QEAV2@$$QEAW4NotificationType@@AEA_K$$QEAH@Z @ 0x180097A50 (--$_Emplace_reallocate@W4NotificationType@@AEA_KH@-$vector@VNotificationData@@V-$allocator@VNoti.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VNotificationData@@@std@@@std@@YAXPEAVNotificationData@@QEAV1@AEAV?$allocator@VNotificationData@@@0@@Z @ 0x180097A04 (--$_Destroy_range@V-$allocator@VNotificationData@@@std@@@std@@YAXPEAVNotificationData@@QEAV1@AEA.c)
 */

_DWORD *__fastcall std::_Uninitialized_move<NotificationData *>(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rbx
  __int128 v5; // xmm0

  v4 = (_DWORD *)a3;
  if ( a1 != a2 )
  {
    a3 = a1 + 16;
    a4 = (__int64)v4 - a1;
    do
    {
      *v4 = *(_DWORD *)(a3 - 16);
      v4 += 24;
      *(_QWORD *)(a4 + a3 - 8) = *(_QWORD *)(a3 - 8);
      *(_QWORD *)(a3 + a4) = *(_QWORD *)a3;
      *(_QWORD *)a3 = 0LL;
      *(_QWORD *)(a4 + a3 + 8) = *(_QWORD *)(a3 + 8);
      v5 = *(_OWORD *)(a3 + 16);
      a3 += 96LL;
      *(_OWORD *)(a4 + a3 - 80) = v5;
      *(_OWORD *)(a4 + a3 - 64) = *(_OWORD *)(a3 - 64);
      *(_OWORD *)(a4 + a3 - 48) = *(_OWORD *)(a3 - 48);
      *(_OWORD *)(a4 + a3 - 32) = *(_OWORD *)(a3 - 32);
    }
    while ( a3 - 16 != a2 );
  }
  std::_Destroy_range<std::allocator<NotificationData>>((__int64)v4, (__int64)v4, a3, a4);
  return v4;
}
