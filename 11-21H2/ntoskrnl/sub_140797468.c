/*
 * XREFs of sub_140797468 @ 0x140797468
 * Callers:
 *     sub_140796530 @ 0x140796530 (sub_140796530.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14078F094 @ 0x14078F094 (sub_14078F094.c)
 *     sub_14078F0FC @ 0x14078F0FC (sub_14078F0FC.c)
 */

void __fastcall sub_140797468(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v5; // rdi
  _QWORD *v6; // rbx
  _QWORD *v7; // rdx
  volatile signed __int32 **v8; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // r8
  __int64 v12; // rax
  PVOID P[2]; // [rsp+20h] [rbp-10h] BYREF

  v2 = *(_QWORD *)(a1 + 1424);
  if ( v2 )
  {
    P[1] = P;
    P[0] = P;
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    v5 = v2 + 16;
    ExAcquirePushLockExclusiveEx(v2 + 16, 0LL);
    v6 = (_QWORD *)(v2 + 24);
    v7 = (_QWORD *)*v6;
    while ( v7 != v6 )
    {
      v9 = v7;
      v7 = (_QWORD *)*v7;
      if ( v9[3] == a2 )
      {
        if ( (_QWORD *)v7[1] != v9
          || (v10 = (_QWORD *)v9[1], (_QWORD *)*v10 != v9)
          || (*v10 = v7, v7[1] = v10, v11 = P[0], *((PVOID **)P[0] + 1) != P) )
        {
LABEL_15:
          __fastfail(3u);
        }
        *v9 = P[0];
        v9[1] = P;
        v11[1] = v9;
        P[0] = v9;
      }
    }
    ExReleasePushLockEx(v5, 0LL);
    sub_1402F9540((__int64)KeGetCurrentThread());
    while ( 1 )
    {
      v8 = (volatile signed __int32 **)P[0];
      if ( P[0] == P )
        break;
      if ( *((PVOID **)P[0] + 1) != P )
        goto LABEL_15;
      v12 = *(_QWORD *)P[0];
      if ( *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0] )
        goto LABEL_15;
      P[0] = *(PVOID *)P[0];
      *(_QWORD *)(v12 + 8) = P;
      sub_14078F0FC(v8[2]);
      sub_14078F094((PVOID *)v8, 1);
    }
  }
}
