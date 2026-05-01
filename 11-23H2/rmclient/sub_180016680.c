/*
 * XREFs of sub_180016680 @ 0x180016680
 * Callers:
 *     sub_180012CD4 @ 0x180012CD4 (sub_180012CD4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180016680(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbx

  v1 = a1 + 16;
  RtlAcquireSRWLockShared(a1 + 16);
  v3 = *(_QWORD *)(a1 + 40) >> 1;
  RtlReleaseSRWLockShared(v1);
  return v3;
}
