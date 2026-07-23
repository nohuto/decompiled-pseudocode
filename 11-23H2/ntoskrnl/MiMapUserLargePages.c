/*
 * XREFs of MiMapUserLargePages @ 0x140669310
 * Callers:
 *     MiMapViewOfImageSection @ 0x1406AEAF0 (MiMapViewOfImageSection.c)
 *     MiReserveUserMemory @ 0x14071F5E0 (MiReserveUserMemory.c)
 *     MiCopyLargeVad @ 0x140A495FC (MiCopyLargeVad.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x1402776C0 (MiMakeSystemAddressValid.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 *     MiWorkingSetIsContended @ 0x1402E6C80 (MiWorkingSetIsContended.c)
 *     MiInitializeLargePfnList @ 0x1402E9228 (MiInitializeLargePfnList.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140333F00 (KeShouldYieldProcessor.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiComputePreferredNode @ 0x140617CE0 (MiComputePreferredNode.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14061DDC8 (MiLogPerfMemoryRangeEvent.c)
 *     MiFlushGraphicsPtes @ 0x140626978 (MiFlushGraphicsPtes.c)
 *     MiLockWorkingSetForLargeMapping @ 0x140650698 (MiLockWorkingSetForLargeMapping.c)
 *     MiCreateLargePfnList @ 0x140667F3C (MiCreateLargePfnList.c)
 *     MiDemotePfnListChain @ 0x140668494 (MiDemotePfnListChain.c)
 *     MiInsertLargeUserMapping @ 0x140669040 (MiInsertLargeUserMapping.c)
 */

