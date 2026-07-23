/*
 * XREFs of PsQueryTotalCycleTimeProcess @ 0x1406C73D0
 * Callers:
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 * Callees:
 *     sub_1402481DC @ 0x1402481DC (sub_1402481DC.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F374C @ 0x1402F374C (sub_1402F374C.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PsQueryTotalCycleTimeProcess(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  signed __int64 *v5; // rbx
  __int64 v6; // rsi
  _QWORD **v7; // rdi
  _QWORD *v8; // rcx
  __int64 v9; // rax

  CurrentThread = KeGetCurrentThread();
  sub_1402F374C(1);
  sub_1402481DC((__int64)CurrentThread, a2);
  --*((_WORD *)CurrentThread + 242);
  v5 = (signed __int64 *)(a1 + 2144);
  ExAcquirePushLockSharedEx(a1 + 2144, 0LL);
  v6 = *(_QWORD *)(a1 + 864);
  v7 = (_QWORD **)(a1 + 1504);
  v8 = *v7;
  while ( v8 != v7 )
  {
    v9 = *(v8 - 158);
    v8 = (_QWORD *)*v8;
    v6 += v9;
  }
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5);
  sub_1402AFC00((ULONG_PTR)v5);
  sub_1402AC800((__int64)CurrentThread);
  return v6;
}
