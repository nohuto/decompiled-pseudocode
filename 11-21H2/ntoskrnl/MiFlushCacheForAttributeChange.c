/*
 * XREFs of MiFlushCacheForAttributeChange @ 0x140268AB0
 * Callers:
 *     MiChangePageAttribute @ 0x140267E78 (MiChangePageAttribute.c)
 *     MiChangePageAttributeBatch @ 0x1402680C0 (MiChangePageAttributeBatch.c)
 *     MiChangePageAttributeContiguous @ 0x14026873C (MiChangePageAttributeContiguous.c)
 *     MiFlushCacheRange @ 0x1405B2400 (MiFlushCacheRange.c)
 *     MiInitializeCacheFlushing @ 0x140B08B40 (MiInitializeCacheFlushing.c)
 * Callees:
 *     KeInvalidateRangeAllCachesNoIpi @ 0x140268B50 (KeInvalidateRangeAllCachesNoIpi.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402BEDD0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402CC7C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiFlushHyperSpace @ 0x1403D3284 (MiFlushHyperSpace.c)
 */

_UNKNOWN **__fastcall MiFlushCacheForAttributeChange(__int64 a1, __int64 a2, int a3)
{
  _UNKNOWN **result; // rax
  __int64 v5; // rbp
  unsigned int v7; // esi
  __int64 v8; // rbx
  __int64 v9; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = a2;
  if ( a2 )
  {
    v7 = -805306366;
    if ( a3 != 2 )
      v7 = -1073741824;
    do
    {
      v8 = MiMapPageInHyperSpaceWorker(a1, 0LL, v7);
      KeInvalidateRangeAllCachesNoIpi(v8, 4096LL);
      LOBYTE(v9) = 17;
      result = (_UNKNOWN **)MiUnmapPageInHyperSpaceWorker(v8, v9, 0x80000000LL);
      ++a1;
      --v5;
    }
    while ( v5 );
  }
  if ( a3 == 3 )
    return (_UNKNOWN **)MiFlushHyperSpace();
  return result;
}
