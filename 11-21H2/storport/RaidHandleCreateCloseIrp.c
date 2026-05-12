/*
 * XREFs of RaidHandleCreateCloseIrp @ 0x1C00145A4
 * Callers:
 *     RaUnitCreateIrp @ 0x1C001458C (RaUnitCreateIrp.c)
 *     RaDriverCreateIrp @ 0x1C0084FF0 (RaDriverCreateIrp.c)
 *     RaDriverCloseIrp @ 0x1C0085090 (RaDriverCloseIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
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
