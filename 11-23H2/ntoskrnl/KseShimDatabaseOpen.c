/*
 * XREFs of KseShimDatabaseOpen @ 0x140694C20
 * Callers:
 *     KsepDbGetDriverShims @ 0x140694A54 (KsepDbGetDriverShims.c)
 *     KsepDbCacheReadDevice @ 0x14080851C (KsepDbCacheReadDevice.c)
 *     KsepDbGetShimInfo @ 0x140855540 (KsepDbGetShimInfo.c)
 *     KseInitialize @ 0x140B495CC (KseInitialize.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 *     KsepSdbMapToMemory @ 0x140694E7C (KsepSdbMapToMemory.c)
 *     KsepSdbUnmapFromMemory @ 0x1406950AC (KsepSdbUnmapFromMemory.c)
 *     KsepDeletePatchSdb @ 0x1409774F4 (KsepDeletePatchSdb.c)
 */

__int64 __fastcall KseShimDatabaseOpen(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // edi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&KsepShimDbLock, 0LL);
  if ( KsepShimDbDuringBoot )
  {
    if ( KsepShimDbHandle )
    {
      ++KsepShimDbRefCount;
      v3 = 0;
      *a1 = KsepShimDbHandle;
      _InterlockedIncrement(&dword_140C40730);
      goto LABEL_4;
    }
    *a1 = 0LL;
    goto LABEL_16;
  }
  if ( KsepShimDbHandle )
  {
    ++KsepShimDbRefCount;
    v3 = 0;
    *a1 = KsepShimDbHandle;
    _InterlockedIncrement(&dword_140C40738);
    goto LABEL_4;
  }
  v3 = KsepSdbMapToMemory(L"\\SystemRoot\\AppPatch\\drvmain.sdb");
  if ( v3 < 0 )
  {
    *a1 = 0LL;
    _InterlockedIncrement(&dword_140C4073C);
LABEL_16:
    v3 = -1073741823;
    goto LABEL_4;
  }
  if ( (int)KsepSdbMapToMemory(L"\\SystemRoot\\AppPatch\\drvpatch.sdb") >= 0
    && dword_140C40C30 >= (unsigned int)dword_140C40C68 )
  {
    KsepSdbUnmapFromMemory(&unk_140C40C38);
    KsepDeletePatchSdb();
  }
  ++KsepShimDbRefCount;
  KsepShimDbHandle = (__int64)&KsepShimDb;
  *a1 = &KsepShimDb;
  _InterlockedIncrement(&dword_140C40734);
LABEL_4:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock);
  KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
  KeLeaveCriticalRegion();
  return (unsigned int)v3;
}
