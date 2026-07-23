/*
 * XREFs of sub_14097EE60 @ 0x14097EE60
 * Callers:
 *     sub_1406FB4D0 @ 0x1406FB4D0 (sub_1406FB4D0.c)
 *     sub_14079D7A8 @ 0x14079D7A8 (sub_14079D7A8.c)
 *     sub_1407B8B60 @ 0x1407B8B60 (sub_1407B8B60.c)
 *     sub_1409800F4 @ 0x1409800F4 (sub_1409800F4.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14030B700 (PsChargeProcessNonPagedPoolQuota.c)
 *     sub_14030BA20 @ 0x14030BA20 (sub_14030BA20.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403107C0 (PsReturnProcessNonPagedPoolQuota.c)
 *     sub_1406C3FB4 @ 0x1406C3FB4 (sub_1406C3FB4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14097EE60(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  unsigned __int64 *v4; // rax
  unsigned __int64 *v5; // rbx
  _DWORD *v6; // rax

  v2 = *((_QWORD *)KeGetCurrentThread() + 23);
  result = PsChargeProcessNonPagedPoolQuota(v2, 0x88uLL);
  if ( (int)result >= 0 )
  {
    v4 = (unsigned __int64 *)sub_1402828F0(64, 0x48uLL, 0x73706D4Du);
    v5 = v4;
    if ( v4 )
    {
      *((_DWORD *)v4 + 16) = 128;
      v6 = sub_1406C3FB4(0LL, 0LL, 2);
      v5[1] = (unsigned __int64)v6;
      if ( v6 )
      {
        sub_14030BA20(a1, v5, 0);
        return 0LL;
      }
      ExFreePoolWithTag(v5, 0);
    }
    PsReturnProcessNonPagedPoolQuota(v2, 136LL);
    return 3221225626LL;
  }
  return result;
}
