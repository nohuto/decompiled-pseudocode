/*
 * XREFs of CmpLightWeightCleanupSetValueKeyUoW @ 0x140A27F8C
 * Callers:
 *     CmpCleanupLightWeightUoWData @ 0x140A1C344 (CmpCleanupLightWeightUoWData.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x140A2839C (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x140A28890 (CmpLightWeightCommitSetValueKeyUoW.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14022CED4 (CmpFreeTransientPoolWithTag.c)
 *     HvFreeCell @ 0x14070ABE0 (HvFreeCell.c)
 */

void __fastcall CmpLightWeightCleanupSetValueKeyUoW(ULONG_PTR a1, unsigned int *a2)
{
  ULONG_PTR v4; // rdx

  if ( (*a2)-- == 1 )
  {
    v4 = a2[2];
    if ( (_DWORD)v4 != -1 )
      HvFreeCell(a1, v4);
    CmpFreeTransientPoolWithTag(a2, 0x77554D43u);
  }
}
