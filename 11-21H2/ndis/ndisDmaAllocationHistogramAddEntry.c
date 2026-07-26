/*
 * XREFs of ndisDmaAllocationHistogramAddEntry @ 0x1C0122DAC
 * Callers:
 *     ??1NdisDmaAllocationHistogramStopwatch@@QEAA@XZ @ 0x1C01228A4 (--1NdisDmaAllocationHistogramStopwatch@@QEAA@XZ.c)
 * Callees:
 *     memset @ 0x1C0036340 (memset.c)
 *     ?IncrementBucket@KHistogram@@AEAAX_K@Z @ 0x1C006F154 (-IncrementBucket@KHistogram@@AEAAX_K@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C010C60C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C010C668 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ndisAllocateHistogramEntry @ 0x1C01229EC (ndisAllocateHistogramEntry.c)
 */

void __fastcall ndisDmaAllocationHistogramAddEntry(unsigned __int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rbp
  PVOID v6; // rcx
  _QWORD *HistogramEntry; // rdi
  int v8; // edx
  __int64 *v9; // rcx
  __int64 v10; // rdi
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r9
  signed __int32 v18[8]; // [rsp+0h] [rbp-48h] BYREF
  KLockHolder v19; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v19.m_State = Unlocked;
  v19.m_Lock = (KPushLockBase *)&qword_1C00ECD48;
  v19.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v19);
  if ( !qword_1C00EE648 )
    goto LABEL_12;
  v5 = MEMORY[0xFFFFF78000000008];
  v6 = qword_1C00EE648;
  if ( *(PVOID *)qword_1C00EE648 == qword_1C00EE648 )
    goto LABEL_9;
  HistogramEntry = (_QWORD *)(*(_QWORD *)qword_1C00EE648 - 16LL);
  if ( *((_DWORD *)qword_1C00EE648 + 5) )
  {
    if ( (unsigned __int64)(*HistogramEntry + 600000000LL) < MEMORY[0xFFFFF78000000008] )
      goto LABEL_9;
    v8 = *(_DWORD *)a2 - *((_DWORD *)HistogramEntry + 2);
    if ( *(_DWORD *)a2 == *((_DWORD *)HistogramEntry + 2) )
      v8 = *(unsigned __int16 *)(a2 + 4) - *((unsigned __int16 *)HistogramEntry + 6);
    if ( v8 )
      goto LABEL_9;
  }
  if ( *(_QWORD *)qword_1C00EE648 == 16LL )
  {
LABEL_9:
    if ( *((_DWORD *)qword_1C00EE648 + 4) > *((_DWORD *)qword_1C00EE648 + 6) )
    {
      v10 = *((_QWORD *)qword_1C00EE648 + 1);
      if ( *(PVOID *)v10 != qword_1C00EE648 )
        goto LABEL_25;
      v11 = *(_QWORD **)(v10 + 8);
      if ( *v11 != v10 )
        goto LABEL_25;
      *((_QWORD *)qword_1C00EE648 + 1) = v11;
      HistogramEntry = (_QWORD *)(v10 - 16);
      *v11 = v6;
      memset((void *)(HistogramEntry[4] + 20LL), 0, 2LL * *(unsigned int *)(HistogramEntry[4] + 16LL));
      _InterlockedOr(v18, 0);
      v9 = (__int64 *)qword_1C00EE648;
    }
    else
    {
      HistogramEntry = ndisAllocateHistogramEntry();
      if ( !HistogramEntry )
      {
        _InterlockedIncrement64(&qword_1C00EE8A8);
        goto LABEL_12;
      }
      v9 = (__int64 *)qword_1C00EE648;
      ++*((_DWORD *)qword_1C00EE648 + 4);
    }
    *HistogramEntry = v5;
    *((_DWORD *)HistogramEntry + 2) = *(_DWORD *)a2;
    *((_WORD *)HistogramEntry + 6) = *(_WORD *)(a2 + 4);
    v12 = HistogramEntry + 2;
    v13 = *v9;
    if ( *(__int64 **)(*v9 + 8) == v9 )
    {
      *v12 = v13;
      HistogramEntry[3] = v9;
      *(_QWORD *)(v13 + 8) = v12;
      *v9 = (__int64)v12;
      goto LABEL_19;
    }
LABEL_25:
    __fastfail(3u);
  }
LABEL_19:
  v14 = HistogramEntry[4];
  LOBYTE(v2) = *(_QWORD *)v14 != 0LL;
  if ( a1 >= *(_QWORD *)v14 )
  {
    v16 = a1 - *(_QWORD *)v14;
    v17 = *(_QWORD *)(v14 + 8);
    if ( v16 < v17 * (*(_DWORD *)(v14 + 16) - v2 - 1) )
      v15 = v16 / v17 + v2;
    else
      v15 = (unsigned int)(*(_DWORD *)(v14 + 16) - 1);
  }
  else
  {
    v15 = 0LL;
  }
  KHistogram::IncrementBucket((KHistogram *)HistogramEntry[4], v15);
LABEL_12:
  KLockHolder::~KLockHolder(&v19);
}
