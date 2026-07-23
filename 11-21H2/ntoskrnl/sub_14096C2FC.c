/*
 * XREFs of sub_14096C2FC @ 0x14096C2FC
 * Callers:
 *     sub_14058DDC0 @ 0x14058DDC0 (sub_14058DDC0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

char __fastcall sub_14096C2FC(unsigned __int16 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v2; // rdi
  _QWORD *v3; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = a1;
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C51F08, 0LL);
  _bittestandreset((signed __int32 *)qword_140C51F28->Buffer, v2);
  *(_QWORD *)(qword_140C51F48 + 8 * v2) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C51F08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C51F08);
  LOBYTE(v3) = sub_1402AFC00((ULONG_PTR)&qword_140C51F08);
  if ( (*((_WORD *)CurrentThread + 243))++ == 0xFFFF )
  {
    v3 = (_QWORD *)((char *)CurrentThread + 152);
    if ( (_QWORD *)*v3 != v3 )
      LOBYTE(v3) = KiCheckForKernelApcDelivery();
  }
  return (char)v3;
}
