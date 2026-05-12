/*
 * XREFs of RaidHandleCreateCloseIrp @ 0x1C000F510
 * Callers:
 *     RaUnitCreateIrp @ 0x1C000F4F8 (RaUnitCreateIrp.c)
 *     RaDriverCloseIrp @ 0x1C009FF70 (RaDriverCloseIrp.c)
 *     RaDriverCreateIrp @ 0x1C00A0010 (RaDriverCreateIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaidHandleCreateCloseIrp(int a1, IRP *a2)
{
  unsigned int v2; // r8d

  if ( (unsigned int)(a1 - 6) <= 1 )
  {
    a2->IoStatus.Information = 0LL;
    v2 = -1073741738;
  }
  else
  {
    v2 = 0;
  }
  return RaidCompleteRequestEx(a2, 0, v2);
}
