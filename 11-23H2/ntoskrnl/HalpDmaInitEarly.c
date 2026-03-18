/*
 * XREFs of HalpDmaInitEarly @ 0x140B604AC
 * Callers:
 *     HalpDmaInitSystem @ 0x140A90960 (HalpDmaInitSystem.c)
 * Callees:
 *     HalpDmaAlwaysReserveLogicalAddressRangeInternal @ 0x14037FCDC (HalpDmaAlwaysReserveLogicalAddressRangeInternal.c)
 *     HalpDmaInitializeObjectType @ 0x14039C1EC (HalpDmaInitializeObjectType.c)
 *     HalpDmaInitializeDomainEarly @ 0x140B604F8 (HalpDmaInitializeDomainEarly.c)
 */

__int64 HalpDmaInitEarly()
{
  __int64 result; // rax

  result = HalpDmaInitializeObjectType();
  if ( (int)result >= 0 )
  {
    HalpDmaHybridPassthroughSupport |= 0x80000000;
    result = HalpDmaAlwaysReserveLogicalAddressRangeInternal(0LL, 0x200000uLL);
    if ( (int)result >= 0 )
    {
      result = HalpDmaAlwaysReserveLogicalAddressRangeInternal(0xFEE00000uLL, 0x100000uLL);
      if ( (int)result >= 0 )
        return HalpDmaInitializeDomainEarly();
    }
  }
  return result;
}
