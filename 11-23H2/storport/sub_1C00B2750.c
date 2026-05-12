/*
 * XREFs of sub_1C00B2750 @ 0x1C00B2750
 * Callers:
 *     <none>
 * Callees:
 *     StorPortStallExecution @ 0x1C000FFA0 (StorPortStallExecution.c)
 */

void __fastcall sub_1C00B2750(ULONG_PTR BugCheckParameter2)
{
  if ( (unsigned int)BugCheckParameter2 > 0x186A0 )
    KeBugCheckEx(0xF1u, 0x2001uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
  StorPortStallExecution(BugCheckParameter2);
}
