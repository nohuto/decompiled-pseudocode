/*
 * XREFs of ndisDmaAllocationHistogramAddEntry @ 0x1C012E8C8
 * Callers:
 *     ??1NdisDmaAllocationHistogramStopwatch@@QEAA@XZ @ 0x1C012E3A4 (--1NdisDmaAllocationHistogramStopwatch@@QEAA@XZ.c)
 * Callees:
 *     memset @ 0x1C0038700 (memset.c)
 *     ?IncrementBucket@KHistogram@@AEAAX_K@Z @ 0x1C0074570 (-IncrementBucket@KHistogram@@AEAAX_K@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B50 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BAC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ndisAllocateHistogramEntry @ 0x1C012E4EC (ndisAllocateHistogramEntry.c)
 */

void __fastcall ndisDmaAllocationHistogramAddEntry(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rbp
  PVOID v6; // rcx
  _QWORD *HistogramEntry; // rdi
  int v8; // edx
  __int64 *v9; // rcx
  __int64 v10; // rdi
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r9
  signed __int32 v17[8]; // [rsp+0h] [rbp-48h] BYREF
  KLockHolder v18; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  v18.m_State = Unlocked;
  v18.m_Lock = (KPushLockBase *)&qword_1C00F5D30;
  v18.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v18);
  if ( !qword_1C00F7708 )
    goto LABEL_2;
  v5 = MEMORY[0xFFFFF78000000008];
  v6 = qword_1C00F7708;
  if ( *(PVOID *)qword_1C00F7708 == qword_1C00F7708 )
    goto LABEL_10;
  HistogramEntry = (_QWORD *)(*(_QWORD *)qword_1C00F7708 - 16LL);
  if ( *((_DWORD *)qword_1C00F7708 + 5) )
  {
    if ( (unsigned __int64)(*HistogramEntry + 600000000LL) < MEMORY[0xFFFFF78000000008] )
      goto LABEL_10;
    v8 = *(_DWORD *)a2 - *((_DWORD *)HistogramEntry + 2);
    if ( *(_DWORD *)a2 == *((_DWORD *)HistogramEntry + 2) )
      v8 = *(unsigned __int16 *)(a2 + 4) - *((unsigned __int16 *)HistogramEntry + 6);
    if ( v8 )
      goto LABEL_10;
  }
  if ( *(_QWORD *)qword_1C00F7708 == 16LL )
  {
LABEL_10:
    if ( *((_DWORD *)qword_1C00F7708 + 4) > *((_DWORD *)qword_1C00F7708 + 6) )
    {
      v10 = *((_QWORD *)qword_1C00F7708 + 1);
      if ( *(PVOID *)v10 != qword_1C00F7708 )
        goto LABEL_24;
      v11 = *(_QWORD **)(v10 + 8);
      if ( *v11 != v10 )
        goto LABEL_24;
      *((_QWORD *)qword_1C00F7708 + 1) = v11;
      HistogramEntry = (_QWORD *)(v10 - 16);
      *v11 = v6;
      memset((void *)(HistogramEntry[4] + 20LL), 0, 2LL * *(unsigned int *)(HistogramEntry[4] + 16LL));
      _InterlockedOr(v17, 0);
      v9 = (__int64 *)qword_1C00F7708;
    }
    else
    {
      HistogramEntry = ndisAllocateHistogramEntry();
      if ( !HistogramEntry )
      {
        _InterlockedIncrement64(&qword_1C00F7978);
        goto LABEL_2;
      }
      v9 = (__int64 *)qword_1C00F7708;
      ++*((_DWORD *)qword_1C00F7708 + 4);
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
LABEL_24:
    __fastfail(3u);
  }
LABEL_19:
  v14 = HistogramEntry[4];
  if ( a1 >= *(_QWORD *)v14 )
  {
    v15 = a1 - *(_QWORD *)v14;
    v16 = *(_QWORD *)(v14 + 8);
    if ( v15 < v16 * (*(_DWORD *)(v14 + 16) - (unsigned int)(*(_QWORD *)v14 != 0LL) - 1) )
      v2 = (*(_QWORD *)v14 != 0LL) + v15 / v16;
    else
      v2 = (unsigned int)(*(_DWORD *)(v14 + 16) - 1);
  }
  KHistogram::IncrementBucket((KHistogram *)v14, v2);
LABEL_2:
  KLockHolder::~KLockHolder(&v18);
}
