/*
 * XREFs of sub_1406E97B4 @ 0x1406E97B4
 * Callers:
 *     sub_14079D7A8 @ 0x14079D7A8 (sub_14079D7A8.c)
 *     sub_1407B8B60 @ 0x1407B8B60 (sub_1407B8B60.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14030B700 (PsChargeProcessNonPagedPoolQuota.c)
 *     sub_14030BA20 @ 0x14030BA20 (sub_14030BA20.c)
 *     sub_14033C424 @ 0x14033C424 (sub_14033C424.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406E97B4(__int64 a1)
{
  _DWORD *v2; // rbx
  __int64 v3; // rdi
  void *v5; // rcx

  v2 = sub_1402828F0(64, 0x48uLL, 0x77776D4Du);
  if ( v2 )
  {
    v3 = sub_14033C424(0);
    if ( v3 )
    {
      if ( (int)PsChargeProcessNonPagedPoolQuota(*((_QWORD *)KeGetCurrentThread() + 23), 0x208uLL) >= 0 )
      {
        v2[16] = 8;
        *((_QWORD *)v2 + 1) = v3;
        sub_14030BA20(a1, (unsigned __int64 *)v2, 0);
        return 1LL;
      }
      ExFreePoolWithTag(v2, 0);
      v5 = (void *)v3;
    }
    else
    {
      v5 = v2;
    }
    ExFreePoolWithTag(v5, 0);
  }
  return 0LL;
}
