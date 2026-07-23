/*
 * XREFs of sub_14096DEDC @ 0x14096DEDC
 * Callers:
 *     sub_14098259C @ 0x14098259C (sub_14098259C.c)
 *     sub_140982688 @ 0x140982688 (sub_140982688.c)
 * Callees:
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14096E960 @ 0x14096E960 (sub_14096E960.c)
 */

void __fastcall sub_14096DEDC(__int64 *a1, volatile signed __int64 **a2, int a3)
{
  __int64 v3; // rsi
  volatile signed __int64 *v5; // rbx
  struct _KTHREAD *CurrentThread; // rax

  if ( a3 < 0 )
  {
    v3 = *a1;
    v5 = *a2;
    if ( (_InterlockedExchangeAdd64(*a2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v5);
    sub_1402AFC00((ULONG_PTR)v5);
    CurrentThread = KeGetCurrentThread();
    if ( (*((_WORD *)CurrentThread + 243))++ == 0xFFFF
      && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    {
      KiCheckForKernelApcDelivery();
    }
    *a2 = 0LL;
    sub_14096E960(v3);
  }
}
