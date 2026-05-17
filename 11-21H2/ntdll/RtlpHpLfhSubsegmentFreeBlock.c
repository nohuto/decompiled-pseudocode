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

__int64 __fastcall RtlpHpLfhSubsegmentFreeBlock(__int16 *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v5; // r15d
  __int64 v6; // r14
  __int16 *v7; // rsi
  signed __int64 v8; // r13
  unsigned int v9; // ebx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned int v12; // edx
  __int64 v13; // rcx
  unsigned int v14; // eax
  char v15; // cl
  unsigned __int64 v16; // r11
  int v17; // edx
  unsigned __int16 v18; // ax
  unsigned int v19; // ecx
  unsigned __int64 v20; // rax
  char v21; // cl
  char v22; // cl
  unsigned int v23; // r10d
  __int64 v24; // r11
  __int64 v25; // rdi
  unsigned __int64 v26; // rcx
  signed __int16 v27; // ax
  int v28; // ebp
  int v29; // esi
  signed __int64 v31; // rdi
  volatile signed __int64 *v32; // r12
  int v33; // r10d
  char v34; // al
  signed __int64 v35; // rcx
  _QWORD *v36; // r9
  __int64 *v37; // rax
  _QWORD *v38; // rdx
  __int64 v39; // r8
  _QWORD *v40; // rcx
  __int64 *v41; // rcx
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // r8
  unsigned __int64 v44; // r9
  volatile signed __int64 *v45; // rbx
  unsigned int v46; // ebp
  unsigned int v47; // edi
  int v48; // ebx
  int v49; // eax
  int v50; // ebp
  int v51; // r12d
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rbp
  unsigned __int64 v54; // rsi
  int v55; // kr00_4
  char v56; // cl
  unsigned int v57; // edi
  unsigned int v58; // esi
  __int64 v59; // r8
  __int64 v60; // rcx
  bool v61; // zf
  signed __int64 v62; // rax
  int v63[22]; // [rsp+30h] [rbp-58h] BYREF
  unsigned int EmptyUnits; // [rsp+98h] [rbp+10h]
  unsigned int v66; // [rsp+A0h] [rbp+18h] BYREF
  int v67; // [rsp+A8h] [rbp+20h]

  v67 = a4;
  v5 = 0;
  v6 = a2;
  v7 = a1;
  v8 = 0LL;
  v9 = qword_18017AC08 ^ *(_DWORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12);
  v10 = (unsigned __int64)RtlpLfhBucketIndexMap;
  v11 = HIWORD(v9);
  if ( !a3 )
    goto LABEL_16;
  v12 = a3 - v11 - v6;
  v13 = *(_QWORD *)&a1[4 * RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v9 + 15) >> 4] + 64];
  v14 = *(_DWORD *)(v13 + 72);
  v15 = *(_BYTE *)(v13 + 76);
  if ( v14 )
  {
    v16 = (v12 * (unsigned __int64)v14) >> v15;
    v17 = v12 - v16 * (unsigned __int16)v9;
  }
  else
  {
    LODWORD(v16) = v12 >> v15;
    v17 = ((1 << v15) - 1) & v12;
  }
  if ( v17 )
    return v5;
  v18 = *(_WORD *)(v6 + 36);
  v19 = 2 * v16;
  if ( v18 >= (unsigned __int16)v16 )
    v18 = v16;
  *(_WORD *)(v6 + 36) = v18;
  v20 = v19;
  v21 = v19 & 0x3F;
  a4 = ~(3LL << v21);
  v11 = v6 + 8 * (v20 >> 6);
  _m_prefetchw((const void *)(v11 + 48));
  if ( (((unsigned __int64)_InterlockedAnd64((volatile signed __int64 *)(v11 + 48), a4) >> v21) & 1) == 0 )
  {
    RtlpLogHeapFailure(17, *(_QWORD *)v7, a3, v6, (unsigned int)v16, 0LL);
    return v5;
  }
  if ( *(_BYTE *)(v6 + 45) <= 1u )
    goto LABEL_16;
  v22 = *(_BYTE *)(v6 + 44);
  v23 = a3 - v6;
  v11 = v23 >> v22;
  v24 = 2 * v11;
  a4 = 2 * v11 + v6 + *(unsigned __int16 *)(v6 + 46);
  _m_prefetchw((const void *)a4);
  LODWORD(v25) = -1;
  v26 = a4 + 2LL * ((((unsigned __int16)v9 + v23 - 1) >> v22) - (unsigned int)v11 + 1);
  v10 = 0LL;
  if ( a4 >= v26 )
    goto LABEL_16;
  do
  {
    v27 = _InterlockedDecrement16((volatile signed __int16 *)a4);
    if ( v27 )
    {
      if ( v27 == -1 )
        v10 = (unsigned int)(v10 - 1);
    }
    else
    {
      v10 = (unsigned int)(v10 + 1);
      if ( (_DWORD)v25 == -1 )
        v25 = v24 >> 1;
    }
    a4 += 2LL;
    v24 += 2LL;
  }
  while ( a4 < v26 );
  if ( (_DWORD)v10 && (RtlpHpLfhPerfFlags & 0x20) != 0 )
  {
    v55 = (_DWORD)v10 << *(_BYTE *)(v6 + 44);
    v10 = (v55 >> 31) & 0xFFF;
    _InterlockedExchangeAdd64((volatile signed __int64 *)((char *)v7 + v7[29] + 24), v55 / 4096);
  }
  if ( (_DWORD)v25 == -1 )
    goto LABEL_16;
  v50 = 0;
  if ( (int)v25 < 0 )
  {
    LODWORD(v25) = 1;
    v51 = 1;
  }
  else
  {
    v51 = 0;
  }
  if ( (RtlpHpLfhPerfFlags & 0x20) == 0 || v51 || (v10 = *(_QWORD *)v7, (*(_BYTE *)(*(_QWORD *)v7 + 13LL) & 8) != 0) )
  {
LABEL_85:
    if ( (unsigned int)v25 < *(unsigned __int8 *)(v6 + 45) )
    {
      do
      {
        EmptyUnits = RtlpHpLfhSubsegmentFindEmptyUnits(v6, v25, &v66);
        v10 = EmptyUnits;
        if ( EmptyUnits == -1 )
          break;
        if ( v66 < 2 )
        {
          if ( !v51 )
            break;
          LODWORD(v25) = v66 + EmptyUnits;
        }
        else if ( v50 )
        {
          v56 = *(_BYTE *)(v6 + 44);
          v57 = v66 << v56;
          v58 = EmptyUnits << v56;
          ((void (__fastcall *)(_QWORD, __int64, _QWORD))((unsigned __int64)a1 ^ RtlpHpHeapGlobals ^ *((_QWORD *)a1 + 4)))(
            *(_QWORD *)a1,
            v6 + (EmptyUnits << v56),
            v66 << v56);
          v59 = v58;
          v7 = a1;
          RtlpHpLfhSubsegmentDecBlockCounts(a1, v6, v59, v57);
          if ( !v51 )
            goto LABEL_98;
          LODWORD(v25) = EmptyUnits + v66;
        }
        else
        {
          LODWORD(v25) = EmptyUnits;
          if ( (v67 & 1) == 0 )
            RtlAcquireSRWLockShared(v7 + 36);
          v50 = 2;
          RtlAcquireSRWLockExclusive(v6 + 24, v10, v11, a4);
        }
      }
      while ( (unsigned int)v25 < *(unsigned __int8 *)(v6 + 45) );
      if ( !v50 )
        goto LABEL_16;
LABEL_98:
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v6 + 24));
      if ( (v67 & 1) == 0 )
        RtlReleaseSRWLockShared(v7 + 36);
    }
    goto LABEL_16;
  }
  a4 = 8LL;
  v11 = *(__int16 *)(v10 + 22);
  v52 = *(_QWORD *)(v11 + v10 + 8) >> *(_BYTE *)(v10 + 11);
  if ( v52 <= 8 )
    v52 = 8LL;
  v53 = *(_QWORD *)(v11 + v10 + 8) >> *(_BYTE *)(v10 + 12);
  if ( v53 <= 8 )
    v53 = 8LL;
  v54 = *(_QWORD *)(v11 + v10 + 16) + *(_QWORD *)(v11 + v10 + 24);
  if ( v54 > v52 && (int)RtlpHpScheduleCompaction() < 0 || v54 > v53 )
  {
    v7 = a1;
    v50 = 0;
    goto LABEL_85;
  }
