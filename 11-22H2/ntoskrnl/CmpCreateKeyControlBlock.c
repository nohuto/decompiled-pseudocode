/*
 * XREFs of CmpCreateKeyControlBlock @ 0x1406D8840
 * Callers:
 *     CmpWalkOneLevel @ 0x1406DD8D0 (CmpWalkOneLevel.c)
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
 *     CmRenameKey @ 0x140A1445C (CmRenameKey.c)
 *     CmpCreateRegistryRoot @ 0x140B39780 (CmpCreateRegistryRoot.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x14022CFD0 (CmpFindSecurityCellCacheIndex.c)
 *     ExAllocateFromLookasideListEx @ 0x14022D0A0 (ExAllocateFromLookasideListEx.c)
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeAbPostReleaseEx @ 0x1402BD4C0 (KeAbPostReleaseEx.c)
 *     ExfReleasePushLockShared @ 0x1402BD830 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD040 (ExfAcquirePushLockSharedEx.c)
 *     memset @ 0x140435400 (memset.c)
 *     CmpCompareUnicodeString @ 0x140690A4C (CmpCompareUnicodeString.c)
 *     CmpFreeKeyControlBlock @ 0x140699D40 (CmpFreeKeyControlBlock.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1406D23CC (CmpUpdateKeyNodeAccessBits.c)
 *     CmpLockKcbExclusive @ 0x1406D8518 (CmpLockKcbExclusive.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1406D8E40 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpGetNameControlBlock @ 0x1406D8F90 (CmpGetNameControlBlock.c)
 *     CmpKeyFullNameLength @ 0x1406D9320 (CmpKeyFullNameLength.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1406D9378 (CmpReferenceKeyControlBlockUnsafe.c)
 *     HvpGetCellPaged @ 0x1406E0200 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0310 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1406E034C (HvpGetCellContextReinitialize.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x140769400 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpCompareCompressedName @ 0x1407C4C74 (CmpCompareCompressedName.c)
 *     HvpReleaseCellFlat @ 0x1407D99F0 (HvpReleaseCellFlat.c)
 *     CmpCreateLayerLink @ 0x1407DAB1C (CmpCreateLayerLink.c)
 *     CmpTryToLockKcbExclusive @ 0x1407E00A8 (CmpTryToLockKcbExclusive.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x1407E2A9C (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     HvpGetCellFlat @ 0x1407FE0A0 (HvpGetCellFlat.c)
 *     CmpEtwDumpKcb @ 0x1408ABD56 (CmpEtwDumpKcb.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     CmLockHiveSecurityShared @ 0x140AF60A0 (CmLockHiveSecurityShared.c)
 *     CmUnlockHiveSecurity @ 0x140AF6100 (CmUnlockHiveSecurity.c)
 *     CmpUnlockKcb @ 0x140AF65A0 (CmpUnlockKcb.c)
 */

