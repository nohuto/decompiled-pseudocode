/*
 * XREFs of PopSetRange @ 0x14058F40C
 * Callers:
 *     PoSetHiberRange @ 0x14058ED90 (PoSetHiberRange.c)
 *     RtlMarkHiberPhase @ 0x1405B4CBC (RtlMarkHiberPhase.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x140583650 (PopInternalAddToDumpFile.c)
 *     PopCloneRange @ 0x140AA1C54 (PopCloneRange.c)
 *     PopDiscardRange @ 0x140AA266C (PopDiscardRange.c)
 *     PopSetBootPhaseRange @ 0x140AA5144 (PopSetBootPhaseRange.c)
 */

__int64 __fastcall PopSetRange(ULONG_PTR BugCheckParameter3, int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  if ( *(_BYTE *)(BugCheckParameter3 + 28) )
  {
    PopInternalAddToDumpFile(BugCheckParameter3, 0x1C8u, 0LL);
    KeBugCheckEx(0xA0u, 0x104uLL, 0xAuLL, BugCheckParameter3, 0LL);
  }
  if ( (a2 & 0x8000) != 0 )
    return PopDiscardRange(BugCheckParameter3, a3, a4);
  if ( (a2 & 2) != 0 )
    return PopCloneRange(BugCheckParameter3, a3, a4, a5);
  if ( (a2 & 0x10000) == 0 )
  {
    PopInternalAddToDumpFile(BugCheckParameter3, 0x1C8u, 0LL);
    KeBugCheckEx(0xA0u, 0x105uLL, 0xAuLL, BugCheckParameter3, 0LL);
  }
  return PopSetBootPhaseRange(BugCheckParameter3, a3, a4);
}
