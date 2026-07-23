/*
 * XREFs of KiCommitRescheduleContextEntry @ 0x140242F60
 * Callers:
 *     KiDeferredReadySingleThread @ 0x14023A3A0 (KiDeferredReadySingleThread.c)
 *     KiSearchForNewThread @ 0x140240420 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140240D60 (KiSearchForNewThreadOnProcessor.c)
 *     KiExecuteAllDpcs @ 0x140244590 (KiExecuteAllDpcs.c)
 *     KeYieldExecution @ 0x140246AC0 (KeYieldExecution.c)
 *     KiEnterLongDpcProcessing @ 0x140247AD0 (KiEnterLongDpcProcessing.c)
 *     KiSetPriorityThread @ 0x1402B0860 (KiSetPriorityThread.c)
 *     KiDirectSwitchThread @ 0x1402B1B30 (KiDirectSwitchThread.c)
 *     KiRemoveBoostThread @ 0x1402BB4E0 (KiRemoveBoostThread.c)
 *     KiCommitRescheduleContext @ 0x140308804 (KiCommitRescheduleContext.c)
 *     KiApplyForegroundBoostThread @ 0x140350678 (KiApplyForegroundBoostThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KiEnterDeferredReadyState @ 0x1402B9420 (KiEnterDeferredReadyState.c)
 *     KiIsThreadRankNonZero @ 0x140309270 (KiIsThreadRankNonZero.c)
 *     KiSetProcessorIdle @ 0x1403815CC (KiSetProcessorIdle.c)
 *     KiSetSchedulerAssistPriority @ 0x140410704 (KiSetSchedulerAssistPriority.c)
 */

