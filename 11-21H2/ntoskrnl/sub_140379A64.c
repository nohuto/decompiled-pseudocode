/*
 * XREFs of sub_140379A64 @ 0x140379A64
 * Callers:
 *     sub_14037556C @ 0x14037556C (sub_14037556C.c)
 *     sub_1403790A8 @ 0x1403790A8 (sub_1403790A8.c)
 *     sub_140379950 @ 0x140379950 (sub_140379950.c)
 *     sub_140391E54 @ 0x140391E54 (sub_140391E54.c)
 *     sub_140394DD0 @ 0x140394DD0 (sub_140394DD0.c)
 *     sub_1405F7344 @ 0x1405F7344 (sub_1405F7344.c)
 *     sub_1405F7B94 @ 0x1405F7B94 (sub_1405F7B94.c)
 * Callees:
 *     sub_140262ED4 @ 0x140262ED4 (sub_140262ED4.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1403798F0 @ 0x1403798F0 (sub_1403798F0.c)
 *     sub_140379C24 @ 0x140379C24 (sub_140379C24.c)
 *     sub_14037AE58 @ 0x14037AE58 (sub_14037AE58.c)
 */

char __fastcall sub_140379A64(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // rdi
  signed __int64 *v7; // rsi
  unsigned __int64 v8; // r13
  struct _KTHREAD *v9; // rax
  __int64 v10; // rbx
  int v12; // r15d
  __int64 v13; // r12
  PMDL *v14; // rdi
  struct _KTHREAD *CurrentThread; // rax

  v6 = *(_QWORD *)(a1 + 6216);
  v7 = (signed __int64 *)(a1 + 6024);
  v8 = *(unsigned int *)(a1 + 6208);
  LOBYTE(v9) = 0;
  v10 = a2;
  v12 = 0;
  v13 = *(_QWORD *)(v6 + 8LL * a2) & 0x7FFFFFFFFFFF0000LL;
  if ( (a6 & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v12 = 1;
    --*((_WORD *)CurrentThread + 243);
    LOBYTE(v9) = ExAcquirePushLockSharedEx(a1 + 6024, 0LL);
  }
  if ( (a6 & 4) != 0 )
  {
    if ( *(__int64 *)(v6 + 8 * v10) >= 0 )
    {
      v14 = (PMDL *)sub_1403798F0(a1, (a6 >> 4) & 7, v13);
      sub_140379C24(*v14);
      LOBYTE(v9) = sub_14037AE58(*(_QWORD *)(a1 + 6480), 2LL, a1 + 6360, *v14);
      *v14 = 0LL;
    }
  }
  else
  {
    if ( (a6 & 2) != 0 )
    {
      LOWORD(v9) = 0x7FFF;
LABEL_20:
      _InterlockedAnd16((volatile signed __int16 *)(v6 + 8 * v10), (unsigned __int16)v9);
      goto LABEL_10;
    }
    if ( (a6 & 1) != 0 )
      goto LABEL_10;
    if ( _bittest16((const signed __int16 *)(v6 + 8 * v10), 0xDu)
      && KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 6488) )
    {
      LOWORD(v9) = -8193;
      goto LABEL_20;
    }
    LOWORD(v9) = _InterlockedDecrement16((volatile signed __int16 *)(v6 + 8 * v10));
    if ( ((unsigned __int16)v9 & 0x1FFF) == 0 && *(__int64 *)(v6 + 8 * v10) >= 0 )
      LOBYTE(v9) = sub_140262ED4(v8, 1, 1);
  }
LABEL_10:
  if ( v12 )
  {
    if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v7);
    sub_1402AFC00((ULONG_PTR)v7);
    v9 = KeGetCurrentThread();
    if ( (*((_WORD *)v9 + 243))++ == 0xFFFF )
    {
      v9 = (struct _KTHREAD *)((char *)v9 + 152);
      if ( *(struct _KTHREAD **)v9 != v9 )
        LOBYTE(v9) = KiCheckForKernelApcDelivery();
    }
  }
  return (char)v9;
}
