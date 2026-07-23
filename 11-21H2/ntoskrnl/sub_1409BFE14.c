/*
 * XREFs of sub_1409BFE14 @ 0x1409BFE14
 * Callers:
 *     sub_140960A00 @ 0x140960A00 (sub_140960A00.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1409C016C @ 0x1409C016C (sub_1409C016C.c)
 */

bool __fastcall sub_1409BFE14(_QWORD *a1, __int64 a2)
{
  _QWORD *i; // rbx
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v4; // rdi
  int v5; // eax
  __int64 v7; // [rsp+20h] [rbp-38h] BYREF
  __int128 v8; // [rsp+28h] [rbp-30h]
  __int64 v9; // [rsp+38h] [rbp-20h]
  __int64 v10; // [rsp+40h] [rbp-18h]

  v9 = a2;
  v7 = 0LL;
  v8 = 0LL;
  v10 = 1LL;
  i = a1;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v4 = a1 + 1;
  ExAcquirePushLockSharedEx((ULONG_PTR)(a1 + 1), 0LL);
LABEL_2:
  for ( i = (_QWORD *)*i; i; i = (_QWORD *)i[1] )
  {
    v5 = sub_1409C016C(&v7, i);
    if ( v5 < 0 )
      goto LABEL_2;
    if ( v5 <= 0 )
      break;
  }
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  sub_1402AFC00((ULONG_PTR)v4);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return i != 0LL;
}
