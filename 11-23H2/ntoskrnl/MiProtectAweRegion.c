/*
 * XREFs of MiProtectAweRegion @ 0x14064B8F4
 * Callers:
 *     MmProtectVirtualMemory @ 0x1406F9980 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x140211C2C (MiInsertLargeTbFlushEntry.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1402170B0 (MiCaptureWriteWatchDirtyBit.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MiLockLowestValidPageTable @ 0x14025A520 (MiLockLowestValidPageTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x1402756C0 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiWriteValidPteNewProtection @ 0x140284A90 (MiWriteValidPteNewProtection.c)
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 *     MiMakeValidPte @ 0x1402CF540 (MiMakeValidPte.c)
 *     MiGetLeafVa @ 0x1402E5CB0 (MiGetLeafVa.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     MiMakeTransitionPteValid @ 0x140335260 (MiMakeTransitionPteValid.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     MiRewritePteWithLockBit @ 0x140376630 (MiRewritePteWithLockBit.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiFlushGraphicsPtes @ 0x140626978 (MiFlushGraphicsPtes.c)
 *     MiGetAweNode @ 0x14064ADF4 (MiGetAweNode.c)
 *     MiGetAweViewPageSize @ 0x14064AF08 (MiGetAweViewPageSize.c)
 *     MiLockAweVadsShared @ 0x14064B5C0 (MiLockAweVadsShared.c)
 *     MiUnlockAweVadsShared @ 0x14064C398 (MiUnlockAweVadsShared.c)
 *     MiPageSizeToPteLevel @ 0x14064E7D0 (MiPageSizeToPteLevel.c)
 *     MiGetVadCacheAttribute @ 0x1406610F4 (MiGetVadCacheAttribute.c)
 */

