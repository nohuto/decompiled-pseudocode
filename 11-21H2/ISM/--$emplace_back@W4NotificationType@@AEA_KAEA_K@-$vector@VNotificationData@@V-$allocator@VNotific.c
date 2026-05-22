/*
 * XREFs of ??$emplace_back@W4NotificationType@@AEA_KAEA_K@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAAAEAVNotificationData@@$$QEAW4NotificationType@@AEA_K1@Z @ 0x180080798
 * Callers:
 *     NotifyInputSinkParented @ 0x1800038A0 (NotifyInputSinkParented.c)
 * Callees:
 *     ??$_Emplace_reallocate@W4NotificationType@@AEA_KAEA_K@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAAPEAVNotificationData@@QEAV2@$$QEAW4NotificationType@@AEA_K2@Z @ 0x180003FA4 (--$_Emplace_reallocate@W4NotificationType@@AEA_KAEA_K@-$vector@VNotificationData@@V-$allocator@V.c)
 */

char *__fastcall std::vector<NotificationData>::emplace_back<enum NotificationType,unsigned __int64 &,unsigned __int64 &>(
        _QWORD *a1,
        int *a2,
        _QWORD *a3,
        __int64 *a4)
{
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // r9
  char *result; // rax

  v5 = a1[1];
  if ( v5 == a1[2] )
    return std::vector<NotificationData>::_Emplace_reallocate<enum NotificationType,unsigned __int64 &,unsigned __int64 &>(
             a1,
             v5,
             a2,
             a3,
             a4);
  v6 = *a2;
  v7 = *a4;
  *(_QWORD *)(v5 + 8) = *a3;
  *(_DWORD *)v5 = v6;
  *(_QWORD *)(v5 + 16) = 0LL;
  *(_QWORD *)(v5 + 24) = v7;
  result = (char *)a1[1];
  a1[1] = result + 96;
  return result;
}
