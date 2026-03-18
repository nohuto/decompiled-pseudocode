/*
 * XREFs of CiFreeMemory @ 0x1C0004D68
 * Callers:
 *     CiTaskIndexCreate @ 0x1C000B370 (CiTaskIndexCreate.c)
 *     CsTerminate @ 0x1C000C4C4 (CsTerminate.c)
 *     CiSystemTerminate @ 0x1C000C8CC (CiSystemTerminate.c)
 * Callees:
 *     <none>
 */

void __fastcall CiFreeMemory(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
