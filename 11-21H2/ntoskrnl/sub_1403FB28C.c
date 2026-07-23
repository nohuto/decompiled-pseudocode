/*
 * XREFs of sub_1403FB28C @ 0x1403FB28C
 * Callers:
 *     sub_14056AF68 @ 0x14056AF68 (sub_14056AF68.c)
 * Callees:
 *     KeRestoreExtendedProcessorState @ 0x14022E830 (KeRestoreExtendedProcessorState.c)
 */

void __fastcall sub_1403FB28C(struct _XSTATE_SAVE *a1)
{
  KeRestoreExtendedProcessorState(a1);
}
