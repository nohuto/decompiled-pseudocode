/*
 * XREFs of ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C00A3780
 * Callers:
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C00A17C0 (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C00A3620 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C00A5850 (-Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z.c)
 * Callees:
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1C0017578 (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E3CC (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pppppppqq_EtwWriteTransfer @ 0x1C00320F0 (McTemplateK0pppppppqq_EtwWriteTransfer.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C009FEC8 (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AccumulateZeroingState@VIDMM_RECYCLE_RANGE@@QEAAXPEAW4VIDMM_RECYCLE_RANGE_ZEROING_STATE@@@Z @ 0x1C00A3EC4 (-AccumulateZeroingState@VIDMM_RECYCLE_RANGE@@QEAAXPEAW4VIDMM_RECYCLE_RANGE_ZEROING_STATE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_MULTIRANGE::MergeRanges(
        VIDMM_RECYCLE_MULTIRANGE *this,
        struct VIDMM_RECYCLE_RANGE *a2,
        struct VIDMM_RECYCLE_RANGE *a3)
{
  struct VIDMM_RECYCLE_RANGE *v4; // rbx
  __int64 v5; // rax
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  char v12; // r12
  __int64 v13; // rdx
  struct VIDMM_RECYCLE_RANGE *v14; // r15
  __int64 v15; // rdx
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  int v18; // eax
  unsigned __int64 v19; // rcx
  signed __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  _QWORD *v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  VIDMM_RECYCLE_BLOCK *v27; // rcx
  bool v28; // zf
  __int64 v29; // rax
  _QWORD *v30; // rsi
  __int64 v31; // rdi
  int v32; // eax
  __int64 v33; // rax
  _QWORD *v34; // rbx
  CCHAR LeastSignificantBit; // al
  __int64 v36; // rax
  __int64 v37; // rdi
  _QWORD *v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rcx
  VIDMM_RECYCLE_BLOCK *v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rdx
  _QWORD *v44; // r8
  __int64 v45; // rax
  _QWORD *v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  _QWORD *v49; // rax
  unsigned __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  char v53; // [rsp+60h] [rbp-A8h]
  char v54; // [rsp+61h] [rbp-A7h]
  char v55; // [rsp+62h] [rbp-A6h]
  char v56; // [rsp+63h] [rbp-A5h]
  unsigned int v57; // [rsp+64h] [rbp-A4h]
  int v58; // [rsp+68h] [rbp-A0h] BYREF
  int v59; // [rsp+6Ch] [rbp-9Ch]
  __int64 v60; // [rsp+70h] [rbp-98h]
  __int64 v61; // [rsp+78h] [rbp-90h]
  __int64 v62; // [rsp+80h] [rbp-88h]
  __int64 v63; // [rsp+88h] [rbp-80h]
  __int64 v64; // [rsp+90h] [rbp-78h]
  _QWORD *v65; // [rsp+98h] [rbp-70h]
  _QWORD *v66; // [rsp+A0h] [rbp-68h]
  __int64 v67; // [rsp+A8h] [rbp-60h]
  bool v68; // [rsp+110h] [rbp+8h]
  bool v69; // [rsp+118h] [rbp+10h]
  bool v70; // [rsp+120h] [rbp+18h]
  bool v71; // [rsp+128h] [rbp+20h]

  v60 = *((_QWORD *)a2 + 4);
  v4 = a2;
  v5 = *((_QWORD *)a3 + 5);
  v7 = *((unsigned int *)a2 + 16);
  v61 = v5;
  v59 = *((_DWORD *)a2 + 23);
  v8 = *((_QWORD *)a2 + 17);
  v57 = v7;
  v62 = v8;
  v68 = 0;
  v53 = 0;
  if ( v8 )
  {
    v68 = *(_QWORD *)(v8 + 64) == (_QWORD)a2;
    if ( *(struct VIDMM_RECYCLE_RANGE **)(v8 + 72) == a3 )
    {
      v53 = 1;
      v68 = *(_QWORD *)(v8 + 64) == (_QWORD)a2;
    }
  }
  v9 = *((_QWORD *)a2 + 18);
  v63 = v9;
  v69 = 0;
  v54 = 0;
  if ( v9 )
  {
    v69 = *(_QWORD *)(v9 + 64) == (_QWORD)a2;
    if ( *(struct VIDMM_RECYCLE_RANGE **)(v9 + 72) == a3 )
    {
      v54 = 1;
      v69 = *(_QWORD *)(v9 + 64) == (_QWORD)a2;
    }
  }
  v10 = *((_QWORD *)a2 + 19);
  v64 = v10;
  v70 = 0;
  v55 = 0;
  if ( v10 )
  {
    v70 = *(_QWORD *)(v10 + 64) == (_QWORD)a2;
    if ( *(struct VIDMM_RECYCLE_RANGE **)(v10 + 72) == a3 )
    {
      v55 = 1;
      v70 = *(_QWORD *)(v10 + 64) == (_QWORD)a2;
    }
  }
  v11 = *((_QWORD *)a2 + 20);
  v65 = (_QWORD *)v11;
  v71 = 0;
  v56 = 0;
  if ( v11 )
  {
    v71 = *(_QWORD *)(v11 + 64) == (_QWORD)a2;
    if ( *(struct VIDMM_RECYCLE_RANGE **)(v11 + 72) == a3 )
    {
      v56 = 1;
      v71 = *(_QWORD *)(v11 + 64) == (_QWORD)a2;
    }
  }
  v66 = (_QWORD *)*((_QWORD *)a2 + 16);
  v67 = *((_QWORD *)a3 + 15);
  ++**((_QWORD **)this + 10);
  v12 = 0;
  v58 = *((_DWORD *)a2 + 20);
  while ( 1 )
  {
    v13 = *((_QWORD *)v4 + 15);
    v14 = 0LL;
    if ( v13 != *((_QWORD *)v4 + 9) + 72LL )
      v14 = (struct VIDMM_RECYCLE_RANGE *)(v13 - 120);
    if ( (unsigned int)(v7 - 3) <= 2 )
    {
      v15 = *((_QWORD *)v4 + 13);
      v16 = (_QWORD *)((char *)v4 + 104);
      if ( *(struct VIDMM_RECYCLE_RANGE **)(v15 + 8) != (struct VIDMM_RECYCLE_RANGE *)((char *)v4 + 104)
        || (v17 = (_QWORD *)*((_QWORD *)v4 + 14), (_QWORD *)*v17 != v16) )
      {
        __fastfail(3u);
      }
      *v17 = v15;
      *(_QWORD *)(v15 + 8) = v17;
      *v16 = 0LL;
      v18 = *((_DWORD *)v4 + 16);
      *((_QWORD *)v4 + 14) = 0LL;
      *((_QWORD *)v4 + 12) = 0LL;
      if ( v18 == 5 )
      {
        v19 = *((_QWORD *)v4 + 4) - *((_QWORD *)v4 + 5);
        v20 = _InterlockedExchangeAdd64(
                (volatile signed __int64 *)&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit,
                v19);
      }
      else
      {
        if ( (unsigned int)(v18 - 3) > 1 )
          goto LABEL_27;
        v19 = *((_QWORD *)v4 + 4) - *((_QWORD *)v4 + 5);
        v20 = _InterlockedExchangeAdd64(&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock, v19);
      }
      if ( (__int64)(v19 + v20) < 0 && g_IsInternalRelease )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      }
    }
LABEL_27:
    if ( v12 )
      VIDMM_RECYCLE_RANGE::AccumulateZeroingState(v4, (enum VIDMM_RECYCLE_RANGE_ZEROING_STATE *)&v58);
    else
      v12 = 1;
    v21 = *(_QWORD *)(*((_QWORD *)this + 10) + 32LL);
    v22 = *(_QWORD *)(v21 + 8);
    if ( (byte_1C0076982 & 2) != 0 )
      McTemplateK0p_EtwWriteTransfer(v21, &EventRecycleRangeDestroy, v7, v4);
    WdLogSingleEntry1(4LL, v4);
    v23 = *((_QWORD *)v4 + 9);
    v24 = *(_QWORD **)(v23 + 136);
    if ( v24 )
    {
      v25 = *v24 + 144LL * v24[1];
      *(_DWORD *)v25 = 1;
      *(_QWORD *)(v25 + 8) = v4;
      RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v25 + 16), 0LL);
      ++*(_QWORD *)(*(_QWORD *)(v23 + 136) + 8LL);
      v26 = *(_QWORD *)(v23 + 136);
      if ( *(_QWORD *)(v26 + 8) == *(_QWORD *)(v26 + 48) )
      {
        *(_QWORD *)(v26 + 8) = 0LL;
        *(_BYTE *)(*(_QWORD *)(v23 + 136) + 16LL) = 1;
      }
    }
    v27 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)v4 + 9);
    v28 = (*(_QWORD *)v27)-- == 1LL;
    if ( v28 && !*((_QWORD *)v27 + 1) )
      VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v27);
    *((_BYTE *)v4 + 168) = 1;
    v29 = *(unsigned int *)(v22 + 1616);
    if ( (unsigned int)v29 >= 4 )
    {
      ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v22 + 1312), v4);
    }
    else
    {
      *(_QWORD *)(v22 + 8 * v29 + 1624) = v4;
      ++*(_DWORD *)(v22 + 1616);
    }
    --*(_DWORD *)(v22 + 1688);
    if ( v4 == a3 )
      break;
    v7 = v57;
    v4 = v14;
  }
  v30 = (_QWORD *)*((_QWORD *)this + 10);
  v31 = *(_QWORD *)(v30[4] + 8LL);
  v32 = *(_DWORD *)(v31 + 1616);
  if ( v32 )
  {
    v33 = (unsigned int)(v32 - 1);
    v34 = *(_QWORD **)(v31 + 8 * v33 + 1624);
    *(_QWORD *)(v31 + 8 * v33 + 1624) = 0LL;
    --*(_DWORD *)(v31 + 1616);
  }
  else
  {
    v34 = ExAllocateFromLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v31 + 1312));
  }
  if ( v34 )
  {
    ++*(_DWORD *)(v31 + 1688);
    v34[4] = v60;
    v34[5] = v61;
    *((_DWORD *)v34 + 6) = 0;
    v34[9] = v30;
    *((_DWORD *)v34 + 16) = 0;
    v34[11] = 3LL;
    v34[12] = 0LL;
    ++*v30;
    LeastSignificantBit = RtlFindLeastSignificantBit(v34[4]);
    v36 = LeastSignificantBit < 0 ? 0LL : 1LL << LeastSignificantBit;
    v34[7] = v36;
    v37 = v34[9];
    v34[6] = 0LL;
    *((_DWORD *)v34 + 20) = 0;
    v34[13] = 0LL;
    v34[14] = 0LL;
    v34[15] = 0LL;
    v34[16] = 0LL;
    v34[17] = 0LL;
    v34[18] = 0LL;
    v34[19] = 0LL;
    v34[20] = 0LL;
    *((_BYTE *)v34 + 168) = 0;
    v38 = *(_QWORD **)(v37 + 136);
    if ( v38 )
    {
      v39 = *v38 + 144LL * v38[1];
      *(_DWORD *)v39 = 0;
      *(_QWORD *)(v39 + 8) = v34;
      RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v39 + 16), 0LL);
      ++*(_QWORD *)(*(_QWORD *)(v37 + 136) + 8LL);
      v40 = *(_QWORD *)(v37 + 136);
      if ( *(_QWORD *)(v40 + 8) == *(_QWORD *)(v40 + 48) )
      {
        *(_QWORD *)(v40 + 8) = 0LL;
        *(_BYTE *)(*(_QWORD *)(v37 + 136) + 16LL) = 1;
      }
    }
  }
  v41 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)this + 10);
  v28 = (*(_QWORD *)v41)-- == 1LL;
  if ( v28 && !*((_QWORD *)v41 + 1) )
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v41);
  v42 = v63;
  v43 = v64;
  v44 = v65;
  *((_DWORD *)v34 + 23) = v59;
  *((_DWORD *)v34 + 20) = v58;
  v45 = v62;
  v34[17] = v62;
  *((_DWORD *)v34 + 16) = v57;
  v34[18] = v42;
  v34[19] = v43;
  v34[20] = v44;
  if ( v68 )
    *(_QWORD *)(v45 + 64) = v34;
  if ( v53 )
    *(_QWORD *)(v45 + 72) = v34;
  if ( v69 )
    *(_QWORD *)(v42 + 64) = v34;
  if ( v54 )
    *(_QWORD *)(v42 + 72) = v34;
  if ( v70 )
    *(_QWORD *)(v43 + 64) = v34;
  if ( v55 )
    *(_QWORD *)(v43 + 72) = v34;
  if ( v71 )
    v44[8] = v34;
  if ( v56 )
    v44[9] = v34;
  v46 = v66;
  v34[16] = v66;
  *v46 = v34 + 15;
  v47 = v67;
  v34[15] = v67;
  *(_QWORD *)(v47 + 8) = v34 + 15;
  if ( v57 - 3 <= 1 )
  {
    v48 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL);
    v34[12] = *(_QWORD *)(v48 + 1576) + (unsigned int)dword_1C007647C;
    v49 = v34 + 13;
    v44 = *(_QWORD **)(v48 + 1552);
    if ( *v44 != v48 + 1544 )
      __fastfail(3u);
    *v49 = v48 + 1544;
    v34[14] = v44;
    *v44 = v49;
    *(_QWORD *)(v48 + 1552) = v49;
    if ( !_InterlockedExchange((volatile __int32 *)(v48 + 1536), 1) && !*(_DWORD *)(v48 + 1584) )
      KeSetTimer((PKTIMER)(v48 + 1376), (LARGE_INTEGER)-2000000LL, (PKDPC)(v48 + 1440));
    v50 = v34[5] - v34[4];
    if ( (__int64)(v50 + _InterlockedExchangeAdd64(&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock, v50)) < 0
      && g_IsInternalRelease )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    }
  }
  else if ( v57 == 5 )
  {
    VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(
      *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL),
      (struct VIDMM_RECYCLE_RANGE *)v34);
  }
  if ( (byte_1C0076982 & 2) != 0 )
  {
    v51 = *((_QWORD *)this + 10);
    v52 = *(_QWORD *)(v51 + 32);
    McTemplateK0pppppppqq_EtwWriteTransfer(
      v52,
      v51,
      (__int64)v44,
      **(_QWORD **)(*(_QWORD *)(v52 + 8) + 8LL),
      v34,
      v51,
      *(_QWORD *)(v51 + 56),
      v52,
      v34[4],
      v34[5],
      *(_DWORD *)v52,
      *((_DWORD *)v34 + 16));
  }
}
