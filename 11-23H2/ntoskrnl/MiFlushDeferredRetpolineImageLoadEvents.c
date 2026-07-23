/*
 * XREFs of MiFlushDeferredRetpolineImageLoadEvents @ 0x1408656D4
 * Callers:
 *     MiInitSystem @ 0x140B44518 (MiInitSystem.c)
 * Callees:
 *     MmAcquireLoadLock @ 0x1407047C0 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x140704B40 (MmReleaseLoadLock.c)
 *     MiLogNonRetpolineImageLoadEvent @ 0x140852E70 (MiLogNonRetpolineImageLoadEvent.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

_QWORD *MiFlushDeferredRetpolineImageLoadEvents()
{
  struct _KTHREAD *Lock; // rdi
  int *v1; // rbx
  __int64 v3; // rax

  Lock = MmAcquireLoadLock();
  while ( 1 )
  {
    v1 = (int *)qword_140C65870;
    if ( qword_140C65870 == &qword_140C65870 )
      break;
    if ( *((PVOID **)qword_140C65870 + 1) != &qword_140C65870
      || (v3 = *(_QWORD *)qword_140C65870, *(PVOID *)(*(_QWORD *)qword_140C65870 + 8LL) != qword_140C65870) )
    {
      __fastfail(3u);
    }
    qword_140C65870 = *(PVOID *)qword_140C65870;
    *(_QWORD *)(v3 + 8) = &qword_140C65870;
    MiLogNonRetpolineImageLoadEvent((__int64)(v1 + 4), v1[8]);
    ExFreePoolWithTag(v1, 0);
  }
  return MmReleaseLoadLock((__int64)Lock);
}
