/*
 * XREFs of MiMapMdlCommon @ 0x1403A6DE0
 * Callers:
 *     MmMapLockedPagesWithReservedMapping @ 0x1403A6C20 (MmMapLockedPagesWithReservedMapping.c)
 *     MmMapLockedRestartPages @ 0x140A2B450 (MmMapLockedRestartPages.c)
 * Callees:
 *     MiMakeProtectionPfnCompatible @ 0x140217E84 (MiMakeProtectionPfnCompatible.c)
 *     MiLockPageTableInternal @ 0x1402376E0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14023C4E0 (MiUnlockWorkingSetShared.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140271240 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140279760 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14027F450 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x140283B70 (MiLockWorkingSetShared.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiMakeValidPte @ 0x1402CF2B0 (MiMakeValidPte.c)
 *     MiUnlockPageTableInternal @ 0x1403193E0 (MiUnlockPageTableInternal.c)
 *     MiReferenceIoPages @ 0x140336360 (MiReferenceIoPages.c)
 *     MiIoSpaceGetBounds @ 0x140336B50 (MiIoSpaceGetBounds.c)
 *     MiWritePteShadow @ 0x140356D4C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140356DAC (MiPteHasShadow.c)
 *     MiAssignInitialPageAttribute @ 0x1403A23E4 (MiAssignInitialPageAttribute.c)
 *     MiLookupIoPageNode @ 0x1403B02A8 (MiLookupIoPageNode.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiShowBadMapper @ 0x14063112C (MiShowBadMapper.c)
 */

