/*
 * XREFs of sub_140763218 @ 0x140763218
 * Callers:
 *     WbAddHeapExecutedBlockToCache @ 0x140761D00 (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x140761E2C (WbAddHeapExecutedBlockToLRU.c)
 *     sub_140763138 @ 0x140763138 (sub_140763138.c)
 *     sub_140763340 @ 0x140763340 (sub_140763340.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140763218(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
  {
    if ( !_InterlockedAdd64((volatile signed __int64 *)(a1 + 80), 1uLL) )
      return 3221225701LL;
  }
  return result;
}
