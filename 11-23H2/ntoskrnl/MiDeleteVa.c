/*
 * XREFs of MiDeleteVa @ 0x14027A850
 * Callers:
 *     MiDeletePagablePteRange @ 0x14027A3F0 (MiDeletePagablePteRange.c)
 * Callees:
 *     MiWriteTopLevelPxe @ 0x140201D04 (MiWriteTopLevelPxe.c)
 *     MiFlushTbListEarly @ 0x140216C24 (MiFlushTbListEarly.c)
 *     MiGetWsleContents @ 0x140216FB0 (MiGetWsleContents.c)
 *     MiReleasePageFileSpace @ 0x14021941C (MiReleasePageFileSpace.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiTerminateWsleCluster @ 0x140279430 (MiTerminateWsleCluster.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiRemoveWsle @ 0x14027B6E0 (MiRemoveWsle.c)
 *     MiLogPageAccess @ 0x14027CE40 (MiLogPageAccess.c)
 *     MiIsPrototypePteVadLookup @ 0x14027D190 (MiIsPrototypePteVadLookup.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MiLocateCloneAddress @ 0x140294828 (MiLocateCloneAddress.c)
 *     MiCreateDecayPfn @ 0x1402964E0 (MiCreateDecayPfn.c)
 *     MiUnlockWsle @ 0x1402A2990 (MiUnlockWsle.c)
 *     MiGetPfnPriority @ 0x1402DF4E8 (MiGetPfnPriority.c)
 *     MiEvictPageTableLock @ 0x1402E54C0 (MiEvictPageTableLock.c)
 *     MiIsPageTableDeletable @ 0x1402E5B14 (MiIsPageTableDeletable.c)
 *     MiDecrementCombinedPteEx @ 0x1402F3DA8 (MiDecrementCombinedPteEx.c)
 *     MiCountWslesInPageTable @ 0x140317F90 (MiCountWslesInPageTable.c)
 *     MiCompressTbFlushList @ 0x14033E668 (MiCompressTbFlushList.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14033ED54 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     MiLockSetPfnPriority @ 0x14036503C (MiLockSetPfnPriority.c)
 *     MiDeletePhysmemPte @ 0x140368954 (MiDeletePhysmemPte.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     qsort @ 0x1403DA610 (qsort.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     MiRotatedToFrameBuffer @ 0x1406333A4 (MiRotatedToFrameBuffer.c)
 *     MiUnmapFrameBuffer @ 0x140633F50 (MiUnmapFrameBuffer.c)
 *     MiDeleteVadAwePtes @ 0x140649EB8 (MiDeleteVadAwePtes.c)
 *     MiDeleteLargeUserPde @ 0x1406508B4 (MiDeleteLargeUserPde.c)
 *     MiDecrementCloneBlockReference @ 0x14066429C (MiDecrementCloneBlockReference.c)
 */

