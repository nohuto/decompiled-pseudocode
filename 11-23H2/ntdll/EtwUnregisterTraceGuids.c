/*
 * XREFs of EtwUnregisterTraceGuids @ 0x18007D790
 * Callers:
 *     <none>
 * Callees:
 *     EtwNotificationUnregister @ 0x180030010 (EtwNotificationUnregister.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlSetLastWin32Error @ 0x180053850 (RtlSetLastWin32Error.c)
 */

__int64 __fastcall EtwUnregisterTraceGuids(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v2; // ebx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  v1 = EtwNotificationUnregister(a1, &v4);
  v2 = v1;
  if ( v1 )
    RtlSetLastWin32Error(v1);
  else
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
  return v2;
}
