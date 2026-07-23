/*
 * XREFs of sub_14028DC08 @ 0x14028DC08
 * Callers:
 *     sub_1406FF49C @ 0x1406FF49C (sub_1406FF49C.c)
 *     sub_1407074F0 @ 0x1407074F0 (sub_1407074F0.c)
 *     sub_14097FBF4 @ 0x14097FBF4 (sub_14097FBF4.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall sub_14028DC08(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  result = ExAcquirePushLockExclusiveEx(a2 + 24, 0LL);
  *(_QWORD *)(a2 + 8) = a1;
  return result;
}