__int64 __fastcall MiDeleteVa(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v6; // rdi
  __int64 v7; // r13
  __int64 v8; // r10
  __int64 v9; // r15
  int v10; // ebp
  unsigned __int64 v11; // r12
  bool v12; // zf
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r8
  __int64 v15; // rcx
  __int64 *v16; // rdi
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rcx
  char v19; // bl
  __int64 v20; // rcx
  __int64 v21; // rbp
  __int64 v22; // rax
  BOOL v23; // ebp
  __int64 v24; // rcx
  __int64 v25; // rbp
  int v26; // edx
  unsigned __int64 v27; // rdx
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // rsi
  int i; // r13d
  unsigned __int64 v32; // r8
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // r13
  BOOL v36; // r14d
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // r8
  volatile unsigned __int64 v39; // rax
  int v40; // edx
  unsigned __int8 WsleContents; // bp
  volatile unsigned __int64 v42; // rbx
  _KPROCESS *Process; // rcx
  unsigned __int64 v44; // r8
  unsigned __int64 v45; // rbx
  volatile unsigned __int64 v46; // rdx
  unsigned int v47; // ecx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  int v51; // edi
  int v52; // r9d
  unsigned __int64 v53; // r8
  __int64 v54; // rax
  unsigned __int64 *v55; // rbx
  unsigned int v56; // r9d
  char v57; // al
  __int64 v58; // r10
  __int64 v59; // rax
  unsigned __int64 v60; // r8
  __int64 v61; // rax
  __int64 v62; // r8
  __int64 v63; // rdx
  unsigned __int64 v64; // rax
  int v65; // r8d
  __int64 v66; // rdx
  __int64 v67; // r9
  __int64 v68; // r10
  _KPROCESS *v69; // r8
  __int64 v70; // rbx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  unsigned __int64 v74; // r8
  __int64 v75; // rax
  ULONG_PTR v76; // rbx
  __int64 v77; // rcx
  unsigned int v78; // eax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  char v82; // al
  int v83; // edx
  __int64 v84; // rcx
  __int64 v85; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v87; // rax
  __int64 v88; // rdx
  struct _LIST_ENTRY *v89; // r8
  __int64 v90; // rax
  __int64 v91; // r8
  __int64 v92; // rax
  struct _LIST_ENTRY *v93; // rax
  __int64 v94; // rax
  char v95; // r8^7
  struct _LIST_ENTRY *v96; // rax
  __int64 v97; // rax
  char v98; // r8^7
  struct _LIST_ENTRY *v99; // rax
  __int64 v100; // rax
  __int64 v101; // r8
  struct _LIST_ENTRY *v102; // r8
  __int64 v103; // rax
  __int64 v104; // r8
  struct _LIST_ENTRY *v105; // r9
  __int64 v106; // rcx
  struct _LIST_ENTRY *v107; // r8
  __int64 v108; // rax
  struct _LIST_ENTRY *v110; // rcx
  __int64 v111; // rcx
  char v112; // cl
  unsigned __int64 v113; // rcx
  struct _LIST_ENTRY *v114; // rdx
  __int64 v115; // rax
  unsigned __int64 v116; // rdi
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  int v120; // eax
  __int64 v121; // r8
  __int64 v122; // r9
  ULONG_PTR CloneAddress; // rax
  ULONG_PTR v124; // rdx
  struct _LIST_ENTRY *v126; // rcx
  __int64 v127; // rcx
  int v128; // [rsp+30h] [rbp-B8h] BYREF
  int v129; // [rsp+34h] [rbp-B4h]
  __int64 v130; // [rsp+38h] [rbp-B0h]
  __int64 v131; // [rsp+40h] [rbp-A8h]
  __int64 v132; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v133; // [rsp+50h] [rbp-98h]
  int v134; // [rsp+58h] [rbp-90h]
  __int64 v135; // [rsp+60h] [rbp-88h]
  __int64 v136; // [rsp+68h] [rbp-80h] BYREF
  __int64 v137; // [rsp+70h] [rbp-78h] BYREF
  __int64 v138; // [rsp+78h] [rbp-70h] BYREF
  _DWORD v139[8]; // [rsp+80h] [rbp-68h] BYREF

  v3 = *(_QWORD *)a2;
  v128 = a3;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v87 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
      v88 = v3 | 0x20;
      if ( (v87 & 0x20) == 0 )
        v88 = v3;
      v3 = v88;
      if ( (v87 & 0x42) != 0 )
        v3 = v88 | 0x42;
    }
  }
  v6 = v3;
  v132 = v3;
  if ( v3 )
  {
    v7 = *(_QWORD *)(a1 + 168);
    v8 = *(_QWORD *)(a1 + 24);
    v9 = *(_QWORD *)(a1 + 16);
    v130 = v7;
    v10 = *(_DWORD *)(v7 + 120);
    v131 = v8;
    v11 = (__int64)(a2 << 25) >> 16;
    if ( (v3 & 1) != 0 )
    {
      if ( (int)a3 < 1 )
        goto LABEL_5;
      if ( (v3 & 0x80u) == 0LL )
      {
        if ( !(unsigned int)MiIsPageTableDeletable(a1, a2) )
          return 0LL;
        LODWORD(a3) = v128;
        v8 = v131;
LABEL_5:
        v12 = (*(_BYTE *)(v8 + 184) & 7) == 0;
        v133 = 0LL;
        if ( !v12 )
        {
          MiInsertTbFlushEntry(v9, (__int64)(a2 << 25) >> 16, 1LL, 0LL);
          if ( (v10 & 0x100) == 0 )
          {
            v34 = v128;
            if ( v128 >= 1 )
            {
              if ( !(unsigned int)MiEvictPageTableLock(v131, a2, v3 & 0xFFFFFFFFFFFFFBFEuLL | 0x400, v128 > 1) )
                return 0LL;
              goto LABEL_32;
            }
            goto LABEL_202;
          }
LABEL_201:
          v34 = v128;
LABEL_202:
          v25 = v131;
          goto LABEL_56;
        }
        if ( (_DWORD)a3 )
        {
LABEL_17:
          if ( (v10 & 0x100) == 0 )
          {
            if ( (_DWORD)a3 )
              goto LABEL_59;
            v14 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v15 = *(_QWORD *)v14;
            if ( v14 >= 0xFFFFF6FB7DBED000uLL
              && v14 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0x600000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v15 & 1) != 0
              && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
            {
              v96 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v96 )
              {
                v97 = *((_QWORD *)&v96->Flink + ((v14 >> 3) & 0x1FF));
                v98 = HIBYTE(*(_QWORD *)v14);
                if ( (v97 & 0x20) == 0 )
                  v98 = HIBYTE(v15);
                HIBYTE(v15) = v98;
                if ( (v97 & 0x42) != 0 )
                  HIBYTE(v15) = v98;
              }
            }
            if ( (HIBYTE(v15) & 0xF) == 8 )
              goto LABEL_59;
            v16 = (__int64 *)(v7 + 136);
            v17 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v18 = *(_QWORD *)v17;
            if ( v17 >= 0xFFFFF6FB7DBED000uLL
              && v17 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0x600000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v18 & 1) != 0
              && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
            {
              v99 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v99 )
              {
                v100 = *((_QWORD *)&v99->Flink + ((v17 >> 3) & 0x1FF));
                v101 = v18 | 0x20;
                if ( (v100 & 0x20) == 0 )
                  v101 = v18;
                v18 = v101;
                if ( (v100 & 0x42) != 0 )
                  v18 = v101 | 0x42;
              }
            }
            v19 = HIBYTE(v18) & 0xF | (16 * ((v18 >> 60) & 7));
            v20 = *(_QWORD *)a2;
            if ( a2 >= 0xFFFFF6FB7DBED000uLL
              && a2 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0x600000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v20 & 1) != 0
              && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
            {
              v102 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v102 )
              {
                v103 = *((_QWORD *)&v102->Flink + ((a2 >> 3) & 0x1FF));
                v104 = v20 | 0x20;
                if ( (v103 & 0x20) == 0 )
                  v104 = *(_QWORD *)a2;
                v20 = v104;
                if ( (v103 & 0x42) != 0 )
                  v20 = v104 | 0x42;
              }
            }
            v136 = v20;
            v21 = *(_QWORD *)(48
                            * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v136) >> 12) & 0xFFFFFFFFFFLL)
                            - 0x21FFFFFFFFD8LL);
            v22 = *(_QWORD *)(v7 + 144);
            v23 = v21 >= 0;
            if ( v22 )
            {
              v24 = *(_QWORD *)(v7 + 152);
              if ( a2 == v22 + 8 * v24 && v19 == *(_BYTE *)(v7 + 164) && v23 == (*(_DWORD *)(v7 + 160) & 1) )
              {
                *(_QWORD *)(v7 + 152) = v24 + 1;
LABEL_28:
                v25 = v131;
                v26 = 1;
                v133 = 1LL;
                goto LABEL_29;
              }
              if ( (*(_DWORD *)(v7 + 160) & 2) != 0 )
              {
LABEL_59:
                v35 = 1LL;
                v134 = 0;
                v36 = 1;
                v37 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                v38 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v37) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
                if ( v11 < 0xFFFFF68000000000uLL || v11 > 0xFFFFF6FFFFFFFFFFuLL )
                {
                  v39 = *(_QWORD *)v37;
                  v40 = 1;
                  v129 = 1;
                  if ( v37 >= 0xFFFFF6FB7DBED000uLL && v37 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x600000) != 0 )
                  {
                    if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                      && (v39 & 1) != 0
                      && ((v39 & 0x20) == 0 || (v39 & 0x42) == 0) )
                    {
                      v105 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                      if ( v105 )
                      {
                        v106 = *((_QWORD *)&v105->Flink + ((v37 >> 3) & 0x1FF));
                        if ( (v106 & 0x20) != 0 )
                          v39 |= 0x20uLL;
                        if ( (v106 & 0x42) != 0 )
                          v39 |= 0x42uLL;
                      }
                    }
                    v40 = 1;
                  }
                  WsleContents = HIBYTE(v39) & 0xF | (16 * ((v39 >> 60) & 7));
                  v36 = *(_QWORD *)(v38 + 40) >= 0LL;
                  if ( (HIBYTE(v39) & 0xF) == 8 )
                  {
                    MiUnlockWsle(v131, (__int64)(a2 << 25) >> 16);
                    WsleContents = MiGetWsleContents(v84, (__int64)(a2 << 25) >> 16);
                    v40 = 1;
                  }
                }
                else
                {
                  v40 = 0;
                  WsleContents = (*(_BYTE *)v38 >> 1) & 7;
                  v129 = 0;
                }
                v42 = *(_QWORD *)v37;
                Process = (_KPROCESS *)0xFFFFF6FB7DBED000LL;
                if ( v37 >= 0xFFFFF6FB7DBED000uLL )
                {
                  Process = (_KPROCESS *)0xFFFFF6FB7DBED7F8LL;
                  if ( v37 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x600000) != 0 )
                  {
                    Process = KeGetCurrentThread()->ApcState.Process;
                    if ( Process->AddressPolicy != 1 && (v42 & 1) != 0 && ((v42 & 0x20) == 0 || (v42 & 0x42) == 0) )
                    {
                      Process = KeGetCurrentThread()->ApcState.Process;
                      v107 = Process[1].ProcessListEntry.Flink;
                      if ( v107 )
                      {
                        v108 = *((_QWORD *)&v107->Flink + ((v37 >> 3) & 0x1FF));
                        if ( (v108 & 0x20) != 0 )
                          v42 |= 0x20uLL;
                        if ( (v108 & 0x42) != 0 )
                          v42 |= 0x42uLL;
                      }
                    }
                  }
                }
                v44 = 0xFFFFF6FB40000000uLL;
                v45 = v42 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
                if ( !v40 )
                {
                  if ( !(unsigned int)MiEvictPageTableLock(v131, v37, v45, 0LL) )
                    return 0LL;
                  goto LABEL_72;
                }
                v46 = *(_QWORD *)v37;
                if ( v37 >= 0xFFFFF6FB7DBED000uLL && v37 <= 0xFFFFF6FB7DBED7F8uLL )
                {
                  if ( (unsigned int)MiPteHasShadow(Process, v46, 0xFFFFF6FB40000000uLL) )
                    goto LABEL_70;
                }
                v47 = ((unsigned int)MiFlags >> 26) & 3;
                if ( v47 <= 1 )
                {
                  if ( !v47 )
                    goto LABEL_70;
                  if ( v37 >= v44 && v37 <= 0xFFFFF6FB7FFFFFFFuLL && (v46 & 0x80u) == 0LL )
                    LOBYTE(v46) = 32;
                }
                else if ( (MiFlags & 0x2000000) != 0 )
                {
                  _mm_lfence();
                }
                if ( (v46 & 0x20) == 0 )
                {
                  if ( (MiFlags & 0x2000000) != 0 )
                    _mm_lfence();
                  v132 = _InterlockedExchange64((volatile __int64 *)v37, v45);
                  if ( MiPteInShadowRange(v37) )
                    MiWritePteShadow(v37, v45);
                  if ( (v132 & 0x20) == 0 )
                  {
                    v51 = v134;
                    goto LABEL_73;
                  }
LABEL_72:
                  v51 = 1;
LABEL_73:
                  v52 = WsleContents;
                  v25 = v131;
                  MiRemoveWsle(v131, (__int64)(a2 << 25) >> 16, 1, v52, 10, v36);
                  if ( v129 )
                  {
                    v53 = ((v11 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
                    v54 = *(_QWORD *)v53;
                    if ( v53 >= 0xFFFFF6FB7DBED000uLL
                      && v53 <= 0xFFFFF6FB7DBED7F8uLL
                      && (MiFlags & 0x600000) != 0
                      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                      && (v54 & 1) != 0
                      && ((v54 & 0x20) == 0 || (v54 & 0x42) == 0) )
                    {
                      v110 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                      if ( v110 )
                      {
                        v111 = *((_QWORD *)&v110->Flink + ((v53 >> 3) & 0x1FF));
                        if ( (v111 & 0x20) != 0 )
                          v54 |= 0x20uLL;
                        if ( (v111 & 0x42) != 0 )
                          v54 |= 0x42uLL;
                      }
                    }
                    v137 = v54;
                    v55 = (unsigned __int64 *)(48
                                             * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v137) >> 12) & 0xFFFFFFFFFFLL)
                                             - 0x220000000000LL);
                    if ( ((*(_DWORD *)v55 >> 4) & 0x3FF) == 0 )
                    {
                      MiCountWslesInPageTable(0xFFFFFFFFFFLL, (__int64)(a2 << 25) >> 16, v139);
                      v82 = 8;
                      while ( 1 )
                      {
                        v83 = v139[(unsigned __int8)--v82];
                        if ( v83 )
                          break;
                        if ( !v82 )
                          goto LABEL_76;
                      }
                      *v55 = *v55 & 0xFFFFFFFFFFFE000FuLL | (16 * (v83 & 0x3FF | ((unsigned __int64)(v82 & 7) << 10)));
                    }
                  }
