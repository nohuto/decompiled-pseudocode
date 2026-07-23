/*
 * XREFs of sub_1403BA01C @ 0x1403BA01C
 * Callers:
 *     sub_140823988 @ 0x140823988 (sub_140823988.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1405CED0C @ 0x1405CED0C (sub_1405CED0C.c)
 *     sub_140824268 @ 0x140824268 (sub_140824268.c)
 */

__int64 __fastcall sub_1403BA01C(ULONG_PTR a1, int a2, __int64 a3, int a4)
{
  ULONG_PTR v7; // rbp
  struct _KTHREAD *CurrentThread; // rax
  int v9; // edi
  ULONG_PTR *i; // rsi
  int v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+70h] [rbp+8h] BYREF

  v13 = 0LL;
  v7 = a1;
  if ( a1 )
  {
    v9 = sub_1405CED0C(a1, v12, (__int64)&v13);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v9 = 0;
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C23C48, 0LL);
    for ( i = (ULONG_PTR *)qword_140C23B70; i != &qword_140C23B70; i = (ULONG_PTR *)*i )
    {
      v7 = (ULONG_PTR)i;
      v9 = sub_1405CED0C((ULONG_PTR)i, v12, (__int64)&v13);
      if ( v9 )
        break;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C23C48, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C23C48);
    sub_1402AFC00((ULONG_PTR)&qword_140C23C48);
    sub_1402F9540((__int64)KeGetCurrentThread());
  }
  if ( v9 )
  {
    v9 = 2;
    *(_QWORD *)(a3 + 72) = v13;
    *(_QWORD *)(a3 + 64) = v7;
  }
  return sub_140824268(a2, a3, a4, v9, a3 + 56);
}
