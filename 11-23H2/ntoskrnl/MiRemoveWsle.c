/*
 * XREFs of MiRemoveWsle @ 0x14027B6E0
 * Callers:
 *     MiCombineWithExisting @ 0x1402179B4 (MiCombineWithExisting.c)
 *     MiTerminateWsle @ 0x140274AE0 (MiTerminateWsle.c)
 *     MiTerminateWsleCluster @ 0x140279430 (MiTerminateWsleCluster.c)
 *     MiDeleteVa @ 0x14027A850 (MiDeleteVa.c)
 * Callees:
 *     MiWriteValidPteVolatile @ 0x140217020 (MiWriteValidPteVolatile.c)
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x140284B00 (MiGetSystemRegionType.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14029CE60 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140317000 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiIsDriverPage @ 0x140339B50 (MiIsDriverPage.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14046B8F2 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14060B63C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiLogRemoveWsleEvent @ 0x14061C86C (MiLogRemoveWsleEvent.c)
 */

char __fastcall MiRemoveWsle(__int64 a1, unsigned __int64 a2, __int64 a3, char a4, int a5, int a6)
{
  volatile signed __int32 *v6; // rsi
  __int64 v8; // r15
  unsigned __int64 v9; // r14
  LONG *v11; // r9
  unsigned __int64 v12; // r8
  int v13; // r13d
  unsigned __int64 v14; // rbp
  int v15; // r12d
  unsigned __int8 v16; // di
  signed __int64 v17; // r15
  unsigned __int64 v18; // r8
  __int64 v19; // rcx
  unsigned __int64 *v20; // rdx
  unsigned __int8 v21; // al
  unsigned __int64 v22; // rcx
  char result; // al
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // rdi
  __int64 *v27; // r15
  __int64 v28; // rbp
  unsigned __int64 v29; // rsi
  __int64 v30; // rcx
  __int64 **v31; // rax
  __int64 **v32; // rdi
  __int64 **v33; // rax
  struct _LIST_ENTRY *Flink; // rax
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 *v37; // rax
  __int64 v38; // [rsp+20h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-50h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  signed __int32 v41; // [rsp+80h] [rbp+8h]
  __int64 v42; // [rsp+80h] [rbp+8h]
  signed __int32 v43; // [rsp+80h] [rbp+8h]
  signed __int32 v44; // [rsp+88h] [rbp+10h]

  v6 = &dword_140C6A1C0;
  v8 = a3;
  v9 = a2;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    v11 = &dword_140C6A1C0;
  else
    v11 = (LONG *)(a1 + 256);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    LOBYTE(a2) = -1;
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v11, a2);
  }
  else
  {
    _m_prefetchw(v11);
    v41 = *v11 & 0x7FFFFFFF;
    v44 = _InterlockedCompareExchange(v11, v41 + 1, v41);
    if ( v44 != v41 )
    {
      while ( v44 >= 0 )
      {
        v43 = v44;
        v44 = _InterlockedCompareExchange(v11, v44 + 1, v44);
        if ( v44 == v43 )
          goto LABEL_5;
      }
      LOBYTE(a2) = -1;
      ExpWaitForSpinLockSharedAndAcquire(v11, a2);
    }
  }
LABEL_5:
  v12 = 0xFFFFF6FFFFFFFFFFuLL;
  if ( a6 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 152), -v8);
    if ( v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 136), -v8);
  }
  v13 = 1;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 4 )
  {
    if ( PsNtosImageBase
      && (v9 < PsNtosImageEnd && v9 >= (unsigned __int64)PsNtosImageBase
       || v9 < PsHalImageEnd && v9 >= (unsigned __int64)PsHalImageBase) )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140C65950, -(int)v8);
    }
    else
    {
      if ( (unsigned int)MiGetSystemRegionType(v9) == 12
        && MiIsDriverPage(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL) )
      {
        _InterlockedExchangeAdd((_DWORD *)&xmmword_140C65950 + 1, -(int)v8);
      }
      v12 = 0xFFFFF6FFFFFFFFFFuLL;
    }
  }
  v14 = -v8;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 144), -v8);
  if ( v9 >= 0xFFFFF68000000000uLL && v9 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v15 = 0;
    if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
      goto LABEL_16;
    v16 = a4 & 0xF;
    v17 = -v8;
    goto LABEL_14;
  }
  v15 = 1;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 128), v14);
  v16 = a4 & 0xF;
  if ( v16 != 8 )
  {
    v17 = -v8;
    v18 = ((v9 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v19 = *(_QWORD *)v18;
    if ( v18 >= 0xFFFFF6FB7DBED000uLL
      && v18 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v19 & 1) != 0
      && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v35 = *((_QWORD *)&Flink->Flink + ((v18 >> 3) & 0x1FF));
        v36 = v19 | 0x20;
        if ( (v35 & 0x20) == 0 )
          v36 = v19;
        v19 = v36;
        if ( (v35 & 0x42) != 0 )
          v19 = v36 | 0x42;
      }
    }
    v38 = v19;
    v20 = (unsigned __int64 *)(48
                             * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v38) >> 12) & 0xFFFFFFFFFFLL)
                             - 0x220000000000LL);
    v12 = *v20;
    v21 = (*v20 >> 14) & 7;
    if ( ((*v20 >> 4) & 0x3FF) != 0 )
    {
      if ( v16 == v21 )
      {
        v22 = v12 ^ ((unsigned __int16)v12 ^ (unsigned __int16)(16 * (v14 + ((*v20 >> 4) & 0x3FF)))) & 0x3FF0;
      }
      else
      {
        if ( v16 <= v21 )
          goto LABEL_14;
        v12 &= 0xFFFFFFFFFFFE000FuLL;
        v22 = v12 | (16 * (v14 & 0x3FF | ((unsigned __int64)(v16 & 7) << 10)));
      }
      *v20 = v22;
    }
