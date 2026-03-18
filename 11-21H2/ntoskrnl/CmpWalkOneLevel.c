/*
 * XREFs of CmpWalkOneLevel @ 0x1407C8AE0
 * Callers:
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     CmpDoBuildVirtualStack @ 0x140916918 (CmpDoBuildVirtualStack.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     NLS_UPCASE @ 0x1403477B0 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     CmpRecordParseFailure @ 0x14068038C (CmpRecordParseFailure.c)
 *     CmpDeleteHive @ 0x1406BBAD8 (CmpDeleteHive.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpFindKcbInHashEntryByName @ 0x1406D2154 (CmpFindKcbInHashEntryByName.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x1406DAD3C (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpUnlockHashEntry @ 0x14071B8C0 (CmpUnlockHashEntry.c)
 *     CmpLockHashEntryShared @ 0x14071B930 (CmpLockHashEntryShared.c)
 *     CmpDereferenceKeyControlBlock @ 0x14071BF40 (CmpDereferenceKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14071C0FC (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpGetKcbAtLayerHeight @ 0x140721CE0 (CmpGetKcbAtLayerHeight.c)
 *     CmEqualTrans @ 0x140721FD0 (CmEqualTrans.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140722534 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpPopulateKcbStack @ 0x1407C063C (CmpPopulateKcbStack.c)
 *     CmpCreateKeyControlBlock @ 0x1407C3850 (CmpCreateKeyControlBlock.c)
 *     CmpDoCompareKeyName @ 0x1407C4460 (CmpDoCompareKeyName.c)
 *     CmpFindSubKeyInRoot @ 0x1407C5F80 (CmpFindSubKeyInRoot.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1407CD270 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmListGetNextElement @ 0x140AB4218 (CmListGetNextElement.c)
 *     CmpLockKcbShared @ 0x140AB42D0 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140AB4300 (CmpUnlockKcb.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 */

