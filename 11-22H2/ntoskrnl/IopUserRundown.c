/*
 * XREFs of IopUserRundown @ 0x1407E8C30
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeIrp @ 0x1402AF1E0 (IoFreeIrp.c)
 */

void __fastcall IopUserRundown(__int64 a1)
{
  IoFreeIrp((PIRP)(a1 - 120));
}
