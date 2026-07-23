/*
 * XREFs of sub_1406DDB48 @ 0x1406DDB48
 * Callers:
 *     sub_14026D460 @ 0x14026D460 (sub_14026D460.c)
 *     sub_1405B9904 @ 0x1405B9904 (sub_1405B9904.c)
 *     sub_1406B79C8 @ 0x1406B79C8 (sub_1406B79C8.c)
 *     sub_1406F9990 @ 0x1406F9990 (sub_1406F9990.c)
 *     sub_1406FD9F0 @ 0x1406FD9F0 (sub_1406FD9F0.c)
 *     sub_140761714 @ 0x140761714 (sub_140761714.c)
 *     sub_1409706E4 @ 0x1409706E4 (sub_1409706E4.c)
 * Callees:
 *     sub_140255844 @ 0x140255844 (sub_140255844.c)
 *     sub_140255870 @ 0x140255870 (sub_140255870.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1406DDAE0 @ 0x1406DDAE0 (sub_1406DDAE0.c)
 *     sub_1406DDC90 @ 0x1406DDC90 (sub_1406DDC90.c)
 *     sub_1406DDE9C @ 0x1406DDE9C (sub_1406DDE9C.c)
 */

__int64 __fastcall sub_1406DDB48(__int64 *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v5; // rsi
  volatile signed __int64 *v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rbp
  bool v9; // zf
  __int64 *v11; // rax
  int v12; // ecx
  int v13; // r13d
  __int64 v14; // r8
  __int64 *v15; // [rsp+80h] [rbp+18h] BYREF
  __int64 v16; // [rsp+88h] [rbp+20h] BYREF

  if ( a2 - 0x7FFFF <= 0xFFF7FFFF )
    return 3221225678LL;
  CurrentThread = KeGetCurrentThread();
  v5 = *a1;
  --*((_WORD *)CurrentThread + 243);
  v6 = (volatile signed __int64 *)(v5 + 40);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v6, 0LL);
  v7 = (__int64)(a1 + 16);
  v8 = (__int64)(a1 + 16);
  if ( a1 == (__int64 *)-128LL )
  {
LABEL_5:
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6);
    sub_1402AFC00((ULONG_PTR)v6);
    v9 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v9 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
    return 0LL;
  }
  while ( (*(_BYTE *)(v8 + 34) & 2) == 0 )
  {
LABEL_4:
    v8 = *(_QWORD *)(v8 + 16);
    if ( !v8 )
      goto LABEL_5;
  }
  v11 = sub_140255844(v8, a2);
  v15 = v11;
  if ( v11 )
  {
    ++*((_DWORD *)v11 + 20);
    goto LABEL_4;
  }
  v13 = sub_1406DDC90(v12, 0, 0, 0, (__int64)&v15);
  if ( v13 >= 0 )
  {
    v14 = (__int64)v15;
    *((_DWORD *)v15 + 16) = a2;
    sub_140255870((__int64)a1, v8, v14, 1);
    goto LABEL_4;
  }
  v16 = 0LL;
  while ( v7 != v8 )
  {
    sub_1406DDAE0(v7, a2, &v16);
    v7 = *(_QWORD *)(v7 + 16);
  }
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6);
  sub_1402AFC00((ULONG_PTR)v6);
  v9 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v9 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  sub_1406DDE9C(&v16);
  return (unsigned int)v13;
}