__int64 __fastcall MiMapMdlCommon(__int64 a1, unsigned __int64 a2, __int64 a3, char a4, int a5)
{
  unsigned __int64 v5; // r13
  __int64 v7; // rcx
  __int64 v8; // r12
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r11
  __int64 v12; // rdi
  unsigned __int64 v13; // r11
  int v14; // esi
  BOOL v15; // ebx
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // r10
  int v18; // r12d
  int v19; // r13d
  unsigned __int64 v20; // r14
  __int64 v21; // rdi
  int ProtectionPfnCompatible; // edx
  unsigned __int64 v23; // rbx
  unsigned __int8 v24; // r14
  unsigned __int64 *v25; // rsi
  unsigned __int64 v26; // rsi
  int v27; // r12d
  int v28; // eax
  unsigned __int64 ValidPte; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int16 v32; // cx
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  __int64 v36; // rdx
  unsigned __int8 v37; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v39; // r9
  int v40; // eax
  bool v41; // zf
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // r8
  unsigned __int64 *v44; // rdx
  unsigned __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // r9
  __int64 v48; // r14
  _QWORD *v49; // rsi
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rdi
  unsigned __int64 v52; // r13
  unsigned __int64 v53; // rbx
  char v54; // al
  unsigned __int64 v55; // r14
  __int64 v56; // r12
  unsigned __int64 v57; // rbx
  _QWORD *v58; // r12
  unsigned __int64 v59; // r13
  _QWORD *v60; // r15
  unsigned __int64 v61; // rbx
  int v62; // esi
  __int64 v63; // r8
  _QWORD *v64; // rcx
  unsigned __int64 *v65; // r12
  unsigned __int64 v66; // rsi
  int v67; // r14d
  int v68; // eax
  unsigned __int8 v69; // bl
  _DWORD *v70; // r9
  __int64 v71; // rdx
  unsigned __int8 v72; // r11
  unsigned __int8 v73; // cl
  struct _KPRCB *v74; // r10
  _DWORD *v75; // r9
  int v76; // eax
  int v77; // ecx
  unsigned __int64 v78; // rax
  unsigned __int64 v79; // rbx
  unsigned __int8 v80; // al
  struct _KPRCB *v81; // r9
  _DWORD *v82; // r8
  int v83; // eax
  unsigned __int8 v84; // di
  _DWORD *v85; // r9
  __int64 v86; // rdx
  unsigned __int8 v87; // r11
  unsigned __int8 v88; // cl
  struct _KPRCB *v89; // r10
  _DWORD *v90; // r9
  int v91; // eax
  int v92; // ecx
  unsigned __int64 v93; // rdx
  __int64 v94; // rbx
  unsigned __int8 v95; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v97; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v98; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v99; // [rsp+40h] [rbp-C0h]
  _QWORD *v100; // [rsp+40h] [rbp-C0h]
  _QWORD *v101; // [rsp+48h] [rbp-B8h]
  _QWORD *v102; // [rsp+48h] [rbp-B8h]
  _QWORD *v103; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v104; // [rsp+50h] [rbp-B0h]
  __int128 v105; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v106; // [rsp+68h] [rbp-98h]
  __int64 v107; // [rsp+70h] [rbp-90h]
  __int64 v108; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 *v109; // [rsp+80h] [rbp-80h]
  unsigned __int64 v110; // [rsp+88h] [rbp-78h]
  unsigned __int64 v111; // [rsp+90h] [rbp-70h]
  __int64 v112; // [rsp+98h] [rbp-68h] BYREF
  __int64 v113; // [rsp+A0h] [rbp-60h]
  __int64 v114; // [rsp+A8h] [rbp-58h]
  __int64 v115; // [rsp+B0h] [rbp-50h]
  _QWORD v116[24]; // [rsp+C0h] [rbp-40h] BYREF

  v111 = a2;
  v113 = a1;
  v5 = a2;
  v107 = a3;
  v7 = *(unsigned int *)(a1 + 44);
  v8 = a3;
  v106 = 0LL;
  v9 = 0LL;
  v108 = 0LL;
  v10 = a1 + 48;
  v11 = *(unsigned int *)(a1 + 40);
  v12 = (v7 + *(_QWORD *)(a1 + 32)) & 0xFFF;
  v109 = (unsigned __int64 *)(a1 + 48);
  v112 = v12;
  v13 = (unsigned __int64)(v12 + v11 + 4095) >> 12;
  v99 = v13;
  v105 = 0LL;
  v114 = 0LL;
  v115 = v7 + ((__int64)(v5 << 25) >> 16);
  LODWORD(v110) = 1;
  v14 = 1;
  v15 = 0;
  v16 = 0LL;
  if ( (v5 & 0xFFF) == 0 && !v8 && (v13 & 0x1FF) == 0 )
    v15 = (*(_DWORD *)v10 & 0x1FFLL) == 0;
  v97 = 0LL;
  v17 = 0LL;
  if ( v13 )
  {
    v18 = HIDWORD(v106);
    v10 = a1 + 40;
    v19 = 24;
    v103 = (_QWORD *)(a1 + 40);
    while ( 1 )
    {
      v20 = *(_QWORD *)(v10 + 8);
      v101 = (_QWORD *)(v10 + 8);
      if ( v20 > qword_140C65CA0 || !_bittest64((const signed __int64 *)(48 * v20 - 0x21FFFFFFFFD8LL), 0x36u) )
        break;
      v21 = 48 * v20 - 0x220000000000LL;
      if ( !*(_WORD *)(v21 + 32) && !dword_140C67F4C )
        MiShowBadMapper(v20, 2uLL);
      if ( (*(_BYTE *)(v21 + 34) & 0xC0) == 0xC0 )
        MiAssignInitialPageAttribute(48 * v20 - 0x220000000000LL, a5);
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(a4, 48 * v20 - 0x220000000000LL);
LABEL_10:
      if ( v15 )
      {
        if ( (v97 & 0x1FF) != 0 )
        {
          if ( v20 == *v103 + 1LL && ProtectionPfnCompatible == v19 )
          {
            if ( v14 != (_DWORD)v110 )
              v15 = 0;
          }
          else
          {
            v15 = 0;
          }
        }
        else
        {
          LODWORD(v110) = v14;
          v19 = ProtectionPfnCompatible;
          if ( (v20 & 0x1FF) != 0 )
            v15 = 0;
        }
      }
      v13 = v99;
      v17 = v97 + 1;
      v10 = (__int64)v101;
      v97 = v17;
      v103 = v101;
      if ( v17 >= v99 )
      {
        v5 = v111;
        v12 = v112;
        v8 = v107;
        goto LABEL_13;
      }
    }
    if ( !v16 )
    {
      if ( !v18 || v20 < (unsigned __int64)v105 || v20 > *((_QWORD *)&v105 + 1) )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          if ( CurrentIrql == 2 )
            LODWORD(v36) = 4;
          else
            v36 = (-1LL << (CurrentIrql + 1)) & 4;
          SchedulerAssist[5] |= v36;
        }
        MiIoSpaceGetBounds((__int64)&v105, v20);
        if ( (_DWORD)KiIrqlFlags )
        {
          v37 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v37 <= 0xFu && CurrentIrql <= 0xFu && v37 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v39 = CurrentPrcb->SchedulerAssist;
            v40 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v41 = (v40 & v39[5]) == 0;
            v39[5] &= v40;
            if ( v41 )
            {
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              v13 = v99;
            }
          }
        }
        __writecr8(CurrentIrql);
        v18 = HIDWORD(v106);
        v9 = v108;
        v10 = (__int64)v103;
        v17 = v97;
      }
      if ( v18 != 3 )
      {
        v14 = v106;
        goto LABEL_66;
      }
      v42 = v13 - v17;
      v16 = 1LL;
      if ( v13 - v17 > 1 )
      {
        v43 = v42 - 1;
        v44 = (unsigned __int64 *)(v10 + 16);
        if ( v42 != 1 )
        {
          do
          {
            v45 = *v44;
            if ( *v44 != *(v44 - 1) + 1
              || (v45 & 0x1FF) == 0
              || v45 <= qword_140C65CA0 && _bittest64((const signed __int64 *)(48 * v45 - 0x21FFFFFFFFD8LL), 0x36u) )
            {
              break;
            }
            ++v16;
            ++v44;
            --v43;
          }
          while ( v43 );
          v18 = HIDWORD(v106);
        }
      }
      if ( (int)MiReferenceIoPages(1, v20, v16, a5, 0LL, &v108) < 0 )
      {
        v15 = 0;
        v16 = 1LL;
      }
      v9 = v108;
    }
    v46 = (v20 & ((1LL << ((unsigned __int8)dword_140C65BE0 - 12)) - 1)) - *(_QWORD *)(v9 + 24);
    v14 = (*(_DWORD *)(v9 + 4LL * ((unsigned int)(2 * v46) >> 5) + 44) >> ((2 * v46) & 0x1F)) & 3;
    --v16;
