/*
 * XREFs of PnpFindBestConfiguration @ 0x140815D20
 * Callers:
 *     PnpAllocateResources @ 0x14078F4C4 (PnpAllocateResources.c)
 *     PnpReallocateResources @ 0x14096D548 (PnpReallocateResources.c)
 *     PnpRestoreResourcesInternal @ 0x14096D734 (PnpRestoreResourcesInternal.c)
 *     PnpRebalance @ 0x14096E8B8 (PnpRebalance.c)
 * Callees:
 *     PnpFindBestConfigurationWorker @ 0x140815D78 (PnpFindBestConfigurationWorker.c)
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
