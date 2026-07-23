/*
 * XREFs of sub_140980D40 @ 0x140980D40
 * Callers:
 *     sub_1405B99AC @ 0x1405B99AC (sub_1405B99AC.c)
 *     sub_1409806C8 @ 0x1409806C8 (sub_1409806C8.c)
 * Callees:
 *     sub_14025D494 @ 0x14025D494 (sub_14025D494.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403107C0 (PsReturnProcessNonPagedPoolQuota.c)
 *     sub_1405BA5F0 @ 0x1405BA5F0 (sub_1405BA5F0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140980D40(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rbp
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  void *v7; // r14

  v2 = (_QWORD *)a2[7];
  v3 = 0LL;
  v4 = a2[8];
  v7 = (void *)v2[2];
  if ( v4 )
  {
    do
    {
      sub_14025D494((unsigned __int64)v7 + v3);
      v3 += 4096LL;
    }
    while ( v3 < v4 );
  }
  PsReturnProcessNonPagedPoolQuota(a1, v4);
  sub_1405BA5F0(v2[3]);
  ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(v7, 0);
  ExFreePoolWithTag(a2, 0);
}
