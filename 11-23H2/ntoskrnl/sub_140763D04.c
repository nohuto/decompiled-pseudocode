/*
 * XREFs of sub_140763D04 @ 0x140763D04
 * Callers:
 *     WbAddHeapExecutedBlockToCache @ 0x140761B10 (WbAddHeapExecutedBlockToCache.c)
 *     WbGetWarbirdThread @ 0x1407631A4 (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x140763600 (WbGetWarbirdProcess.c)
 *     WbAllocateUserMemory @ 0x140763F68 (WbAllocateUserMemory.c)
 *     WbAddWarbirdEncryptionSegment @ 0x1407D2138 (WbAddWarbirdEncryptionSegment.c)
 * Callees:
 *     sub_1407638C0 @ 0x1407638C0 (sub_1407638C0.c)
 *     sub_140763D64 @ 0x140763D64 (sub_140763D64.c)
 */

__int64 __fastcall sub_140763D04(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, int a6)
{
  if ( a6 == -1 )
    sub_1407638C0(a1, a4, a5, 0LL, &a6);
  return sub_140763D64(a1, a2);
}
