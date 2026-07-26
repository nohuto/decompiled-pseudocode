/*
 * XREFs of NdisAllocateNetBufferMdlAndData @ 0x1C0003A40
 * Callers:
 *     <none>
 * Callees:
 *     ndisPplLazyInitializeLookaside @ 0x1C000439C (ndisPplLazyInitializeLookaside.c)
 *     ??1KAcquireSpinLock@@QEAA@XZ @ 0x1C0004980 (--1KAcquireSpinLock@@QEAA@XZ.c)
 */

PNET_BUFFER __stdcall NdisAllocateNetBufferMdlAndData(NDIS_HANDLE PoolHandle)
{
  PSLIST_ENTRY v2; // rbx
  int v3; // ebp
  unsigned int Number; // r14d
  unsigned __int64 v5; // rax
  char *v6; // rsi
  _SLIST_HEADER *v7; // rcx
  unsigned __int64 v8; // rax
  _SLIST_ENTRY *Pool2; // rax
  KIRQL v10; // al
  _QWORD *v11; // rcx
  __int64 v12; // r8
  _QWORD *v13; // rdx
  _SLIST_ENTRY *v14; // rsi
  __int64 v15; // r9
  unsigned __int64 v16; // r8
  int v17; // edx
  int v18; // ecx
  KIRQL v20; // al
  __int64 v21; // r8
  _SLIST_HEADER *v22; // rcx
  KAcquireSpinLock v23; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  if ( !PoolHandle )
    return (PNET_BUFFER)v2;
  v3 = 1;
  if ( (*((_DWORD *)PoolHandle + 22) & 1) == 0 )
  {
    DbgPrint("NdisAllocateNetBufferMdlAndData: Pool %p wrong pool type.\n", PoolHandle);
    return (PNET_BUFFER)v2;
  }
  Number = KeGetPcr()->Prcb.Number;
  if ( ndisMaxNumberOfProcessors == 1 )
    goto LABEL_9;
  v5 = (unsigned __int64)Number << 8;
  v6 = (char *)PoolHandle + v5 + 384;
  if ( !v6[216] )
    ndisPplLazyInitializeLookaside((PLOOKASIDE_LIST_EX)((char *)PoolHandle + v5 + 384));
  v7 = (_SLIST_HEADER *)*((_QWORD *)v6 + 24);
  ++*((_DWORD *)v6 + 5);
  v2 = ExpInterlockedPopEntrySList(v7);
  if ( !v2 )
  {
    if ( ExQueryDepthSList(*((PSLIST_HEADER *)v6 + 25)) < 0xAu )
      goto LABEL_8;
    v23.m_lock = (KSpinLockBase *)(v6 + 208);
    v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6 + 26);
    v21 = *((_QWORD *)v6 + 24);
    *((_QWORD *)v6 + 24) = *((_QWORD *)v6 + 25);
    *((_QWORD *)v6 + 25) = v21;
    KeReleaseSpinLock((PKSPIN_LOCK)v6 + 26, v20);
    v22 = (_SLIST_HEADER *)*((_QWORD *)v6 + 24);
    v23.m_oldIrql = -1;
    v2 = ExpInterlockedPopEntrySList(v22);
    KAcquireSpinLock::~KAcquireSpinLock(&v23);
    if ( !v2 )
    {
LABEL_8:
      ++*((_DWORD *)v6 + 6);
LABEL_9:
      ++*((_DWORD *)PoolHandle + 37);
      v2 = ExpInterlockedPopEntrySList((PSLIST_HEADER)PoolHandle + 8);
      if ( !v2 )
      {
        v8 = *((unsigned int *)PoolHandle + 43);
        ++*((_DWORD *)PoolHandle + 38);
        if ( v8 + 32 < v8 )
          return 0LL;
        Pool2 = (_SLIST_ENTRY *)ExAllocatePool2(66LL, v8 + 32, *((unsigned int *)PoolHandle + 42));
        if ( !Pool2 )
          return 0LL;
        v2 = Pool2 + 2;
        Pool2->Next = 0LL;
        if ( Pool2 == (_SLIST_ENTRY *)-32LL )
          return 0LL;
        Pool2->Next = (_SLIST_ENTRY *)PoolHandle;
        v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 1);
        v11 = (char *)PoolHandle + 16;
        v12 = *((_QWORD *)PoolHandle + 2);
        v13 = &v2[-2].Next + 1;
        if ( *(NDIS_HANDLE *)(v12 + 8) != (char *)PoolHandle + 16 )
          __fastfail(3u);
        v13[1] = v11;
        *v13 = v12;
        *(_QWORD *)(v12 + 8) = v13;
        *v11 = v13;
        KeReleaseSpinLock((PKSPIN_LOCK)PoolHandle + 1, v10);
        v3 = 0;
      }
      *((_DWORD *)&v2[-1].Next + 2) = Number;
    }
  }
  v14 = v2 + 11;
  if ( v3 )
  {
    *((_DWORD *)&v2[13].Next + 2) = *((_DWORD *)PoolHandle + 23);
    v14->Next = 0LL;
  }
  else
  {
    v15 = *((unsigned int *)PoolHandle + 23);
    v16 = (unsigned __int64)v14 + *((unsigned int *)PoolHandle + 24);
    v17 = (_DWORD)v14 + *((_DWORD *)PoolHandle + 24);
    v14->Next = 0LL;
    *((_WORD *)&v2[11].Next + 5) = 0;
    *((_DWORD *)&v2[13].Next + 2) = v15;
    v2[13].Next = (_SLIST_ENTRY *)(v16 & 0xFFFFFFFFFFFFF000uLL);
    *((_DWORD *)&v2[13].Next + 3) = v17 & 0xFFF;
    *((_WORD *)&v2[11].Next + 4) = 8 * ((((unsigned __int64)(v17 & 0xFFF) + v15 + 4095) >> 12) + 6);
    MmBuildMdlForNonPagedPool((PMDL)&v2[11]);
  }
  v18 = *((_DWORD *)PoolHandle + 23);
  v2->Next = 0LL;
  *((_QWORD *)&v2[3].Next + 1) = PoolHandle;
  *((_QWORD *)&v2->Next + 1) = v14;
  LODWORD(v2[1].Next) = v18;
  v2[2].Next = v14;
  *((_DWORD *)&v2[2].Next + 2) = v18;
  *((_DWORD *)&v2[1].Next + 2) = 0;
  LODWORD(v2[3].Next) = 0;
  *((_QWORD *)&v2[4].Next + 1) = 0LL;
  v2[4].Next = 0LL;
  *((_QWORD *)&v2[8].Next + 1) = 0LL;
  v2[8].Next = 0LL;
  *((_QWORD *)&v2[10].Next + 1) = 0LL;
  return (PNET_BUFFER)v2;
}
