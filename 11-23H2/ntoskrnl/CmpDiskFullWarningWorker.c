/*
 * XREFs of CmpDiskFullWarningWorker @ 0x140A11D70
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseHardError @ 0x140A00E10 (ExRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpDiskFullWarningWorker(void *a1)
{
  int v2; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  ExFreePoolWithTag(a1, 0);
  return ExRaiseHardError(-1073741697, 0, 0, 0LL, 1, &v2);
}
