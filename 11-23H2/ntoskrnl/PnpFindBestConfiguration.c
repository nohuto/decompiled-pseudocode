/*
 * XREFs of PnpFindBestConfiguration @ 0x140815FF0
 * Callers:
 *     PnpAllocateResources @ 0x14078F6B4 (PnpAllocateResources.c)
 *     PnpReallocateResources @ 0x14096D748 (PnpReallocateResources.c)
 *     PnpRestoreResourcesInternal @ 0x14096D934 (PnpRestoreResourcesInternal.c)
 *     PnpRebalance @ 0x14096EAB8 (PnpRebalance.c)
 * Callees:
 *     PnpFindBestConfigurationWorker @ 0x140816048 (PnpFindBestConfigurationWorker.c)
 */

__int64 __fastcall PnpFindBestConfiguration(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int i; // ebx
  __int64 result; // rax

  for ( i = 0; i < 2; ++i )
  {
    result = PnpFindBestConfigurationWorker(a1, a2, a3, i);
    if ( (int)result >= 0 )
      break;
  }
  return result;
}