LABEL_16:
  v28 = *(unsigned __int16 *)(v6 + 34);
  v29 = *(unsigned __int16 *)(v6 + 32);
  do
  {
    if ( !v8 && (!(_WORD)v29 || (unsigned __int16)v29 == v28 - 1) )
    {
      v31 = *(_QWORD *)(v6 + 16);
      while ( 1 )
      {
        while ( !v31 )
        {
          v62 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 16), 3LL, 0LL);
          v61 = v62 == 0;
LABEL_109:
          v31 = v62;
          if ( v61 )
            return 1;
        }
        if ( (v31 & 1) != 0 )
        {
          v62 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v6 + 16),
                  v31 & 1 | (v31 + 2) & 0xFFFFFFFFFFFFFFFEuLL,
                  v31);
          v61 = v31 == v62;
          goto LABEL_109;
        }
        v32 = (volatile signed __int64 *)(v31 + 16);
        v8 = v31;
        RtlAcquireSRWLockExclusive(v31 + 16, v10, v11, a4);
        v31 = *(_QWORD *)(v6 + 16);
        if ( v8 == v31 )
          break;
        RtlReleaseSRWLockExclusive(v32);
      }
    }
    v10 = (unsigned int)(v29 + 1);
    v29 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)(v6 + 32), v29 + 1, v29);
  }
  while ( (unsigned __int16)v10 != v29 + 1 );
  if ( (_WORD)v29 )
  {
    if ( v29 != v28 - 1 )
      goto LABEL_23;
    v33 = 2;
  }
  else
  {
    v33 = 0;
  }
  v34 = *(_BYTE *)(v6 + 38);
  switch ( v34 )
  {
    case 1:
      v35 = v8 + 40;
      goto LABEL_35;
    case 0:
      v35 = v8 + 24;
      v36 = (_QWORD *)(v8 + 8);
      goto LABEL_36;
    case 2:
      v35 = 0LL;
LABEL_35:
      v36 = 0LL;
LABEL_36:
      if ( v33 )
      {
        v37 = 0LL;
        v38 = 0LL;
      }
      else
      {
        v37 = (__int64 *)(v8 + 24);
        v38 = (_QWORD *)(v8 + 8);
      }
      if ( v35 )
      {
        v39 = *(_QWORD *)v6;
        if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) == v6 )
        {
          v40 = *(_QWORD **)(v6 + 8);
          if ( *v40 == v6 )
          {
            *v40 = v39;
            *(_QWORD *)(v39 + 8) = v40;
            if ( v36 )
              --*v36;
            goto LABEL_43;
          }
        }
