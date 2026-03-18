/*
 * XREFs of CiFreeMemory @ 0x1C0005668
 * Callers:
 *     CiTaskIndexCreate @ 0x1C000C7A0 (CiTaskIndexCreate.c)
 *     CsTerminate @ 0x1C000D8D8 (CsTerminate.c)
 *     CiSystemTerminate @ 0x1C000DE04 (CiSystemTerminate.c)
 * Callees:
 *     <none>
 */

void __fastcall CiFreeMemory(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
