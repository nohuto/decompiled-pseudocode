/*
 * XREFs of KiForwardTick @ 0x140303740
 * Callers:
 *     KiUpdateTime @ 0x140304060 (KiUpdateTime.c)
 * Callees:
 *     KeAndGroupAffinityEx @ 0x140263350 (KeAndGroupAffinityEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x140293580 (KeGetProcessorIndexFromNumber.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402F4410 (KeRemoveProcessorAffinityEx.c)
 *     KiOrAffinityEx @ 0x1402FEC10 (KiOrAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x1402FFAC0 (KeCountSetBitsAffinityEx.c)
 *     KiCopyAffinityEx @ 0x140300030 (KiCopyAffinityEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall KiForwardTick(__int64 a1, unsigned int a2, __int64 a3, char a4, unsigned __int16 *a5)
{
  int v5; // r12d
  unsigned int v6; // r13d
  __int64 v7; // r15
  __int64 v9; // rdx
  unsigned int i; // r8d
  __int64 v11; // r11
  unsigned int v12; // r9d
  unsigned __int16 v13; // cx
  __int64 result; // rax
  unsigned int v15; // ebp
  unsigned __int16 v16; // dx
  unsigned __int16 *v17; // r14
  unsigned __int16 v18; // cx
  __int64 *v19; // r8
  __int64 v20; // r9
  int v21; // esi
  unsigned __int16 *v22; // rdi
  __int64 (__fastcall *v23)(_QWORD, _DWORD *, __int128 *, __int64, __int64 *); // rax
  int v24; // esi
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r10
  __int64 v28; // rdi
  unsigned int v29; // edi
  unsigned int v30; // ecx
  __int64 *v31; // r8
  __int64 v32; // rax
  unsigned __int16 v33; // si
  __int64 v34; // rax
  unsigned __int16 v35; // ax
  unsigned __int16 v36; // dx
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned int v39; // r9d
  unsigned __int16 v40; // dx
  int *v41; // r10
  unsigned __int16 v42; // r8
  __int64 v43; // rcx
  unsigned int v44; // r8d
  unsigned __int16 *v45; // rdx
  __int64 v46; // rcx
  unsigned __int16 v47; // dx
  unsigned __int16 v48; // cx
  unsigned __int16 v49; // cx
  unsigned __int16 v50; // dx
  __int64 v51; // rax
  __int16 v52; // r12
  unsigned __int64 v53; // r9
  unsigned __int16 v54; // r8
  unsigned __int64 v55; // rdx
  __int64 v56; // rcx
  unsigned __int16 v57; // cx
  __int64 (__fastcall *v58)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  unsigned __int64 v59; // r14
  __int64 v60; // rdi
  __int64 v61; // rcx
  unsigned int v62; // ecx
  __int64 v63; // rdx
  char v64; // bp
  unsigned __int16 v65; // di
  unsigned int v66; // ecx
  __int64 v67; // r9
  __int64 v68; // r8
  unsigned int *v69; // r14
  unsigned __int64 v70; // rsi
  unsigned __int8 v71; // r13
  ULONG ProcessorIndexFromNumber; // eax
  __int64 (__fastcall *v73)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  unsigned __int64 v74; // rdx
  __int64 (__fastcall *v75)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp-528h] BYREF
  int v77; // [rsp+34h] [rbp-524h]
  _DWORD v78[2]; // [rsp+38h] [rbp-520h] BYREF
  __int64 v79; // [rsp+40h] [rbp-518h] BYREF
  __int128 v80; // [rsp+48h] [rbp-510h] BYREF
  int v81; // [rsp+58h] [rbp-500h]
  _DWORD v82[2]; // [rsp+60h] [rbp-4F8h] BYREF
  _DWORD v83[2]; // [rsp+68h] [rbp-4F0h] BYREF
  _DWORD v84[2]; // [rsp+70h] [rbp-4E8h] BYREF
  _DWORD v85[2]; // [rsp+78h] [rbp-4E0h] BYREF
  _DWORD v86[2]; // [rsp+80h] [rbp-4D8h] BYREF
  _DWORD v87[2]; // [rsp+88h] [rbp-4D0h] BYREF
  __int128 v88; // [rsp+90h] [rbp-4C8h] BYREF
  __int64 v89; // [rsp+A0h] [rbp-4B8h]
  __int64 v90; // [rsp+A8h] [rbp-4B0h]
  __int128 v91; // [rsp+B0h] [rbp-4A8h] BYREF
  int v92; // [rsp+C0h] [rbp-498h]
  _QWORD v93[34]; // [rsp+D0h] [rbp-488h] BYREF
  int v94; // [rsp+1E0h] [rbp-378h] BYREF
  _DWORD v95[67]; // [rsp+1E4h] [rbp-374h] BYREF
  unsigned __int16 v96; // [rsp+2F0h] [rbp-268h]
  unsigned __int16 v97; // [rsp+2F2h] [rbp-266h]
  _DWORD v98[67]; // [rsp+2F4h] [rbp-264h] BYREF
  _BYTE v99[264]; // [rsp+400h] [rbp-158h] BYREF
  int v100; // [rsp+550h] [rbp-8h]

  v5 = a3;
  v79 = a3;
  v6 = a2;
  v78[0] = a2;
  v7 = a1;
  v90 = a1;
  memset(&v95[1], 0, 0x100uLL);
  if ( PoSkipTickMode == 2 )
    goto LABEL_10;
  v94 = 2097153;
  memset(v95, 0, 0x104uLL);
  memset(&v95[1], 0, 8uLL);
  LOWORD(v9) = 1;
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    v11 = KeNodeBlock[i];
    v12 = *(_DWORD *)(v11 + 16);
LABEL_4:
    LOWORD(v9) = v94;
    while ( v12 )
    {
      _BitScanForward((unsigned int *)&v25, v12);
      v77 = 0;
      v12 &= ~(1 << v25);
      v26 = *(_QWORD *)(v11 + 8 * v25 + 24);
      v27 = *(unsigned __int16 *)(v26 + 136);
      v28 = *(_QWORD *)(v26 + 64);
      if ( (unsigned __int16)v94 > (unsigned __int16)v27 )
        goto LABEL_27;
      if ( HIWORD(v94) > (unsigned __int16)v27 )
      {
        LOWORD(v94) = v27 + 1;
LABEL_27:
        *(_QWORD *)&v95[2 * v27 + 1] |= v28;
        goto LABEL_4;
      }
    }
  }
  v13 = 0;
  if ( !(_WORD)v9 )
    goto LABEL_10;
  while ( !*(_QWORD *)&v95[2 * v13 + 1] )
  {
    if ( ++v13 >= (unsigned __int16)v9 )
      goto LABEL_10;
  }
  v29 = a5[1];
  if ( (unsigned __int16)v9 > (unsigned __int16)v29 )
    LOWORD(v9) = a5[1];
  v30 = 0;
  if ( (_WORD)v9 )
  {
    v31 = (__int64 *)&v95[1];
    v30 = (unsigned __int16)v9;
    v9 = (unsigned __int16)v9;
    do
    {
      v32 = *v31++;
      *(__int64 *)((char *)v31 + (char *)a5 - (char *)&v95[1]) = ~v32;
      --v9;
    }
    while ( v9 );
  }
  *((_DWORD *)a5 + 1) = 0;
  v33 = v29;
  *a5 = v29;
  a5[1] = v29;
  if ( v30 < v29 )
  {
    do
    {
      v34 = v30++;
      *(_QWORD *)&a5[4 * v34 + 4] = -1LL;
      v29 = a5[1];
    }
    while ( v30 < v29 );
    v33 = *a5;
  }
  memset(v99, 0, sizeof(v99));
  a5[1] = v29;
  v35 = KeActiveProcessors[0];
  if ( v33 < LOWORD(KeActiveProcessors[0]) )
    v35 = v33;
  *a5 = v35;
  if ( v35 > (unsigned __int16)v29 )
  {
    *a5 = v29;
    v35 = v29;
  }
  v36 = 0;
  if ( v35 )
  {
    do
    {
      v37 = v36++;
      *(_QWORD *)&a5[4 * v37 + 4] &= *(_QWORD *)&KeActiveProcessors[2 * v37 + 2];
    }
    while ( v36 < *a5 );
  }
  if ( a5 != (unsigned __int16 *)v99 )
  {
    for ( *((_DWORD *)a5 + 1) = 0; v36 < a5[1]; *(_QWORD *)&a5[4 * v38 + 4] = 0LL )
      v38 = v36++;
  }
  if ( a4 )
    KiOrAffinityEx((char *)a5, KiGroupSchedulingOverQuotaMask, a5, a5[1]);
  if ( !KiSerializeTimerExpiration )
  {
    v64 = KiLastForwardedHand;
    v94 = 2097153;
    v65 = 0;
    memset(v95, 0, 0x104uLL);
    while ( 1 )
    {
      LOBYTE(v66) = v64 - 1;
      v67 = qword_140D07E98[2 * v65];
      do
      {
        v66 = (unsigned __int8)(v66 + 1);
        v68 = *(_QWORD *)(((unsigned __int64)v66 << 6) + v67);
        if ( (unsigned __int16)v94 > v65 )
          goto LABEL_105;
        if ( HIWORD(v94) > v65 )
        {
          LOWORD(v94) = v65 + 1;
LABEL_105:
          *(_QWORD *)&v95[2 * v65 + 1] |= v68;
        }
      }
      while ( v66 != (unsigned __int8)v5 );
      if ( ++v65 >= (unsigned __int16)KiActiveGroups )
      {
        KiOrAffinityEx((char *)a5, &v94, a5, a5[1]);
        break;
      }
    }
  }
  v39 = *a5;
  v40 = KeActiveProcessors[0];
  if ( (unsigned __int16)v39 < LOWORD(KeActiveProcessors[0]) )
  {
    v41 = KeActiveProcessors;
    v40 = *a5;
  }
  else
  {
    v41 = (int *)a5;
  }
  v42 = 0;
  if ( v40 )
  {
    while ( *(_QWORD *)&a5[4 * v42 + 4] == *(_QWORD *)&KeActiveProcessors[2 * v42 + 2] )
    {
      if ( ++v42 >= v40 )
        goto LABEL_112;
    }
  }
  else
  {
LABEL_112:
    if ( v42 >= *(_WORD *)v41 )
    {
LABEL_10:
      result = a5[1];
      v15 = 1;
      v16 = KeActiveProcessors[0];
      v77 = 1;
      v17 = 0LL;
      if ( LOWORD(KeActiveProcessors[0]) > (unsigned __int16)result )
        v16 = result;
      *a5 = v16;
      v18 = 0;
      *((_DWORD *)a5 + 1) = 0;
      if ( v16 )
      {
        v19 = qword_140D06E48;
        v20 = v16;
        v18 = v16;
        do
        {
          *(__int64 *)((char *)v19 + (char *)a5 - (char *)qword_140D06E48 + 8) = *v19;
          ++v19;
          --v20;
        }
        while ( v20 );
        result = a5[1];
      }
      if ( v18 < (unsigned __int16)result )
      {
        do
        {
          result = v18++;
          *(_QWORD *)&a5[4 * result + 4] = 0LL;
        }
        while ( v18 < a5[1] );
      }
      goto LABEL_18;
    }
    while ( !*(_QWORD *)&v41[2 * v42 + 2] )
    {
      if ( ++v42 >= *(_WORD *)v41 )
        goto LABEL_10;
    }
  }
  result = 0x140000000uLL;
  v43 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(v7 + 36)] >> 6;
  v44 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(v7 + 36)] & 0x3F;
  if ( v39 > (unsigned int)v43 )
  {
    v45 = &a5[4 * v43];
    result = v44;
    v46 = *((_QWORD *)v45 + 1);
    _bittestandreset64(&v46, v44);
    *((_QWORD *)v45 + 1) = v46;
  }
  if ( PoSkipTickMode )
  {
    result = KeCountSetBitsAffinityEx(a5);
    if ( (unsigned int)result > 3 )
      goto LABEL_10;
  }
  v47 = *a5;
  v15 = 0;
  v77 = 0;
  v17 = a5;
  v48 = 0;
  if ( !v47 )
    goto LABEL_95;
  while ( 1 )
  {
    result = v48;
    if ( *(_QWORD *)&a5[4 * v48 + 4] )
      break;
    if ( ++v48 >= v47 )
      goto LABEL_95;
  }
LABEL_18:
  if ( KiClockTimerPerCpuTickScheduling )
    goto LABEL_95;
  v92 = 0;
  v91 = 0LL;
  if ( v15 )
  {
    v17 = (unsigned __int16 *)*((_QWORD *)&v91 + 1);
    v21 = 4;
  }
  else
  {
    if ( !v17 || (v57 = 0, !*v17) )
    {
LABEL_125:
      v24 = -1073741811;
LABEL_126:
      KeBugCheckEx(0x5Cu, 0x201uLL, HalpInterruptController, v24, v15);
    }
    while ( !*(_QWORD *)&v17[4 * v57 + 4] )
    {
      if ( ++v57 >= *v17 )
        goto LABEL_125;
    }
    v21 = 2;
    *((_QWORD *)&v91 + 1) = v17;
  }
  memset(v93, 0, 0x108uLL);
  v22 = (unsigned __int16 *)v93;
  LODWORD(v89) = 0;
  v88 = 0LL;
  if ( v21 != 4 )
  {
    v22 = v17;
    goto LABEL_60;
  }
  if ( (*(_DWORD *)(HalpInterruptController + 228) & 0x20) == 0 || HalpInterruptNoShorthand )
  {
    LODWORD(v93[0]) = 2097153;
    memset((char *)v93 + 4, 0, 0x104uLL);
    KiCopyAffinityEx((__int64)v93, 0x20u, (unsigned __int16 *)KeActiveProcessors);
    KeRemoveProcessorAffinityEx((unsigned __int16 *)v93, KeGetPcr()->Prcb.Number);
LABEL_60:
    v91 = 0LL;
    memset(v98, 0, 0x104uLL);
    v81 = 0;
    v24 = 0;
    v80 = 0LL;
    if ( qword_140C4C528 )
    {
      result = qword_140C4C528(v22, 210LL);
      v24 = result;
      goto LABEL_93;
    }
    v97 = 32;
    memset(&v98[1], 0, 0x100uLL);
    v49 = HalpInterruptPhysicalTargets;
    if ( (unsigned __int16)HalpInterruptPhysicalTargets >= *v22 )
      v49 = *v22;
    result = v97;
    v96 = v49;
    if ( v49 > v97 )
    {
      v96 = v97;
      v49 = v97;
    }
    v50 = 0;
    if ( v49 )
    {
      do
      {
        v51 = v50++;
        *(_QWORD *)&v98[2 * v51 + 1] = *(_QWORD *)&v22[4 * v51 + 4] & qword_140C4DD68[v51];
      }
      while ( v50 < v96 );
      result = v97;
    }
    v98[0] = 0;
    if ( v50 < (unsigned __int16)result )
    {
      do
      {
        result = v50++;
        *(_QWORD *)&v98[2 * result + 1] = 0LL;
      }
      while ( v50 < v97 );
    }
    v52 = v100;
    if ( HalpInterruptClusterModeEnabled )
    {
      v69 = (unsigned int *)HalpInterruptClusterData;
      ProcNumber = 0;
      if ( HalpInterruptClusterData < (unsigned __int64)HalpInterruptClusterDataEnd )
      {
        do
        {
          result = KeAndGroupAffinityEx(v22, (__int64)(v69 + 2), (char *)&v91);
          if ( (_DWORD)result )
          {
            v70 = v91;
            v71 = 0;
            LODWORD(v80) = 6;
            *((_QWORD *)&v80 + 1) = *v69;
            ProcNumber.Group = WORD4(v91);
            for ( ProcNumber.Number = 0; v70; ProcNumber.Number = v71 )
            {
              if ( (v70 & 1) != 0 )
              {
                ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
                HIDWORD(v80) |= *(_DWORD *)(HalpInterruptTargets + 24LL * ProcessorIndexFromNumber + 12);
              }
              ++v71;
              v70 >>= 1;
            }
            v82[0] = -1;
            v83[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
            v83[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
            v82[1] = 1;
            v73 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController
                                                                                            + 120);
            _disable();
            result = v73(*(_QWORD *)(HalpInterruptController + 16), v83, &v80, 210LL, v82);
            v24 = result;
            if ( (v52 & 0x200) != 0 )
              _enable();
            if ( (int)result < 0 )
              goto LABEL_91;
          }
          v69 += 6;
        }
        while ( (unsigned __int64)v69 < HalpInterruptClusterDataEnd );
      }
    }
    else if ( !HalpInterruptPhysicalModeOnly )
    {
      v53 = *((_QWORD *)v22 + 1);
      v54 = 0;
      LODWORD(v80) = 5;
      DWORD2(v80) = 0;
      while ( v53 )
      {
LABEL_74:
        _BitScanForward64(&v55, v53);
        v53 &= ~(1LL << v55);
        v56 = (unsigned __int8)v55 + (v54 << 6);
        result = HalpInterruptTargets;
        if ( *(_DWORD *)(HalpInterruptTargets + 24LL * (unsigned int)KiProcessorNumberToIndexMappingTable[v56]) == 5 )
        {
          result = *(unsigned int *)(HalpInterruptTargets
                                   + 24LL * (unsigned int)KiProcessorNumberToIndexMappingTable[v56]
                                   + 8);
          DWORD2(v80) |= result;
        }
      }
      while ( ++v54 < *v22 )
      {
        result = v54;
        v53 = *(_QWORD *)&v22[4 * v54 + 4];
        if ( v53 )
          goto LABEL_74;
      }
      if ( DWORD2(v80) )
      {
        v84[0] = -1;
        v84[1] = 1;
        v85[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
        v85[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
        v58 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
        _disable();
        result = v58(*(_QWORD *)(HalpInterruptController + 16), v85, &v80, 210LL, v84);
        v24 = result;
        if ( (v52 & 0x200) != 0 )
          _enable();
        if ( (int)result < 0 )
          goto LABEL_92;
      }
    }
    v59 = *(_QWORD *)&v98[1];
    LOWORD(v60) = 0;
    while ( v59 )
    {
LABEL_140:
      _BitScanForward64(&v74, v59);
      LODWORD(v80) = 4;
      v59 &= ~(1LL << v74);
      DWORD2(v80) = *(_DWORD *)(HalpInterruptTargets
                              + 24LL
                              * (unsigned int)KiProcessorNumberToIndexMappingTable[64 * (unsigned __int16)v60
                                                                                 + (unsigned __int8)v74]
                              + 8);
      v87[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
      v87[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
      v75 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
      v86[0] = -1;
      v86[1] = 1;
      _disable();
      result = v75(*(_QWORD *)(HalpInterruptController + 16), v87, &v80, 210LL, v86);
      v24 = result;
      if ( (v52 & 0x200) != 0 )
        _enable();
      if ( (int)result < 0 )
        goto LABEL_90;
    }
    while ( 1 )
    {
      v60 = (unsigned __int16)(v60 + 1);
      if ( (unsigned int)v60 >= v96 )
        break;
      v59 = *(_QWORD *)&v98[2 * v60 + 1];
      if ( v59 )
        goto LABEL_140;
    }
LABEL_90:
    v15 = v77;
LABEL_91:
    v6 = v78[0];
LABEL_92:
    v5 = v79;
    goto LABEL_93;
  }
  LODWORD(v88) = 2;
  v79 = 0x1FFFFFFFFLL;
  v78[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
  v78[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
  v23 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, __int64 *))(HalpInterruptController + 120);
  _disable();
  result = v23(*(_QWORD *)(HalpInterruptController + 16), v78, &v88, 210LL, &v79);
  v24 = result;
  if ( (v100 & 0x200) != 0 )
    _enable();
LABEL_93:
  if ( v24 < 0 )
    goto LABEL_126;
  v7 = v90;
  KiLastForwardedHand = v5;
LABEL_95:
  if ( (_BYTE)KdDebuggerEnabled )
  {
    v61 = (unsigned int)KiPollSlotNext;
    result = (unsigned int)(KiPollSlotNext + 1);
    KiPollSlot = KiPollSlotNext;
    KiPollSlotNext = result;
    if ( (unsigned int)result >= v6 )
      KiPollSlotNext = 0;
    if ( (_DWORD)v61 != *(_DWORD *)(v7 + 36) )
    {
      v62 = KiProcessorIndexToNumberMappingTable[v61];
      result = *a5;
      v63 = v62 >> 6;
      if ( (unsigned int)v63 >= (unsigned int)result || ((*(_QWORD *)&a5[4 * v63 + 4] >> (v62 & 0x3F)) & 1) == 0 )
        KiPollSlot = *(_DWORD *)(v7 + 36);
    }
  }
  return result;
}
