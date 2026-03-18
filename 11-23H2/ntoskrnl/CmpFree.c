/*
 * XREFs of CmpFree @ 0x140709900
 * Callers:
 *     <none>
 * Callees:
 *     CmpReleaseGlobalQuota @ 0x140709928 (CmpReleaseGlobalQuota.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFree(PVOID P, unsigned int a2)
{
  CmpReleaseGlobalQuota(a2);
  ExFreePoolWithTag(P, 0);
}
