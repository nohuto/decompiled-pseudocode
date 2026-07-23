/*
 * XREFs of sub_140763EF4 @ 0x140763EF4
 * Callers:
 *     WbAddHeapExecutedBlockToCache @ 0x140761D00 (WbAddHeapExecutedBlockToCache.c)
 *     WbGetWarbirdThread @ 0x140763394 (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x1407637F0 (WbGetWarbirdProcess.c)
 *     WbAllocateUserMemory @ 0x140764158 (WbAllocateUserMemory.c)
 *     WbAddWarbirdEncryptionSegment @ 0x1407D2408 (WbAddWarbirdEncryptionSegment.c)
 * Callees:
 *     sub_140763AB0 @ 0x140763AB0 (sub_140763AB0.c)
 *     sub_140763F54 @ 0x140763F54 (sub_140763F54.c)
 */

__int64 __fastcall sub_140763EF4(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, int a6)
{
  if ( a6 == -1 )
    sub_140763AB0(a1, a4, a5, 0LL, &a6);
  return sub_140763F54(a1, a2);
}