__int64 __fastcall CmpWalkOneLevel(
        __int64 a1,
        __int64 a2,
        ULONG_PTR *a3,
        __int64 a4,
        bool *a5,
        __m128i *a6,
        int a7,
        ULONG_PTR a8,
        __int64 a9,
        char a10,
        __int64 a11)
{
  __int64 v13; // r13
  __int16 v14; // si
  UNICODE_STRING *v15; // r12
  __int64 KcbAtLayerHeight; // rdi
  volatile signed __int64 *KcbInHashEntryByName; // rax
  __int64 v18; // r15
  __int16 v19; // r14
  __int64 v20; // r15
  __int64 v21; // rsi
  ULONG_PTR v22; // rsi
  ULONG_PTR v23; // rdi
  signed __int32 v24; // eax
  signed __int32 v25; // ett
  unsigned __int16 v26; // cx
  __int16 v27; // si
  __int16 v28; // r14
  __int16 v29; // di
  __int64 v30; // rcx
  __int64 v31; // rdx
  int v32; // edx
  int SubKeyInLeafWithStatus; // esi
  volatile signed __int64 *v34; // r13
  __int16 j; // di
  __int64 v36; // rcx
  __int64 NextElement; // rax
  __int64 v38; // r9
  int v39; // ecx
  __int64 v40; // rdx
  ULONG_PTR v41; // rdx
  char v42; // r8
  ULONG_PTR v43; // r14
  ULONG_PTR v44; // rdx
  int v45; // eax
  ULONG_PTR v46; // rcx
  __int64 CellFlat; // rax
  __int64 v48; // rcx
  __int64 v49; // r15
  ULONG_PTR v50; // rcx
  __int64 CellPaged; // rax
  unsigned int v52; // r8d
  ULONG_PTR v53; // rcx
  __int64 v54; // rsi
  ULONG_PTR v55; // r13
  unsigned int v56; // r14d
  _WORD *v57; // rax
  _WORD *v58; // r15
  __int64 v59; // rax
  __m128i *v60; // rcx
  int v61; // r12d
  __int16 v62; // ax
  unsigned __int16 *v63; // r10
  __int64 v64; // r11
  unsigned __int16 v65; // dx
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned __int16 v67; // dx
  unsigned __int16 v68; // si
  int v69; // eax
  int v70; // eax
  __int64 v71; // rcx
  __int64 v72; // rax
  int KeyControlBlock; // eax
  __int16 v74; // ax
  __int16 v75; // r12
  __int64 v76; // rdi
  __int64 v77; // rbx
  __int64 v78; // rbx
  ULONG_PTR v79; // rcx
  int v81; // [rsp+30h] [rbp-91h]
  __int16 v82; // [rsp+50h] [rbp-71h]
  __int16 v83; // [rsp+52h] [rbp-6Fh]
  __int16 v84; // [rsp+54h] [rbp-6Dh]
  ULONG_PTR v85; // [rsp+58h] [rbp-69h] BYREF
  ULONG_PTR v86; // [rsp+60h] [rbp-61h]
  __int64 v87; // [rsp+68h] [rbp-59h] BYREF
  __int64 v88; // [rsp+70h] [rbp-51h] BYREF
  __int16 i; // [rsp+78h] [rbp-49h]
  int v90; // [rsp+7Ch] [rbp-45h]
  __int64 v91; // [rsp+80h] [rbp-41h]
  int v92; // [rsp+88h] [rbp-39h]
  ULONG_PTR v93; // [rsp+90h] [rbp-31h]
  int v94; // [rsp+98h] [rbp-29h] BYREF
  __int64 v95; // [rsp+A0h] [rbp-21h] BYREF
  ULONG_PTR v96; // [rsp+A8h] [rbp-19h]
  __m128i v97; // [rsp+B0h] [rbp-11h]

  v88 = 0LL;
  v93 = 0LL;
  v13 = a2;
  HvpGetCellContextReinitialize(&v88);
  v14 = *(_WORD *)(a1 + 66) - 1;
  v15 = (UNICODE_STRING *)a6;
  v82 = -1;
  v86 = 0LL;
  if ( v14 < 0 )
  {
LABEL_4:
    *(_WORD *)(a4 + 2) = -1;
    v19 = 0;
  }
  else
  {
    while ( 1 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v13, v14);
      CmpLockHashEntryShared(*(_QWORD *)(KcbAtLayerHeight + 32), (unsigned int)a8);
      KcbInHashEntryByName = (volatile signed __int64 *)CmpFindKcbInHashEntryByName(
                                                          *(_QWORD *)(KcbAtLayerHeight + 32),
                                                          a8,
                                                          KcbAtLayerHeight,
                                                          (__int64)a6);
      v86 = (ULONG_PTR)KcbInHashEntryByName;
      v18 = (__int64)KcbInHashEntryByName;
      if ( KcbInHashEntryByName )
        break;
      CmpUnlockHashEntry(*(_QWORD **)(KcbAtLayerHeight + 32), a8);
      if ( --v14 < 0 )
        goto LABEL_4;
    }
    CmpReferenceKeyControlBlockLockNotHeld(KcbInHashEntryByName);
    CmpUnlockHashEntry(*(_QWORD **)(KcbAtLayerHeight + 32), a8);
    CmpPopulateKcbStack(a4, v18);
    v19 = *(_WORD *)(v18 + 66) + 1;
  }
  v20 = a1;
  v84 = v19;
  if ( v19 <= *(__int16 *)(a1 + 66) )
  {
    do
    {
      if ( v19 < 2 )
        v21 = *(_QWORD *)(v13 + 8LL * v19 + 8);
      else
        v21 = *(_QWORD *)(*(_QWORD *)(v13 + 24) + 8LL * v19 - 16);
      v22 = *(_QWORD *)(v21 + 32);
      v23 = *(_QWORD *)(v22 + 1648)
          + 24
          * (((101027 * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) ^ ((unsigned __int64)(101027
                                                                                          * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) >> 9)) & (unsigned int)(*(_DWORD *)(v22 + 1656) - 1));
      ExAcquirePushLockExclusiveEx(v23, 0LL);
      *(_QWORD *)(v23 + 8) = KeGetCurrentThread();
      _m_prefetchw((const void *)(v22 + 4232));
      v24 = *(_DWORD *)(v22 + 4232);
      if ( !v24 )
LABEL_165:
        KeBugCheckEx(0x51u, 0x17uLL, v22, 0xCuLL, (unsigned int)a8);
      while ( 1 )
      {
        v25 = v24;
        v24 = _InterlockedCompareExchange((volatile signed __int32 *)(v22 + 4232), v24 + 1, v24);
        if ( v25 == v24 )
          break;
        if ( !v24 )
          goto LABEL_165;
      }
      v82 = v19++;
    }
    while ( v19 <= *(__int16 *)(a1 + 66) );
    v20 = a1;
  }
  v26 = *(_WORD *)(v13 + 2);
  v27 = 0;
  v28 = v82;
  v29 = 0;
  for ( i = v82; v29 <= (__int16)v26; ++v29 )
  {
    if ( v29 < 2 )
      v30 = *(_QWORD *)(v13 + 8LL * v29 + 8);
    else
      v30 = *(_QWORD *)(*(_QWORD *)(v13 + 24) + 8LL * v29 - 16);
    CmpLockKcbShared(v30);
    v26 = *(_WORD *)(v13 + 2);
  }
  v95 = 0LL;
  if ( (v26 & 0x8000u) != 0 )
    goto LABEL_29;
  while ( 1 )
  {
    if ( v26 < 2u )
      v31 = *(_QWORD *)(v13 + 8LL * v26 + 8);
    else
      v31 = *(_QWORD *)(*(_QWORD *)(v13 + 24) + 8LL * v26 - 16);
    if ( *(_WORD *)(v31 + 66) && *(_BYTE *)(v31 + 65) == 1 )
      goto LABEL_29;
    if ( *(_DWORD *)(v31 + 40) != -1 )
      break;
    if ( (--v26 & 0x8000u) != 0 )
      goto LABEL_29;
  }
  if ( a9 )
  {
    NextElement = CmListGetNextElement(*(_QWORD *)(v13 + 8) + 208LL, &v95, 32LL);
    if ( NextElement )
    {
      do
      {
        v39 = *(_DWORD *)(NextElement + 68);
        if ( v39 == 2 || v39 == 11 )
          break;
        NextElement = CmListGetNextElement(v38 + 208, &v95, 32LL);
      }
      while ( NextElement );
      if ( CmEqualTrans(*(_QWORD *)(NextElement + 56), a9) )
      {
LABEL_29:
        v32 = 328192;
LABEL_30:
        SubKeyInLeafWithStatus = -1073741772;
        CmpRecordParseFailure(a11, v32, -1073741772);
LABEL_31:
        v34 = (volatile signed __int64 *)v86;
        goto LABEL_32;
      }
    }
  }
  v40 = *(_QWORD *)(v20 + 240);
  if ( v40 && !CmEqualTrans(a9, v40) )
  {
    v32 = 328448;
    goto LABEL_30;
  }
  if ( (*(_DWORD *)(v20 + 184) & 0x20000) != 0 )
  {
    v32 = 328704;
    goto LABEL_30;
  }
  if ( (*(_DWORD *)(a11 + 160) & 1) == 0 )
  {
    CmpAttachToRegistryProcess(a11 + 168);
    *(_DWORD *)(a11 + 160) |= 1u;
  }
  v41 = v86;
  if ( v86 )
    v27 = *(_WORD *)(v86 + 66) + 1;
  v42 = a10;
  v83 = v27;
  if ( v27 > *(__int16 *)(v20 + 66) )
    goto LABEL_148;
  while ( 2 )
  {
    if ( v27 < 2 )
      v43 = *(_QWORD *)(v13 + 8LL * v27 + 8);
    else
      v43 = *(_QWORD *)(*(_QWORD *)(v13 + 24) + 8LL * v27 - 16);
    v44 = *(unsigned int *)(v43 + 40);
    v96 = v43;
    if ( (_DWORD)v44 == -1 )
    {
      v45 = -1;
LABEL_130:
      if ( *(_WORD *)(v20 + 66) || v42 )
        goto LABEL_135;
      SubKeyInLeafWithStatus = -1073741772;
      v28 = v82;
      v72 = *(unsigned __int8 *)(a11 + 258);
      if ( (unsigned __int8)v72 < 4u )
      {
        *(_DWORD *)(a11 + 8 * v72 + 260) = -1073741772;
        *(_DWORD *)(a11 + 8LL * (unsigned __int8)(*(_BYTE *)(a11 + 258))++ + 264) = 329216;
      }
      goto LABEL_31;
    }
    v46 = *(_QWORD *)(v43 + 32);
    if ( (*(_BYTE *)(v46 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(v46, v44, &v88);
    else
      CellFlat = HvpGetCellPaged(v46);
    v48 = *(_QWORD *)(v43 + 32);
    v49 = CellFlat;
    v91 = CellFlat;
    if ( (*(_DWORD *)(v48 + 160) & 0x8001) == 0
      && (*(_BYTE *)(CellFlat + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0 )
    {
      if ( (*(_BYTE *)(v48 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v48, &v88);
      else
        HvpReleaseCellPaged(v48, &v88);
      ExAcquirePushLockSharedEx(*(_QWORD *)(v43 + 32) + 72LL, 0LL);
      v50 = *(_QWORD *)(v43 + 32);
      if ( (*(_BYTE *)(v50 + 140) & 1) != 0 )
        CellPaged = HvpGetCellFlat(v50, *(unsigned int *)(v43 + 40), &v88);
      else
        CellPaged = HvpGetCellPaged(v50);
      v52 = *(_DWORD *)(v43 + 40);
      v53 = *(_QWORD *)(v43 + 32);
      v49 = CellPaged;
      v91 = CellPaged;
      CmpUpdateKeyNodeAccessBits(v53, CellPaged, v52);
      v54 = *(_QWORD *)(v43 + 32);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v54 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v54 + 72));
      KeAbPostRelease(v54 + 72);
    }
    v55 = *(_QWORD *)(v43 + 32);
    v87 = 0xFFFFFFFFLL;
    SubKeyInLeafWithStatus = -1073741772;
    LODWORD(v85) = 0;
    v56 = 0;
    v94 = 0;
    v92 = -1;
    v90 = 0;
    if ( !*(_DWORD *)(v55 + 216) )
      goto LABEL_122;
    while ( !*(_DWORD *)(v49 + 4LL * v56 + 20) )
    {
LABEL_113:
      v90 = ++v56;
      if ( v56 >= *(_DWORD *)(v55 + 216) )
        goto LABEL_122;
    }
    if ( (*(_BYTE *)(v55 + 140) & 1) != 0 )
      v57 = (_WORD *)HvpGetCellFlat(v55, *(unsigned int *)(v49 + 4LL * v56 + 28), &v87);
    else
      v57 = (_WORD *)HvpGetCellPaged(v55);
    v58 = v57;
    if ( !v57 )
    {
LABEL_121:
      SubKeyInLeafWithStatus = -1073741670;
      goto LABEL_122;
    }
    if ( *v57 != 26994 )
      goto LABEL_87;
    if ( (int)CmpFindSubKeyInRoot(v55, (__int64)v57, v15, 0LL, (int *)&v85) >= 0 )
    {
      if ( (*(_BYTE *)(v55 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v55, &v87);
      else
        HvpReleaseCellPaged(v55, &v87);
      if ( (_DWORD)v85 == -1 )
      {
LABEL_112:
        v49 = v91;
        goto LABEL_113;
      }
      if ( (*(_BYTE *)(v55 + 140) & 1) != 0 )
        v59 = HvpGetCellFlat(v55, (unsigned int)v85, &v87);
      else
        v59 = HvpGetCellPaged(v55);
      v58 = (_WORD *)v59;
      if ( !v59 )
        goto LABEL_121;
LABEL_87:
      if ( *v58 == 26732 )
      {
        v60 = a6;
        v61 = 0;
        v62 = _mm_cvtsi128_si32(*a6);
        v97 = *a6;
        if ( v62 )
        {
          v63 = (unsigned __int16 *)v97.m128i_i64[1];
          v64 = (unsigned __int16)(((unsigned __int16)(v62 - 1) >> 1) + 1);
          do
          {
            v65 = *v63;
            if ( *v63 >= 0x61u )
            {
              if ( v65 <= 0x7Au )
              {
                v65 -= 32;
              }
              else
              {
                CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
                v65 = NLS_UPCASE(CurrentServerSiloGlobals[154], v67);
              }
            }
            ++v63;
            v61 = v65 + 37 * v61;
            --v64;
          }
          while ( v64 );
          v60 = a6;
          v97.m128i_i64[1] = (__int64)v63;
        }
        LODWORD(v85) = -1;
        v68 = 0;
        if ( v58[1] )
        {
          while ( 1 )
          {
            if ( v61 == *(_DWORD *)&v58[4 * v68 + 4] )
            {
              v69 = CmpDoCompareKeyName(v55, v60, 0LL, *(unsigned int *)&v58[4 * v68 + 2]);
              if ( v69 == 2 )
              {
                v15 = (UNICODE_STRING *)a6;
                SubKeyInLeafWithStatus = -1073741670;
                goto LABEL_118;
              }
              if ( !v69 )
              {
                v70 = *(_DWORD *)&v58[4 * v68 + 2];
                v56 = v90;
                SubKeyInLeafWithStatus = 0;
                v15 = (UNICODE_STRING *)a6;
                LODWORD(v85) = v70;
                goto LABEL_108;
              }
            }
            if ( ++v68 >= v58[1] )
            {
              v56 = v90;
              break;
            }
            v60 = a6;
          }
        }
        v15 = (UNICODE_STRING *)a6;
        SubKeyInLeafWithStatus = -1073741772;
      }
      else
      {
        SubKeyInLeafWithStatus = CmpFindSubKeyInLeafWithStatus(v55, v58, v15, 0LL, &v85, &v94, v81);
        if ( (int)(SubKeyInLeafWithStatus + 0x80000000) >= 0 && SubKeyInLeafWithStatus != -1073741772 )
          goto LABEL_118;
        v70 = v85;
LABEL_108:
        if ( v70 != -1 )
        {
          v92 = v70;
          SubKeyInLeafWithStatus = 0;
          goto LABEL_118;
        }
      }
      if ( (*(_BYTE *)(v55 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v55, &v87);
      else
        HvpReleaseCellPaged(v55, &v87);
      goto LABEL_112;
    }
    SubKeyInLeafWithStatus = -1073741670;
LABEL_118:
    if ( (*(_BYTE *)(v55 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v55, &v87);
    else
      HvpReleaseCellPaged(v55, &v87);
LABEL_122:
    v43 = v96;
    v71 = *(_QWORD *)(v96 + 32);
    if ( (*(_BYTE *)(v71 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v71, &v88);
    else
      HvpReleaseCellPaged(v71, &v88);
    if ( SubKeyInLeafWithStatus == -1073741772 )
    {
      v45 = -1;
      goto LABEL_129;
    }
    if ( SubKeyInLeafWithStatus < 0 )
    {
      CmpRecordParseFailure(a11, 328960, SubKeyInLeafWithStatus);
      v28 = v82;
      goto LABEL_31;
    }
    v45 = v92;
    if ( v92 == -1 )
    {
LABEL_129:
      v42 = a10;
      v20 = a1;
      goto LABEL_130;
    }
    v20 = a1;
LABEL_135:
    v34 = (volatile signed __int64 *)v86;
    v81 = a7;
    KeyControlBlock = CmpCreateKeyControlBlock(*(_QWORD *)(v43 + 32), v45, v43, v86, 0, &v15->Length);
    SubKeyInLeafWithStatus = KeyControlBlock;
    if ( KeyControlBlock < 0 )
    {
      CmpRecordParseFailure(a11, 329472, KeyControlBlock);
      v28 = v82;
    }
    else
    {
      if ( v34 )
        CmpDereferenceKeyControlBlockUnsafe(v34);
      v41 = v93;
      v93 = 0LL;
      v86 = v41;
      ++*(_WORD *)(a4 + 2);
      if ( v83 < 2 )
        *(_QWORD *)(a4 + 8LL * v83 + 8) = v41;
      else
        *(_QWORD *)(*(_QWORD *)(a4 + 24) + 8LL * v83 - 16) = v41;
      v74 = *(_WORD *)(v20 + 66);
      if ( v83 != v74 )
      {
        CmpUnlockHashEntry(*(_QWORD **)(v43 + 32), a8);
        ++v84;
        v74 = *(_WORD *)(v20 + 66);
        v41 = v86;
      }
      v42 = a10;
      v27 = v83 + 1;
      v83 = v27;
      if ( v27 <= v74 )
      {
        v13 = a2;
        continue;
      }
      v28 = v82;
LABEL_148:
      --v28;
      if ( !v42 )
        v28 = i;
      *a5 = v42 != 0;
      SubKeyInLeafWithStatus = 0;
      v34 = 0LL;
      v82 = v28;
      v86 = 0LL;
      *a3 = v41;
    }
    break;
  }
LABEL_32:
  for ( j = 0; j <= *(__int16 *)(a2 + 2); ++j )
  {
    if ( j < 2 )
      v36 = *(_QWORD *)(a2 + 8LL * j + 8);
    else
      v36 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL * j - 16);
    CmpUnlockKcb(v36);
  }
  v75 = v84;
  if ( v84 <= v28 )
  {
    v76 = 8LL * v84 - 16;
    do
    {
      if ( v75 < 2 )
        v77 = *(_QWORD *)(a2 + v76 + 24);
      else
        v77 = *(_QWORD *)(v76 + *(_QWORD *)(a2 + 24));
      v78 = *(_QWORD *)(v77 + 32);
      v79 = *(_QWORD *)(v78 + 1648)
          + 24
          * (((101027 * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) ^ ((unsigned __int64)(101027
                                                                                          * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) >> 9)) & (unsigned int)(*(_DWORD *)(v78 + 1656) - 1));
      *(_QWORD *)(v79 + 8) = 0LL;
      ExReleasePushLockEx(v79, 0LL);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v78 + 4232), 0xFFFFFFFF) == 1 )
        CmpDeleteHive((_QWORD *)v78);
      ++v75;
      v76 += 8LL;
    }
    while ( v75 <= v82 );
    v34 = (volatile signed __int64 *)v86;
  }
  if ( v34 )
    CmpDereferenceKeyControlBlock((ULONG_PTR)v34);
  return (unsigned int)SubKeyInLeafWithStatus;
}
