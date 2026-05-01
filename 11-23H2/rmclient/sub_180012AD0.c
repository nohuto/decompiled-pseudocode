/*
 * XREFs of sub_180012AD0 @ 0x180012AD0
 * Callers:
 *     sub_180012CD4 @ 0x180012CD4 (sub_180012CD4.c)
 *     sub_1800131B4 @ 0x1800131B4 (sub_1800131B4.c)
 * Callees:
 *     sub_180016748 @ 0x180016748 (sub_180016748.c)
 */

__int64 __fastcall sub_180012AD0(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rbx

  v1 = a1 + 16;
  RtlAcquireSRWLockShared(a1 + 16);
  v3 = *(_QWORD *)(a1 + 8);
  if ( (v3 & 1) != 0 )
  {
    if ( v3 == 1 )
      v4 = 0LL;
    else
      v4 = v3 ^ (a1 | 1);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 8);
  }
  v5 = sub_180016748(v4);
  RtlReleaseSRWLockShared(v1);
  return v5;
}
