/*
 * XREFs of RtlInitMinimalBarrier @ 0x140B1391C
 * Callers:
 *     sub_1403E5A20 @ 0x1403E5A20 (sub_1403E5A20.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140AFA010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInitMinimalBarrier(_DWORD *a1, int a2)
{
  __int64 result; // rax

  a1[1] = a2;
  result = 0LL;
  *a1 = a2;
  return result;
}
