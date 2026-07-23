/*
 * XREFs of EtwpShutdownCompression @ 0x1801251EC
 * Callers:
 *     EtwpFreeLoggerContext @ 0x18005DA64 (EtwpFreeLoggerContext.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     ZwFreeVirtualMemory @ 0x18009F1B0 (ZwFreeVirtualMemory.c)
 */

LOGICAL __fastcall EtwpShutdownCompression(__int64 a1)
{
  void *v1; // r8
  LOGICAL result; // eax
  ULONG_PTR RegionSize; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(void **)(a1 + 416);
  if ( v1 )
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
  if ( *(_QWORD *)(a1 + 424) )
  {
    RegionSize = 0LL;
    return ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(a1 + 424), &RegionSize, 0x8000u);
  }
  return result;
}