char __fastcall KiCommitRescheduleContextEntry(__int64 *a1, __int64 a2, char a3, _QWORD *a4)
{
  __int64 v4; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rdi
  char v8; // r11
  __int64 v9; // r8
  __int64 v11; // rcx
  int v12; // ebp
  int v13; // r13d
  __int64 v14; // r10
  __int64 v15; // rcx
  __int64 v16; // r15
  char v17; // dl
  char v18; // bl
  char v19; // bl
  char v20; // al
  __int64 v21; // rcx
  _BYTE *v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rax
  _QWORD *v25; // r15
  char v27; // al
  char v28; // al
  char v29; // bl
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // r10
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rdx
  char v39; // bl
  __int64 v40; // rcx
  __int64 v41; // rbx
  char v42; // r9
  __int64 v43; // rax
  __int64 v44; // rcx
  _BYTE *v45; // r15
  __int64 v46; // rbx
  char v47; // cl
  char v48; // al
  __int64 v49; // rcx
  __int64 v50; // rcx
  _QWORD *v51; // rcx
  __int64 v52; // rdx
  char v53; // bl
  __int64 v54; // rcx
  __int64 v55; // rbx
  __int64 v56; // rax
  char v57; // cl
  __int64 v58; // r8
  _BYTE *v59; // rbx
  char IsThreadRankNonZero; // al
  char v61; // cl
  char v62; // al
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // r8
  unsigned int v66; // edx
  char v67; // al
  char v68; // al
  char v69; // cl
  __int64 v70; // rdx
  unsigned int v71; // edx
  char v72; // al
  char v73; // al
  char v74; // cl
  __int64 v75; // rcx
  char v76; // bl
  char v77; // al
  char v78; // dl
  char v79; // al
  char v80; // al
  __int64 v81; // rbx
  __int64 v82; // rcx
  __int64 v83; // rdx
  _BYTE *v84; // rax
  unsigned int v85; // edx
  char v86; // al
  char v87; // al
  char v88; // cl
  bool v89; // cf
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rdx
  unsigned int v93; // edx
  char v94; // al
  char v95; // al
  char v96; // cl
  char v97; // al
  char v98; // [rsp+20h] [rbp-78h]
  char v99; // [rsp+20h] [rbp-78h]
  char *v100; // [rsp+28h] [rbp-70h]
  __int64 v101; // [rsp+28h] [rbp-70h]
  __int64 v102; // [rsp+28h] [rbp-70h]
  _BYTE *v103; // [rsp+28h] [rbp-70h]
  char v104; // [rsp+30h] [rbp-68h]
  __int64 v105; // [rsp+38h] [rbp-60h] BYREF
  int v106; // [rsp+40h] [rbp-58h] BYREF
  int v107; // [rsp+44h] [rbp-54h] BYREF
  __int64 v108; // [rsp+48h] [rbp-50h]
  __int64 v109; // [rsp+50h] [rbp-48h]
  char v110; // [rsp+A0h] [rbp+8h]
  char v111; // [rsp+A0h] [rbp+8h]
  char v112; // [rsp+A0h] [rbp+8h]
  char v113; // [rsp+A0h] [rbp+8h]

  v4 = a1[3];
  v5 = a4;
  v6 = a1[2];
  LOBYTE(a4) = 0;
  v7 = *a1;
  v8 = a3;
  v105 = v6;
  v9 = a2;
  if ( v4 == -1 )
    return 0;
  if ( v4 == -2 )
  {
    v59 = *(_BYTE **)(v7 + 56);
    if ( (*(_BYTE *)(v6 + 2) & 4) == 0
      || (IsThreadRankNonZero = KiIsThreadRankNonZero(v6, v7), v61 = 1, !IsThreadRankNonZero) )
    {
      v61 = *(_BYTE *)(v6 + 195);
    }
    v62 = v61 & 0x7F | ((unsigned __int8)(*(_DWORD *)(v6 + 120) >> 1) << 7);
    *v59 = v62;
    v63 = *(_QWORD *)(v7 + 35000);
    if ( v63 )
    {
      if ( v6 == *(_QWORD *)(v7 + 24) )
        v64 = (unsigned int)KiVpThreadSystemWorkPriority;
      else
        v64 = v62 & 0x7F;
      KiSetSchedulerAssistPriority(v63, v64, 0LL);
    }
    v65 = *(_QWORD *)(v7 + 56);
    if ( KeHeteroSystem )
    {
      v66 = *(_DWORD *)(v6 + 80);
      v67 = (*(_BYTE *)(v6 + 512) ^ *(_BYTE *)(v65 + 64)) & 7 ^ *(_BYTE *)(v65 + 64);
      v68 = (v67 ^ (8 * *(_BYTE *)(v6 + 516))) & 0x38 ^ v67;
      if ( v66 <= *(_DWORD *)(v6 + 84) )
        v66 = *(_DWORD *)(v6 + 84);
      v69 = 64;
      if ( v66 < KiDynamicHeteroCpuPolicyExpectedCycles )
        v69 = 0;
      *(_BYTE *)(v65 + 64) = v69 | v68 & 0xBF;
    }
    return 0;
  }
  v11 = *(_QWORD *)(v7 + 16);
  v12 = 0;
  v13 = 0;
  v14 = 1LL;
  if ( v11 )
  {
    if ( *(_UNKNOWN **)(v11 + 544) == &KiInitialProcess )
    {
      v12 = v11 == *(_QWORD *)(v7 + 24);
    }
    else
    {
      if ( (*((_BYTE *)a1 + 34) & 2) == 0 )
        *(_BYTE *)(v11 + 565) = 1;
      if ( (*((_BYTE *)a1 + 34) & 1) == 0 )
      {
        KiEnterDeferredReadyState(v11);
        v51 += 27;
        *v51 = *v5;
        *v5 = v51;
      }
    }
  }
  else
  {
    v15 = *(_QWORD *)(v7 + 8);
    if ( (!v15 || *(_UNKNOWN **)(v15 + 544) != &KiInitialProcess)
      && *(_BYTE *)(v15 + 388) == 2
      && (*((_BYTE *)a1 + 34) & 2) == 0 )
    {
      *(_BYTE *)(v15 + 565) = 1;
    }
    v13 = 1;
    LOBYTE(v12) = v15 == *(_QWORD *)(v7 + 24);
  }
  if ( v12 != (unsigned __int8)(v14 & ~*(_BYTE *)(v7 + 35)) )
    goto LABEL_167;
  if ( v4 )
  {
    v16 = *(_QWORD *)(v7 + 34944);
    v17 = 2 * (v14 & *((_BYTE *)a1 + 33)) + 124;
    v110 = v17;
    v100 = *(char **)(v7 + 56);
    v18 = *v100;
    if ( v4 == v16 )
    {
      v75 = v105;
      if ( (*(_BYTE *)(v105 + 2) & 4) != 0 )
      {
        v77 = KiIsThreadRankNonZero(v105, v7);
        v75 = v105;
        v78 = 1;
        if ( !v77 )
          v78 = *(_BYTE *)(v105 + 195);
        v9 = a2;
        v8 = a3;
        v79 = v78 ^ v18;
        v17 = v110;
        v76 = v79 & 0x7F ^ v18;
        v14 = 1LL;
        LOBYTE(a4) = 0;
      }
      else
      {
        v76 = (*(_BYTE *)(v105 + 195) ^ v18) & 0x7F ^ v18;
      }
      v80 = v76 & 0x7F | ((unsigned __int8)(*(_DWORD *)(v75 + 120) >> 1) << 7);
      v81 = v105;
      *v100 = v80;
      v82 = *(_QWORD *)(v7 + 35000);
      if ( v82 )
      {
        if ( v81 == *(_QWORD *)(v7 + 24) )
          v83 = (unsigned int)KiVpThreadSystemWorkPriority;
        else
          v83 = v80 & 0x7F;
        KiSetSchedulerAssistPriority(v82, v83, 0LL);
        v9 = a2;
        v84 = (_BYTE *)(*(_QWORD *)(v7 + 56) + 64LL);
        v17 = v110;
        LOBYTE(a4) = 0;
      }
      else
      {
        v84 = (_BYTE *)(*(_QWORD *)(v7 + 56) + 64LL);
      }
      v103 = v84;
      if ( KeHeteroSystem )
      {
        v85 = *(_DWORD *)(v81 + 80);
        v86 = (*(_BYTE *)(v81 + 512) ^ *v84) & 7 ^ *v84;
        v87 = (v86 ^ (8 * *(_BYTE *)(v81 + 516))) & 0x38 ^ v86;
        if ( v85 <= *(_DWORD *)(v81 + 84) )
          v85 = *(_DWORD *)(v81 + 84);
        v88 = 64;
        v89 = v85 < KiDynamicHeteroCpuPolicyExpectedCycles;
        v17 = v110;
        if ( v89 )
          v88 = 0;
        *v103 = v88 | v87 & 0xBF;
      }
      v90 = *(_QWORD *)(v7 + 35000);
      v91 = *(_QWORD *)(v7 + 24);
      *(_QWORD *)(v7 + 16) = v16;
      if ( v90 )
        *(_BYTE *)(v90 + 16) = v16 == v91;
      if ( *(_BYTE *)(v16 + 388) == 1 || (v17 & 2) != 0 )
        *(_DWORD *)(v16 + 132) = *(_DWORD *)(v16 + 132) - *(_DWORD *)(v16 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v16 + 388) = 3;
    }
    else
    {
      if ( (*(_BYTE *)(v4 + 2) & 4) != 0 )
      {
        if ( (unsigned __int8)KiIsThreadRankNonZero(v4, v7) )
          v57 = 1;
        else
          v57 = *(_BYTE *)(v4 + 195);
        v9 = a2;
        v8 = a3;
        v17 = v110;
        v19 = (v57 ^ v18) & 0x7F ^ v18;
        v14 = 1LL;
        LOBYTE(a4) = 0;
      }
      else
      {
        v19 = (*(_BYTE *)(v4 + 195) ^ v18) & 0x7F ^ v18;
      }
      v20 = v19 & 0x7F | ((unsigned __int8)(*(_DWORD *)(v4 + 120) >> 1) << 7);
      *v100 = v20;
      v21 = *(_QWORD *)(v7 + 35000);
      if ( v21 )
      {
        if ( v4 == *(_QWORD *)(v7 + 24) )
          v92 = (unsigned int)KiVpThreadSystemWorkPriority;
        else
          v92 = v20 & 0x7F;
        KiSetSchedulerAssistPriority(v21, v92, 0LL);
        v9 = a2;
        v22 = (_BYTE *)(*(_QWORD *)(v7 + 56) + 64LL);
        v17 = v110;
        LOBYTE(a4) = 0;
      }
      else
      {
        v22 = (_BYTE *)(*(_QWORD *)(v7 + 56) + 64LL);
      }
      if ( KeHeteroSystem )
      {
        v93 = *(_DWORD *)(v4 + 80);
        v94 = (*(_BYTE *)(v4 + 512) ^ *v22) & 7 ^ *v22;
        v95 = (v94 ^ (8 * *(_BYTE *)(v4 + 516))) & 0x38 ^ v94;
        if ( v93 <= *(_DWORD *)(v4 + 84) )
          v93 = *(_DWORD *)(v4 + 84);
        v96 = 64;
        v89 = v93 < KiDynamicHeteroCpuPolicyExpectedCycles;
        v17 = v110;
        if ( v89 )
          v96 = 0;
        *v22 = v96 | v95 & 0xBF;
      }
      v23 = *(_QWORD *)(v7 + 35000);
      v24 = *(_QWORD *)(v7 + 24);
      *(_QWORD *)(v7 + 16) = v4;
      if ( v23 )
        *(_BYTE *)(v23 + 16) = v4 == v24;
      if ( *(_BYTE *)(v4 + 388) == 1 || (v17 & 2) != 0 )
        *(_DWORD *)(v4 + 132) = *(_DWORD *)(v4 + 132) - *(_DWORD *)(v4 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v4 + 388) = 3;
    }
    v25 = (_QWORD *)(v7 + 24);
    if ( v4 != *(_QWORD *)(v7 + 24) )
    {
      if ( !v12 )
        goto LABEL_23;
      v29 = *(_BYTE *)(v7 + 35);
      v30 = *(_QWORD *)(v7 + 192);
      v104 = *(_BYTE *)(v7 + 209);
      v31 = *(_QWORD *)(v7 + 34912);
      v109 = v14 << v104;
      v108 = v31;
      *(_BYTE *)(v7 + 13243) = 0;
      if ( (v29 & 1) == 0 )
      {
        LODWORD(v105) = 0;
        v111 = v29 | 1;
        *(_BYTE *)(v7 + 35) = v29 | 1;
        v32 = v30;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v32, 0LL) )
        {
          do
            KeYieldProcessorEx(&v105);
          while ( *(_QWORD *)v32 );
        }
        v33 = v32;
        if ( (v111 & 8) == 0 )
          *(_QWORD *)(v32 + 8) &= ~(1LL << v104);
        v34 = v109;
        v35 = v108;
        *(_QWORD *)(v32 + 16) &= ~(1LL << v104);
        v36 = ~v35;
        *(_QWORD *)(v32 + 24) &= v36;
        v37 = v36 & *(_QWORD *)(v32 + 40);
        if ( (v108 & ~*(_QWORD *)(v32 + 16)) == v34 )
          v37 |= v34;
        *(_QWORD *)(v32 + 40) = v37;
        *(_QWORD *)(v32 + 32) &= ~*(_QWORD *)(v7 + 34936);
        goto LABEL_44;
      }
LABEL_167:
      __fastfail(0x21u);
    }
    if ( v12 )
      LOBYTE(v14) = 0;
    if ( v9 == v7 && (v8 & 1) != 0 )
      LOBYTE(v14) = 0;
    v38 = *(_QWORD *)(v7 + 192);
    v39 = *(_BYTE *)(v7 + 35);
    v112 = *(_BYTE *)(v7 + 209);
    v40 = *(_QWORD *)(v7 + 35000);
    v101 = *(_QWORD *)(v7 + 34912);
    if ( v40 )
      *(_BYTE *)(v40 + 16) = 1;
    *(_BYTE *)(v7 + 13243) = v14;
    if ( (v39 & 1) == 0 )
      goto LABEL_23;
    v107 = 0;
    v98 = v39 & 0xFE;
    *(_BYTE *)(v7 + 35) = v39 & 0xFE;
    v41 = v38;
    while ( _interlockedbittestandset64((volatile signed __int32 *)v41, 0LL) )
    {
      do
        KeYieldProcessorEx(&v107);
      while ( *(_QWORD *)v41 );
    }
    v33 = v41;
    if ( (v98 & 8) == 0 )
      *(_QWORD *)(v41 + 8) |= 1LL << v112;
    v42 = v112;
    v43 = *(_QWORD *)(v41 + 16) | (1LL << v112);
    *(_QWORD *)(v41 + 16) = v43;
    if ( (v43 & v101) == v101 )
    {
      *(_QWORD *)(v41 + 24) |= v101;
    }
    else
    {
      v50 = v101 & ~v43;
      if ( ((v50 - 1) & v50) == 0 )
        *(_QWORD *)(v41 + 40) |= v50;
    }
  }
  else
  {
    v45 = *(_BYTE **)(v7 + 56);
    *(_QWORD *)(v7 + 16) = 0LL;
    v46 = a1[2];
    if ( (*(_BYTE *)(v46 + 2) & 4) != 0 )
    {
      if ( (unsigned __int8)KiIsThreadRankNonZero(a1[2], v7) )
        v47 = 1;
      else
        v47 = *(_BYTE *)(v46 + 195);
      v9 = a2;
      LOBYTE(a4) = 0;
      v8 = a3;
      LOBYTE(v14) = 1;
    }
    else
    {
      v47 = *(_BYTE *)(v46 + 195);
    }
    v48 = v47 & 0x7F | ((unsigned __int8)(*(_DWORD *)(v46 + 120) >> 1) << 7);
    *v45 = v48;
    v25 = (_QWORD *)(v7 + 24);
    v49 = *(_QWORD *)(v7 + 35000);
    if ( v49 )
    {
      if ( v46 == *v25 )
        v70 = (unsigned int)KiVpThreadSystemWorkPriority;
      else
        v70 = v48 & 0x7F;
      KiSetSchedulerAssistPriority(v49, v70, 0LL);
      v9 = a2;
      LOBYTE(a4) = 0;
    }
    if ( KeHeteroSystem )
    {
      v71 = *(_DWORD *)(v46 + 80);
      v72 = (*(_BYTE *)(v46 + 512) ^ *(_BYTE *)(*(_QWORD *)(v7 + 56) + 64LL)) & 7 ^ *(_BYTE *)(*(_QWORD *)(v7 + 56)
                                                                                             + 64LL);
      v73 = (v72 ^ (8 * *(_BYTE *)(v46 + 516))) & 0x38 ^ v72;
      if ( v71 <= *(_DWORD *)(v46 + 84) )
        v71 = *(_DWORD *)(v46 + 84);
      v74 = 64;
      if ( v71 < KiDynamicHeteroCpuPolicyExpectedCycles )
        v74 = 0;
      *(_BYTE *)(*(_QWORD *)(v7 + 56) + 64LL) = v74 | v73 & 0xBF;
    }
    if ( a1[2] != *v25 )
    {
      if ( v12 )
      {
        KiSetProcessorIdle(v7, 0LL, 0LL, a4);
        goto LABEL_45;
      }
      goto LABEL_23;
    }
    if ( v12 )
      LOBYTE(v14) = 0;
    if ( v9 == v7 && (v8 & 1) != 0 )
      LOBYTE(v14) = 0;
    v52 = *(_QWORD *)(v7 + 192);
    v53 = *(_BYTE *)(v7 + 35);
    v113 = *(_BYTE *)(v7 + 209);
    v54 = *(_QWORD *)(v7 + 35000);
    v102 = *(_QWORD *)(v7 + 34912);
    if ( v54 )
      *(_BYTE *)(v54 + 16) = 1;
    *(_BYTE *)(v7 + 13243) = v14;
    if ( (v53 & 1) == 0 )
      goto LABEL_23;
    v106 = 0;
    v99 = v53 & 0xFE;
    *(_BYTE *)(v7 + 35) = v53 & 0xFE;
    v55 = v52;
    while ( _interlockedbittestandset64((volatile signed __int32 *)v55, 0LL) )
    {
      do
        KeYieldProcessorEx(&v106);
      while ( *(_QWORD *)v55 );
    }
    v33 = v55;
    if ( (v99 & 8) == 0 )
      *(_QWORD *)(v55 + 8) |= 1LL << v113;
    v42 = v113;
    v56 = *(_QWORD *)(v55 + 16) | (1LL << v113);
    *(_QWORD *)(v55 + 16) = v56;
    if ( (v102 & v56) == v102 )
    {
      *(_QWORD *)(v55 + 24) |= v102;
    }
    else
    {
      v58 = v102 & ~v56;
      if ( ((v58 - 1) & v58) == 0 )
        *(_QWORD *)(v55 + 40) |= v58;
    }
  }
  *(_QWORD *)(v33 + 40) &= ~(1LL << v42);
  v44 = *(_QWORD *)(v7 + 34936);
  if ( (*(_QWORD *)(v33 + 16) & v44) != v44 )
  {
LABEL_44:
    _InterlockedAnd64((volatile signed __int64 *)v33, 0LL);
LABEL_45:
    v8 = a3;
    LOBYTE(a4) = 0;
    v9 = a2;
    goto LABEL_23;
  }
  *(_QWORD *)(v33 + 32) |= v44;
  _InterlockedAnd64((volatile signed __int64 *)v33, 0LL);
  v8 = a3;
  LOBYTE(a4) = 0;
  v9 = a2;
LABEL_23:
  if ( v13 && v9 != v7 )
  {
    v27 = *((_BYTE *)a1 + 35);
    if ( v12 )
      v28 = v27 | 8;
    else
      v28 = v27 | 0x10;
    *((_BYTE *)a1 + 35) = v28;
    LOBYTE(a4) = 1;
  }
  if ( v9 != v7 && v4 != *v25 && *(_QWORD *)(v9 + 35000) )
  {
    v97 = *(_BYTE *)(v4 + 195);
    LOBYTE(a4) = 1;
    *((_BYTE *)a1 + 35) |= 4u;
    *((_BYTE *)a1 + 36) = v97;
  }
  if ( (v8 & 2) != 0 )
  {
    if ( v4 )
    {
      _InterlockedIncrement16((volatile signed __int16 *)(v4 + 868));
      *((_BYTE *)a1 + 35) |= 3u;
      LOBYTE(a4) = 1;
    }
  }
  return (char)a4;
}
