/*
 * XREFs of PsUnregisterSyscallProvider @ 0x1409B4850
 * Callers:
 *     <none>
 * Callees:
 *     ExRundownCompleted @ 0x140208880 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x14030A340 (ExWaitForRundownProtectionRelease.c)
 *     PspDereferenceSyscallProvider @ 0x1405A4BCC (PspDereferenceSyscallProvider.c)
 */

__int64 __fastcall PsUnregisterSyscallProvider(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1 + 7);
  ExRundownCompleted(a1 + 7);
  return PspDereferenceSyscallProvider((volatile signed __int64 *)a1);
}
