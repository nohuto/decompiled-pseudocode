/*
 * XREFs of RaUnitCreateIrp @ 0x1C001458C
 * Callers:
 *     RaDriverCreateIrp @ 0x1C0084FF0 (RaDriverCreateIrp.c)
 *     RaDriverCloseIrp @ 0x1C0085090 (RaDriverCloseIrp.c)
 * Callees:
 *     RaidHandleCreateCloseIrp @ 0x1C00145A4 (RaidHandleCreateCloseIrp.c)
 */

__int64 __fastcall RaUnitCreateIrp(__int64 a1)
{
  return RaidHandleCreateCloseIrp(*(unsigned int *)(a1 + 48));
}
