/*
 * XREFs of sub_14097F8F8 @ 0x14097F8F8
 * Callers:
 *     sub_1406EB4B0 @ 0x1406EB4B0 (sub_1406EB4B0.c)
 *     sub_14097F690 @ 0x14097F690 (sub_14097F690.c)
 * Callees:
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

char sub_14097F8F8()
{
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v1; // rax

  CurrentThread = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4F3F8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4F3F8);
  LOBYTE(v1) = sub_1402AFC00((ULONG_PTR)&qword_140C4F3F8);
  if ( (*((_WORD *)CurrentThread + 243))++ == 0xFFFF )
  {
    v1 = (_QWORD *)((char *)CurrentThread + 152);
    if ( (_QWORD *)*v1 != v1 )
      LOBYTE(v1) = KiCheckForKernelApcDelivery();
  }
  return (char)v1;
}
