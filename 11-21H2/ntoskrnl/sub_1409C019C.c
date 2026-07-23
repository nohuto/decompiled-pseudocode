/*
 * XREFs of sub_1409C019C @ 0x1409C019C
 * Callers:
 *     sub_1409BFF78 @ 0x1409BFF78 (sub_1409BFF78.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1408826B4 @ 0x1408826B4 (sub_1408826B4.c)
 */

bool __fastcall sub_1409C019C(unsigned __int64 a1)
{
  __int64 v2; // rbx
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v4; // rdi
  _QWORD *v5; // rbx
  int v6; // eax

  v2 = *((_QWORD *)KeGetCurrentThread() + 23);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v4 = (signed __int64 *)(v2 + 2848);
  ExAcquirePushLockSharedEx(v2 + 2848, 0LL);
  v5 = *(_QWORD **)(v2 + 2840);
  while ( v5 )
  {
    v6 = sub_1408826B4(a1, (__int64)v5);
    if ( v6 >= 0 )
    {
      if ( v6 <= 0 )
        break;
      v5 = (_QWORD *)v5[1];
    }
    else
    {
      v5 = (_QWORD *)*v5;
    }
  }
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  sub_1402AFC00((ULONG_PTR)v4);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v5 != 0LL;
}