__int64 CmpCreateKeyControlBlock(__int64 a1, int a2, ULONG_PTR a3, ULONG_PTR a4, char a5, unsigned __int16 *a6, ...)
{
  int v9; // ebx
  unsigned __int16 *v10; // r14
  __int64 v11; // rdi
  __int64 v12; // r13
  __int64 v13; // rax
  __int16 v14; // cx
  char *v15; // rax
  char *v16; // rdi
  _DWORD *v17; // r15
  __int64 NameControlBlock; // rax
  ULONG_PTR v19; // rdx
  ULONG_PTR v20; // rcx
  __int64 CellFlat; // rax
  __int64 v22; // rcx
  __int64 v23; // rbx
  int v24; // eax
  int v25; // ecx
  ULONG_PTR v26; // rax
  int v27; // r14d
  __int64 v28; // rbx
  ULONG_PTR v29; // r14
  __int64 v30; // rcx
  bool v31; // zf
  unsigned int v32; // ecx
  ULONG_PTR v33; // rbx
  unsigned __int64 v34; // rdx
  __int64 result; // rax
  signed __int64 *v36; // rbx
  unsigned __int64 v37; // r14
  ULONG_PTR v38; // rcx
  __int64 CellPaged; // rax
  __int64 v40; // r14
  int LayerLink; // r12d
  __int64 v42; // rcx
  void *v43; // rcx
  _QWORD v44[2]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v45; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v46; // [rsp+80h] [rbp+8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp+20h]
  __int64 v48; // [rsp+B0h] [rbp+38h] BYREF
  va_list va; // [rsp+B0h] [rbp+38h]
  __int64 v50; // [rsp+B8h] [rbp+40h]
  _QWORD *v51; // [rsp+C0h] [rbp+48h]
  va_list va1; // [rsp+C8h] [rbp+50h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v48 = va_arg(va1, _QWORD);
  v50 = va_arg(va1, _QWORD);
  v51 = va_arg(va1, _QWORD *);
  BugCheckParameter2 = a4;
  v44[0] = 0LL;
  HvpGetCellContextReinitialize(v44);
  if ( (*(_DWORD *)(a1 + 160) & 0x20) != 0 && *(struct _KTHREAD **)(a1 + 4168) != KeGetCurrentThread() )
    return 3221225524LL;
  v9 = v50;
  v10 = a6;
  v45 = 0LL;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 1648)
                  + 24
                  * ((unsigned int)(*(_DWORD *)(a1 + 1656) - 1) & ((101027
                                                                  * ((unsigned int)v50 ^ ((unsigned int)v50 >> 9))) ^ ((unsigned __int64)(101027 * ((unsigned int)v50 ^ ((unsigned int)v50 >> 9))) >> 9)))
                  + 16);
  if ( !v11 )
    goto LABEL_10;
  while ( 1 )
  {
    if ( *(_DWORD *)v11 != v9 )
      goto LABEL_4;
    v12 = v11 - 16;
    if ( *(_QWORD *)(v11 + 56) != a3 )
      goto LABEL_4;
    v13 = *(_QWORD *)(v12 + 80);
    v14 = *(_WORD *)(v13 + 24);
    if ( (*(_DWORD *)v13 & 1) == 0 )
      break;
    if ( !(unsigned int)CmpCompareCompressedName(v10, v13 + 26, *(unsigned __int16 *)(v13 + 24), 2LL) )
      goto LABEL_9;
LABEL_4:
    v11 = *(_QWORD *)(v11 + 8);
    if ( !v11 )
      goto LABEL_10;
  }
  *((_QWORD *)&v45 + 1) = v13 + 26;
  LOWORD(v45) = v14;
  WORD1(v45) = v14;
  if ( (unsigned int)CmpCompareUnicodeString((__int64)v10, (__int64)&v45, 2) )
    goto LABEL_4;