LABEL_76:
                  if ( !v51 )
                    goto LABEL_85;
                  if ( *(_DWORD *)v9 != 1 )
                  {
                    v112 = *(_BYTE *)(v9 + 4);
                    if ( (v112 & 8) == 0 && v11 >= 0xFFFFF68000000000uLL && v11 <= 0xFFFFF6FFFFFFFFFFuLL )
                      *(_BYTE *)(v9 + 4) = v112 | 8;
                  }
                  v56 = *(_DWORD *)(v9 + 12);
                  v57 = *(_BYTE *)(v9 + 4);
                  if ( !v56 || (v57 & 4) != 0 )
                  {
                    v58 = v56 - 1;
                    if ( !v56 || (v57 & 4) != 0 )
                      goto LABEL_92;
                  }
                  else
                  {
                    v58 = v56 - 1;
                    v59 = *(_QWORD *)(v9 + 8 * v58 + 24);
                    if ( (v59 & 0xC00) == 0 )
                    {
                      v60 = *(_QWORD *)(v9 + 8 * v58 + 24) & 0x3FFLL;
                      if ( (v59 & 0xFFFFFFFFFFFFF000uLL) + ((v60 + 1) << 12) == v11
                        && v60 + 1 >= v60
                        && v60 + 1 <= 0x3FF )
                      {
                        ++*(_QWORD *)(v9 + 16);
                        *(_QWORD *)(v9 + 8 * v58 + 24) = v59 ^ ((unsigned __int16)v59 ^ (unsigned __int16)(v59 + 1)) & 0x3FF;
LABEL_85:
                        v26 = 0;
LABEL_29:
                        v6 = *(_QWORD *)a2;
                        if ( a2 >= 0xFFFFF6FB7DBED000uLL
                          && a2 <= 0xFFFFF6FB7DBED7F8uLL
                          && (MiFlags & 0x600000) != 0
                          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                          && (v6 & 1) != 0
                          && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
                        {
                          v114 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                          if ( v114 )
                          {
                            v115 = *((_QWORD *)&v114->Flink + ((a2 >> 3) & 0x1FF));
                            if ( (v115 & 0x20) != 0 )
                              v6 |= 0x20uLL;
                            if ( (v115 & 0x42) != 0 )
                              v6 |= 0x42uLL;
                          }
                          v26 = v133;
                        }
                        if ( v26 )
                          goto LABEL_31;
                        v34 = v128;
LABEL_56:
                        if ( (v6 & 1) != 0 )
                        {
                          v116 = v6 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
                          v132 = v116;
                          if ( v34 == 3 && (*(_BYTE *)(v25 + 184) & 7) != 0 )
                          {
                            MiWriteTopLevelPxe((_QWORD *)a2, v116);
                          }
                          else if ( MiPteInShadowRange(a2) && (unsigned int)MiPteHasShadow(v118, v117, v119) )
                          {
                            *(_QWORD *)a2 = v116;
                            MiWritePteShadow(a2, v116);
                          }
                          else
                          {
                            *(_QWORD *)a2 = v116;
                          }
                        }
LABEL_31:
                        v7 = v130;
                        goto LABEL_32;
                      }
                    }
                  }
                  v61 = *(_QWORD *)(v9 + 8 * v58 + 24);
                  if ( (v61 & 0xC00) == 0 && (v61 & 0xFFFFFFFFFFFFF000uLL) == v11 + 4096 )
                  {
                    v113 = *(_QWORD *)(v9 + 8 * v58 + 24) & 0x3FFLL;
                    if ( v113 + 1 >= v113 && v113 + 1 <= 0x3FF )
                    {
                      ++*(_QWORD *)(v9 + 16);
                      *(_QWORD *)(v9 + 8 * v58 + 24) = (v61 - 4096) ^ ((unsigned __int16)(v61 - 4096) ^ (unsigned __int16)(v61 - 4096 + 1)) & 0x3FF;
                      goto LABEL_85;
                    }
                  }
LABEL_92:
                  if ( v56 < *(_DWORD *)(v9 + 8) )
                  {
                    LODWORD(v62) = *(_DWORD *)(v9 + 12);
                    while ( 1 )
                    {
                      v63 = (unsigned __int64)(v35 - 1) > 0x3FF ? 1024LL : v35;
                      v64 = v11 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v63 - 1) & 0x3FF;
                      v35 -= v63;
                      v11 += v63 << 12;
                      *(_QWORD *)(v9 + 8LL * (unsigned int)v62 + 24) = v64;
                      v65 = *(_DWORD *)(v9 + 12);
                      *(_QWORD *)(v9 + 16) += v63;
                      LODWORD(v62) = v65 + 1;
                      *(_DWORD *)(v9 + 12) = v62;
                      if ( (_DWORD)v62 == *(_DWORD *)(v9 + 8) && (*(_BYTE *)(v9 + 4) & 4) == 0 )
                      {
                        qsort((void *)(v9 + 24), (unsigned int)v62, 8uLL, MiTbFlushSort);
                        MiCompressTbFlushList(v9);
                        v62 = *(unsigned int *)(v9 + 12);
                        if ( (_DWORD)v62 == *(_DWORD *)(v9 + 8) )
                          break;
                      }
                      if ( !v35 )
                        goto LABEL_85;
                    }
                    v26 = 0;
                    if ( v35 )
                    {
                      *(_BYTE *)(v9 + 5) = 1;
                      *(_QWORD *)(v9 + 16) = v62;
                    }
                    goto LABEL_29;
                  }
                  *(_BYTE *)(v9 + 5) = 1;
                  goto LABEL_85;
                }
