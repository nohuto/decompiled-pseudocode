/*
 * XREFs of MultiUserNtGreCleanup @ 0x1C008F7E4
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C01481B0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x1C0009A80 (GreDeleteFastMutex.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0017B90 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     PopThreadGuardedObject @ 0x1C0023630 (PopThreadGuardedObject.c)
 *     Win32FreePool @ 0x1C0026670 (Win32FreePool.c)
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C00485E0 (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C0061B40 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     ?DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0069D5C (-DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C0089198 (-FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?vDestroyScanLookAsideList@RGNMEMOBJ@@SAXXZ @ 0x1C008FEC0 (-vDestroyScanLookAsideList@RGNMEMOBJ@@SAXXZ.c)
 *     ?Destroy@GdiHandleManager@@SAXPEAV1@@Z @ 0x1C008FEEC (-Destroy@GdiHandleManager@@SAXPEAV1@@Z.c)
 *     DrvNotifySessionStateChange @ 0x1C0090680 (DrvNotifySessionStateChange.c)
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C0090BE0 (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 *     ?Destroy@?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00BB490 (-Destroy@-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Destroy@?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00BB4D0 (-Destroy@-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z @ 0x1C00C5284 (-GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C00D9738 (--$FreeIsolatedType@V-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?Destroy@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00DB530 (-Destroy@-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?Destroy@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAXPEAV123@@Z @ 0x1C017A85C (-Destroy@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAXPEAV123@@Z.c)
 */