LABEL_9:
  if ( v11 == 16 )
  {
LABEL_10:
    if ( *v10 + 2 + (unsigned int)CmpKeyFullNameLength(a3) > 0xFFFF )
    {
      return 3221225485LL;
    }
    else
    {
      _InterlockedIncrement64(&CmPerfCounters);
      v15 = (char *)ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)&CmpKcbLookaside);
      v16 = v15;
      if ( v15 )
      {
        _InterlockedIncrement64(qword_140D55300);
        memset(v15, 0, 0x138uLL);
        *((_QWORD *)v16 + 16) = v16 + 120;
        *((_QWORD *)v16 + 15) = v16 + 120;
        *((_QWORD *)v16 + 17) = 0LL;
        *((_QWORD *)v16 + 18) = 0LL;
        *((_QWORD *)v16 + 19) = 0LL;
        *((_QWORD *)v16 + 20) = 0LL;
        *((_DWORD *)v16 + 10) = a2;
        v17 = v16 + 16;
        *((_DWORD *)v16 + 4) = v9;
        *(_QWORD *)v16 = 1LL;
        *((_QWORD *)v16 + 4) = a1;
        *((_QWORD *)v16 + 6) = 0LL;
        *((_QWORD *)v16 + 27) = v16 + 208;
        *((_QWORD *)v16 + 26) = v16 + 208;
        *((_QWORD *)v16 + 29) = v16 + 224;
        *((_QWORD *)v16 + 28) = v16 + 224;
        *((_QWORD *)v16 + 30) = 0LL;
        *((_DWORD *)v16 + 62) = 0;
        *((_QWORD *)v16 + 32) = 0LL;
        *((_DWORD *)v16 + 66) = 0;
        *((_QWORD *)v16 + 34) = 0LL;
        *((_DWORD *)v16 + 70) = 0;
        *((_DWORD *)v16 + 71) = -1;
        *((_QWORD *)v16 + 36) = 0LL;
        NameControlBlock = CmpGetNameControlBlock(v10, (__int64 *)va);
        *((_QWORD *)v16 + 10) = NameControlBlock;
        if ( !NameControlBlock )
        {
          LayerLink = -1073741670;
          v29 = (ULONG_PTR)v16;
          goto LABEL_63;
        }
        v19 = *((unsigned int *)v16 + 10);
        if ( (_DWORD)v19 == -1 )
        {
          if ( ((*(_BYTE *)(a3 + 65) - 1) & 0xFD) == 0 )
            v16[65] = 1;
          v29 = (ULONG_PTR)v16;
          if ( (a5 & 1) != 0 )
            *((_WORD *)v16 + 93) |= 4u;
          goto LABEL_27;
        }
        v20 = *((_QWORD *)v16 + 4);
        if ( (*(_BYTE *)(v20 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(v20, v19);
        else
          CellFlat = HvpGetCellPaged(v20);
        v22 = *((_QWORD *)v16 + 4);
        v23 = CellFlat;
        if ( (*(_DWORD *)(v22 + 160) & 0x8001) == 0
          && (*(_BYTE *)(CellFlat + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0 )
        {
          if ( (*(_BYTE *)(v22 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v22, v44);
          else
            HvpReleaseCellPaged(v22, v44);
          v36 = (signed __int64 *)(*((_QWORD *)v16 + 4) + 72LL);
          v37 = KeAbPreAcquire((__int64)v36, 0LL);
          if ( _InterlockedCompareExchange64(v36, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(v36, 0LL, v37, (__int64)v36);
          if ( v37 )
            *(_BYTE *)(v37 + 18) = 1;
          v38 = *((_QWORD *)v16 + 4);
          if ( (*(_BYTE *)(v38 + 140) & 1) != 0 )
            CellPaged = HvpGetCellFlat(v38, *((unsigned int *)v16 + 10));
          else
            CellPaged = HvpGetCellPaged(v38);
          v23 = CellPaged;
          CmpUpdateKeyNodeAccessBits(*((_QWORD *)v16 + 4), CellPaged, *((_DWORD *)v16 + 10));
          v40 = *((_QWORD *)v16 + 4);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v40 + 72), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v40 + 72));
          KeAbPostRelease(v40 + 72);
        }
        v16[65] = *(_BYTE *)(v23 + 13) & 3;
        v24 = *(_DWORD *)(v23 + 36);
        *((_DWORD *)v16 + 25) = *(_DWORD *)(v23 + 40);
        *((_DWORD *)v16 + 24) = v24;
        *((_WORD *)v16 + 93) = *(_WORD *)(v23 + 2);
        *((_DWORD *)v16 + 28) = *(_DWORD *)(v23 + 20) + *(_DWORD *)(v23 + 24);
        *((_QWORD *)v16 + 21) = *(_QWORD *)(v23 + 4);
        *((_WORD *)v16 + 88) = *(_WORD *)(v23 + 52);
        *((_WORD *)v16 + 89) = *(_WORD *)(v23 + 60);
        *((_DWORD *)v16 + 45) = *(_DWORD *)(v23 + 64);
        v25 = *((_DWORD *)v16 + 46) ^ (*((_DWORD *)v16 + 46) ^ *(unsigned __int16 *)(v23 + 54)) & 0xF;
        *((_DWORD *)v16 + 46) = v25;
        *((_DWORD *)v16 + 46) = v25 ^ ((unsigned __int8)v25 ^ (unsigned __int8)*(_WORD *)(v23 + 54)) & 0xF0;
        v16[185] = *(_BYTE *)(v23 + 55);
        v26 = KeAbPreAcquire((__int64)(v16 + 48), 0LL);
        if ( _interlockedbittestandset64((volatile signed __int32 *)v16 + 12, 0LL) )
        {
          if ( v26 )
            KeAbPostReleaseEx((ULONG_PTR)(v16 + 48), v26);
        }
        else
        {
          if ( v26 )
            *(_BYTE *)(v26 + 18) = 1;
          *((_QWORD *)v16 + 7) = KeGetCurrentThread();
        }
        v27 = *(_DWORD *)(v23 + 44);
        v46 = 0;
        if ( v27 == -1 )
        {
          *((_QWORD *)v16 + 11) = 0LL;
          goto LABEL_25;
        }
        v28 = *((_QWORD *)v16 + 4);
        CmLockHiveSecurityShared(v28);
        if ( !CmpFindSecurityCellCacheIndex(v28, v27, &v46) )
        {
          *((_QWORD *)v16 + 11) = 0LL;
          CmUnlockHiveSecurity(v28);
          CmpUnlockKcb(v16);
          LayerLink = -1073741670;
          if ( (*(_BYTE *)(a1 + 140) & 1) != 0 )
            HvpReleaseCellFlat(a1, v44);
          else
            HvpReleaseCellPaged(a1, v44);
          v29 = (ULONG_PTR)v16;
          goto LABEL_63;
        }
        *((_QWORD *)v16 + 11) = *(_QWORD *)(*(_QWORD *)(v28 + 1888) + 16LL * v46 + 8);
        CmUnlockHiveSecurity(v28);
LABEL_25:
        v29 = (ULONG_PTR)v16;
        CmpUnlockKcb(v16);
        v30 = *((_QWORD *)v16 + 4);
        if ( (*(_BYTE *)(v30 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v30, v44);
        else
          HvpReleaseCellPaged(v30, v44);
LABEL_27:
        if ( a3 )
        {
          CmpReferenceKeyControlBlockUnsafe(a3);
          v31 = (*((_DWORD *)v16 + 46) & 0x40000) == 0;
          *((_QWORD *)v16 + 9) = a3;
          if ( v31 )
            v32 = *((_DWORD *)v16 + 2) ^ (*((_DWORD *)v16 + 2) ^ (*(_DWORD *)(a3 + 8) + 0x200000)) & 0x7FE00000;
          else
            v32 = *((_DWORD *)v16 + 2) ^ (*(_DWORD *)(a3 + 8) ^ *((_DWORD *)v16 + 2)) & 0x7FE00000;
        }
        else
        {
          v32 = *((_DWORD *)v16 + 2) & 0x801FFFFF | 0x200000;
        }
        *((_DWORD *)v16 + 2) = v32;
        v33 = BugCheckParameter2;
        if ( BugCheckParameter2
          && (CmpLockKcbExclusive(BugCheckParameter2),
              CmpTryToLockKcbExclusive(v16),
              LayerLink = CmpCreateLayerLink(v33),
              CmpUnlockKcb(v16),
              CmpUnlockKcb(v33),
              LayerLink < 0) )
        {
LABEL_63:
          v42 = *(_QWORD *)(v29 + 80);
          if ( v42 )
            CmpDereferenceNameControlBlockWithLock(v42);
          if ( *(_QWORD *)(v29 + 72) )
            CmpDereferenceKeyControlBlockUnsafe(a3);
          v43 = *(void **)(v29 + 192);
          if ( v43 )
            ExFreePoolWithTag(v43, 0);
          *(_DWORD *)(v29 + 8) |= 0x80000u;
          CmpFreeKeyControlBlock(v29);
          return (unsigned int)LayerLink;
        }
        else
        {
          v34 = *(_QWORD *)(*((_QWORD *)v16 + 4) + 1648LL)
              + 24
              * ((unsigned int)(*(_DWORD *)(*((_QWORD *)v16 + 4) + 1656LL) - 1) & ((unsigned int)(101027
                                                                                                * (*v17 ^ (*v17 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*v17 ^ (*v17 >> 9))) >> 9)));
          *((_QWORD *)v16 + 3) = *(_QWORD *)(v34 + 16);
          *(_QWORD *)(v34 + 16) = v17;
          if ( *(_BYTE *)(a1 + 2944) == 1 )
            *((_WORD *)v16 + 4) |= 0x20u;
          if ( CmpTraceRoutine )
          {
            LOBYTE(v34) = 22;
            CmpEtwDumpKcb(v16, v34);
          }
          *v51 = v16;
          return 0LL;
        }
      }
      else
      {
        return 3221225626LL;
      }
    }
  }
  else
  {
    CmpReferenceKeyControlBlockLockNotHeld(v11 - 16);
    result = 0LL;
    *v51 = v12;
  }
  return result;
}
