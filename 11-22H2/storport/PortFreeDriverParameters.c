/*
 * XREFs of PortFreeDriverParameters @ 0x1C00AF2DC
 * Callers:
 *     RaidDeleteAdapter @ 0x1C003AB5C (RaidDeleteAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall PortFreeDriverParameters(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