LABEL_66:
    ProtectionPfnCompatible = a4 & 7;
    if ( v14 )
    {
      if ( v14 == 2 )
        ProtectionPfnCompatible |= 0x18u;
    }
    else
    {
      ProtectionPfnCompatible |= 0x10u;
    }
    goto LABEL_10;
  }
LABEL_13:
  HIDWORD(v106) = 0;
  if ( !v15 )
  {
    v23 = 0LL;
    if ( v8 )
      v24 = MiLockWorkingSetShared(v8);
    else
      v24 = 17;
    v25 = (unsigned __int64 *)((char *)v109 - v5);
    v109 = (unsigned __int64 *)((char *)v109 - v5);
    while ( 1 )
    {
      if ( v24 != 17 )
      {
        if ( !v23 )
          goto LABEL_161;
        if ( (v5 & 0xFFF) == 0 )
          break;
      }
LABEL_18:
      v26 = *(unsigned __int64 *)((char *)v25 + v5);
      v27 = 0;
      if ( v26 > qword_140C65CA0 || !_bittest64((const signed __int64 *)(48 * v26 - 0x21FFFFFFFFD8LL), 0x36u) )
      {
        if ( !HIDWORD(v106) || v26 < (unsigned __int64)v105 || v26 > *((_QWORD *)&v105 + 1) )
        {
          if ( v24 == 17 )
          {
            v84 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v84 <= 0xFu )
            {
              v85 = KeGetCurrentPrcb()->SchedulerAssist;
              if ( v84 == 2 )
                LODWORD(v86) = 4;
              else
                v86 = (-1LL << (v84 + 1)) & 4;
              v85[5] |= v86;
            }
          }
          else
          {
            v84 = 17;
          }
          MiIoSpaceGetBounds((__int64)&v105, v26);
          if ( v84 != 17 )
          {
            if ( (_DWORD)KiIrqlFlags )
            {
              v88 = KeGetCurrentIrql();
              if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v88 <= 0xFu && v84 <= 0xFu && v88 >= v87 )
              {
                v89 = KeGetCurrentPrcb();
                v90 = v89->SchedulerAssist;
                v91 = ~(unsigned __int16)(-1LL << (v84 + 1));
                v41 = (v91 & v90[5]) == 0;
                v90[5] &= v91;
                if ( v41 )
                  KiRemoveSystemWorkPriorityKick(v89);
              }
            }
            __writecr8(v84);
          }
        }
        if ( HIDWORD(v106) != 3 )
        {
          v92 = v106;
          goto LABEL_187;
        }
        v92 = MiLookupIoPageNode(v26);
        if ( v92 == 3 )
        {
          v92 = a5;
LABEL_187:
          v27 = 1;
        }
        v28 = a4 & 7;
        if ( v92 )
        {
          if ( v92 == 2 )
            v28 |= 0x18u;
        }
        else
        {
          v28 |= 0x10u;
        }
        goto LABEL_21;
      }
      v28 = MiMakeProtectionPfnCompatible(a4, 48 * v26 - 0x220000000000LL);
