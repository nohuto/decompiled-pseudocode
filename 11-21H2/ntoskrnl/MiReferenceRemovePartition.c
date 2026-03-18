/*
 * XREFs of MiReferenceRemovePartition @ 0x1405838B0
 * Callers:
 *     MmRemovePhysicalMemory @ 0x140969D90 (MmRemovePhysicalMemory.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     MiReferencePagePartition @ 0x14058DED4 (MiReferencePagePartition.c)
 */

__int64 __fastcall MiReferenceRemovePartition(unsigned __int64 a1, __int64 *a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v5; // rax
  unsigned int v6; // edi
  bool v7; // zf

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C55040, 0LL);
  if ( a1 <= qword_140C50840 && ((*(_QWORD *)(48 * a1 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
  {
    v5 = MiReferencePagePartition(48 * a1 - 0x220000000000LL, 0LL);
    if ( v5 )
    {
      *a2 = v5;
      v6 = 0;
    }
    else
    {
      v6 = -1073741558;
    }
  }
  else
  {
    v6 = -1073741811;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C55040, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C55040);
  KeAbPostRelease((ULONG_PTR)&qword_140C55040);
  v7 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v7 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v6;
}
