/*
 * XREFs of EtwpAddGuidEntry @ 0x140781A68
 * Callers:
 *     EtwpFindOrCreateGuidEntry @ 0x1406BF720 (EtwpFindOrCreateGuidEntry.c)
 *     EtwpEnableGuid @ 0x14077FEF0 (EtwpEnableGuid.c)
 *     EtwpAddGuidEntry @ 0x140781A68 (EtwpAddGuidEntry.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231280 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     EtwpFindGuidEntryByGuid @ 0x1406BF850 (EtwpFindGuidEntryByGuid.c)
 *     EtwpReferenceGuidEntry @ 0x1406BF944 (EtwpReferenceGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x1406BF984 (EtwpUnreferenceGuidEntry.c)
 *     EtwpAddGuidEntry @ 0x140781A68 (EtwpAddGuidEntry.c)
 *     EtwpAllocGuidEntry @ 0x140781C0C (EtwpAllocGuidEntry.c)
 *     EtwpFreeGuidEntry @ 0x1407D9764 (EtwpFreeGuidEntry.c)
 */

__int64 *__fastcall EtwpAddGuidEntry(__int64 a1, _DWORD *a2, int a3)
{
  __int64 v3; // rsi
  __int64 *GuidEntryByGuid; // rbp
  __int64 *v7; // rdi
  __int64 v8; // r14
  __int64 **v9; // r15
  struct _KTHREAD *v10; // rax
  volatile signed __int64 *v11; // r14
  __int64 *i; // rsi
  __int64 v13; // rcx
  __int64 *v14; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 **v17; // rcx
  __int64 *v18; // rax
  __int64 v19; // rdx
  __int64 *v20; // rdx
  __int64 **v21; // rcx

  v3 = a3;
  GuidEntryByGuid = 0LL;
  v7 = (__int64 *)EtwpAllocGuidEntry();
  if ( !v7 )
    return 0LL;
  if ( a1 == EtwpHostSiloState
    || (GuidEntryByGuid = EtwpFindGuidEntryByGuid(EtwpHostSiloState, a2, v3)) != 0LL
    || (GuidEntryByGuid = (__int64 *)EtwpAddGuidEntry(EtwpHostSiloState, a2, (unsigned int)v3)) != 0LL )
  {
    v8 = 56LL * (((unsigned __int8)*a2 ^ (unsigned __int8)(a2[1] ^ a2[2] ^ a2[3])) & 0x3F) + a1 + 464;
    v9 = (__int64 **)(v8 + 16 * v3);
    if ( GuidEntryByGuid )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
      v17 = (__int64 **)(GuidEntryByGuid + 2);
      GuidEntryByGuid[52] = (__int64)KeGetCurrentThread();
      v18 = v7 + 2;
      v7[50] = (__int64)GuidEntryByGuid;
      v19 = GuidEntryByGuid[2];
      if ( *(__int64 **)(v19 + 8) != GuidEntryByGuid + 2 )
        goto LABEL_32;
      *v18 = v19;
      v7[3] = (__int64)v17;
      *(_QWORD *)(v19 + 8) = v18;
      *v17 = v18;
    }
    v10 = KeGetCurrentThread();
    v11 = (volatile signed __int64 *)(v8 + 48);
    --v10->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v11, 0LL);
    for ( i = *v9; ; i = (__int64 *)*i )
    {
      if ( i == (__int64 *)v9 )
        goto LABEL_10;
      v13 = *(_QWORD *)a2 - i[5];
      if ( *(_QWORD *)a2 == i[5] )
        v13 = *((_QWORD *)a2 + 1) - i[6];
      if ( !v13 && EtwpReferenceGuidEntry((ULONG_PTR)i) )
        break;
    }
    if ( i )
    {
      if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v11);
      KeAbPostRelease((ULONG_PTR)v11);
      KeLeaveCriticalRegion();
      if ( !GuidEntryByGuid )
        goto LABEL_20;
      v20 = (__int64 *)v7[2];
      if ( (__int64 *)v20[1] == v7 + 2 )
      {
        v21 = (__int64 **)v7[3];
        if ( *v21 == v7 + 2 )
        {
          *v21 = v20;
          v20[1] = (__int64)v21;
          v7[50] = 0LL;
LABEL_30:
          GuidEntryByGuid[52] = 0LL;
          ExReleasePushLockEx(GuidEntryByGuid + 51, 0LL);
          KeLeaveCriticalRegion();
          if ( !v7 )
            return i;
          EtwpUnreferenceGuidEntry(GuidEntryByGuid);
LABEL_20:
          --v7[4];
          EtwpFreeGuidEntry(v7);
          return i;
        }
      }
    }
    else
    {
LABEL_10:
      v14 = *v9;
      if ( (__int64 **)(*v9)[1] == v9 )
      {
        *v7 = (__int64)v14;
        i = v7;
        v7[1] = (__int64)v9;
        v14[1] = (__int64)v7;
        *v9 = v7;
        if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v11);
        KeAbPostRelease((ULONG_PTR)v11);
        KeLeaveCriticalRegion();
        v7 = 0LL;
        if ( !GuidEntryByGuid )
          return i;
        goto LABEL_30;
      }
    }
LABEL_32:
    __fastfail(3u);
  }
  --v7[4];
  EtwpFreeGuidEntry(v7);
  return 0LL;
}