LABEL_21:
      ValidPte = MiMakeValidPte(v5, v26, v28 | 0xA0000000);
      if ( v27 )
        ValidPte |= 0x200uLL;
      v8 = v107;
      v25 = v109;
      *(_QWORD *)v5 = ValidPte;
      v5 += 8LL;
      if ( !--v99 )
      {
        if ( v24 != 17 )
        {
          if ( v23 )
          {
            v93 = v23;
            v94 = v8;
            MiUnlockPageTableInternal(v8, v93);
          }
          else
          {
            v94 = v8;
          }
          MiUnlockWorkingSetShared(v94, v24);
        }
        goto LABEL_25;
      }
    }
    MiUnlockPageTableInternal(v8, v23);
LABEL_161:
    v23 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(v8, v23, 0, v10);
    goto LABEL_18;
  }
  memset(v116, 0, 0xB8uLL);
  v48 = 0LL;
  v102 = 0LL;
  v49 = 0LL;
  v100 = 0LL;
  v50 = (v12 + (unsigned __int64)*(unsigned int *)(v113 + 40) + 4095) >> 21;
  v51 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v104 = 0LL;
  v52 = 0LL;
  v53 = v51 + 8 * v50;
  v110 = v53;
  if ( v8 )
    v54 = MiLockWorkingSetShared(v8);
  else
    v54 = 17;
  v95 = v54;
  if ( v51 >= v53 )
    goto LABEL_147;
  do
  {
    if ( v54 != 17 )
    {
      v52 = ((v51 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v104 = v52;
      MiLockPageTableInternal(v8, v52, 0, v47);
    }
    v55 = 512 - ((v51 >> 3) & 0x1FF);
    if ( v55 > (__int64)(v53 - v51) >> 3 )
      v55 = (__int64)(v53 - v51) >> 3;
    v111 = v55;
    v56 = 8 * v55;
    v57 = 8 * v55 + v51;
    v98 = v57;
    if ( v51 < v57 )
    {
      v58 = v100;
      v59 = 8 * v55 + v51;
      v60 = v102;
      while ( 1 )
      {
        v61 = ZeroPte;
        v112 = MI_READ_PTE_LOCK_FREE(v51);
        v62 = 0;
        if ( MiPteInShadowRange(v51) )
        {
          if ( MiPteHasShadow() )
          {
            v62 = 1;
            if ( !HIBYTE(word_140C66DFC) )
              goto LABEL_95;
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
LABEL_95:
            if ( (ZeroPte & 1) != 0 )
              v61 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v51 = v61;
        if ( v62 )
          MiWritePteShadow(v51, v61, v63);
        v64 = (_QWORD *)(48
                       * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v112) >> 12) & 0xFFFFFFFFFFLL)
                       - 0x220000000000LL);
        if ( !v58 )
          v58 = v64;
        v51 += 8LL;
        *v64 = v60;
        v60 = v64;
        if ( v51 >= v59 )
        {
          v55 = v111;
          v52 = v104;
          v57 = v98;
          v100 = v58;
          v56 = 8 * v111;
          v102 = v64;
          break;
        }
      }
    }
    v116[1] = 20LL;
    v51 -= v56;
    LODWORD(v116[0]) = 0;
    WORD2(v116[0]) = 0;
    v116[2] = 0LL;
    v116[3] = 0LL;
    MiInsertTbFlushEntry((__int64)v116, (__int64)((v51 << 25) - v114) >> 16, v55, 0);
    MiFlushTbList((int *)v116);
    if ( v51 >= v57 )
      goto LABEL_143;
    v65 = v109;
    do
    {
      v66 = *v65;
      v67 = 0;
      if ( *v65 <= qword_140C65CA0 && _bittest64((const signed __int64 *)(48 * v66 - 0x21FFFFFFFFD8LL), 0x36u) )
      {
        v68 = MiMakeProtectionPfnCompatible(a4, 48 * v66 - 0x220000000000LL);
        goto LABEL_139;
      }
      if ( !HIDWORD(v106) || v66 < (unsigned __int64)v105 || v66 > *((_QWORD *)&v105 + 1) )
      {
        if ( v95 == 17 )
        {
          v69 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v69 <= 0xFu )
          {
            v70 = KeGetCurrentPrcb()->SchedulerAssist;
            if ( v69 == 2 )
              LODWORD(v71) = 4;
            else
              v71 = (-1LL << (v69 + 1)) & 4;
            v70[5] |= v71;
          }
        }
        else
        {
          v69 = 17;
        }
        MiIoSpaceGetBounds((__int64)&v105, v66);
        if ( v69 != 17 )
        {
          if ( (_DWORD)KiIrqlFlags )
          {
            v73 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v73 <= 0xFu && v69 <= 0xFu && v73 >= v72 )
            {
              v74 = KeGetCurrentPrcb();
              v75 = v74->SchedulerAssist;
              v76 = ~(unsigned __int16)(-1LL << (v69 + 1));
              v41 = (v76 & v75[5]) == 0;
              v75[5] &= v76;
              if ( v41 )
                KiRemoveSystemWorkPriorityKick(v74);
            }
          }
          __writecr8(v69);
        }
        v57 = v98;
      }
      if ( HIDWORD(v106) == 3 )
      {
        v77 = MiLookupIoPageNode(v66);
        if ( v77 != 3 )
          goto LABEL_135;
        v77 = a5;
      }
      else
      {
        v77 = v106;
      }
      v67 = 1;
LABEL_135:
      v68 = a4 & 7;
      if ( v77 )
      {
        if ( v77 == 2 )
          v68 |= 0x18u;
      }
      else
      {
        v68 |= 0x10u;
      }
LABEL_139:
      v78 = MiMakeValidPte(v51, v66, v68 | 0xA4000000);
      if ( v67 )
        v78 |= 0x200uLL;
      *(_QWORD *)v51 = v78;
      v65 += 512;
      v51 += 8LL;
    }
    while ( v51 < v57 );
    v52 = v104;
    v109 = v65;
