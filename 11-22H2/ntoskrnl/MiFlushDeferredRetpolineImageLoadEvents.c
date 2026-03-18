/*
 * XREFs of MiFlushDeferredRetpolineImageLoadEvents @ 0x1408658B4
 * Callers:
 *     MiInitSystem @ 0x140B47C18 (MiInitSystem.c)
 * Callees:
 *     MmAcquireLoadLock @ 0x140704660 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x1407049E0 (MmReleaseLoadLock.c)
 *     MiLogNonRetpolineImageLoadEvent @ 0x140853A80 (MiLogNonRetpolineImageLoadEvent.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

_QWORD *MiFlushDeferredRetpolineImageLoadEvents()
{
  struct _KTHREAD *Lock; // rdi
  int *v1; // rbx
  __int64 v3; // rax

  Lock = MmAcquireLoadLock();
  while ( 1 )
  {
    v1 = (int *)qword_140C65970;
    if ( qword_140C65970 == &qword_140C65970 )
      break;
    if ( *((PVOID **)qword_140C65970 + 1) != &qword_140C65970
      || (v3 = *(_QWORD *)qword_140C65970, *(PVOID *)(*(_QWORD *)qword_140C65970 + 8LL) != qword_140C65970) )
    {
      __fastfail(3u);
    }
    qword_140C65970 = *(PVOID *)qword_140C65970;
    *(_QWORD *)(v3 + 8) = &qword_140C65970;
    MiLogNonRetpolineImageLoadEvent((__int64)(v1 + 4), v1[8]);
    ExFreePoolWithTag(v1, 0);
  }
  return MmReleaseLoadLock((__int64)Lock);
}