LABEL_70:
                if ( MiPteInShadowRange(v37) && (unsigned int)MiPteHasShadow(v49, v48, v50) )
                {
                  *(_QWORD *)v37 = v45;
                  MiWritePteShadow(v37, v45);
                }
                else
                {
                  *(_QWORD *)v37 = v45;
                }
                goto LABEL_72;
              }
              MiTerminateWsleCluster(v16);
            }
            v78 = v23 | *(_DWORD *)(v7 + 160) & 0xFFFFFFFE;
            *v16 = v131;
            *(_DWORD *)(v7 + 160) = v78;
            *(_QWORD *)(v7 + 144) = a2;
            *(_QWORD *)(v7 + 152) = 1LL;
            *(_BYTE *)(v7 + 164) = v19;
            goto LABEL_28;
          }
          MiInsertTbFlushEntry(v9, (__int64)(a2 << 25) >> 16, 1LL, 0LL);
          goto LABEL_201;
        }
        if ( (v10 & 0x800) != 0 )
        {
          MiDeleteLargeUserPde(a1, a2);
          MiFlushTbListEarly(v9, 0);
          return 0LL;
        }
        if ( (v10 & 0x10) != 0 )
        {
          v92 = MiDeleteVadAwePtes(*(_QWORD *)(*(_QWORD *)(v7 + 32) + 40LL), a2, v7 + 128);
          MiInsertTbFlushEntry(v9, (__int64)(a2 << 25) >> 16, v92, 0LL);
        }
        else if ( (v10 & 0x60) != 0 )
        {
          MiDeletePhysmemPte(a1, a2);
        }
        else
        {
          if ( (v10 & 8) == 0 )
            goto LABEL_11;
          if ( !(unsigned int)MiRotatedToFrameBuffer(a2) )
          {
            LODWORD(a3) = v128;
            v8 = v131;
LABEL_11:
            if ( (v10 & 0x90) == 0x80 )
            {
              if ( (v10 & 2) != 0 && (*(_BYTE *)(v8 + 187) & 1) == 0 && dword_140C67FE8 )
              {
                if ( v11 >= 0xFFFFF68000000000uLL && v11 <= 0xFFFFF6FFFFFFFFFFuLL )
                  goto LABEL_53;
                v32 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                v33 = *(_QWORD *)v32;
                if ( v32 >= 0xFFFFF6FB7DBED000uLL && v32 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x600000) != 0 )
                {
                  if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                    && (v33 & 1) != 0
                    && ((v33 & 0x20) == 0 || (v33 & 0x42) == 0) )
                  {
                    v93 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                    if ( v93 )
                    {
                      v94 = *((_QWORD *)&v93->Flink + ((v32 >> 3) & 0x1FF));
                      v95 = HIBYTE(*(_QWORD *)v32);
                      if ( (v94 & 0x20) == 0 )
                        v95 = HIBYTE(v33);
                      HIBYTE(v33) = v95;
                      if ( (v94 & 0x42) != 0 )
                        HIBYTE(v33) = v95;
                    }
                  }
                  v6 = v132;
                }
                if ( (HIBYTE(v33) & 0xF) != 7 )
                {
LABEL_53:
                  if ( (*(_BYTE *)a2 & 0x20) != 0 )
                    MiLogPageAccess(v8, a2);
                }
              }
              v13 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v132) >> 12) & 0xFFFFFFFFFFLL)
                  - 0x220000000000LL;
              if ( (*(_QWORD *)(v13 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
              {
                if ( (v10 & 1) != 0 && (unsigned int)MiGetPfnPriority(v13) - 3 <= 2 )
                  MiLockSetPfnPriority(v85, 2LL);
                if ( (v10 & 4) != 0
                  && !*(_QWORD *)(v7 + 104)
                  && (v3 & 0x42) == 0
                  && *(__int64 *)(v13 + 40) < 0
                  && (*(_BYTE *)(v13 + 34) & 0x10) == 0
                  && (unsigned int)MiGetPfnPriority(v13) < 5 )
                {
                  *(_QWORD *)(v7 + 104) = MiCreateDecayPfn();
                }
              }
              LODWORD(a3) = v128;
            }
            goto LABEL_17;
          }
          v135 = 0LL;
          MiUnmapFrameBuffer(a2);
          MiInsertTbFlushEntry(v9, (__int64)(a2 << 25) >> 16, 1LL, 0LL);
        }