__int64 __fastcall MiMapUserLargePages(__int64 a1, int a2, char a3, __int64 *a4)
{
  unsigned __int64 v8; // r8
  int v9; // edi
  __int64 v10; // rdx
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // r13
  __int64 v13; // rax
  int v14; // eax
  unsigned int v15; // r12d
  __int64 v16; // rdx
  __int64 v17; // r9
  unsigned __int64 v18; // r10
  __int64 result; // rax
  __int64 v20; // r8
  __int64 v21; // r14
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // r9
  KIRQL v26; // r15
  ULONG_PTR v27; // rbx
  unsigned __int64 v28; // r10
  unsigned __int64 v29; // r11
  unsigned int v30; // esi
  unsigned __int64 v31; // rcx
  unsigned int v32; // edx
  _QWORD **v33; // r10
  _QWORD *v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rdx
  _QWORD **v39; // r8
  ULONG_PTR v40; // r14
  __int64 v41; // rcx
  __int64 v42; // rbx
  int v43; // ecx
  KIRQL v44; // al
  unsigned __int64 v45; // rbx
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // r9
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // r8
  __int64 v51; // rdx
  _QWORD *v52; // rcx
  _QWORD *v53; // rax
  _QWORD ***v54; // rax
  __int64 v55; // rax
  unsigned __int64 v56; // rbx
  __int64 v57; // rbx
  unsigned int v58; // [rsp+50h] [rbp-B0h]
  int v59; // [rsp+54h] [rbp-ACh]
  int v60; // [rsp+58h] [rbp-A8h]
  unsigned int v61; // [rsp+5Ch] [rbp-A4h]
  _QWORD *v62; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD ***v63; // [rsp+68h] [rbp-98h]
  int v64; // [rsp+70h] [rbp-90h]
  int v65; // [rsp+74h] [rbp-8Ch]
  int v66; // [rsp+78h] [rbp-88h]
  unsigned __int64 v67; // [rsp+80h] [rbp-80h]
  unsigned __int64 v68; // [rsp+88h] [rbp-78h]
  ULONG_PTR v69; // [rsp+90h] [rbp-70h]
  unsigned __int64 *v70; // [rsp+98h] [rbp-68h]
  unsigned __int64 v71; // [rsp+A0h] [rbp-60h]
  unsigned int v72; // [rsp+A8h] [rbp-58h]
  __int64 v73; // [rsp+B0h] [rbp-50h]
  _QWORD **v74; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v75; // [rsp+C0h] [rbp-40h]
  __int64 v76; // [rsp+C8h] [rbp-38h]
  __int64 v77; // [rsp+D0h] [rbp-30h]
  _KPROCESS *Process; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v79; // [rsp+E0h] [rbp-20h]
  __int64 v80; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v81; // [rsp+F0h] [rbp-10h]
  _QWORD v82[12]; // [rsp+100h] [rbp+0h] BYREF

  v77 = a1;
  memset(v82, 0, sizeof(v82));
  v8 = *(unsigned int *)(a1 + 48);
  v66 = *(_DWORD *)(a1 + 48) & 0x2200000;
  v81 = 0LL;
  if ( a2 )
    v9 = a2 - 1;
  else
    v9 = MiComputePreferredNode(a1);
  v10 = *(unsigned __int8 *)(a1 + 32);
  v11 = (unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32;
  Process = KeGetCurrentThread()->ApcState.Process;
  v70 = &Process[1].ActiveProcessors.StaticBitmap[26];
  v12 = (((*(unsigned int *)(a1 + 28) | v11) << 12) | 0xFFF) + 1;
  v75 = (*(unsigned int *)(a1 + 24) | (unsigned __int64)(v10 << 32)) << 12;
  v13 = (v8 >> 19) & 3;
  v79 = (v12 - v75) >> 12;
  if ( LODWORD(MiVadPageSizes[v13]) == 16 )
  {
    v14 = 2;
    v15 = 2;
  }
  else if ( (v8 & 0xA00000) == 0xA00000 )
  {
    v14 = MiVadPageIndices[v13];
    v15 = v14;
  }
  else
  {
    v14 = 1;
    v15 = (((unsigned __int64)KeFeatureBits >> 37) & 1) == 0;
  }
  v61 = v14;
  MiInitializeLargePfnList(v82);
  v80 = a1;
  result = MiCreateLargePfnList((__int64)&v80, v16, v18, v17, a2, a3, a4, 0, v82);
  if ( (int)result >= 0 )
  {
    v21 = v75;
    v22 = *(unsigned int *)(a1 + 48);
    v65 = 0;
    v23 = 0LL;
    v60 = 0;
    v24 = 0LL;
    v59 = 0;
    v25 = 0LL;
    v26 = 17;
    v71 = 0LL;
    v27 = 0LL;
    v69 = 0LL;
    v28 = v75;
    v58 = 0;
    v72 = MmMakeProtectNotWriteCopy[(v22 >> 7) & 0x1F];
    v63 = (_QWORD ***)&v62;
    v62 = &v62;
    v67 = v75;
    v29 = ((v75 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v68 = v29;
    if ( v75 < v12 )
    {
      while ( 1 )
      {
        v30 = v15;
        if ( v15 <= v61 )
        {
          while ( 1 )
          {
            v31 = MiLargePageSizes[v30] << 12;
            if ( !(v28 % v31) && v12 - v28 >= v31 )
              break;
            if ( ++v30 > v61 )
              goto LABEL_22;
          }
          v32 = v30;
          do
          {
            if ( (_QWORD *)v82[3 * v32] != &v82[3 * v32] )
              break;
            ++v32;
          }
          while ( v32 <= v61 );
          if ( v32 > v61 )
          {
            MiDemotePfnListChain((__int64)v82, v30);
            v25 = v58;
            v29 = v68;
          }
          else
          {
            v30 = v32;
          }
        }
LABEL_22:
        v33 = (_QWORD **)&v82[3 * v30];
        v76 = 3LL * v30;
        v34 = *v33;
        v74 = v33;
        if ( (_QWORD **)v34[1] != v33 )
          goto LABEL_79;
        v35 = (_QWORD *)*v34;
        if ( *(_QWORD **)(*v34 + 8LL) != v34 )
          goto LABEL_79;
        *v33 = v35;
        v35[1] = v33;
        v36 = MiLargePageSizes[v30];
        --v82[3 * v30 + 2];
        v73 = v36;
        v37 = v63;
        v38 = 16LL;
        if ( v30 != 2 )
          v38 = 1LL;
        v64 = v38;
        if ( *v63 != &v62 )
LABEL_79:
          __fastfail(3u);
        v34[1] = v63;
        v39 = &v62;
        *v34 = &v62;
        v40 = v29;
        *v37 = v34;
        v63 = (_QWORD ***)v34;
        if ( v30 < 2 )
        {
          v41 = 2 - v30;
          do
          {
            v40 = ((v40 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            --v41;
          }
          while ( v41 );
          v33 = v74;
          v25 = v58;
        }
        if ( v60 || ((v40 ^ v27) & 0xFFFFFFFFFFFFF000uLL) != 0 )
          break;
LABEL_57:
        v45 = 0LL;
        v46 = (v73 << 12) + v67;
        v67 = v46;
        if ( v46 < v12 )
        {
          v47 = v12 - v46;
          if ( ((v40 + 8) & 0xFFF) != 0 )
            v48 = 512LL - (((unsigned int)(v40 + 8) >> 3) & 0x1FF);
          else
            v48 = 0LL;
          v49 = (v73 * (v48 / (unsigned int)v38)) << 12;
          if ( v49 > v47 )
            v49 = v47;
          v50 = v49 / (v73 << 12);
          if ( v50 )
          {
            v51 = v76;
            do
            {
              v52 = *v33;
              if ( *v33 == v33 )
                break;
              if ( (_QWORD **)v52[1] != v33 )
                goto LABEL_79;
              v53 = (_QWORD *)*v52;
              if ( *(_QWORD **)(*v52 + 8LL) != v52 )
                goto LABEL_79;
              *v33 = v53;
              v53[1] = v33;
              v54 = v63;
              --v82[v51 + 2];
              if ( *v54 != &v62 )
                goto LABEL_79;
              v52[1] = v54;
              *v52 = &v62;
              ++v45;
              *v54 = (_QWORD **)v52;
              v63 = (_QWORD ***)v52;
            }
            while ( v45 < v50 );
          }
        }
        MiInsertLargeUserMapping(v77, v29, &v62, v30, v72);
        v55 = v73 * v45;
        v56 = v45 + 1;
        v67 += v55 << 12;
        if ( v69 )
        {
          v58 += v56 * v64;
        }
        else
        {
          v69 = v40;
          v58 = v56 * v64;
        }
        v68 += 8 * v73 * v56;
        v65 += v56;
        if ( (v65 & 0xF) == 0 && MiWorkingSetIsContended((__int64)v70) || KeShouldYieldProcessor() )
          v60 = 1;
        v28 = v67;
        v27 = v40;
        v25 = v58;
        if ( v67 >= v12 )
        {
          v23 = v71;
          v21 = v75;
          v24 = v69;
          goto LABEL_81;
        }
        v29 = v68;
      }
      if ( v66 == 35651584 && (_DWORD)v25 )
      {
        MiFlushGraphicsPtes(v69, (unsigned int)v25);
        v69 = 0LL;
      }
      v42 = (__int64)v70;
      if ( v71 )
      {
        MiUnlockPageTableInternal((__int64)v70, v71);
        v71 = 0LL;
      }
      v43 = v59;
      if ( v60 )
        goto LABEL_41;
      if ( v59 == 1 )
      {
        if ( v30 )
          goto LABEL_41;
      }
      else if ( !v30 )
      {
LABEL_41:
        v60 = 0;
        if ( v26 != 17 )
        {
          if ( v59 == 1 )
            MiUnlockWorkingSetExclusive(v42, v26, (__int64)v39, v25);
          else
            MiUnlockWorkingSetShared(v42, v26);
          v26 = 17;
        }
LABEL_49:
        if ( !v30 )
        {
          v59 = 1;
          v26 = MiLockWorkingSetForLargeMapping(v42, v38, v9);
        }
        if ( v26 == 17 )
        {
          v59 = 0;
          v44 = MiLockWorkingSetShared(v42);
          v43 = 0;
          v26 = v44;
          goto LABEL_55;
        }
        v43 = v59;
LABEL_54:
        if ( v43 )
        {
LABEL_56:
          MiMakeSystemAddressValid(v40, 0LL, v9 + 1, v26, v43);
          v33 = v74;
          LODWORD(v38) = v64;
          v29 = v68;
          goto LABEL_57;
        }
LABEL_55:
        v71 = ((v40 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        goto LABEL_56;
      }
      if ( v26 != 17 )
        goto LABEL_54;
      goto LABEL_49;
    }
LABEL_81:
    if ( v66 == 35651584 && (_DWORD)v25 )
      MiFlushGraphicsPtes(v24, (unsigned int)v25);
    v57 = (__int64)v70;
    if ( v23 )
      MiUnlockPageTableInternal((__int64)v70, v23);
    if ( v26 != 17 )
    {
      if ( v59 == 1 )
        MiUnlockWorkingSetExclusive(v57, v26, v20, v25);
      else
        MiUnlockWorkingSetShared(v57, v26);
    }
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogPerfMemoryRangeEvent(v21, LODWORD(Process[1].Header.WaitListHead.Flink), 0x1Bu, v79);
    return 0LL;
  }
  return result;
}
