/*
 * XREFs of KiIsSrsoMitigationEnabled @ 0x140418D5C
 * Callers:
 *     KiUpdateSpeculationControl @ 0x14020C9F0 (KiUpdateSpeculationControl.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiIsSrsoMitigationEnabled(_QWORD *a1)
{
  return (*a1 & 0x1800000200000LL) == 0x200000;
}
