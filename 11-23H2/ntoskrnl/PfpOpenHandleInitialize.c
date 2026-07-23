/*
 * XREFs of PfpOpenHandleInitialize @ 0x1408A5B40
 * Callers:
 *     PfpReadSupportInitialize @ 0x1402F9E7C (PfpReadSupportInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpOpenHandleInitialize(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  result = 0x200000000LL;
  a1[3] = 0x200000000LL;
  return result;
}
