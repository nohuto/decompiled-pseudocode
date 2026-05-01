/*
 * XREFs of RmResourceLimitsInitialize @ 0x18001BAC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmResourceLimitsInitialize(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = 0LL;
  a1[5] = 0LL;
  a1[4] = -1LL;
  a1[3] = -1LL;
  a1[2] = -1LL;
  a1[1] = -1LL;
  result = 0LL;
  a1[6] = 1LL;
  return result;
}
