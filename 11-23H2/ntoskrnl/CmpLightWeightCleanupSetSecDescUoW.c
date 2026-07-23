/*
 * XREFs of CmpLightWeightCleanupSetSecDescUoW @ 0x140A28208
 * Callers:
 *     CmpCleanupLightWeightUoWData @ 0x140A1C5F4 (CmpCleanupLightWeightUoWData.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x140A289A0 (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x140A29AC4 (CmpLightWeightPrepareSetSecDescUoW.c)
 * Callees:
 *     CmpDereferenceSecurityNode @ 0x1402976E0 (CmpDereferenceSecurityNode.c)
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
