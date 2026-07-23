/*
 * XREFs of sub_1406DDA18 @ 0x1406DDA18
 * Callers:
 *     sub_14026D048 @ 0x14026D048 (sub_14026D048.c)
 *     sub_14026D460 @ 0x14026D460 (sub_14026D460.c)
 *     sub_1406B79C8 @ 0x1406B79C8 (sub_1406B79C8.c)
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 *     sub_1406F9990 @ 0x1406F9990 (sub_1406F9990.c)
 *     sub_1406FC070 @ 0x1406FC070 (sub_1406FC070.c)
 *     sub_1406FD9F0 @ 0x1406FD9F0 (sub_1406FD9F0.c)
 *     sub_140761714 @ 0x140761714 (sub_140761714.c)
 *     sub_1407BC0B0 @ 0x1407BC0B0 (sub_1407BC0B0.c)
 *     sub_1409706E4 @ 0x1409706E4 (sub_1409706E4.c)
 *     sub_140980B94 @ 0x140980B94 (sub_140980B94.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1406DDAE0 @ 0x1406DDAE0 (sub_1406DDAE0.c)
 *     sub_1406DDE9C @ 0x1406DDE9C (sub_1406DDE9C.c)
 */

__int64 __fastcall sub_1406DDA18(__int64 *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rbp
  volatile signed __int64 *v6; // rbp
  _QWORD *i; // rdi
  bool v8; // zf
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v10 = 0LL;
  v4 = *a1;
  --*((_WORD *)CurrentThread + 243);
  v6 = (volatile signed __int64 *)(v4 + 40);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v6, 0LL);
  for ( i = a1 + 16; i; i = (_QWORD *)i[2] )
    sub_1406DDAE0(i, a2, &v10);
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6);
  sub_1402AFC00((ULONG_PTR)v6);
  v8 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v8 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  return sub_1406DDE9C(&v10);
}
