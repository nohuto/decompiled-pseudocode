/*
 * XREFs of LdrUnregisterDllNotification @ 0x1800D9CB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180027020 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 */

__int64 __fastcall LdrUnregisterDllNotification(_QWORD *a1)
{
  __int64 v2; // rdi
  int v3; // ebx
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  _QWORD *v7; // rdx

  v2 = 0LL;
  v3 = -1073741515;
  RtlEnterCriticalSection((__int64)&LdrpDllNotificationLock);
  v4 = LdrpDllNotificationList;
  if ( LdrpDllNotificationList != (_UNKNOWN *)&LdrpDllNotificationList )
  {
    while ( 1 )
    {
      v5 = (_QWORD *)*v4;
      v2 = (__int64)v4;
      if ( v4 == a1 )
        break;
      v4 = (_QWORD *)*v4;
      if ( v5 == &LdrpDllNotificationList )
        goto LABEL_4;
    }
    if ( (_QWORD *)v5[1] != v4 || (v7 = (_QWORD *)v4[1], (_QWORD *)*v7 != v4) )
      __fastfail(3u);
    *v7 = v5;
    v3 = 0;
    v5[1] = v7;
  }
LABEL_4:
  RtlLeaveCriticalSection((__int64)&LdrpDllNotificationLock);
  if ( v3 >= 0 )
    RtlFreeHeap(LdrpHeap, 0, v2);
  return (unsigned int)v3;
}
