/*
 * XREFs of CmpLightWeightCleanupSetSecDescUoW @ 0x140A27F58
 * Callers:
 *     CmpCleanupLightWeightUoWData @ 0x140A1C344 (CmpCleanupLightWeightUoWData.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x140A286F0 (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x140A29814 (CmpLightWeightPrepareSetSecDescUoW.c)
 * Callees:
 *     CmpDereferenceSecurityNode @ 0x140297450 (CmpDereferenceSecurityNode.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall CmpLightWeightCleanupSetSecDescUoW(_QWORD *P)
{
  ULONG_PTR v1; // rdx

  v1 = *(unsigned int *)P;
  if ( (_DWORD)v1 != -1 )
    CmpDereferenceSecurityNode(P[1], v1);
  ExFreePoolWithTag(P, 0x77554D43u);
}
