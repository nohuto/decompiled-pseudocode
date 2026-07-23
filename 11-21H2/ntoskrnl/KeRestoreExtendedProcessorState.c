/*
 * XREFs of KeRestoreExtendedProcessorState @ 0x14022E830
 * Callers:
 *     sub_1403FB28C @ 0x1403FB28C (sub_1403FB28C.c)
 * Callees:
 *     sub_14022E848 @ 0x14022E848 (sub_14022E848.c)
 */

void __stdcall KeRestoreExtendedProcessorState(PXSTATE_SAVE XStateSave)
{
  sub_14022E848(XStateSave);
}
