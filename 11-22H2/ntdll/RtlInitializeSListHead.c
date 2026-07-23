/*
 * XREFs of RtlInitializeSListHead @ 0x180070CF0
 * Callers:
 *     RtlpHpVsContextInitialize @ 0x180066AA8 (RtlpHpVsContextInitialize.c)
 *     RtlCreateMemoryBlockLookaside @ 0x180080220 (RtlCreateMemoryBlockLookaside.c)
 *     RtlResetMemoryBlockLookaside @ 0x1800F5B70 (RtlResetMemoryBlockLookaside.c)
 *     RtlStdInitializeStackDatabase @ 0x18010DF10 (RtlStdInitializeStackDatabase.c)
 *     RtlpInitializeStackTraceLog @ 0x180116988 (RtlpInitializeStackTraceLog.c)
 *     RtlpSubSegmentDebugInitialize @ 0x1801199C8 (RtlpSubSegmentDebugInitialize.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x18012F010 (RtlAllocateMemoryBlockLookaside.c)
 * Callees:
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 */

void __stdcall RtlInitializeSListHead(PSLIST_HEADER ListHead)
{
  if ( ((unsigned __int8)ListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *ListHead = 0LL;
}
