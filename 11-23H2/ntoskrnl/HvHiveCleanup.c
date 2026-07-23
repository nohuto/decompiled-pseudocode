/*
 * XREFs of HvHiveCleanup @ 0x1407098E0
 * Callers:
 *     CmShutdownSystem2 @ 0x14061636C (CmShutdownSystem2.c)
 *     CmpCompleteUnloadKey @ 0x140688D18 (CmpCompleteUnloadKey.c)
 *     CmpDestroyHive @ 0x140A1CF50 (CmpDestroyHive.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     CmpFreeBootRegistry @ 0x140617CC8 (CmpFreeBootRegistry.c)
 *     CmpReleaseGlobalQuota @ 0x140709B38 (CmpReleaseGlobalQuota.c)
 *     HvpMapEntryGetFreeBin @ 0x14070AB40 (HvpMapEntryGetFreeBin.c)
 *     HvpFreeHiveFreeDisplay @ 0x1407CC224 (HvpFreeHiveFreeDisplay.c)
 *     HvpViewMapCleanup @ 0x1407DAE44 (HvpViewMapCleanup.c)
 *     HvpFreeMap @ 0x1407E1098 (HvpFreeMap.c)
 *     HvpFreeBin @ 0x1407E9C28 (HvpFreeBin.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     HvpGetCellMap @ 0x140AF5280 (HvpGetCellMap.c)
 */

__int64 __fastcall HvHiveCleanup(__int64 a1)
{
  unsigned int v1; // ebp
  int v3; // r12d
  unsigned int v4; // edi
  __int64 v5; // rsi
  unsigned int v6; // r13d
  unsigned int i; // r14d
  __int64 CellMap; // rax
  __int64 v9; // r15
  _QWORD *FreeBin; // rax
  _QWORD *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  void *v14; // r14
  __int64 v15; // rcx
  void *v16; // rdi
  void *v17; // rdi
  __int64 v19; // rdx
  _QWORD *v20; // rax

  *(_DWORD *)(a1 + 160) &= ~1u;
  v1 = 0;
  v3 = *(_DWORD *)(a1 + 160) & 0x10;
  v4 = 0;
  do
  {
    v5 = 632LL * v1;
    v6 = v4 + *(_DWORD *)(v5 + a1 + 280);
    if ( *(_QWORD *)(v5 + a1 + 288) && v6 != v4 )
    {
      for ( i = v4; i < v6; i += *(_DWORD *)(v9 + 16) )
      {
        CellMap = HvpGetCellMap(a1, i);
        v9 = CellMap;
        if ( !*(_QWORD *)(CellMap + 8) )
          break;
        FreeBin = (_QWORD *)HvpMapEntryGetFreeBin(CellMap);
        v11 = FreeBin;
        if ( FreeBin )
        {
          v19 = *FreeBin;
          if ( *(_QWORD **)(*FreeBin + 8LL) != FreeBin || (v20 = (_QWORD *)FreeBin[1], (_QWORD *)*v20 != v11) )
            __fastfail(3u);
          *v20 = v19;
          *(_QWORD *)(v19 + 8) = v20;
          (*(void (__fastcall **)(_QWORD *, __int64))(a1 + 32))(v11, 24LL);
        }
        v12 = *(_QWORD *)(v9 + 8);
        v13 = *(unsigned int *)(v9 + 16);
        if ( (v12 & 8) != 0 )
          HvpFreeBin(a1, (unsigned int)v13, v12 & 0xFFFFFFFFFFFFFFF0uLL);
        else
          CmpReleaseGlobalQuota(v13);
      }
      v14 = *(void **)(v5 + a1 + 288);
      HvpFreeMap(a1, v14, 0LL, (unsigned int)((*(_DWORD *)(v5 + a1 + 280) >> 12) - 1) >> 9);
      if ( v14 != (void *)(v5 + a1 + 296) )
      {
        CmpReleaseGlobalQuota(0x2000LL);
        ExFreePoolWithTag(v14, 0);
      }
      *(_QWORD *)(v5 + a1 + 288) = 0LL;
      *(_DWORD *)(v5 + a1 + 280) = 0;
    }
    ++v1;
    v4 += 0x80000000;
  }
  while ( v1 < 2 );
  if ( v3 && _InterlockedExchangeAdd(&CmpPreloadedHivesCount, 0xFFFFFFFF) == 1 )
    CmpFreeBootRegistry();
  v15 = *(_QWORD *)(a1 + 64);
  if ( v15 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(a1 + 32))(v15, *(unsigned int *)(a1 + 132));
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  v16 = *(void **)(a1 + 96);
  if ( v16 )
  {
    CmpReleaseGlobalQuota(*(unsigned int *)(a1 + 108));
    ExFreePoolWithTag(v16, 0);
    *(_QWORD *)(a1 + 96) = 0LL;
  }
  v17 = *(void **)(a1 + 120);
  if ( v17 )
  {
    CmpReleaseGlobalQuota(*(unsigned int *)(a1 + 108));
    ExFreePoolWithTag(v17, 0);
    *(_QWORD *)(a1 + 120) = 0LL;
  }
  HvpViewMapCleanup(a1 + 224);
  return HvpFreeHiveFreeDisplay(a1);
}
