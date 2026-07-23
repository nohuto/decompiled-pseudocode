/*
 * XREFs of sub_14096DE64 @ 0x14096DE64
 * Callers:
 *     sub_14098259C @ 0x14098259C (sub_14098259C.c)
 *     sub_140982688 @ 0x140982688 (sub_140982688.c)
 * Callees:
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 */

void __fastcall sub_14096DE64(__int64 a1, volatile signed __int64 **a2)
{
  volatile signed __int64 *v2; // rbx
  struct _KTHREAD *CurrentThread; // rax
  bool v5; // zf

  v2 = *a2;
  if ( *a2 )
  {
    if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2);
    sub_1402AFC00((ULONG_PTR)v2);
    CurrentThread = KeGetCurrentThread();
    v5 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v5 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
  }
  if ( a1 )
    sub_1403606C4(a1);
}
