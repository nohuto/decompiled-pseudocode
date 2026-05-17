/*
 * XREFs of EtwUnregisterTraceGuids @ 0x18007D120
 * Callers:
 *     <none>
 * Callees:
 *     EtwNotificationUnregister @ 0x1800301E0 (EtwNotificationUnregister.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlSetLastWin32Error @ 0x1800539B0 (RtlSetLastWin32Error.c)
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
