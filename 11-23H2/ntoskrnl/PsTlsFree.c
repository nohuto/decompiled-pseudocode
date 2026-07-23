/*
 * XREFs of PsTlsFree @ 0x1409B6370
 * Callers:
 *     PspTlsAlloc @ 0x14084C294 (PspTlsAlloc.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     RtlpFlsFree @ 0x1409C2D18 (RtlpFlsFree.c)
 */

char __fastcall PsTlsFree(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v2; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  --CurrentThread->SpecialApcDisable;
  if ( (int)RtlpFlsFree(a1, (unsigned int)a1, &v5) < 0 )
    __fastfail(0x46u);
  v2 = KeGetCurrentThread();
  if ( v2->SpecialApcDisable++ == -1 )
  {
    v2 = (struct _KTHREAD *)((char *)v2 + 152);
    if ( *(struct _KTHREAD **)&v2->Header.Lock != v2 )
      LOBYTE(v2) = KiCheckForKernelApcDelivery();
  }
  return (char)v2;
}