__int64 __fastcall MiProtectAweRegion(unsigned __int64 a1, unsigned __int64 a2, int a3, int a4, int *a5)
{
  int v5; // r12d
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 v10; // rsi
  __int64 v11; // r11
  _QWORD *AweNode; // r13
  __int64 v13; // rcx
  __int64 v14; // r15
  int v15; // r12d
  int VadCacheAttribute; // r8d
  int v17; // r9d
  int v18; // eax
  int *v19; // rbx
  unsigned int v20; // edi
  int v21; // r9d
  int v22; // r8d
  int v23; // eax
  int v24; // eax
  unsigned int v25; // r8d
  unsigned int v27; // ebx
  __int64 AweViewPageSize; // rax
  __int64 v29; // r9
  __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  __int64 v32; // r9
  int v33; // r15d
  unsigned __int64 v34; // r8
  int v35; // ecx
  __int64 v36; // r12
  unsigned __int64 v37; // r14
  unsigned __int8 v38; // r13
  int v39; // r13d
  unsigned __int64 valid; // rdx
  __int64 v41; // r9
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  int v44; // edx
  int v45; // r8d
  int v46; // edi
  unsigned __int64 LeafVa; // rdi
  __int64 v48; // r11
  unsigned __int64 v49; // r15
  __int64 v50; // r13
  __int64 v51; // r12
  __int64 v52; // rbx
  unsigned __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // r9
  __int64 v56; // rbx
  __int64 v57; // rdi
  __int64 v58; // r8
  unsigned __int64 ValidPte; // rax
  int v60; // ecx
  int v61; // edi
  __int64 v62; // rbx
  __int64 v63; // r8
  BOOL v64; // r14d
  __int64 v65; // rdx
  unsigned __int64 TransitionPteValid; // rax
  __int64 v67; // r8
  int v68; // r9d
  __int64 v69; // rdx
  unsigned __int8 v70; // r11
  bool v71; // zf
  unsigned __int8 v72; // [rsp+20h] [rbp-E0h]
  int v73; // [rsp+24h] [rbp-DCh]
  unsigned int v74; // [rsp+28h] [rbp-D8h]
  int v75; // [rsp+2Ch] [rbp-D4h]
  __int64 Process; // [rsp+30h] [rbp-D0h]
  int v77; // [rsp+38h] [rbp-C8h]
  int v78; // [rsp+3Ch] [rbp-C4h]
  int v79; // [rsp+40h] [rbp-C0h]
  int v80; // [rsp+44h] [rbp-BCh]
  int v81; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v82; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v83; // [rsp+58h] [rbp-A8h]
  __int64 v84; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v85; // [rsp+68h] [rbp-98h]
  __int64 v86; // [rsp+70h] [rbp-90h]
  unsigned __int64 v87; // [rsp+78h] [rbp-88h]
  __int64 v88; // [rsp+80h] [rbp-80h]
  unsigned __int64 v89; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v90; // [rsp+90h] [rbp-70h]
  __int64 v91; // [rsp+A0h] [rbp-60h]
  int *v92; // [rsp+A8h] [rbp-58h]
  _QWORD v93[24]; // [rsp+B0h] [rbp-50h] BYREF

  v5 = a3;
  v77 = a3;
  v92 = a5;
  v89 = 0LL;
  memset(v93, 0, 0xB8uLL);
  CurrentThread = KeGetCurrentThread();
  v73 = 1;
  v82 = 0LL;
  Process = (__int64)CurrentThread->ApcState.Process;
  v81 = 0;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  LODWORD(v93[0]) = 1;
  v83 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  WORD2(v93[0]) = 0;
  v93[2] = 0LL;
  LODWORD(v93[1]) = 20;
  v93[3] = 0LL;
  MiLockAweVadsShared((__int64)CurrentThread);
  AweNode = MiGetAweNode(a1);
  v13 = AweNode[3];
  v14 = AweNode[4];
  v88 = v13;
  if ( v5 != 24 )
  {
    v15 = v5 & 7;
    if ( v15 != 1 && v15 != 4 )
      goto LABEL_26;
    VadCacheAttribute = MiGetVadCacheAttribute();
    if ( VadCacheAttribute )
    {
      v18 = 0;
      if ( VadCacheAttribute == 2 )
        v18 = v17;
    }
    else
    {
      v18 = 8;
    }
    v13 = v88;
    v5 = v18 | v15;
    v77 = v5;
  }
  v19 = (int *)(v13 + 48);
  if ( (*(_DWORD *)(v14 + 8) & 1) != 0 )
  {
    v20 = 4;
    v75 = 4;
    goto LABEL_30;
  }
  v21 = *v19;
  v75 = ((unsigned int)*v19 >> 7) & 0x1F;
  if ( (((unsigned int)*v19 >> 7) & 7) == 1 && (v5 & 7) != 1 )
    goto LABEL_26;
  if ( !a4 )
    goto LABEL_28;
  v22 = MI_GET_GRAPHICS_PROTECTION_FROM_VAD(v13);
  v23 = a4 & 0x20000;
  if ( (v22 & 0x20000) != 0 )
  {
    if ( !v23 )
      goto LABEL_26;
  }
  else if ( v23 )
  {
    goto LABEL_26;
  }
  v24 = a4 & 0x40000;
  if ( (v22 & 0x40000) != 0 )
  {
    if ( v24 )
      goto LABEL_22;
LABEL_26:
    MiUnlockAweVadsShared(CurrentThread, v11);
    return 3221225496LL;
  }
  if ( v24 )
    goto LABEL_26;
LABEL_22:
  v25 = v22 & 0xFFF9FFFF;
  if ( (v25 & 0x1C000) == 0 && (a4 & 0x1C000) != 0
    || (v25 & 0x12000) == 0 && (a4 & 0x12000) != 0
    || v25 == 2048 && (a4 & 0xFFF9F7FF) != 0 )
  {
    goto LABEL_26;
  }
LABEL_28:
  v20 = v75;
  if ( (v21 & 0x2200000) == 0x2200000 )
    v81 = 1;
LABEL_30:
  MiUnlockAweVadsShared(CurrentThread, v11);
  v79 = *v19 & 0x600000;
  v87 = *(_QWORD *)(v14 + 16);
  v78 = 0;
  v27 = v79 != 6291456 ? 0x80000000 : 0;
  AweViewPageSize = MiGetAweViewPageSize((__int64)AweNode);
  v30 = v29;
  if ( AweViewPageSize )
    v30 = AweViewPageSize;
  v90 = v30;
  v80 = MiPageSizeToPteLevel(v30);
  v33 = v80;
  if ( v80 < 1 )
  {
    v86 = v32;
  }
  else
  {
    v86 = 1LL;
    v27 |= 0x4000000u;
  }
  v74 = v27;
  if ( v32 == 1 )
  {
    v34 = v83;
  }
  else
  {
    if ( ((v10 >> 3) & 0x1FF) % v31 )
      return 3221225496LL;
    v34 = v83;
    if ( (((__int64)(v83 - v10) >> 3) + 1) % v31 )
      return 3221225496LL;
  }
  v35 = v80;
  if ( v80 )
  {
    do
    {
      v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v34 = ((v34 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v35;
    }
    while ( v35 );
    v83 = v34;
  }
  v36 = 0LL;
  v85 = v10;
  v37 = 0LL;
  v38 = MiLockWorkingSetShared(Process + 1664);
  v72 = v38;
  if ( v10 <= v83 )
  {
    v39 = v77;
    valid = 0LL;
    while ( !valid || (v10 & 0xFFF) == 0 )
    {
      MiFlushTbList((int *)v93);
      v42 = v82;
      if ( v82 )
      {
        if ( v36 )
        {
          if ( v81 )
          {
            MiFlushGraphicsPtes(v36, ((__int64)(v37 - v36) >> 3) + 1);
            v42 = v82;
          }
          v36 = 0LL;
        }
        MiUnlockPageTableInternal(Process + 1664, v42);
        MiUnlockWorkingSetShared(Process + 1664, v72);
        MiLockWorkingSetShared(Process + 1664);
      }
      valid = MiLockLowestValidPageTable(Process + 1664, v10, &v89, v41);
      v82 = valid;
      if ( valid == ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        break;
      v10 = v10 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
LABEL_126:
      v20 = v75;
      v10 += 8LL;
      if ( v10 > v83 )
      {
        v38 = v72;
        goto LABEL_128;
      }
    }
    if ( v79 == 6291456 && (v86 == 1 || !(((v10 >> 3) & 0x1FF) % v87)) )
      v78 = 0;
    v43 = MI_READ_PTE_LOCK_FREE(v10);
    v84 = v43;
    if ( !v43 )
    {
LABEL_125:
      valid = v82;
      goto LABEL_126;
    }
    if ( (v43 & 1) != 0 )
    {
      v37 = v10;
      if ( !v36 )
        v36 = v10;
      v91 = v36;
      if ( v10 == v85 )
      {
        v44 = (v43 & 0x800) != 0 ? 4 : 2;
        if ( v20 >> 3 == 1 )
        {
          v45 = v44 | 0x200;
LABEL_69:
          v73 = v45;
          goto LABEL_70;
        }
        v73 = (v43 & 0x800) != 0 ? 4 : 2;
        if ( v20 >> 3 == 3 )
        {
          v73 = (v43 & 0x800) != 0 ? 4 : 2;
          if ( (v20 & 7) != 0 )
          {
            v45 = v44 | 0x400;
            goto LABEL_69;
          }
        }
      }
LABEL_70:
      v46 = v79;
      if ( v79 == 6291456 && !v78 && (v43 & 0x42) != 0 )
      {
        LeafVa = MiGetLeafVa(v10);
        v49 = v90 / v87;
        if ( v90 / v87 )
        {
          v50 = v88;
          v51 = v48;
          v52 = v87 << 12;
          do
          {
            MiCaptureWriteWatchDirtyBit(Process, LeafVa, v50);
            LeafVa += v52;
            v49 -= v51;
          }
          while ( v49 );
          v36 = v91;
          LODWORD(v48) = 1;
          v39 = v77;
          v37 = v10;
          v27 = v74;
        }
        v33 = v80;
        v46 = 6291456;
        v78 = v48;
      }
      v53 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v84) >> 12) & 0xFFFFFFFFFFLL;
      if ( v39 == 24 )
      {
        v54 = MiSwizzleInvalidPte((v53 << 12) | 0xB00);
        v84 = v54;
        v56 = v54;
        if ( !v33 )
        {
          v57 = v54;
          if ( MiPteInShadowRange(v10) )
          {
            if ( MiPteHasShadow() )
            {
              v33 = 1;
              if ( !HIBYTE(word_140C66CFC) )
              {
LABEL_85:
                if ( (v56 & 1) != 0 )
                  v57 |= 0x8000000000000000uLL;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              goto LABEL_85;
            }
          }
          *(_QWORD *)v10 = v57;
          if ( v33 )
            MiWritePteShadow(v10, v57, v58);
          v33 = v80;
LABEL_90:
          MiInsertTbFlushEntry((__int64)v93, (__int64)(v10 << 25) >> 16, 1LL, 0);
LABEL_98:
          v27 = v74;
          goto LABEL_125;
        }
      }
      else
      {
        ValidPte = MiMakeValidPte(v10, v53, v27 | v39);
        v56 = ValidPte;
        if ( !v33 )
          MiWriteValidPteNewProtection(v10, ValidPte);
        if ( (v39 & 4) != 0 && v46 != 6291456 )
          v56 |= 0x42uLL;
        if ( !v33 )
          goto LABEL_90;
      }
      MiRewritePteWithLockBit(Process + 1664, (__int64 *)v10, v56, v55);
      MiInsertLargeTbFlushEntry((__int64)v93, v33, v10);
      goto LABEL_98;
    }
    v60 = v73;
    if ( v10 == v85 )
      v60 = 1;
    v73 = v60;
    if ( v39 == 24 )
      goto LABEL_125;
    v61 = 0;
    v62 = v43 ^ ((unsigned __int16)v43 ^ (unsigned __int16)(32 * v39)) & 0x3E0;
    v64 = MiPteInShadowRange(v10);
    v65 = v62;
    if ( v64 )
    {
      if ( MiPteHasShadow() )
      {
        v61 = 1;
        if ( HIBYTE(word_140C66CFC) )
          goto LABEL_109;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
        goto LABEL_109;
      }
      if ( (v62 & 1) != 0 )
        v65 |= 0x8000000000000000uLL;
    }
LABEL_109:
    *(_QWORD *)v10 = v65;
    if ( v61 )
      MiWritePteShadow(v10, v65, v63);
    TransitionPteValid = MiMakeTransitionPteValid(v10);
    v27 = v74;
    v67 = TransitionPteValid;
    v84 = TransitionPteValid;
    if ( (v74 & 0x4000000) != 0 )
    {
      v67 = TransitionPteValid | 0x80;
      v84 = TransitionPteValid | 0x80;
    }
    v68 = 0;
    v69 = v67;
    if ( !v64 )
      goto LABEL_121;
    if ( MiPteHasShadow() )
    {
      v70 = ++v68;
      if ( !HIBYTE(word_140C66CFC) )
      {
        v71 = ((unsigned __int8)v67 & v70) == 0;
        goto LABEL_119;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v71 = (v67 & 1) == 0;
LABEL_119:
      if ( !v71 )
        v69 |= 0x8000000000000000uLL;
    }
LABEL_121:
    *(_QWORD *)v10 = v69;
    if ( v68 )
      MiWritePteShadow(v10, v69, v67);
    v37 = v10;
    if ( !v36 )
      v36 = v10;
    goto LABEL_125;
  }
LABEL_128:
  MiFlushTbList((int *)v93);
  if ( v82 )
  {
    if ( v81 )
    {
      if ( v36 )
        MiFlushGraphicsPtes(v36, ((__int64)(v37 - v36) >> 3) + 1);
    }
    MiUnlockPageTableInternal(Process + 1664, v82);
  }
  MiUnlockWorkingSetShared(Process + 1664, v38);
  *v92 = v73;
  return 0LL;
}
