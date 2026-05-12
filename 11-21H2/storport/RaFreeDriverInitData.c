/*
 * XREFs of RaFreeDriverInitData @ 0x1C003D7C4
 * Callers:
 *     RaDeleteDriver @ 0x1C008DE8C (RaDeleteDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall RaFreeDriverInitData(__int64 a1, void *a2)
{
  ExFreePoolWithTag(a2, 0x49486152u);
}
