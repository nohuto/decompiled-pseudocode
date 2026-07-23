/*
 * XREFs of sub_1406EDF6C @ 0x1406EDF6C
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 *     sub_1409E8E6C @ 0x1409E8E6C (sub_1409E8E6C.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1406EE2AC @ 0x1406EE2AC (sub_1406EE2AC.c)
 */

__int64 __fastcall sub_1406EDF6C(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KMUTANT *v5; // rdi

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v5 = (struct _KMUTANT *)(a1 + 4608);
  KeWaitForSingleObject((PVOID)(a1 + 4608), Executive, 0, 0, 0LL);
  LODWORD(a2) = sub_1406EE2AC(a1, a2);
  KeReleaseMutex(v5, 0);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return (unsigned int)a2;
}
