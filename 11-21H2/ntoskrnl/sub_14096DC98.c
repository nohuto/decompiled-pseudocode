/*
 * XREFs of sub_14096DC98 @ 0x14096DC98
 * Callers:
 *     sub_140693EA8 @ 0x140693EA8 (sub_140693EA8.c)
 *     sub_1407F336C @ 0x1407F336C (sub_1407F336C.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

char __fastcall sub_14096DC98(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v3; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50618, 0LL);
  _bittestandreset((signed __int32 *)qword_140C53490->Buffer, a1);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50618, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C50618);
  LOBYTE(v3) = sub_1402AFC00((ULONG_PTR)&qword_140C50618);
  if ( (*((_WORD *)CurrentThread + 243))++ == 0xFFFF )
  {
    v3 = (_QWORD *)((char *)CurrentThread + 152);
    if ( (_QWORD *)*v3 != v3 )
      LOBYTE(v3) = KiCheckForKernelApcDelivery();
  }
  return (char)v3;
}
