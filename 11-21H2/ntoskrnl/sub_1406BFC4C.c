/*
 * XREFs of sub_1406BFC4C @ 0x1406BFC4C
 * Callers:
 *     sub_1406BF94C @ 0x1406BF94C (sub_1406BF94C.c)
 *     sub_1406BF9AC @ 0x1406BF9AC (sub_1406BF9AC.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14030B700 (PsChargeProcessNonPagedPoolQuota.c)
 *     sub_14030BA20 @ 0x14030BA20 (sub_14030BA20.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406BFC4C(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  SIZE_T v8; // rdi
  char *v9; // rbx
  int v10; // edi

  v8 = 8 * ((a3 >> 6) + ((a3 & 0x3F) != 0) + 9LL);
  v9 = (char *)sub_1402828F0(64, v8, 0x77776D4Du);
  if ( !v9 )
    return 3221225626LL;
  v10 = PsChargeProcessNonPagedPoolQuota(a1, v8);
  if ( v10 < 0 )
  {
    ExFreePoolWithTag(v9, 0);
    return (unsigned int)v10;
  }
  else
  {
    *((_DWORD *)v9 + 16) = a4;
    *((_QWORD *)v9 + 2) = v9 + 72;
    *((_QWORD *)v9 + 1) = a3;
    sub_14030BA20(a2, (unsigned __int64 *)v9, 1);
    return 0LL;
  }
}