LABEL_14:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8LL * v16 + 40), v17);
    if ( v16 != 7 )
    {
LABEL_15:
      v8 = a3;
      goto LABEL_16;
    }
    v24 = *(_QWORD *)(a1 + 96);
    v25 = *(unsigned __int16 *)(a1 + 174);
    memset(&LockHandle, 0, sizeof(LockHandle));
    v26 = *(_QWORD **)(qword_140C673C8 + 8 * v25);
    v42 = v26[2115];
    if ( v24 >= *(_QWORD *)(v42 + 56) )
    {
      if ( v17 < 0 )
        goto LABEL_15;
      v27 = (__int64 *)(a1 + 24);
      if ( !*(_QWORD *)(a1 + 24) || (__int64 *)v26[2116] == v27 )
        goto LABEL_15;
    }
    else
    {
      if ( v17 > 0 )
        goto LABEL_15;
      v27 = (__int64 *)(a1 + 24);
      if ( !*(_QWORD *)(a1 + 24) || (__int64 *)v26[2117] == v27 )
        goto LABEL_15;
      v13 = 2;
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_140C697C0, &LockHandle);
    if ( *(_BYTE *)(v42 + 53) || (v30 = *v27) == 0 )
    {
      *(_BYTE *)(v42 + 54) = 1;
    }
    else
    {
      v31 = (__int64 **)v27[1];
      if ( *(__int64 **)(v30 + 8) != v27 || *v31 != v27 )
        goto LABEL_91;
      v32 = (__int64 **)(v26 + 2116);
      *v31 = (__int64 *)v30;
      *(_QWORD *)(v30 + 8) = v31;
      if ( v13 != 1 )
      {
        v33 = (__int64 **)v32[1];
        if ( *v33 == (__int64 *)v32 )
        {
          *v27 = (__int64)v32;
          v27[1] = (__int64)v33;
          *v33 = v27;
          v32[1] = v27;
          KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
          goto LABEL_15;
        }
LABEL_91:
        __fastfail(3u);
      }
      v37 = *v32;
      if ( (__int64 **)(*v32)[1] != v32 )
        goto LABEL_91;
      *v27 = (__int64)v37;
      v27[1] = (__int64)v32;
      v37[1] = (__int64)v27;
      *v32 = v27;
    }
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    goto LABEL_15;
  }
LABEL_16:
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
  {
    _InterlockedExchangeAdd64(&qword_140C6A208, v14);
    if ( v15 )
      _InterlockedExchangeAdd64(&qword_140C6A210, v14);
  }
  result = *(_BYTE *)(a1 + 184) & 7;
  if ( result != 2 )
    v6 = (volatile signed __int32 *)(a1 + 256);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    result = ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v6, retaddr);
  }
  else
  {
    _InterlockedAnd(v6, 0xBFFFFFFF);
    _InterlockedDecrement(v6);
  }
  if ( v15 )
  {
    if ( a5 == 9 || a5 == 10 && (result = 0, (*(_BYTE *)(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 1) != 0) )
    {
      if ( v8 )
      {
        v28 = v8;
        v29 = v9;
        do
        {
          result = MiWriteValidPteVolatile(
                     (volatile signed __int64 *)(((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
                     0x80000000,
                     a5 & 0xF);
          v29 += 4096LL;
          --v28;
        }
        while ( v28 );
        v8 = a3;
      }
    }
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 && v8 )
  {
    do
    {
      result = MiLogRemoveWsleEvent(v9, *(_BYTE *)(a1 + 184) & 7, v12);
      v9 += 4096LL;
      --v8;
    }
    while ( v8 );
  }
  return result;
}
