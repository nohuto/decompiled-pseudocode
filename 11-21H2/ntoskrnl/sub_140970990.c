/*
 * XREFs of sub_140970990 @ 0x140970990
 * Callers:
 *     sub_14059F6F4 @ 0x14059F6F4 (sub_14059F6F4.c)
 *     sub_14059FC8C @ 0x14059FC8C (sub_14059FC8C.c)
 *     sub_140970668 @ 0x140970668 (sub_140970668.c)
 * Callees:
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

char sub_140970990()
{
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v1; // rax

  CurrentThread = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4F468, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4F468);
  LOBYTE(v1) = sub_1402AFC00((ULONG_PTR)&qword_140C4F468);
  if ( (*((_WORD *)CurrentThread + 243))++ == 0xFFFF )
  {
    v1 = (_QWORD *)((char *)CurrentThread + 152);
    if ( (_QWORD *)*v1 != v1 )
      LOBYTE(v1) = KiCheckForKernelApcDelivery();
  }
  return (char)v1;
}
