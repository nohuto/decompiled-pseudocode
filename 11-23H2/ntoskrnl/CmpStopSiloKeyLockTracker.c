/*
 * XREFs of CmpStopSiloKeyLockTracker @ 0x140A1C148
 * Callers:
 *     PspDeleteExternalServerSiloState @ 0x1409ACFB8 (PspDeleteExternalServerSiloState.c)
 *     CmpFreeSiloContextCallback @ 0x140A11EB0 (CmpFreeSiloContextCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BDAC0 (ExfReleasePushLock.c)
 *     CmpLockSiloKeyLockTrackerExclusive @ 0x140847A74 (CmpLockSiloKeyLockTrackerExclusive.c)
 *     CmpFreeSiloKeyLockEntry @ 0x140A1C02C (CmpFreeSiloKeyLockEntry.c)
 *     CmpLockRegistry @ 0x140AF54A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 */

ULONG_PTR *__fastcall CmpStopSiloKeyLockTracker(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v2; // rdx
  ULONG_PTR **v3; // rax
  signed __int64 v4; // rax
  signed __int64 v5; // rdx
  unsigned __int64 v6; // rtt
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  ULONG_PTR *result; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  ULONG_PTR *v14; // rax
  ULONG_PTR v15; // rcx
  ULONG_PTR v16; // [rsp+20h] [rbp-10h] BYREF
  ULONG_PTR *v17; // [rsp+28h] [rbp-8h]

  CmpLockSiloKeyLockTrackerExclusive((unsigned __int64 *)BugCheckParameter2);
  *(_DWORD *)(BugCheckParameter2 + 8) = *(_DWORD *)(BugCheckParameter2 + 8) & 0xFFFFFFFC | 2;
  v2 = *(_QWORD *)(BugCheckParameter2 + 16);
  v17 = &v16;
  v16 = (ULONG_PTR)&v16;
  if ( v2 != BugCheckParameter2 + 16 )
  {
    v3 = *(ULONG_PTR ***)(BugCheckParameter2 + 24);
    v16 = v2;
    v17 = (ULONG_PTR *)v3;
    *(_QWORD *)(v2 + 8) = &v16;
    *v3 = &v16;
    *(_QWORD *)(BugCheckParameter2 + 24) = BugCheckParameter2 + 16;
    *(_QWORD *)(BugCheckParameter2 + 16) = BugCheckParameter2 + 16;
  }
  _m_prefetchw((const void *)BugCheckParameter2);
  v4 = *(_QWORD *)BugCheckParameter2;
  v5 = *(_QWORD *)BugCheckParameter2 - 16LL;
  if ( (*(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v5 = 0LL;
  if ( (v4 & 2) != 0
    || (v6 = *(_QWORD *)BugCheckParameter2,
        v6 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v5, v4)) )
  {
    ExfReleasePushLock((_QWORD *)BugCheckParameter2);
  }
  KeAbPostRelease(BugCheckParameter2);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  result = &v16;
  if ( (ULONG_PTR *)v16 != &v16 )
  {
    CmpLockRegistry(v8, v7, v9, v10);
    v14 = (ULONG_PTR *)v16;
    v15 = *(_QWORD *)v16;
    if ( *(ULONG_PTR **)(v16 + 8) != &v16 )
LABEL_10:
      __fastfail(3u);
    while ( 1 )
    {
      if ( *(ULONG_PTR **)(v15 + 8) != v14 )
        goto LABEL_10;
      v16 = v15;
      *(_QWORD *)(v15 + 8) = &v16;
      if ( v14 == &v16 )
        return (ULONG_PTR *)CmpUnlockRegistry(&v16, &v16, v12, v13);
      CmpFreeSiloKeyLockEntry(v14);
      v14 = (ULONG_PTR *)v16;
      if ( *(ULONG_PTR **)(v16 + 8) != &v16 )
        goto LABEL_10;
      v15 = *(_QWORD *)v16;
    }
  }
  return result;
}
