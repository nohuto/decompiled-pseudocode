/*
 * XREFs of ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C007E09C
 * Callers:
 *     ?ProbeAndLockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C007DDF0 (-ProbeAndLockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATI.c)
 * Callees:
 *     ?Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C007E050 (-Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C007E358 (-Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C007F7CC (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1C0080C40 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z.c)
 *     ?ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C00811B4 (-ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0081BBC (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0081BE0 (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z @ 0x1C00E74F4 (-SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::Lock(
        VIDMM_RECYCLE_MULTIRANGE *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4,
        enum _LOCK_OPERATION a5,
        struct VIDMM_SEGMENT *a6,
        unsigned __int8 a7)
{
  __int64 v7; // r13
  __int64 v8; // rsi
  __int64 v11; // rcx
  VIDMM_RECYCLE_RANGE *i; // rdi
  int v13; // esi
  unsigned __int8 v14; // dl
  __int64 result; // rax
  struct VIDMM_RECYCLE_RANGE *NextRange; // rdi
  unsigned __int64 v17; // r14
  unsigned __int64 j; // rbp
  unsigned __int64 v19; // rax
  VIDMM_RECYCLE_RANGE *v20; // rcx
  __int64 v21; // r12
  unsigned __int64 v22; // rdx
  struct VIDMM_RECYCLE_RANGE *v23; // rax
  enum _LOCK_OPERATION v24; // r8d
  VIDMM_RECYCLE_RANGE *v25; // rsi
  __int64 v26; // r13
  unsigned __int64 v27; // rdx
  int v28; // ebp
  enum _LOCK_OPERATION v29; // r8d
  VIDMM_RECYCLE_RANGE *v30; // rcx
  VIDMM_RECYCLE_RANGE *k; // rcx
  int v32; // r13d
  VIDMM_RECYCLE_RANGE *PreviousRange; // rax
  VIDMM_RECYCLE_RANGE *v34; // rbx
  unsigned __int64 v35; // rdx
  VIDMM_RECYCLE_RANGE *v36; // rax
  VIDMM_RECYCLE_RANGE *v37; // rbx
  VIDMM_RECYCLE_RANGE *v38; // rax
  VIDMM_RECYCLE_RANGE *v39; // rbx

  v7 = a4;
  v8 = a3;
  if ( *((_BYTE *)this + 130) )
    WdLogSingleEntry5(0LL, 270LL, 52LL, 12LL, 0LL, 0LL);
  *((_QWORD *)this + 28) = *((_QWORD *)a2 + 11);
  if ( !v8 )
  {
    v11 = *((_QWORD *)this + 6);
    if ( v7 == *((_QWORD *)this + 5) - v11 && v11 == *((_QWORD *)this + 4) )
    {
      for ( i = (VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
      {
        v13 = VIDMM_RECYCLE_RANGE::Lock(i, a2, (enum _LOCK_OPERATION)a3, a6);
        if ( v13 < 0 )
          break;
        if ( i == *((VIDMM_RECYCLE_RANGE **)this + 9) )
        {
          ++*((_DWORD *)this + 23);
          if ( a7 )
            *((_BYTE *)this + 129) = 1;
          else
            *((_BYTE *)this + 128) = 1;
          VIDMM_RECYCLE_MULTIRANGE::ZeroIfNeeded(this);
          WdLogSingleEntry3(4LL, this, 0LL, v7);
          goto LABEL_12;
        }
      }
      while ( i != *((VIDMM_RECYCLE_RANGE **)this + 8) )
      {
        i = VIDMM_RECYCLE_RANGE::GetPreviousRange(i);
        VIDMM_RECYCLE_RANGE::Unlock(i);
      }
      return (unsigned int)v13;
    }
  }
  NextRange = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
  v17 = v8 + *((_QWORD *)this + 6);
  for ( j = v17 + v7; NextRange; NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange) )
  {
    if ( *((_QWORD *)NextRange + 5) > v17 )
      break;
  }
  v19 = *((_QWORD *)NextRange + 5);
  v20 = NextRange;
  v21 = *((_QWORD *)NextRange + 4);
  if ( v19 >= j )
  {
    if ( v17 == v21 )
    {
      if ( v19 != j )
      {
        LOBYTE(a5) = 1;
        VIDMM_RECYCLE_RANGE::SplitAt(NextRange, j - v21, (bool *)&a5);
LABEL_22:
        v20 = NextRange;
      }
    }
    else
    {
      v22 = v17 - v21;
      if ( v19 == j )
      {
        LOBYTE(a5) = 1;
        VIDMM_RECYCLE_RANGE::SplitAt(NextRange, v22, (bool *)&a5);
        if ( (_BYTE)a5 )
          NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
        goto LABEL_22;
      }
      v20 = VIDMM_RECYCLE_RANGE::SplitMiddle(NextRange, v22, j - v21);
    }
    result = VIDMM_RECYCLE_RANGE::Lock(v20, a2, (enum _LOCK_OPERATION)a3, a6);
    if ( (int)result >= 0 )
    {
LABEL_24:
      ++*((_DWORD *)this + 23);
      if ( a7 )
        *((_BYTE *)this + 129) = 1;
      else
        *((_BYTE *)this + 128) = 1;
      VIDMM_RECYCLE_MULTIRANGE::ZeroIfNeeded(this);
      WdLogSingleEntry3(4LL, this, v8, v7);
LABEL_12:
      *((_DWORD *)this + 54) = 4;
      VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(this, v14);
      return 0LL;
    }
    return result;
  }
  while ( 1 )
  {
    v23 = VIDMM_RECYCLE_RANGE::GetNextRange(v20);
    v25 = v23;
    if ( !v23 || *((_QWORD *)v23 + 5) >= j )
      break;
    v32 = VIDMM_RECYCLE_RANGE::Lock(v23, a2, v24, a6);
    v20 = v25;
    if ( v32 < 0 )
    {
      while ( 1 )
      {
        PreviousRange = VIDMM_RECYCLE_RANGE::GetPreviousRange(v20);
        v34 = PreviousRange;
        if ( PreviousRange == NextRange )
          break;
        VIDMM_RECYCLE_RANGE::Unlock(PreviousRange);
        v20 = v34;
      }
      return (unsigned int)v32;
    }
  }
  v26 = *((_QWORD *)v23 + 5);
  if ( v17 != v21 )
  {
    v27 = v17 - *((_QWORD *)NextRange + 4);
    LOBYTE(a5) = 1;
    VIDMM_RECYCLE_RANGE::SplitAt(NextRange, v27, (bool *)&a5);
    if ( (_BYTE)a5 )
      NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
  }
  if ( v26 != j )
  {
    v35 = j - *((_QWORD *)v25 + 4);
    LOBYTE(a5) = 1;
    VIDMM_RECYCLE_RANGE::SplitAt(v25, v35, (bool *)&a5);
  }
  v28 = VIDMM_RECYCLE_RANGE::Lock(NextRange, a2, v24, a6);
  v30 = v25;
  if ( v28 < 0 )
  {
    while ( 1 )
    {
      v36 = VIDMM_RECYCLE_RANGE::GetPreviousRange(v30);
      v37 = v36;
      if ( v36 == NextRange )
        break;
      VIDMM_RECYCLE_RANGE::Unlock(v36);
      v30 = v37;
    }
  }
  else
  {
    v28 = VIDMM_RECYCLE_RANGE::Lock(v25, a2, v29, a6);
    if ( v28 >= 0 )
    {
      v7 = a4;
      v8 = a3;
      goto LABEL_24;
    }
    for ( k = v25; ; k = v39 )
    {
      v38 = VIDMM_RECYCLE_RANGE::GetPreviousRange(k);
      v39 = v38;
      if ( v38 == NextRange )
        break;
      VIDMM_RECYCLE_RANGE::Unlock(v38);
    }
    VIDMM_RECYCLE_RANGE::Unlock(NextRange);
  }
  return (unsigned int)v28;
}