LABEL_32:
        v27 = qword_140C65B90;
        if ( (*(_BYTE *)(v9 + 4) & 2) == 0
          && *(_DWORD *)v9 == 1
          && KeGetCurrentThread()->ApcState.Process[2].Affinity.StaticBitmap[5] )
        {
          v27 = -1LL;
        }
        if ( (*(_DWORD *)(v9 + 12) >= *(_DWORD *)(v9 + 8) || *(_BYTE *)(v9 + 5) || *(_QWORD *)(v9 + 16) > v27)
          && v27 >= 0x400
          && !*(_BYTE *)(v9 + 5) )
        {
          MiFlushTbList((int *)v9);
        }
LABEL_39:
        if ( !*(_QWORD *)v7 )
          *(_QWORD *)v7 = a2;
        *(_QWORD *)(v7 + 8) = a2;
        return 0LL;
      }
LABEL_373:
      MiDeleteLargeUserPde(a1, a2);
      return 0LL;
    }
    if ( (v3 & 0x400) == 0 )
    {
      if ( (v3 & 0x800) != 0 )
      {
        if ( (v10 & 0x800) == 0 )
        {
          v7 = v130;
          if ( (v10 & 0x10) != 0 && (v3 & 0x3E0) == 0x300 )
            MiDeleteVadAwePtes(*(_QWORD *)(*(_QWORD *)(v130 + 32) + 40LL), a2, v130 + 128);
          goto LABEL_39;
        }
        goto LABEL_373;
      }
      if ( (v3 & 0x3E0) == 0 )
        KeBugCheckEx(0x1Au, 0x41792uLL, a2, v3, 0LL);
      MiReleasePageFileSpace(*(_QWORD *)(qword_140C673C8 + 8LL * *(unsigned __int16 *)(v8 + 174)), v3, 1);
      if ( (*(_BYTE *)(v131 + 184) & 7) != 0 || (v10 & 0x80u) != 0 && (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v3) )
        ++*(_QWORD *)(*(_QWORD *)(v130 + 32) + 32LL);
      v70 = ZeroPte;
      if ( !MiPteInShadowRange(a2) )
        goto LABEL_103;
      if ( (unsigned int)MiPteHasShadow(v80, v79, v81) )
      {
        if ( HIBYTE(word_140C66CFC) || (ZeroPte & 1) == 0 )
          goto LABEL_343;
LABEL_342:
        v70 |= 0x8000000000000000uLL;
LABEL_343:
        *(_QWORD *)a2 = v70;
        MiWritePteShadow(a2, v70);
        goto LABEL_104;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0
        || (ZeroPte & 1) == 0 )
      {
        goto LABEL_103;
      }
LABEL_355:
      v70 |= 0x8000000000000000uLL;
      goto LABEL_103;
    }
    if ( (unsigned int)MiIsPrototypePteVadLookup(v3, 0xFFFFF6FB7DBED000uLL, a3) || (v3 & 0x800) == 0 )
    {
      v69 = KeGetCurrentThread()->ApcState.Process;
      if ( !v69[1].Affinity.StaticBitmap[12]
        || (unsigned int)MiIsPrototypePteVadLookup(v3, v66, v69)
        || (CloneAddress = MiLocateCloneAddress(v121, v122, v121)) == 0 )
      {
LABEL_102:
        v70 = ZeroPte;
        if ( !MiPteInShadowRange(a2) )
        {
LABEL_103:
          *(_QWORD *)a2 = v70;
LABEL_104:
          if ( (v10 & 0x80u) != 0 && (a2 < 0xFFFFF6FB7DBED000uLL || a2 > 0xFFFFF6FB7DBEDFFFuLL) )
          {
            v74 = ((v11 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
            v75 = *(_QWORD *)v74;
            if ( v74 >= 0xFFFFF6FB7DBED000uLL
              && v74 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0x600000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v75 & 1) != 0
              && ((v75 & 0x20) == 0 || (v75 & 0x42) == 0) )
            {
              v126 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v126 )
              {
                v127 = *((_QWORD *)&v126->Flink + ((v74 >> 3) & 0x1FF));
                if ( (v127 & 0x20) != 0 )
                  v75 |= 0x20uLL;
                if ( (v127 & 0x42) != 0 )
                  v75 |= 0x42uLL;
              }
            }
            v138 = v75;
            v76 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v138) >> 12) & 0xFFFFFFFFFFLL)
                - 0x220000000000LL;
            if ( (*(_DWORD *)(v76 + 16) & 0x3FF0000) == 0 )
              KeBugCheckEx(0x1Au, 0x41790uLL, v76, 0LL, 1uLL);
            v128 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v76 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v128);
              while ( *(__int64 *)(v76 + 24) < 0 );
            }
            *(_QWORD *)(v76 + 16) ^= ((unsigned int)*(_QWORD *)(v76 + 16) ^ (((unsigned int)(*(_QWORD *)(v76 + 16) >> 16)
                                                                            - 1) << 16)) & 0x3FF0000;
            _InterlockedAnd64((volatile signed __int64 *)(v76 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          return 0LL;
        }
        if ( (unsigned int)MiPteHasShadow(v72, v71, v73) )
        {
          if ( HIBYTE(word_140C66CFC) || (ZeroPte & 1) == 0 )
            goto LABEL_343;
          goto LABEL_342;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0
          || (ZeroPte & 1) == 0 )
        {
          goto LABEL_103;
        }
        goto LABEL_355;
      }
      v120 = MiDecrementCloneBlockReference(CloneAddress, v124);
    }
    else
    {
      v120 = MiDecrementCombinedPteEx(v68, v67, 0LL);
    }
    if ( v120 == 3 )
    {
      ++*(_QWORD *)(*(_QWORD *)(v130 + 32) + 8LL);
    }
    else if ( v120 == 5 )
    {
      ++*(_QWORD *)(*(_QWORD *)(v130 + 32) + 24LL);
    }
    goto LABEL_102;
  }
  if ( !(_DWORD)a3 )
  {
    v29 = *(_QWORD *)(a1 + 88);
    if ( v29 > (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088 )
      v29 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    v30 = a2 + 8;
    for ( i = 1; v30 <= v29; v30 += 8LL )
    {
      v77 = *(_QWORD *)v30;
      if ( v30 >= 0xFFFFF6FB7DBED000uLL
        && v30 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v77 & 1) != 0
        && ((v77 & 0x20) == 0 || (v77 & 0x42) == 0) )
      {
        v89 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v89 )
        {
          v90 = *((_QWORD *)&v89->Flink + ((v30 >> 3) & 0x1FF));
          v91 = v77 | 0x20;
          if ( (v90 & 0x20) == 0 )
            v91 = *(_QWORD *)v30;
          v77 = v91;
          if ( (v90 & 0x42) != 0 )
            v77 = v91 | 0x42;
        }
      }
      if ( v77 )
        break;
      if ( !++i )
        break;
    }
    *(_DWORD *)(a1 + 8) = i - 1;
  }
  return 0LL;
}
