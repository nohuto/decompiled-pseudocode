/*
 * XREFs of sub_1402E10CC @ 0x1402E10CC
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402E10CC(_QWORD *a1)
{
  __int64 *v1; // rdx
  __int64 result; // rax

  v1 = (__int64 *)*((_QWORD *)KeGetCurrentPrcb() + 4309);
  a1[1] = _InterlockedIncrement64(v1 + 1);
  result = *v1;
  *a1 = *v1;
  return result;
}
