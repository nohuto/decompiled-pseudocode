/*
 * XREFs of sub_140985534 @ 0x140985534
 * Callers:
 *     sub_1406D5424 @ 0x1406D5424 (sub_1406D5424.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

char sub_140985534()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v1; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C252D8, 0LL);
  dword_140D05010 |= 4u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C252D8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C252D8);
  sub_1402AFC00((ULONG_PTR)&qword_140C252D8);
  v1 = KeGetCurrentThread();
  if ( (*((_WORD *)v1 + 243))++ == 0xFFFF )
  {
    v1 = (struct _KTHREAD *)((char *)v1 + 152);
    if ( *(struct _KTHREAD **)v1 != v1 )
      LOBYTE(v1) = KiCheckForKernelApcDelivery();
  }
  return (char)v1;
}