LABEL_119:
        __fastfail(3u);
      }
LABEL_43:
      *(_BYTE *)(v6 + 38) = v33;
      if ( v37 )
      {
        v41 = (__int64 *)v37[1];
        if ( (__int64 *)*v41 != v37 )
          goto LABEL_119;
        *(_QWORD *)v6 = v37;
        *(_QWORD *)(v6 + 8) = v41;
        *v41 = v6;
        v37[1] = v6;
        if ( v38 )
          ++*v38;
        v6 = 0LL;
      }
      if ( (*(_BYTE *)v8 & 1) == 0 && *(_QWORD *)(v8 + 8) > 8uLL )
      {
        v6 = *v37;
        if ( *(__int64 **)(*v37 + 8) != v37 )
          goto LABEL_119;
        v60 = *(_QWORD *)v6;
        if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 )
          goto LABEL_119;
        *v37 = v60;
        *(_QWORD *)(v60 + 8) = v37;
        --*v38;
        *(_BYTE *)(v6 + 38) = 2;
      }
      if ( v6 && *(_BYTE *)(v6 + 38) == 2 )
        *(_QWORD *)(v6 + 16) = 0LL;
      break;
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v8 + 16));
  v8 = 0LL;
  if ( v6 )
  {
    v45 = *(volatile signed __int64 **)&a1[4
                                         * RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v9
                                                                                  + 15) >> 4]
                                         + 64];
    if ( *(_WORD *)(v6 + 32) == *(_WORD *)(v6 + 34)
      || ((RtlAcquireSRWLockExclusive((unsigned __int64)(v45 + 2), v42, v43, v44),
           RtlpHpLfhSubsegmentSetOwner(v6, v45),
           *(_WORD *)(v6 + 32) == *(_WORD *)(v6 + 34))
        ? (*(_QWORD *)(v6 + 16) = 0LL)
        : (v6 = RtlpHpLfhOwnerMoveSubsegment(v45, v6, 0LL)),
          RtlReleaseSRWLockExclusive(v45 + 2),
          v6) )
    {
      _InterlockedDecrement64(v45 + 8);
      v46 = v67 & 1;
      _InterlockedExchangeAdd64(v45 + 7, -*(__int16 *)(v6 + 34));
      v47 = *(unsigned __int8 *)(v6 + 45);
      v48 = 0;
      if ( *(_BYTE *)(v6 + 45) )
      {
        do
        {
          v49 = RtlpHpLfhSubsegmentFindEmptyUnits(v6, v5, v63);
          if ( v49 == -1 )
            break;
          v48 += v63[0];
          v5 = v63[0] + v49;
        }
        while ( v63[0] + v49 < v47 );
        if ( v48 && (RtlpHpLfhPerfFlags & 0x20) != 0 )
          _InterlockedExchangeAdd64(
            (volatile signed __int64 *)((char *)a1 + a1[29] + 24),
            -(__int64)((unsigned __int64)(unsigned int)(v48 << *(_BYTE *)(v6 + 44)) >> 12));
      }
      ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))((unsigned __int64)a1 ^ RtlpHpHeapGlobals ^ *((_QWORD *)a1 + 2)))(
        *(_QWORD *)a1,
        v6,
        *(unsigned __int8 *)(v6 + 45) << *(_BYTE *)(v6 + 44),
        v46);
    }
  }
LABEL_23:
  v5 = 1;
  if ( v8 )
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v8 + 16));
  return v5;
}
