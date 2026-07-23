/*
 * XREFs of MiReferenceIoPages @ 0x140336360
 * Callers:
 *     MiProbeLockFrame @ 0x1402364E0 (MiProbeLockFrame.c)
 *     MiFillSystemPtes @ 0x14027E7A0 (MiFillSystemPtes.c)
 *     MiMapContiguousMemoryLarge @ 0x14038C884 (MiMapContiguousMemoryLarge.c)
 *     MiMapMdlCommon @ 0x1403A6DE0 (MiMapMdlCommon.c)
 *     MiMapLockedPagesInUserSpace @ 0x140748A84 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x140A30D50 (MiMapViewOfPhysicalSection.c)
 *     MiRotateToFrameBuffer @ 0x140A31710 (MiRotateToFrameBuffer.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140A31A14 (MiRotateToFrameBufferNoCopy.c)
 *     MiAddLoaderHalIoPte @ 0x140B5E050 (MiAddLoaderHalIoPte.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x14026E9B0 (MiSearchNumaNodeTable.c)
 *     RtlAvlInsertNodeEx @ 0x140287FA0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7AE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAllocatePoolMm @ 0x1402E26E0 (ExAllocatePoolMm.c)
 *     KeShouldYieldProcessor @ 0x140333AD0 (KeShouldYieldProcessor.c)
 *     MiDereferenceIoPages @ 0x140335F54 (MiDereferenceIoPages.c)
 *     MiUnlockIoPfnTree @ 0x1403362B4 (MiUnlockIoPfnTree.c)
 *     MiIsPageInIoHugeRangeTransition @ 0x140336330 (MiIsPageInIoHugeRangeTransition.c)
 *     MiLockIoPfnTree @ 0x140336AB0 (MiLockIoPfnTree.c)
 *     MiIoSpaceGetBounds @ 0x140336B50 (MiIoSpaceGetBounds.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14036EF4C (MiFlushEntireTbDueToAttributeChange.c)
 *     MiConvertIoPfnTreeLockExclusiveToShared @ 0x14039FF48 (MiConvertIoPfnTreeLockExclusiveToShared.c)
 *     MiIoPfnTreeLockContended @ 0x1403C5450 (MiIoPfnTreeLockContended.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFlushCachedIoPfnRange @ 0x14062DFBC (MiFlushCachedIoPfnRange.c)
 *     MiFlushCacheMdl @ 0x140660F10 (MiFlushCacheMdl.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReferenceIoPages(int a1, __int64 a2, unsigned __int64 a3, int a4, _DWORD *a5, __int64 *a6)
{
  _DWORD *v6; // rbx
  unsigned __int64 v7; // rsi
  __int64 v9; // r12
  unsigned int v11; // r14d
  ULONG_PTR v12; // rdi
  unsigned __int8 CurrentIrql; // r10
  unsigned __int8 v14; // r10
  __int64 v15; // r11
  __int64 i; // rbx
  ULONG_PTR v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // r12
  __int64 v21; // rdx
  int v22; // r9d
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // esi
  int v27; // eax
  unsigned int v28; // eax
  __int64 v29; // r15
  _QWORD *v31; // r11
  _QWORD *v32; // rax
  _QWORD *PoolMm; // rax
  _DWORD *v34; // r11
  __int64 v35; // r9
  __int64 v36; // r10
  __int64 v37; // rdx
  unsigned int v38; // eax
  unsigned __int8 v39; // dl
  unsigned __int64 v40; // r12
  _BOOL8 v41; // r8
  unsigned __int64 *v42; // rcx
  _QWORD *v43; // rdx
  ULONG_PTR v44; // rax
  _QWORD *v45; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v47; // rdx
  LOGICAL ShouldYieldProcessor; // eax
  _DWORD *v49; // r10
  __int64 v50; // r8
  unsigned __int64 v51; // rax
  unsigned __int8 v52; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v54; // r8
  int v55; // eax
  bool v56; // zf
  unsigned __int8 v57; // cl
  struct _KPRCB *v58; // r10
  _DWORD *v59; // r9
  int v60; // eax
  __int64 v61; // rcx
  int v62; // esi
  _BYTE *v63; // rcx
  ULONG_PTR *v64; // rdx
  int v65; // eax
  unsigned __int8 v66; // r8
  _DWORD *v67; // r10
  __int64 v68; // rdx
  unsigned __int8 v69; // cl
  struct _KPRCB *v70; // r9
  _DWORD *v71; // r8
  int v72; // eax
  int v73; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v74; // [rsp+24h] [rbp-DCh]
  unsigned __int8 v76; // [rsp+30h] [rbp-D0h]
  int v77; // [rsp+38h] [rbp-C8h]
  _QWORD *P; // [rsp+40h] [rbp-C0h]
  _BYTE *v79; // [rsp+50h] [rbp-B0h]
  char *v80; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v81; // [rsp+60h] [rbp-A0h]
  __int128 v82; // [rsp+68h] [rbp-98h] BYREF
  __int64 v83; // [rsp+78h] [rbp-88h]
  int v84; // [rsp+80h] [rbp-80h]
  int v85; // [rsp+84h] [rbp-7Ch]
  ULONG_PTR v86; // [rsp+88h] [rbp-78h]
  _DWORD *v87; // [rsp+90h] [rbp-70h]
  __int64 v88; // [rsp+98h] [rbp-68h]
  unsigned __int64 v89; // [rsp+A0h] [rbp-60h]
  PEX_SPIN_LOCK SpinLock; // [rsp+A8h] [rbp-58h]
  __int64 *v91; // [rsp+B0h] [rbp-50h]
  _BYTE v92[176]; // [rsp+C0h] [rbp-40h] BYREF

  v6 = a5;
  v7 = a3;
  v9 = a1;
  v81 = a3;
  v87 = a5;
  v91 = a6;
  memset(v92, 0, sizeof(v92));
  v11 = 0;
  v83 = 0LL;
  v82 = 0LL;
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0LL;
  v74 = 0;
  v79 = 0LL;
  P = 0LL;
  v77 = 3;
  v12 = ((1LL << ((unsigned __int8)dword_140C65BE0 - 12)) - 1) & a2;
  v88 = -1LL;
  v80 = 0LL;
  v89 = 8 * v9;
  CurrentIrql = KeGetCurrentIrql();
  v76 = CurrentIrql;
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v47) = 4;
    else
      v47 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v47;
  }
  v86 = v12;
  MiIoSpaceGetBounds(&v82, v12);
  if ( HIDWORD(v83) != 3 && (_DWORD)v9 == 1 && v12 + v7 - 1 <= *((_QWORD *)&v82 + 1) )
  {
    if ( (_DWORD)KiIrqlFlags )
    {
      v52 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v52 <= 0xFu && v14 <= 0xFu && v52 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v54 = CurrentPrcb->SchedulerAssist;
        v55 = ~(unsigned __int16)(v15 << (v14 + 1));
        v56 = (v55 & v54[5]) == 0;
        v54[5] &= v55;
        if ( v56 )
        {
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          v14 = v76;
        }
      }
    }
    __writecr8(v14);
    if ( a5 )
      *a5 |= 1 << v83;
    return 0LL;
  }
  MiLockIoPfnTree(5LL);
  if ( !v7 )
  {
LABEL_43:
    v29 = v86;
    goto LABEL_44;
  }
  while ( 1 )
  {
LABEL_8:
    if ( v12 < (unsigned __int64)v82 || v12 > *((_QWORD *)&v82 + 1) )
      MiIoSpaceGetBounds(&v82, v12);
    if ( HIDWORD(v83) == 3 || (_DWORD)v9 != 1 )
      break;
    if ( v6 )
      *v6 |= 1 << v83;
    v51 = *((_QWORD *)&v82 + 1) - v12 + 1;
    if ( v51 > v7 )
      v51 = v7;
    v12 += v51;
    v7 -= v51;
    v81 = v7;
    if ( !v7 )
      goto LABEL_43;
  }
  v73 = 0;
  for ( i = MiState[v89 / 8 + 2080]; i; i = *(_QWORD *)(i + 8) )
  {
    while ( 1 )
    {
      v17 = *(_QWORD *)(i + 24);
      if ( v12 >= v17 )
        break;
      i = *(_QWORD *)i;
      if ( !i )
        goto LABEL_53;
    }
    if ( v12 < v17 + 512 )
      goto LABEL_14;
  }
LABEL_53:
  MiUnlockIoPfnTree(v76, 5);
  v31 = P;
  if ( !P )
  {
    if ( (_DWORD)KiIrqlFlags )
    {
      v57 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v57 <= 0xFu && v76 <= 0xFu && v57 >= 2u )
      {
        v58 = KeGetCurrentPrcb();
        v59 = v58->SchedulerAssist;
        v60 = ~(unsigned __int16)(-1LL << (v76 + 1));
        v56 = (v60 & v59[5]) == 0;
        v59[5] &= v60;
        if ( v56 )
          KiRemoveSystemWorkPriorityKick(v58);
      }
    }
    __writecr8(v76);
    v32 = MiSearchNumaNodeTable(v12);
    PoolMm = ExAllocatePoolMm(64, 0x4B0uLL, 0x6F49694Du, *((_DWORD *)v32 + 2) | 0x80000000);
    P = PoolMm;
    v34 = PoolMm;
    if ( !PoolMm )
    {
      MiDereferenceIoPages(v9, v86, v12 - v86);
      return 3221225626LL;
    }
    v35 = PoolMm[3];
    v36 = 512LL;
    *((_DWORD *)PoolMm + 8) = 1;
    do
    {
      v37 = v35++ & ((1LL << ((unsigned __int8)dword_140C65BE0 - 12)) - 1);
      v38 = 2 * (v37 - v34[6]);
      v34[(v38 >> 5) + 11] = (3 << (v38 & 0x1F)) | v34[(v38 >> 5) + 11] & ~(3 << (v38 & 0x1F));
      --v36;
    }
    while ( v36 );
    v39 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v39 <= 0xFu )
    {
      v49 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v39 == 2 )
        LODWORD(v50) = 4;
      else
        v50 = (-1LL << (v39 + 1)) & 4;
      v49[5] |= v50;
    }
    v76 = v39;
    MiIoSpaceGetBounds(&v82, v12);
  }
  v31[3] = v12 & 0xFFFFFFFFFFFFFE00uLL;
  MiLockIoPfnTree(6LL);
  v40 = v89;
  LOBYTE(v41) = 0;
  v42 = (unsigned __int64 *)&MiState[v89 / 8 + 2080];
  v43 = (_QWORD *)*v42;
  if ( !*v42 )
    goto LABEL_86;
  while ( 1 )
  {
    v44 = v43[3];
    i = (__int64)v43;
    if ( v12 >= v44 )
      break;
    v45 = (_QWORD *)*v43;
    if ( !*v43 )
      goto LABEL_86;
LABEL_64:
    v43 = v45;
  }
  if ( v12 < v44 + 512 )
    goto LABEL_87;
  v45 = (_QWORD *)v43[1];
  if ( v45 )
    goto LABEL_64;
  LOBYTE(v41) = 1;
LABEL_86:
  i = (__int64)P;
  RtlAvlInsertNodeEx(v42, (unsigned __int64)v43, v41, (unsigned __int64)P);
  _InterlockedIncrement64((__int64 *)((char *)&MiState[2089] + v40));
  P = 0LL;
  v73 = 1;
LABEL_87:
  MiConvertIoPfnTreeLockExclusiveToShared(v42, v43, v41);
LABEL_14:
  v18 = *(_QWORD *)(i + 24);
  v19 = v12 - v18;
  if ( v18 == -512 || v7 + v12 <= v18 + 512 )
    v20 = v7 + v19;
  else
    v20 = 512LL;
  v84 = 0;
  v85 = 0;
  SpinLock = (PEX_SPIN_LOCK)(i + 172);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(i + 172));
  v22 = v73;
  if ( v73 )
    --*(_DWORD *)(i + 32);
  if ( v19 >= v20 )
  {
LABEL_38:
    if ( v79 )
      MiFlushCachedIoPfnRange(v79, (v80 - v79 - 48) >> 3);
    if ( v74 )
    {
      _InterlockedDecrement64(&MiState[v89 / 8 + 2082]);
      if ( (unsigned int)MiIsPageInIoHugeRangeTransition(*(_QWORD *)(i + 24), v21) )
        _InterlockedDecrement64(&qword_140C696A0);
      v74 = 0;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(i + 172));
    if ( v7 )
    {
      if ( (unsigned int)MiIoPfnTreeLockContended(0LL)
        || (ShouldYieldProcessor = KeShouldYieldProcessor(), v6 = v87, v11 = 0, LODWORD(v9) = a1, ShouldYieldProcessor) )
      {
        MiUnlockIoPfnTree(v76, 1);
        v66 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v66 <= 0xFu )
        {
          v67 = KeGetCurrentPrcb()->SchedulerAssist;
          if ( v66 == 2 )
            LODWORD(v68) = 4;
          else
            v68 = (-1LL << (v66 + 1)) & 4;
          v67[5] |= v68;
        }
        v76 = v66;
        MiIoSpaceGetBounds(&v82, v12);
        MiLockIoPfnTree(5LL);
        v6 = v87;
        v11 = 0;
        LODWORD(v9) = a1;
      }
      goto LABEL_8;
    }
    LODWORD(v9) = a1;
    v11 = 0;
    goto LABEL_43;
  }
  while ( 2 )
  {
    if ( v12 < (unsigned __int64)v82 || v12 > *((_QWORD *)&v82 + 1) )
    {
      MiIoSpaceGetBounds(&v82, v12);
      v22 = v73;
    }
    if ( HIDWORD(v83) != 3 && a1 == 1 )
    {
      v21 = (__int64)v87;
      if ( v87 )
        *v87 |= 1 << v83;
      v61 = v20 - v19;
      if ( *((_QWORD *)&v82 + 1) - v12 + 1 <= v20 - v19 )
        v61 = *((_QWORD *)&v82 + 1) - v12 + 1;
      v12 += v61;
      v19 += v61;
      v7 -= v61;
      goto LABEL_37;
    }
    v23 = *(unsigned __int16 *)(i + 2 * v19 + 176);
    v24 = (v12 & ((1LL << ((unsigned __int8)dword_140C65BE0 - 12)) - 1)) - *(_QWORD *)(i + 24);
    v25 = (2 * (_DWORD)v24) & 0x1F;
    v26 = (*(_DWORD *)(i + 4LL * ((unsigned int)(2 * v24) >> 5) + 44) >> ((2 * v24) & 0x1F)) & 3;
    if ( (_WORD)v23 != 0xFFFF )
    {
      if ( !(_WORD)v23 )
      {
        v27 = *(_DWORD *)(i + 32);
        if ( !v27 )
        {
          v25 = v74;
          if ( !v22 )
            v25 = 1LL;
          v74 = v25;
        }
        *(_DWORD *)(i + 32) = v27 + 1;
        if ( v26 != a4 )
        {
          if ( a4 == 1 )
            *(_BYTE *)(i + 40) = 1;
          if ( v26 != 3 )
          {
            if ( !v84 )
            {
              MiFlushEntireTbDueToAttributeChange(v25, v24, v23);
              v22 = v73;
              v84 = 1;
            }
            if ( v26 == 1 )
            {
              v62 = v85;
              if ( !v85 )
              {
                ++dword_140C6971C;
                v63 = v79;
                if ( !v79 )
                  goto LABEL_134;
                v64 = (ULONG_PTR *)v80;
                if ( v77 != a4 )
                {
                  MiFlushCachedIoPfnRange(v79, (v80 - v79 - 48) >> 3);
                  v22 = v73;
LABEL_134:
                  v63 = v92;
                  v79 = v92;
                  v64 = (ULONG_PTR *)&v92[48];
                }
                *v64 = v12;
                v77 = a4;
                v80 = (char *)(v64 + 1);
                if ( v64 + 1 == (ULONG_PTR *)(v63 + 176) )
                {
                  ++dword_140C69718;
                  *(_QWORD *)v63 = 0LL;
                  *((_QWORD *)v63 + 4) = 0LL;
                  *((_DWORD *)v63 + 2) = 131248;
                  *((_QWORD *)v63 + 5) = 0x10000LL;
                  v65 = MiFlushCacheMdl();
                  v22 = v73;
                  v79 = 0LL;
                  if ( v65 )
                    v62 = 1;
                  v85 = v62;
                }
              }
            }
          }
          LOBYTE(v26) = a4;
          v28 = 2 * ((v12 & ((1 << (dword_140C65BE0 - 12)) - 1)) - *(_DWORD *)(i + 24));
          *(_DWORD *)(i + 4LL * (v28 >> 5) + 44) = (a4 << (v28 & 0x1F)) | *(_DWORD *)(i + 4LL * (v28 >> 5) + 44) & ~(3 << (v28 & 0x1F));
        }
      }
      v21 = (__int64)v87;
      if ( v87 )
        *v87 |= 1 << v26;
      ++*(_WORD *)(i + 2 * v19 + 176);
      if ( v91 && !*v91 )
        *v91 = i;
      ++v19;
      ++v12;
      v7 = v81 - 1;
LABEL_37:
      v81 = v7;
      if ( v19 >= v20 )
        goto LABEL_38;
      continue;
    }
    break;
  }
  if ( v79 )
    MiFlushCachedIoPfnRange(v79, (v80 - v79 - 48) >> 3);
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  v29 = v86;
  v11 = 0;
  v7 = v81;
  LODWORD(v9) = a1;
  if ( v12 == v86 )
LABEL_44:
    v12 = v88;
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(*((_QWORD *)KeGetCurrentPrcb()->MmInternal + 1577) + 384LL));
  if ( (_DWORD)KiIrqlFlags )
  {
    v69 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v69 <= 0xFu && v76 <= 0xFu && v69 >= 2u )
    {
      v70 = KeGetCurrentPrcb();
      v71 = v70->SchedulerAssist;
      v72 = ~(unsigned __int16)(-1LL << (v76 + 1));
      v56 = (v72 & v71[5]) == 0;
      v71[5] &= v72;
      if ( v56 )
        KiRemoveSystemWorkPriorityKick(v70);
    }
  }
  __writecr8(v76);
  if ( v7 )
  {
    v11 = -1073741670;
    if ( v12 != -1LL )
      MiDereferenceIoPages(v9, v29, v12 - v29);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v11;
}
