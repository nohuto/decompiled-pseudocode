/*
 * XREFs of sub_14096E3D8 @ 0x14096E3D8
 * Callers:
 *     sub_14096E960 @ 0x14096E960 (sub_14096E960.c)
 *     sub_14096EAB0 @ 0x14096EAB0 (sub_14096EAB0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 *     sub_1403606EC @ 0x1403606EC (sub_1403606EC.c)
 *     sub_140599E60 @ 0x140599E60 (sub_140599E60.c)
 */

_QWORD *__fastcall sub_14096E3D8(__int64 a1, __int64 *a2, volatile signed __int64 **a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 *v5; // r14
  _QWORD *v7; // rdi
  __int64 v8; // r13
  volatile signed __int64 *v9; // rsi
  _QWORD *v10; // rax
  bool v11; // zf

  CurrentThread = KeGetCurrentThread();
  v5 = *(__int64 **)(a1 + 16624);
  v7 = 0LL;
  if ( sub_1403606EC((__int64)v5) )
  {
    v8 = *v5;
    --*((_WORD *)CurrentThread + 243);
    v9 = (volatile signed __int64 *)(v8 + 16672);
    ExAcquirePushLockExclusiveEx(v8 + 16672, 0LL);
    v10 = sub_140599E60(v8, (const void *)(a1 + 16640));
    if ( v10 && v10[8] == a1 )
    {
      v7 = v10;
      *a3 = v9;
      *a2 = v8;
    }
    else
    {
      if ( v8 != -16672 )
      {
        if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v8 + 16672);
        sub_1402AFC00(v8 + 16672);
        v11 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
        if ( v11 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
          KiCheckForKernelApcDelivery();
      }
      sub_1403606C4((__int64)v5);
    }
  }
  return v7;
}
