/*
 * XREFs of sub_140AD1FE0 @ 0x140AD1FE0
 * Callers:
 *     sub_1403ED150 @ 0x1403ED150 (sub_1403ED150.c)
 *     sub_140AB9010 @ 0x140AB9010 (sub_140AB9010.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140AD1FE0(void *a1, void *a2)
{
  __sgdt(a1);
  __sidt(a2);
}
