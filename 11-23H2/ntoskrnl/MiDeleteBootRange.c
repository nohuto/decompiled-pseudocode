/*
 * XREFs of MiDeleteBootRange @ 0x1403900D8
 * Callers:
 *     MmFreeBootRegistry @ 0x1408275CC (MmFreeBootRegistry.c)
 *     MmFreeLoaderBlock @ 0x140B5B894 (MmFreeLoaderBlock.c)
 * Callees:
 *     MiReturnSystemVa @ 0x140213B54 (MiReturnSystemVa.c)
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D750 (ExAcquireResourceSharedLite.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiDeleteSystemPagableVm @ 0x1402E96D0 (MiDeleteSystemPagableVm.c)
 */

__int64 __fastcall MiDeleteBootRange(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r12
  __int64 v8; // r13
  volatile LONG *SharedVm; // rbx
  KIRQL v10; // al
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int8 v13; // r14
  unsigned __int64 v14; // rbx
  volatile LONG *v15; // rbx
  KIRQL v16; // al
  PVOID *v17; // r8
  unsigned __int64 v18; // r9
  unsigned __int8 v19; // si
  unsigned __int64 v20; // rbx
  struct _KPRCB *CurrentPrcb; // r9
  unsigned __int64 v22; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v24; // zf
  signed __int32 v25; // eax
  __int64 v26; // rdi
  __int64 result; // rax
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rbp
  __int16 v31; // ax
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rcx
  volatile LONG *v36; // rbx
  KIRQL v37; // al
  char *AnyMultiplexedVm; // [rsp+38h] [rbp-90h]
  struct _KTHREAD *CurrentThread; // [rsp+38h] [rbp-90h]
  _OWORD v40[3]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v41; // [rsp+70h] [rbp-58h]
  unsigned __int64 v42; // [rsp+D0h] [rbp+8h] BYREF
  unsigned __int64 v43; // [rsp+D8h] [rbp+10h]
  int v44; // [rsp+E0h] [rbp+18h]
  int v45; // [rsp+E8h] [rbp+20h] BYREF

  v44 = a3;
  v43 = a2;
  v42 = a1;
  v3 = a1;
  v4 = a2;
  memset(v40, 0, sizeof(v40));
  v41 = 0LL;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = v5;
  v7 = (((a1 + 8 * a2 - 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v8 = (__int64)AnyMultiplexedVm;
  SharedVm = (volatile LONG *)MiGetSharedVm((__int64)AnyMultiplexedVm);
  v10 = ExAcquireSpinLockExclusive(SharedVm);
  *((_DWORD *)SharedVm + 1) = 0;
  v13 = v10;
  if ( v5 <= v7 )
  {
    do
    {
      v14 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v6) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v45 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v45);
        while ( *(__int64 *)(v14 + 24) < 0 );
      }
      *(_QWORD *)(v14 + 24) ^= ((*(_QWORD *)(v14 + 24) + 1LL) ^ *(_QWORD *)(v14 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v6 += 8LL;
    }
    while ( v6 <= v7 );
    v4 = v43;
    v3 = v42;
    v8 = (__int64)AnyMultiplexedVm;
  }
  MiUnlockWorkingSetExclusive(v8, v13, v11, v12);
  MiDeleteSystemPagableVm(v8, 0LL, v3, v4, 1, (struct _KTHREAD *)v40);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v15 = (volatile LONG *)MiGetSharedVm(v8);
  v16 = ExAcquireSpinLockExclusive(v15);
  *((_DWORD *)v15 + 1) = 0;
  v19 = v16;
  LOBYTE(v44) = v16;
  if ( v5 <= v7 )
  {
    do
    {
      v20 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v5) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      LODWORD(v42) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v42);
        while ( *(__int64 *)(v20 + 24) < 0 );
      }
      *(_QWORD *)(v20 + 24) ^= ((*(_QWORD *)(v20 + 24) - 1LL) ^ *(_QWORD *)(v20 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (*(_QWORD *)(v20 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      {
        v28 = (__int64)(v5 << 25) >> 16;
        v29 = v28;
        v30 = v28 + 4096;
        if ( v28 >= v28 + 4096 )
        {
LABEL_21:
          if ( v29 == v30 )
          {
            v17 = (PVOID *)PsLoadedModuleList;
            v32 = (__int64)(v28 << 25) >> 16;
            v18 = ((unsigned int)dword_140C6987C + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
            while ( 1 )
            {
              v33 = (unsigned __int64)v17[6];
              v34 = v18 + v33 + (unsigned int)(*((_DWORD *)v17 + 16) - 1);
              if ( (PVOID)v33 != PsNtosImageBase && (PVOID)v33 != PsHalImageBase )
                v34 += (unsigned __int64)(unsigned int)dword_140C65844 << 12;
              v35 = ((v34 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
              if ( v5 >= ((v33 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL && v5 <= v35 )
                break;
              v17 = (PVOID *)*v17;
              if ( v17 == &PsLoadedModuleList )
              {
                if ( !v17 )
                  break;
                MiUnlockWorkingSetExclusive(v8, v44, (__int64)v17, v18);
                MiReturnSystemVa(v32, v32 + 0x200000, 12, 0LL);
                v36 = (volatile LONG *)MiGetSharedVm(v8);
                v37 = ExAcquireSpinLockExclusive(v36);
                *((_DWORD *)v36 + 1) = 0;
                v19 = v37;
                LOBYTE(v44) = v37;
                goto LABEL_10;
              }
            }
          }
        }
        else
        {
          while ( 1 )
          {
            v31 = MI_READ_PTE_LOCK_FREE(v29);
            if ( (v31 & 0xC01) != 0 )
              break;
            if ( (v31 & 0x3E0) == 0 || (v31 & 0x3E0) == 0x300LL )
            {
              v29 += 8LL;
              if ( v29 < v30 )
                continue;
            }
            goto LABEL_21;
          }
        }
        v19 = v44;
      }
LABEL_10:
      v5 += 8LL;
    }
    while ( v5 <= v7 );
    v4 = v43;
  }
  MiUnlockWorkingSetExclusive(v8, v19, (__int64)v17, v18);
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  CurrentPrcb = KeGetCurrentPrcb();
  v22 = v4;
  CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable == -1 )
    goto LABEL_33;
  if ( v4 + CachedResidentAvailable > 0x100 || v4 >= 0x80000 )
  {
LABEL_32:
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v22 = v4 + (int)CachedResidentAvailable - 192;
    }
LABEL_33:
    if ( v22 )
      _InterlockedExchangeAdd64(&qword_140C6F7C0, v22);
    goto LABEL_16;
  }
  while ( 1 )
  {
    v25 = _InterlockedCompareExchange(
            (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
            CachedResidentAvailable + v4,
            CachedResidentAvailable);
    v24 = (_DWORD)CachedResidentAvailable == v25;
    LODWORD(CachedResidentAvailable) = v25;
    if ( v24 )
      break;
    if ( v25 == -1 || v4 + v25 > 0x100 )
      goto LABEL_32;
  }
LABEL_16:
  v26 = v4 - *((_QWORD *)&v40[0] + 1);
  MiReturnCommit((__int64)&MiSystemPartition, v26);
  result = qword_140C699A8 - v26;
  qword_140C699A8 -= v26;
  return result;
}
