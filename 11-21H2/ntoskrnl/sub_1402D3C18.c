/*
 * XREFs of sub_1402D3C18 @ 0x1402D3C18
 * Callers:
 *     sub_140747DDC @ 0x140747DDC (sub_140747DDC.c)
 *     sub_140749DA0 @ 0x140749DA0 (sub_140749DA0.c)
 *     sub_14074D6EC @ 0x14074D6EC (sub_14074D6EC.c)
 *     sub_14080EBD0 @ 0x14080EBD0 (sub_14080EBD0.c)
 *     sub_140947450 @ 0x140947450 (sub_140947450.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1402D3C18(void *a1)
{
  ExFreePoolWithTag(a1, 0x57647050u);
}
