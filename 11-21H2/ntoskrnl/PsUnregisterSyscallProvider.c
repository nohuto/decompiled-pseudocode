/*
 * XREFs of PsUnregisterSyscallProvider @ 0x140659570
 * Callers:
 *     <none>
 * Callees:
 *     ExRundownCompleted @ 0x1402095E0 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     sub_140419D6C @ 0x140419D6C (sub_140419D6C.c)
 */

__int64 __fastcall PsUnregisterSyscallProvider(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1 + 7);
  ExRundownCompleted(a1 + 7);
  return sub_140419D6C((volatile signed __int64 *)a1);
}
