/*
 * XREFs of PortFreeDriverParameters @ 0x1C00929B0
 * Callers:
 *     RaidDeleteAdapter @ 0x1C003956C (RaidDeleteAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall PortFreeDriverParameters(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
