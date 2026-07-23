/*
 * XREFs of ExSaFree @ 0x14035CA7C
 * Callers:
 *     ExCleanupAutoExpandPushLock @ 0x1402FD630 (ExCleanupAutoExpandPushLock.c)
 *     ExpCleanupAutoExpandPushLock @ 0x1403CFD08 (ExpCleanupAutoExpandPushLock.c)
 *     PspProcessDelete @ 0x1407612A0 (PspProcessDelete.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     ExpSaAllocatorFree @ 0x14035CB14 (ExpSaAllocatorFree.c)
 */

char __fastcall ExSaFree(unsigned int a1)
{
  __int64 v1; // r8
  unsigned int v2; // ecx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v4; // rcx
  struct _KTHREAD *v5; // rax

  v1 = (a1 >> 13) & 0x3FFFF;
  _BitScanReverse(&v2, v1);
  CurrentThread = KeGetCurrentThread();
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(ExSaPageGroupDescriptorArray + 8LL * (v2 - 2))
                             + 8 * (v1 ^ (unsigned int)(1 << v2))
                             + 8)
                 + 16LL);
  --CurrentThread->SpecialApcDisable;
  ExpSaAllocatorFree(v4);
  v5 = KeGetCurrentThread();
  if ( v5->SpecialApcDisable++ == -1 )
  {
    v5 = (struct _KTHREAD *)((char *)v5 + 152);
    if ( *(struct _KTHREAD **)&v5->Header.Lock != v5 )
      LOBYTE(v5) = KiCheckForKernelApcDelivery();
  }
  return (char)v5;
}
