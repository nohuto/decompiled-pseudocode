/*
 * XREFs of RtlDestroyMemoryZone @ 0x180088B50
 * Callers:
 *     RtlCreateMemoryBlockLookaside @ 0x180080220 (RtlCreateMemoryBlockLookaside.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x180088AF0 (RtlDestroyMemoryBlockLookaside.c)
 *     RtlpInitializeStackTraceLog @ 0x180116988 (RtlpInitializeStackTraceLog.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpUnregisterLockedMemoryZone @ 0x1800525E4 (RtlpUnregisterLockedMemoryZone.c)
 *     ZwFreeVirtualMemory @ 0x18009F1B0 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall RtlDestroyMemoryZone(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+38h] [rbp+10h] BYREF

  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
  if ( *(_DWORD *)(a1 + 40) )
    RtlpUnregisterLockedMemoryZone();
  v2 = *(_QWORD **)(a1 + 48);
  while ( v2 )
  {
    v5 = v2;
    v4 = v2[1];
    v2 = (_QWORD *)*v2;
    ZwFreeVirtualMemory(-1LL, &v5, &v4, 0x8000LL);
  }
  return 0LL;
}
