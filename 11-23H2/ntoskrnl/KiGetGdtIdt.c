/*
 * XREFs of KiGetGdtIdt @ 0x140B133D0
 * Callers:
 *     sub_1403E5A20 @ 0x1403E5A20 (sub_1403E5A20.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140AFA010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140B19730 @ 0x140B19730 (sub_140B19730.c)
 * Callees:
 *     <none>
 */

void __fastcall KiGetGdtIdt(void *a1, void *a2)
{
  __sgdt(a1);
  __sidt(a2);
}
