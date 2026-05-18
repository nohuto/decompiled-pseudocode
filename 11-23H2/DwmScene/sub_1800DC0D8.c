/*
 * XREFs of sub_1800DC0D8 @ 0x1800DC0D8
 * Callers:
 *     sub_1800DC7E0 @ 0x1800DC7E0 (sub_1800DC7E0.c)
 * Callees:
 *     sub_18001F810 @ 0x18001F810 (sub_18001F810.c)
 */

char __fastcall sub_1800DC0D8(_QWORD *a1, __int64 **a2)
{
  __int64 *v2; // rax
  __int64 v3; // r8
  int v4; // eax
  char v5; // cl

  v2 = a2[2];
  if ( (unsigned __int64)a2[3] >= 8 )
    a2 = (__int64 **)*a2;
  v3 = a1[2];
  if ( a1[3] >= 8uLL )
    a1 = (_QWORD *)*a1;
  if ( (__int64 *)v3 != v2 )
    return 1;
  v4 = sub_18001F810((__int64)a1, a2, v3);
  v5 = 0;
  if ( v4 )
    return 1;
  return v5;
}
