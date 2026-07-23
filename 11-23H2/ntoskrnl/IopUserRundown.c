/*
 * XREFs of IopUserRundown @ 0x1407E8980
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeIrp @ 0x1402AF4A0 (IoFreeIrp.c)
 */

void __fastcall IopUserRundown(__int64 a1)
{
  IoFreeIrp((PIRP)(a1 - 120));
}
