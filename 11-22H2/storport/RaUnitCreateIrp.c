/*
 * XREFs of RaUnitCreateIrp @ 0x1C000F4F8
 * Callers:
 *     RaDriverCloseIrp @ 0x1C009FF70 (RaDriverCloseIrp.c)
 *     RaDriverCreateIrp @ 0x1C00A0010 (RaDriverCreateIrp.c)
 * Callees:
 *     RaidHandleCreateCloseIrp @ 0x1C000F510 (RaidHandleCreateCloseIrp.c)
 */

__int64 __fastcall RaUnitCreateIrp(__int64 a1)
{
  return RaidHandleCreateCloseIrp(*(unsigned int *)(a1 + 48));
}
