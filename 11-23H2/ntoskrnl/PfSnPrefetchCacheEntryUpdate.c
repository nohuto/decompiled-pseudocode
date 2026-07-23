/*
 * XREFs of PfSnPrefetchCacheEntryUpdate @ 0x14074D980
 * Callers:
 *     PfSnSetPrefetcherInformation @ 0x14074D774 (PfSnSetPrefetcherInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     memcmp @ 0x1403DA530 (memcmp.c)
 *     PfSnPrefetchCacheEntryGet @ 0x14074E4F4 (PfSnPrefetchCacheEntryGet.c)
 */

_QWORD *__fastcall PfSnPrefetchCacheEntryUpdate(__int64 a1)
{
  const void *v1; // rdi
  unsigned __int8 *v3; // r9
  __int64 v4; // rbp
  __int64 v5; // r10
  __int64 v6; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rbx

  v1 = (const void *)(a1 + 4);
  v3 = (unsigned __int8 *)(a1 + 4);
  v4 = 314159LL;
  v5 = 8LL;
  do
  {
    v6 = *v3;
    v3 += 8;
    v4 = *(v3 - 1)
       + 37
       * (*(v3 - 2)
        + 37
        * (*(v3 - 3) + 37 * (*(v3 - 4) + 37 * (*(v3 - 5) + 37 * (*(v3 - 6) + 37 * (*(v3 - 7) + 37 * (v6 + 37 * v4)))))));
    --v5;
  }
  while ( v5 );
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&stru_140C6A6A0, 1u);
  v8 = qword_140C6A690 - 16;
  if ( !memcmp((const void *)(qword_140C6A690 - 16 + 32), v1, 0x40uLL)
    || (v8 = PfSnPrefetchCacheEntryGet(&unk_140C6A678, v1, v4, 0LL)) != 0 )
  {
    *(_DWORD *)(v8 + 116) = *(_DWORD *)(a1 + 68);
  }
  ExReleaseResourceLite(&stru_140C6A6A0);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
