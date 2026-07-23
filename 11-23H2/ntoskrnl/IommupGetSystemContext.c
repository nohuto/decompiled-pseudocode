/*
 * XREFs of IommupGetSystemContext @ 0x1403B09E8
 * Callers:
 *     IommuGetLibraryContext @ 0x1405234B0 (IommuGetLibraryContext.c)
 *     IommuGetConfiguration @ 0x140B71190 (IommuGetConfiguration.c)
 *     IommuHvGetConfiguration @ 0x140B92640 (IommuHvGetConfiguration.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     HalpMmAllocCtxAlloc @ 0x14039B000 (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x1403A58A0 (HalpMmAllocCtxFree.c)
 *     memset @ 0x140435E00 (memset.c)
 *     IommupHvCreateSvmPasidSpace @ 0x140524CF0 (IommupHvCreateSvmPasidSpace.c)
 */

PVOID *__fastcall IommupGetSystemContext(unsigned int a1)
{
  __int64 v2; // rcx
  PVOID *v3; // rax
  PVOID *v4; // rax
  PVOID *v5; // rbx
  bool v6; // zf
  _QWORD *v7; // rax
  char v8; // al
  __int64 v10; // rcx

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&IommupSystemContextListPushLock, 0LL);
  v3 = (PVOID *)IommupSystemContextListHead;
  if ( IommupSystemContextListHead == &IommupSystemContextListHead )
  {
LABEL_2:
    v4 = (PVOID *)HalpMmAllocCtxAlloc(v2, 72LL);
    v5 = v4;
    if ( !v4 )
    {
LABEL_14:
      if ( (_InterlockedExchangeAdd64(
              (volatile signed __int64 *)&IommupSystemContextListPushLock,
              0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&IommupSystemContextListPushLock);
      KeAbPostRelease((ULONG_PTR)&IommupSystemContextListPushLock);
      return 0LL;
    }
    memset(v4, 0, 0x48uLL);
    v5[3] = 0LL;
    v6 = HalpHvIommu == 0;
    v5[5] = v5 + 4;
    v5[4] = v5 + 4;
    v5[7] = v5 + 6;
    v5[6] = v5 + 6;
    *((_DWORD *)v5 + 4) = a1;
    if ( !v6 && (int)IommupHvCreateSvmPasidSpace(a1) < 0 )
    {
      HalpMmAllocCtxFree(v10, (__int64)v5);
      goto LABEL_14;
    }
    v7 = IommupSystemContextListHead;
    if ( *((PVOID **)IommupSystemContextListHead + 1) != &IommupSystemContextListHead )
      __fastfail(3u);
    *v5 = IommupSystemContextListHead;
    v5[1] = &IommupSystemContextListHead;
    v7[1] = v5;
    IommupSystemContextListHead = v5;
  }
  else
  {
    while ( 1 )
    {
      v2 = *((unsigned int *)v3 + 4);
      v5 = v3;
      if ( (_DWORD)v2 == a1 )
        break;
      v3 = (PVOID *)*v3;
      if ( v3 == &IommupSystemContextListHead )
      {
        if ( (_DWORD)v2 == a1 )
          break;
        goto LABEL_2;
      }
    }
  }
  v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)&IommupSystemContextListPushLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&IommupSystemContextListPushLock);
  KeAbPostRelease((ULONG_PTR)&IommupSystemContextListPushLock);
  return v5;
}
