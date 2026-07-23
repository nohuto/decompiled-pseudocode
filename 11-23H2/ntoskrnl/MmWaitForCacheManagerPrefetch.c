/*
 * XREFs of MmWaitForCacheManagerPrefetch @ 0x1403109DC
 * Callers:
 *     CcFetchDataForRead @ 0x140262550 (CcFetchDataForRead.c)
 *     CcPerformReadAhead @ 0x14030ECB0 (CcPerformReadAhead.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x1403107FC (MmWaitMultipleForCacheManagerPrefetch.c)
 * Callees:
 *     MiPfCompletePrefetchIos @ 0x1402A3CD0 (MiPfCompletePrefetchIos.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     MiReleaseReadListResources @ 0x140721550 (MiReleaseReadListResources.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmWaitForCacheManagerPrefetch(_DWORD *P)
{
  unsigned int v1; // ebp
  _QWORD **v2; // r14
  int v3; // esi
  _QWORD *v4; // rdi
  int v5; // ebx
  struct _KTHREAD *CurrentThread; // rcx

  v1 = 0;
  v2 = (_QWORD **)P;
  v3 = P[26] & 1;
  do
  {
    v4 = *v2;
    v5 = MiPfCompletePrefetchIos(v2 + 15, 0LL, 0LL);
    MiReleaseReadListResources(v2);
    ExFreePoolWithTag(v2, 0);
    v2 = (_QWORD **)v4;
    if ( v5 < 0 )
      v1 = v5;
  }
  while ( v4 );
  if ( v3 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( CurrentThread->SpecialApcDisable++ == -1
      && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v1;
}
