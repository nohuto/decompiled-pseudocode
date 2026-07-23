/*
 * XREFs of sub_14098056C @ 0x14098056C
 * Callers:
 *     sub_1405B99AC @ 0x1405B99AC (sub_1405B99AC.c)
 *     sub_1409806C8 @ 0x1409806C8 (sub_1409806C8.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14030B700 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403107C0 (PsReturnProcessNonPagedPoolQuota.c)
 *     sub_14058DE04 @ 0x14058DE04 (sub_14058DE04.c)
 *     sub_1406C2718 @ 0x1406C2718 (sub_1406C2718.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall sub_14098056C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 v7; // rdi
  _QWORD *v9; // rbx
  _OWORD *v10; // rax
  __int64 v11; // rsi
  _QWORD *v12; // r14
  void *v13; // rcx
  __int64 v14; // rax

  v4 = 32 * a2;
  v7 = 32 * a2 + 32;
  if ( (int)PsChargeProcessNonPagedPoolQuota(a1, v7) < 0 )
    return 0LL;
  v9 = sub_1402828F0(64, 0x70uLL, 0x64436D4Du);
  if ( !v9 )
  {
    PsReturnProcessNonPagedPoolQuota(a1, v7);
    return 0LL;
  }
  v10 = sub_1402828F0(274, v7, 0x6C436D4Du);
  v11 = (__int64)v10;
  if ( !v10 )
  {
LABEL_6:
    PsReturnProcessNonPagedPoolQuota(a1, v7);
    ExFreePoolWithTag(v9, 0);
    return 0LL;
  }
  *v10 = 0LL;
  v10[1] = 0LL;
  v12 = sub_1402828F0(64, 0x20uLL, 0x68436D4Du);
  v13 = (void *)v11;
  if ( !v12 )
  {
LABEL_8:
    ExFreePoolWithTag(v13, 0);
    goto LABEL_6;
  }
  if ( !(unsigned int)sub_1406C2718(v11, v7) )
  {
    ExFreePoolWithTag(v12, 0);
    v13 = (void *)v11;
    goto LABEL_8;
  }
  v14 = sub_14058DE04(a1 + 1664);
  *v12 = a2;
  v12[1] = 1LL;
  v12[2] = v11;
  v9[6] = 0LL;
  v9[4] = v11 + v4 - 32;
  v9[3] = v11;
  v9[5] = a2;
  v9[7] = v12;
  v9[8] = v7;
  v9[12] = a3;
  _InterlockedIncrement64((volatile signed __int64 *)(v14 + 1368));
  v12[3] = v14;
  return v9;
}
