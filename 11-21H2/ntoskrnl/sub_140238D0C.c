/*
 * XREFs of sub_140238D0C @ 0x140238D0C
 * Callers:
 *     sub_14030C260 @ 0x14030C260 (sub_14030C260.c)
 *     sub_140374958 @ 0x140374958 (sub_140374958.c)
 *     sub_1405A2D30 @ 0x1405A2D30 (sub_1405A2D30.c)
 *     sub_140970E00 @ 0x140970E00 (sub_140970E00.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140238E78 @ 0x140238E78 (sub_140238E78.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_1402F391C @ 0x1402F391C (sub_1402F391C.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

_QWORD *__fastcall sub_140238D0C(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  bool v5; // zf
  __int64 *v6; // rsi
  __int64 v7; // rbx
  int v8; // eax
  BOOL v9; // edx
  unsigned __int64 OldIrql; // rbx
  _QWORD *result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  int v15; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  *((_BYTE *)CurrentThread + 1385) |= 0x80u;
  v5 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v5 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  KeAcquireInStackQueuedSpinLock(&qword_140C53340, &LockHandle);
  *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL) = a1;
  v6 = (__int64 *)(8 * (((unsigned __int64)qword_140C50630 >> 39) & 0x1FF) - 0x90482413000LL);
  v7 = sub_140317A10(a1 + 784);
  v8 = sub_140317A80(v6);
  v9 = 0;
  if ( (v7 & 1) != 0 )
  {
    if ( !v8 )
      goto LABEL_6;
    if ( (unsigned int)sub_140229550() )
    {
      v9 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_6;
    }
    else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
    {
      goto LABEL_6;
    }
    v7 |= 0x8000000000000000uLL;
  }
  else if ( v8 )
  {
    v9 = sub_140229550() != 0;
  }
LABEL_6:
  *v6 = v7;
  if ( v9 )
    sub_1402294F0((__int64)v6, v7);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = *((_QWORD *)CurrentPrcb + 4375);
        v15 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v5 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
        *(_DWORD *)(v14 + 20) &= v15;
        if ( v5 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  result = (_QWORD *)sub_140238E78(a2);
  if ( (_BYTE)result )
    result = (_QWORD *)sub_1402F391C(1LL, 0LL);
  --*((_WORD *)CurrentThread + 243);
  *((_BYTE *)CurrentThread + 1385) &= ~0x80u;
  v5 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v5 )
  {
    result = (_QWORD *)((char *)CurrentThread + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery();
  }
  return result;
}
