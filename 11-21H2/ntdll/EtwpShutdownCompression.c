/*
 * XREFs of EtwpShutdownCompression @ 0x1801237AC
 * Callers:
 *     EtwpFreeLoggerContext @ 0x180091018 (EtwpFreeLoggerContext.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     ZwFreeVirtualMemory @ 0x1800A4430 (ZwFreeVirtualMemory.c)
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
