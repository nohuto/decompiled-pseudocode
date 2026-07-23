/*
 * XREFs of sub_140965BB0 @ 0x140965BB0
 * Callers:
 *     sub_1407A5530 @ 0x1407A5530 (sub_1407A5530.c)
 * Callees:
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall sub_140965BB0(volatile signed __int64 *BugCheckParameter2)
{
  if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  return sub_1402AFC00((ULONG_PTR)BugCheckParameter2);
}
