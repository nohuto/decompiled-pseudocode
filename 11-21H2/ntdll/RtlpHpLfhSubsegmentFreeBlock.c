/*
 * XREFs of RtlpHpLfhSubsegmentFreeBlock @ 0x180028470
 * Callers:
 *     RtlpHpFreeHeap @ 0x180027850 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180027BF0 (RtlpFreeHeapInternal.c)
 *     RtlpHpLfhSlotAllocate @ 0x18002A1C0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpSegFree @ 0x18002E414 (RtlpHpSegFree.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpScheduleCompaction @ 0x18001B788 (RtlpHpScheduleCompaction.c)
 *     RtlpHpLfhSubsegmentFindEmptyUnits @ 0x180025B64 (RtlpHpLfhSubsegmentFindEmptyUnits.c)
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x18005F81C (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x180079258 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhSubsegmentSetOwner @ 0x1800822D0 (RtlpHpLfhSubsegmentSetOwner.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpLogHeapFailure @ 0x18011F650 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentFreeBlock(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // r10d
  unsigned int v5; // r15d
  __int64 v6; // r14
  unsigned __int64 v7; // rsi
  signed __int64 v8; // r13
  unsigned int v9; // ebx
  unsigned int v10; // edx
  __int64 v11; // rcx
  unsigned int v12; // eax
  char v13; // cl
  unsigned __int64 v14; // r11
  int v15; // edx
  unsigned __int16 v16; // ax
  unsigned int v17; // ecx
  unsigned __int64 v18; // r8
  char v19; // cl
  unsigned int v20; // r10d
  __int64 v21; // r8
  __int64 v22; // r11
  char *v23; // r9
  __int64 v24; // rdi
  char *v25; // rcx
  int v26; // edx
  signed __int16 v27; // ax
  int v28; // ebp
  int v29; // esi
  unsigned __int16 v30; // dx
  signed __int64 v32; // rdi
  _RTL_SRWLOCK *v33; // r12
  int v34; // r10d
  char v35; // al
  signed __int64 v36; // rcx
  _QWORD *v37; // r9
  __int64 *v38; // rax
  _QWORD *v39; // rdx
  __int64 v40; // r8
  _QWORD *v41; // rcx
  __int64 *v42; // rcx
  _RTL_SRWLOCK *v43; // rbx
  unsigned int v44; // ebp
  unsigned int v45; // edi
  int v46; // ebx
  int v47; // eax
  int v48; // ebp
  int v49; // r12d
  __int64 v50; // rdx
  __int64 v51; // r8
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rbp
  unsigned __int64 v54; // rsi
  char v55; // cl
  unsigned int v56; // edi
  unsigned int v57; // esi
  __int64 v58; // r8
  __int64 v59; // rcx
  bool v60; // zf
  signed __int64 v61; // rax
  int v62[22]; // [rsp+30h] [rbp-58h] BYREF
  int EmptyUnits; // [rsp+98h] [rbp+10h]
  unsigned int v65; // [rsp+A0h] [rbp+18h] BYREF
  int v66; // [rsp+A8h] [rbp+20h]

  v66 = a4;
  v4 = a3;
  v5 = 0;
  v6 = a2;
  v7 = a1;
  v8 = 0LL;
  v9 = qword_18017AC08 ^ *(_DWORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12);
  if ( !a3 )
    goto LABEL_16;
  v10 = a3 - HIWORD(v9) - a2;
  v11 = *(_QWORD *)(a1
                  + 8LL * RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v9 + 15) >> 4]
                  + 128);
  v12 = *(_DWORD *)(v11 + 72);
  v13 = *(_BYTE *)(v11 + 76);
  if ( v12 )
  {
    v14 = (v10 * (unsigned __int64)v12) >> v13;
    v15 = v10 - v14 * (unsigned __int16)v9;
  }
  else
  {
    LODWORD(v14) = v10 >> v13;
    v15 = ((1 << v13) - 1) & v10;
  }
  if ( v15 )
    return v5;
  v16 = *(_WORD *)(v6 + 36);
  v17 = 2 * v14;
  if ( v16 >= (unsigned __int16)v14 )
    v16 = v14;
  *(_WORD *)(v6 + 36) = v16;
  v18 = v6 + 8 * ((unsigned __int64)v17 >> 6);
  _m_prefetchw((const void *)(v18 + 48));
  if ( (((unsigned __int64)_InterlockedAnd64((volatile signed __int64 *)(v18 + 48), ~(3LL << (v17 & 0x3F))) >> (v17 & 0x3F)) & 1) == 0 )
  {
    RtlpLogHeapFailure(17, *(_QWORD *)v7, v4, v6, (unsigned int)v14, 0LL);
    return v5;
  }
  if ( *(_BYTE *)(v6 + 45) <= 1u )
    goto LABEL_16;
  v19 = *(_BYTE *)(v6 + 44);
  v20 = v4 - v6;
  v21 = v20 >> v19;
  v22 = 2 * v21;
  v23 = (char *)(2 * v21 + v6 + *(unsigned __int16 *)(v6 + 46));
  _m_prefetchw(v23);
  LODWORD(v24) = -1;
  v25 = &v23[2 * ((((unsigned __int16)v9 + v20 - 1) >> v19) - (unsigned int)v21) + 2];
  v26 = 0;
  if ( v23 >= v25 )
    goto LABEL_16;
  do
  {
    v27 = _InterlockedDecrement16((volatile signed __int16 *)v23);
    if ( v27 )
    {
      if ( v27 == -1 )
        --v26;
    }
    else
    {
      ++v26;
      if ( (_DWORD)v24 == -1 )
        v24 = v22 >> 1;
    }
    v23 += 2;
    v22 += 2LL;
  }
  while ( v23 < v25 );
  if ( v26 && (RtlpHpLfhPerfFlags & 0x20) != 0 )
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(*(__int16 *)(v7 + 58) + v7 + 24),
      (v26 << *(_BYTE *)(v6 + 44)) / 4096);
  if ( (_DWORD)v24 == -1 )
    goto LABEL_16;
  v48 = 0;
  if ( (int)v24 < 0 )
  {
    LODWORD(v24) = 1;
    v49 = 1;
  }
  else
  {
    v49 = 0;
  }
  if ( (RtlpHpLfhPerfFlags & 0x20) == 0 || v49 || (v50 = *(_QWORD *)v7, (*(_BYTE *)(*(_QWORD *)v7 + 13LL) & 8) != 0) )
  {
LABEL_85:
    if ( (unsigned int)v24 < *(unsigned __int8 *)(v6 + 45) )
    {
      do
      {
        EmptyUnits = RtlpHpLfhSubsegmentFindEmptyUnits(v6, v24, &v65);
        if ( EmptyUnits == -1 )
          break;
        if ( v65 < 2 )
        {
          if ( !v49 )
            break;
          LODWORD(v24) = v65 + EmptyUnits;
        }
        else if ( v48 )
        {
          v55 = *(_BYTE *)(v6 + 44);
          v56 = v65 << v55;
          v57 = EmptyUnits << v55;
          ((void (__fastcall *)(_QWORD, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 32)))(
            *(_QWORD *)a1,
            v6 + (unsigned int)(EmptyUnits << v55),
            v65 << v55);
          v58 = v57;
          v7 = a1;
          RtlpHpLfhSubsegmentDecBlockCounts(a1, v6, v58, v56);
          if ( !v49 )
            goto LABEL_98;
          LODWORD(v24) = EmptyUnits + v65;
        }
        else
        {
          LODWORD(v24) = EmptyUnits;
          if ( (v66 & 1) == 0 )
            RtlAcquireSRWLockShared((PRTL_SRWLOCK)(v7 + 72));
          v48 = 2;
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v6 + 24));
        }
      }
      while ( (unsigned int)v24 < *(unsigned __int8 *)(v6 + 45) );
      if ( !v48 )
        goto LABEL_16;
LABEL_98:
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v6 + 24));
      if ( (v66 & 1) == 0 )
        RtlReleaseSRWLockShared((PRTL_SRWLOCK)(v7 + 72));
    }
    goto LABEL_16;
  }
  v51 = *(__int16 *)(v50 + 22);
  v52 = *(_QWORD *)(v51 + v50 + 8) >> *(_BYTE *)(v50 + 11);
  if ( v52 <= 8 )
    v52 = 8LL;
  v53 = *(_QWORD *)(v51 + v50 + 8) >> *(_BYTE *)(v50 + 12);
  if ( v53 <= 8 )
    v53 = 8LL;
  v54 = *(_QWORD *)(v51 + v50 + 16) + *(_QWORD *)(v51 + v50 + 24);
  if ( v54 > v52 && (int)RtlpHpScheduleCompaction() < 0 || v54 > v53 )
  {
    v7 = a1;
    v48 = 0;
    goto LABEL_85;
  }
LABEL_16:
  v28 = *(unsigned __int16 *)(v6 + 34);
  LOWORD(v29) = *(_WORD *)(v6 + 32);
  do
  {
    if ( !v8 && (!(_WORD)v29 || (unsigned __int16)v29 == v28 - 1) )
    {
      v32 = *(_QWORD *)(v6 + 16);
      while ( 1 )
      {
        while ( !v32 )
        {
          v61 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 16), 3LL, 0LL);
          v60 = v61 == 0;
LABEL_109:
          v32 = v61;
          if ( v60 )
            return 1;
        }
        if ( (v32 & 1) != 0 )
        {
          v61 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v6 + 16),
                  v32 & 1 | (v32 + 2) & 0xFFFFFFFFFFFFFFFEuLL,
                  v32);
          v60 = v32 == v61;
          goto LABEL_109;
        }
        v33 = (_RTL_SRWLOCK *)(v32 + 16);
        v8 = v32;
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v32 + 16));
        v32 = *(_QWORD *)(v6 + 16);
        if ( v8 == v32 )
          break;
        RtlReleaseSRWLockExclusive(v33);
      }
    }
    v30 = v29 + 1;
    v29 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)(v6 + 32), v29 + 1, v29);
  }
  while ( v30 != v29 + 1 );
  if ( (_WORD)v29 )
  {
    if ( v29 != v28 - 1 )
      goto LABEL_23;
    v34 = 2;
  }
  else
  {
    v34 = 0;
  }
  v35 = *(_BYTE *)(v6 + 38);
  switch ( v35 )
  {
    case 1:
      v36 = v8 + 40;
      goto LABEL_35;
    case 0:
      v36 = v8 + 24;
      v37 = (_QWORD *)(v8 + 8);
      goto LABEL_36;
    case 2:
      v36 = 0LL;
LABEL_35:
      v37 = 0LL;
LABEL_36:
      if ( v34 )
      {
        v38 = 0LL;
        v39 = 0LL;
      }
      else
      {
        v38 = (__int64 *)(v8 + 24);
        v39 = (_QWORD *)(v8 + 8);
      }
      if ( v36 )
      {
        v40 = *(_QWORD *)v6;
        if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) == v6 )
        {
          v41 = *(_QWORD **)(v6 + 8);
          if ( *v41 == v6 )
          {
            *v41 = v40;
            *(_QWORD *)(v40 + 8) = v41;
            if ( v37 )
              --*v37;
            goto LABEL_43;
          }
        }
LABEL_119:
        __fastfail(3u);
      }
LABEL_43:
      *(_BYTE *)(v6 + 38) = v34;
      if ( v38 )
      {
        v42 = (__int64 *)v38[1];
        if ( (__int64 *)*v42 != v38 )
          goto LABEL_119;
        *(_QWORD *)v6 = v38;
        *(_QWORD *)(v6 + 8) = v42;
        *v42 = v6;
        v38[1] = v6;
        if ( v39 )
          ++*v39;
        v6 = 0LL;
      }
      if ( (*(_BYTE *)v8 & 1) == 0 && *(_QWORD *)(v8 + 8) > 8uLL )
      {
        v6 = *v38;
        if ( *(__int64 **)(*v38 + 8) != v38 )
          goto LABEL_119;
        v59 = *(_QWORD *)v6;
        if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 )
          goto LABEL_119;
        *v38 = v59;
        *(_QWORD *)(v59 + 8) = v38;
        --*v39;
        *(_BYTE *)(v6 + 38) = 2;
      }
      if ( v6 && *(_BYTE *)(v6 + 38) == 2 )
        *(_QWORD *)(v6 + 16) = 0LL;
      break;
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v8 + 16));
  v8 = 0LL;
  if ( v6 )
  {
    v43 = *(_RTL_SRWLOCK **)(a1
                           + 8LL
                           * RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v9 + 15) >> 4]
                           + 128);
    if ( *(_WORD *)(v6 + 32) == *(_WORD *)(v6 + 34)
      || ((RtlAcquireSRWLockExclusive(v43 + 2),
           RtlpHpLfhSubsegmentSetOwner(v6, v43),
           *(_WORD *)(v6 + 32) == *(_WORD *)(v6 + 34))
        ? (*(_QWORD *)(v6 + 16) = 0LL)
        : (v6 = RtlpHpLfhOwnerMoveSubsegment(v43, v6, 0LL)),
          RtlReleaseSRWLockExclusive(v43 + 2),
          v6) )
    {
      _InterlockedDecrement64((volatile signed __int64 *)&v43[8]);
      v44 = v66 & 1;
      _InterlockedExchangeAdd64((volatile signed __int64 *)&v43[7], -*(__int16 *)(v6 + 34));
      v45 = *(unsigned __int8 *)(v6 + 45);
      v46 = 0;
      if ( *(_BYTE *)(v6 + 45) )
      {
        do
        {
          v47 = RtlpHpLfhSubsegmentFindEmptyUnits(v6, v5, v62);
          if ( v47 == -1 )
            break;
          v46 += v62[0];
          v5 = v62[0] + v47;
        }
        while ( v62[0] + v47 < v45 );
        if ( v46 && (RtlpHpLfhPerfFlags & 0x20) != 0 )
          _InterlockedExchangeAdd64(
            (volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24),
            -(__int64)((unsigned __int64)(unsigned int)(v46 << *(_BYTE *)(v6 + 44)) >> 12));
      }
      ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 16)))(
        *(_QWORD *)a1,
        v6,
        *(unsigned __int8 *)(v6 + 45) << *(_BYTE *)(v6 + 44),
        v44);
    }
  }
LABEL_23:
  v5 = 1;
  if ( v8 )
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v8 + 16));
  return v5;
}
