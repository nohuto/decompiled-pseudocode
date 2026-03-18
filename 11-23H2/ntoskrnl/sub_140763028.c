/*
 * XREFs of sub_140763028 @ 0x140763028
 * Callers:
 *     WbAddHeapExecutedBlockToCache @ 0x140761B10 (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x140761C3C (WbAddHeapExecutedBlockToLRU.c)
 *     sub_140762F48 @ 0x140762F48 (sub_140762F48.c)
 *     sub_140763150 @ 0x140763150 (sub_140763150.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140763028(__int64 a1)
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
