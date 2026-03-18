/*
 * XREFs of IrqArbIrqFromGsiv @ 0x1C009D6CC
 * Callers:
 *     IrqArbGetNextAllocationRange @ 0x1C009D3C0 (IrqArbGetNextAllocationRange.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1C009DB1C (IrqArbpAssignIrqFromLinkNode.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C009E1B4 (IrqArbpFindSuitableRangePci.c)
 *     IrqPolicyGetDistributionDisposition @ 0x1C00AC3AC (IrqPolicyGetDistributionDisposition.c)
 * Callees:
 *     IrqArbpLookupIsaOverrideByGsiv @ 0x1C009E4B4 (IrqArbpLookupIsaOverrideByGsiv.c)
 */

__int64 __fastcall IrqArbIrqFromGsiv(__int64 a1)
{
  char v1; // al
  unsigned int v2; // ecx
  unsigned int v3; // edx
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  v1 = IrqArbpLookupIsaOverrideByGsiv(a1, &v5);
  v3 = v5;
  if ( !v1 )
    return v2;
  return v3;
}