__int64 MultiUserNtGreCleanup()
{
  unsigned int CurrentProcessId; // eax
  GdiHandleManager *v1; // rcx
  unsigned int v2; // ebx
  int v3; // edi
  unsigned int i; // edx
  unsigned int NextEntryIndex; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 CurrentProcessWin32Process; // rax
  char **v10; // rbx
  char **v11; // rbx
  char **v12; // rbx
  struct _ENTRY *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdi
  unsigned __int64 v16; // rbx
  char *v17; // rdx
  _QWORD *v18; // rbx
  __int64 v19; // rsi
  char *v20; // rdi
  char **v21; // rbx
  void *v22; // rcx
  _QWORD *v23; // rbx
  _QWORD *v24; // rbx
  struct tagREMOTE_CONTEXT *v25; // rcx
  _QWORD *v26; // rbx
  void *v27; // rcx
  void *v28; // rcx
  void *v29; // rcx
  void *v30; // rcx
  void *v31; // rcx
  void *v32; // rcx
  void *v33; // rcx
  PVOID *v34; // rbx
  __int64 v35; // rdi
  struct GdiHandleManager *v36; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v37; // rcx
  char **v38; // rbx
  __int64 v39; // rdi
  struct _ENTRY *v41; // [rsp+30h] [rbp+8h] BYREF

  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  gbGreSessionCleanup = 1;
  v41 = 0LL;
  v2 = CurrentProcessId & 0xFFFFFFFC;
  v3 = 0;
  if ( gpHandleManager )
  {
    for ( i = 0; ; i = NextEntryIndex )
    {
      NextEntryIndex = GdiHandleManager::GetNextEntryIndex(v1, i, &v41);
      if ( !NextEntryIndex )
        break;
      LOBYTE(v1) = *((_BYTE *)v41 + 14) - 1;
      if ( (unsigned __int8)v1 <= 0x1Du )
      {
        v1 = (GdiHandleManager *)(v2 | *((_DWORD *)v41 + 2) & 1);
        *((_DWORD *)v41 + 2) = (_DWORD)v1;
        ++v3;
      }
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v1, v6, v7, v8);
    if ( CurrentProcessWin32Process )
      *(_DWORD *)(CurrentProcessWin32Process + 60) = v3;
  }
  if ( qword_1C029B1C0 && (int)qword_1C029B1C0() >= 0 && qword_1C029B1C8 )
    qword_1C029B1C8();
  if ( gpHandleManager )
    NtGdiCloseProcess(v2, 2u);
  if ( qword_1C029B1D0 && (int)qword_1C029B1D0() >= 0 )
  {
    v10 = qword_1C029B1D8 ? (char **)qword_1C029B1D8() : 0LL;
    if ( *v10 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        *v10);
      *v10 = 0LL;
    }
  }
  if ( qword_1C029B1E0 && (int)qword_1C029B1E0() >= 0 )
  {
    v11 = qword_1C029B1E8 ? (char **)qword_1C029B1E8() : 0LL;
    if ( *v11 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        *v11);
      *v11 = 0LL;
    }
  }
  if ( qword_1C029B1F0 && (int)qword_1C029B1F0() >= 0 )
  {
    v12 = qword_1C029B1F8 ? (char **)qword_1C029B1F8() : 0LL;
    if ( *v12 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        *v12);
      *v12 = 0LL;
    }
  }
  if ( qword_1C029B200 && (int)qword_1C029B200() >= 0 )
  {
    v13 = 0LL;
    v41 = 0LL;
    if ( qword_1C029B208 )
    {
      v14 = qword_1C029B208(&v41);
      v13 = v41;
      v15 = v14;
    }
    else
    {
      v15 = 0LL;
    }
    v16 = 0LL;
    if ( v13 )
    {
      do
      {
        v17 = *(char **)(v15 + 8 * v16);
        if ( v17 )
        {
          NSInstrumentation::CLeakTrackingAllocator::Free(
            (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
            v17);
          *(_QWORD *)(v15 + 8 * v16) = 0LL;
          v13 = v41;
        }
        ++v16;
      }
      while ( v16 < (unsigned __int64)v13 );
    }
  }
  if ( LastNlsTableBuffer )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)LastNlsTableBuffer);
    LastNlsTableBuffer = 0LL;
  }
  if ( qword_1C029B210 && (int)qword_1C029B210() >= 0 && qword_1C029B218 )
    qword_1C029B218();
  v18 = &unk_1C029A018;
  v19 = 8LL;
  do
  {
    if ( *v18 )
    {
      v20 = (char *)(*v18 - 32LL);
      PopThreadGuardedObject(v20);
      if ( v20 )
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          v20);
    }
    v18 += 4;
    --v19;
  }
  while ( v19 );
  if ( gpCachedEngbrush )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)gpCachedEngbrush);
  if ( gpCachedDbrush )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)gpCachedDbrush);
  if ( gpRGBXlate )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)gpRGBXlate);
    gpRGBXlate = 0LL;
  }
  if ( qword_1C029B220 && (int)qword_1C029B220() >= 0 )
  {
    v21 = qword_1C029B228 ? (char **)qword_1C029B228() : 0LL;
    if ( *v21 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        *v21);
      *v21 = 0LL;
    }
  }
  v22 = (void *)*((_QWORD *)gpSfmState + 3);
  if ( v22 )
    ZwClose(v22);
  if ( qword_1C029B230 && (int)qword_1C029B230() >= 0 )
  {
    v23 = qword_1C029B238 ? (_QWORD *)qword_1C029B238() : 0LL;
    if ( *v23 )
    {
      FreeIsolatedType<NSInstrumentation::CTypeIsolation<909312,3552>>(*v23);
      *v23 = 0LL;
    }
  }
  if ( qword_1C029B240 && (int)qword_1C029B240() >= 0 )
  {
    v24 = qword_1C029B248 ? (_QWORD *)qword_1C029B248() : 0LL;
    if ( *v24 )
    {
      FreeIsolatedType<NSInstrumentation::CTypeIsolation<909312,3552>>(*v24);
      *v24 = 0LL;
    }
  }
  MultiUserGreCleanupDrivers();
  DrvCleanupGraphicsDeviceList(gpLocalGraphicsDeviceList);
  gpLocalGraphicsDeviceList = 0LL;
  DrvCleanupGraphicsDeviceList(gpRemoteGraphicsDeviceList);
  gpRemoteGraphicsDeviceList = 0LL;
  gpGraphicsDeviceList = 0LL;
  if ( qword_1C0297068 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)qword_1C0297068);
    qword_1C0297068 = 0LL;
  }
  if ( qword_1C0297078 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)qword_1C0297078);
    qword_1C0297078 = 0LL;
  }
  GreCleanupRemoteAdapterContext(v25);
  DrvNotifySessionStateChange(1LL);
  if ( gpLockShortDelay )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)gpLockShortDelay);
    gpLockShortDelay = 0LL;
  }
  if ( gpTmpGlobal )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)gpTmpGlobal);
    gpTmpGlobal = 0LL;
  }
  if ( gpTmpGlobalFree )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)gpTmpGlobalFree);
    gpTmpGlobalFree = 0LL;
  }
  v26 = gpTypeIsolation;
  if ( gpTypeIsolation )
  {
    if ( *(_QWORD *)gpTypeIsolation )
      NSInstrumentation::CLookAsideTypeIsolation<180224,704>::Destroy(*(PVOID *)gpTypeIsolation);
    v27 = (void *)v26[2];
    if ( v27 )
      NSInstrumentation::CTypeIsolation<233472,912>::Destroy(v27);
    v28 = (void *)v26[3];
    if ( v28 )
      NSInstrumentation::CTypeIsolation<233472,912>::Destroy(v28);
    v29 = (void *)v26[1];
    if ( v29 )
      NSInstrumentation::CLookAsideTypeIsolation<180224,704>::Destroy(v29);
    v30 = (void *)v26[4];
    if ( v30 )
      NSInstrumentation::CTypeIsolation<233472,912>::Destroy(v30);
    v31 = (void *)v26[6];
    if ( v31 )
      NSInstrumentation::CTypeIsolation<909312,3552>::Destroy(v31);
    v32 = (void *)v26[7];
    if ( v32 )
      NSInstrumentation::CTypeIsolation<233472,912>::Destroy(v32);
    v33 = (void *)v26[5];
    if ( v33 )
      NSInstrumentation::CTypeIsolation<233472,912>::Destroy(v33);
    Win32FreePool((char *)gpTypeIsolation);
    gpTypeIsolation = 0LL;
  }
  if ( gpReferenceTracker )
  {
    v34 = (PVOID *)&qword_1C028F9B8;
    v35 = 3LL;
    do
    {
      if ( *v34 )
        NSInstrumentation::CReferenceTracker::CReferenceCountedType::Destroy(*v34);
      v34 += 2;
      --v35;
    }
    while ( v35 );
    ExFreePoolWithTag(gpReferenceTracker, 0);
    gpReferenceTracker = 0LL;
  }
  if ( gpAdapterLuids )
  {
    Win32FreePool((char *)gpAdapterLuids);
    gpAdapterLuids = 0LL;
  }
  if ( gpDevicesPerLuid )
  {
    Win32FreePool((char *)gpDevicesPerLuid);
    gpDevicesPerLuid = 0LL;
  }
  if ( qword_1C029B260 && (int)qword_1C029B260() >= 0 && qword_1C029B268 )
    qword_1C029B268();
  MultiUserGreCleanupEngResources();
  GreDeleteFastMutex(ghfmMemory);
  ghfmMemory = 0LL;
  if ( gpHandleManager )
  {
    GdiHandleManager::Destroy(v36);
    gpHandleManager = 0LL;
  }
  if ( gpGdiSharedMemory )
  {
    MmUnmapViewInSessionSpace(gpGdiSharedMemory);
    gpGdiSharedMemory = 0LL;
  }
  if ( gpHmgrSharedHandleSection )
  {
    ObfDereferenceObject(gpHmgrSharedHandleSection);
    gpHmgrSharedHandleSection = 0LL;
  }
  RGNMEMOBJ::vDestroyScanLookAsideList();
  v38 = (char **)&pHmgLookAsideList;
  v39 = 31LL;
  do
  {
    if ( *v38 )
    {
      NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(v37, *v38);
      *v38 = 0LL;
    }
    ++v38;
    --v39;
  }
  while ( v39 );
  if ( qword_1C029B270 && (int)qword_1C029B270() >= 0 && qword_1C029B278 )
    qword_1C029B278();
  if ( qword_1C029B0E0 && (int)qword_1C029B0E0() >= 0 && qword_1C029B0E8 )
    qword_1C029B0E8();
  return 1LL;
}
