/*
 * XREFs of ExFreeCacheAwarePushLock @ 0x14063C290
 * Callers:
 *     ExAllocateCacheAwarePushLock @ 0x140389430 (ExAllocateCacheAwarePushLock.c)
 * Callees:
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 */

__int64 __fastcall ExFreeCacheAwarePushLock(ULONG_PTR *BugCheckParameter3)
{
  ULONG_PTR *v2; // rsi
  unsigned __int64 v3; // rbx

  if ( *BugCheckParameter3 )
  {
    v2 = BugCheckParameter3;
    v3 = (-(__int64)(*(_BYTE *)(*BugCheckParameter3 + 8) != 0) & 0xFFFFFFFFFFFFFFE1uLL) + 32;
    do
    {
      if ( *v2 )
        sub_140348B40(*v2);
      ++v2;
      --v3;
    }
    while ( v3 );
  }
  return sub_140348B40((ULONG_PTR)BugCheckParameter3);
}
