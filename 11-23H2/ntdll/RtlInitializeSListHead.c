/*
 * XREFs of RtlInitializeSListHead @ 0x180070F90
 * Callers:
 *     RtlpHpVsContextInitialize @ 0x180066A8C (RtlpHpVsContextInitialize.c)
 *     RtlCreateMemoryBlockLookaside @ 0x180080890 (RtlCreateMemoryBlockLookaside.c)
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 *     RtlResetMemoryBlockLookaside @ 0x1800F6F80 (RtlResetMemoryBlockLookaside.c)
 *     RtlStdInitializeStackDatabase @ 0x18010F3C0 (RtlStdInitializeStackDatabase.c)
 *     RtlpInitializeStackTraceLog @ 0x180117E38 (RtlpInitializeStackTraceLog.c)
 *     RtlpSubSegmentDebugInitialize @ 0x18011AE78 (RtlpSubSegmentDebugInitialize.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x180131010 (RtlAllocateMemoryBlockLookaside.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1801106D0 (RtlRaiseStatus.c)
 */

void __stdcall RtlInitializeSListHead(PSLIST_HEADER ListHead)
{
  if ( ((unsigned __int8)ListHead & 0xF) != 0 )
    RtlRaiseStatus(2147483650LL);
  *ListHead = 0LL;
}
