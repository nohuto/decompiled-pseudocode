/*
 * XREFs of PfSnPrefetchCacheEntryUpdate @ 0x14074DCA0
 * Callers:
 *     PfSnSetPrefetcherInformation @ 0x14074DA94 (PfSnSetPrefetcherInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390C0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     memcmp @ 0x1403D9CF0 (memcmp.c)
 *     PfSnPrefetchCacheEntryGet @ 0x14074E814 (PfSnPrefetchCacheEntryGet.c)
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
  ExAcquireResourceExclusiveLite(&stru_140C6A7A0, 1u);
  v8 = qword_140C6A790 - 16;
  if ( !memcmp((const void *)(qword_140C6A790 - 16 + 32), v1, 0x40uLL)
    || (v8 = PfSnPrefetchCacheEntryGet(&unk_140C6A778, v1, v4, 0LL)) != 0 )
  {
    *(_DWORD *)(v8 + 116) = *(_DWORD *)(a1 + 68);
  }
  ExReleaseResourceLite(&stru_140C6A7A0);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
