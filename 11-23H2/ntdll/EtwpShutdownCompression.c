/*
 * XREFs of EtwpShutdownCompression @ 0x18012669C
 * Callers:
 *     EtwpFreeLoggerContext @ 0x18005AA6C (EtwpFreeLoggerContext.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     ZwFreeVirtualMemory @ 0x1800A1270 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall EtwpShutdownCompression(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 416);
  if ( v1 )
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v1);
  if ( *(_QWORD *)(a1 + 424) )
    return ZwFreeVirtualMemory();
  return result;
}
