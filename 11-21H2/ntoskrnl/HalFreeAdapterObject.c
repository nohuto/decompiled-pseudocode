/*
 * XREFs of HalFreeAdapterObject @ 0x1405116C0
 * Callers:
 *     HalpAllocateDmaResourcesInternal @ 0x140517830 (HalpAllocateDmaResourcesInternal.c)
 * Callees:
 *     IoFreeAdapterChannel @ 0x140456A00 (IoFreeAdapterChannel.c)
 */

void __fastcall HalFreeAdapterObject(__int64 a1, int a2)
{
  if ( a2 != 2 )
  {
    if ( a2 != 3 )
      return;
    *(_DWORD *)(a1 + 240) = 0;
  }
  IoFreeAdapterChannel((PDMA_ADAPTER)a1);
}
