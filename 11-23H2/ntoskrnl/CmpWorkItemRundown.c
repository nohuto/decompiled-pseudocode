/*
 * XREFs of CmpWorkItemRundown @ 0x140A11E80
 * Callers:
 *     CmFcManagerUnregisterFeatureUsageProvider @ 0x14067F890 (CmFcManagerUnregisterFeatureUsageProvider.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14030A5D0 (ExWaitForRundownProtectionRelease.c)
 */

__int64 __fastcall CmpWorkItemRundown(struct _EX_RUNDOWN_REF *a1)
{
  volatile __int64 *v1; // rbx

  v1 = (volatile __int64 *)&a1[4];
  ExWaitForRundownProtectionRelease(a1 + 4);
  return _InterlockedExchange64(v1, 1LL);
}
