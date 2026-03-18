/*
 * XREFs of ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0017B90
 * Callers:
 *     GdiProcessCallout @ 0x1C0016BD0 (GdiProcessCallout.c)
 *     MultiUserNtGreCleanup @ 0x1C008F7E4 (MultiUserNtGreCleanup.c)
 * Callees:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C001783C (-vCleanupDCs@@YAXK@Z.c)
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C0017AB0 (-vGarbageCollectObjects@@YAXXZ.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C0017F5C (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x1C00181D4 (-vRemoveRefPalettes@@YAXK@Z.c)
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C0018268 (-vCleanupRegions@@YAXK@Z.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C0018308 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     HmgNextOwned @ 0x1C001B0D0 (HmgNextOwned.c)
 *     ?vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z @ 0x1C0061378 (-vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C0061450 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C006FB60 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     bDeletePalette @ 0x1C0093780 (bDeletePalette.c)
 *     HmgSetLock @ 0x1C00B0344 (HmgSetLock.c)
 *     bDeleteBrush @ 0x1C00C82E0 (bDeleteBrush.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1C00DBD84 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     EngDeleteDriverObj @ 0x1C01781D0 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1C01783E0 (EngLockDriverObj.c)
 */

__int64 __fastcall NtGdiCloseProcess(unsigned int a1, unsigned int a2)
{
  unsigned int v4; // r12d
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // edi
  void (*v11)(void); // rax
  int v12; // edi
  unsigned int v13; // r15d
  HDRVOBJ v15; // rsi
  char v16; // al
  void *v17; // [rsp+20h] [rbp-10h] BYREF
  HDRVOBJ hdo; // [rsp+80h] [rbp+50h] BYREF
  void **v19; // [rsp+88h] [rbp+58h] BYREF

  v4 = 1;
  if ( a2 == 2 )
  {
    MultiUserGreCleanupHmgRemoveAllLocks(0x12u);
    if ( qword_1C029B6D0 )
    {
      if ( (int)qword_1C029B6D0() >= 0 && qword_1C029B6D8 )
        qword_1C029B6D8(2LL);
    }
  }
  vCleanupDCs(a1);
  if ( a2 == 2 )
  {
    MultiUserGreCleanupHmgRemoveAllLocks(0xAu);
  }
  else if ( a2 == 1 )
  {
    MultiUserGreCleanupHmgOwnRemoveAllLocks(0xAu);
  }
  if ( qword_1C029B6E0 && (int)qword_1C029B6E0() >= 0 && qword_1C029B6E8 )
    qword_1C029B6E8(a1);
  if ( a2 == 2 )
  {
    MultiUserGreCleanupHmgRemoveAllLocks(0x10u);
  }
  else if ( a2 == 1 )
  {
    MultiUserGreCleanupHmgOwnRemoveAllLocks(0x10u);
  }
  hdo = 0LL;
  v5 = 0;
  while ( 1 )
  {
    v5 = HmgNextOwned(v5, a1, &hdo);
    if ( !v5 )
      break;
    if ( (BYTE2(hdo) & 0x1F) == 0x10 )
      bDeleteBrush((HBRUSH)hdo);
  }
  DxLddmCleanupAtProcessDestroy(a1);
  if ( qword_1C029B6F0 && (int)qword_1C029B6F0() >= 0 && qword_1C029B6F8 )
    qword_1C029B6F8(a1);
  if ( a2 == 2 )
  {
    vReleaseCurrentpMapProcForSurfaces(2LL);
    SURFACE::pdibDefault = 0LL;
    ppalDefault = 0LL;
    ppalMono = 0LL;
    hpalMono = 0LL;
    MultiUserGreCleanupHmgRemoveAllLocks(5u);
  }
  else if ( a2 == 1 )
  {
    MultiUserGreCleanupHmgOwnRemoveAllLocks(5u);
  }
  vCleanupSurfaces(a1, a2);
  vGarbageCollectObjects(v7, v6, v8, v9);
  if ( a2 == 2 )
  {
    hrgnDefault = 0LL;
    prgnDefault = 0LL;
    MultiUserGreCleanupHmgRemoveAllLocks(4u);
  }
  else if ( a2 == 1 )
  {
    MultiUserGreCleanupHmgOwnRemoveAllLocks(4u);
  }
  vCleanupRegions(a1);
  if ( a2 == 2 )
  {
    ghStockColorSpace = 0LL;
    MultiUserGreCleanupHmgRemoveAllLocks(9u);
  }
  else if ( a2 == 1 )
  {
    MultiUserGreCleanupHmgOwnRemoveAllLocks(9u);
  }
  hdo = 0LL;
  v10 = 0;
  while ( 1 )
  {
    v10 = HmgNextOwned(v10, a1, &hdo);
    if ( !v10 )
      break;
    if ( (BYTE2(hdo) & 0x1F) == 9 )
      bDeleteColorSpace(hdo, 0LL);
  }
  if ( a2 == 2 )
  {
    MultiUserGreCleanupHmgRemoveAllLocks(0x15u);
    if ( qword_1C029B700 && (int)qword_1C029B700() >= 0 && qword_1C029B708 )
      qword_1C029B708(a1);
    MultiUserGreCleanupHmgRemoveAllLocks(0);
    hdo = 0LL;
    v19 = 0LL;
    v17 = 0LL;
    if ( qword_1C029B720 && (int)qword_1C029B720() >= 0 )
    {
      if ( qword_1C029B728 )
        qword_1C029B728(&hdo, &v19, &v17);
      if ( *(_QWORD *)hdo )
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          *(void **)hdo);
      if ( *v19 )
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          *v19);
      if ( v17 )
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          v17);
    }
    v11 = (void (*)(void))qword_1C029B3E8;
  }
  else
  {
    if ( a2 != 1 )
      goto LABEL_36;
    MultiUserGreCleanupHmgOwnRemoveAllLocks(0);
    if ( !qword_1C029B710 || (int)qword_1C029B710() < 0 )
      goto LABEL_36;
    v11 = (void (*)(void))qword_1C029B718;
  }
  if ( v11 )
    v11();
LABEL_36:
  vRemoveRefPalettes(a1);
  v12 = 0;
  hdo = 0LL;
  v13 = 0;
  while ( 1 )
  {
    v13 = HmgNextOwned(v13, a1, &hdo);
    if ( !v13 )
      break;
    v15 = hdo;
    v16 = BYTE2(hdo) & 0x1F;
    if ( (BYTE2(hdo) & 0x1F) == 8 )
    {
      v4 = bDeletePalette((HPALETTE)hdo);
      if ( !v4 && !v12 )
        v12 = 1;
    }
    else if ( v16 == 6 )
    {
      if ( qword_1C029B730 && (int)qword_1C029B730() >= 0 && qword_1C029B738 )
        qword_1C029B738(v15);
    }
    else if ( v16 == 28 )
    {
      HmgSetLock(hdo);
      EngLockDriverObj(v15);
      EngDeleteDriverObj(v15, 1, 1);
    }
    else
    {
      v4 = 0;
      if ( !v12 )
        v12 = 1;
    }
  }
  return v4;
}