LABEL_143:
    v8 = v107;
    if ( v52 )
      MiUnlockPageTableInternal(v107, v52);
    v53 = v110;
    v54 = v95;
  }
  while ( v51 < v110 );
  v49 = v100;
  v48 = (__int64)v102;
LABEL_147:
  if ( v95 != 17 )
    MiUnlockWorkingSetShared(v8, v95);
  v79 = ExAcquireSpinLockExclusive(&dword_140C685C0);
  *v49 = qword_140C685D0;
  qword_140C685D0 = v48;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C685C0);
  if ( (_DWORD)KiIrqlFlags )
  {
    v80 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v80 <= 0xFu && (unsigned __int8)v79 <= 0xFu && v80 >= 2u )
    {
      v81 = KeGetCurrentPrcb();
      v82 = v81->SchedulerAssist;
      v83 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v79 + 1));
      v41 = (v83 & v82[5]) == 0;
      v82[5] &= v83;
      if ( v41 )
        KiRemoveSystemWorkPriorityKick(v81);
    }
  }
  __writecr8(v79);
LABEL_25:
  v30 = v113;
  v31 = v115;
  v32 = *(_WORD *)(v113 + 10) | 1;
  *(_QWORD *)(v113 + 24) = v115;
  *(_WORD *)(v30 + 10) = v32;
  if ( (v32 & 0x10) != 0 )
    *(_WORD *)(v30 + 10) = v32 | 0x20;
  return v31;
}
