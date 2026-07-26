/*
 * XREFs of ?ndisPplAllocate@@YAPEAXPEAUPPL_POOL_HANDLE__@@KPEAK@Z @ 0x1C0027AC4
 * Callers:
 *     NdisAllocateNetBuffer @ 0x1C00279F0 (NdisAllocateNetBuffer.c)
 * Callees:
 *     ndisPplLazyInitializeLookaside @ 0x1C000439C (ndisPplLazyInitializeLookaside.c)
 *     ??1KAcquireSpinLock@@QEAA@XZ @ 0x1C0004980 (--1KAcquireSpinLock@@QEAA@XZ.c)
 *     ndisAllocateFromNPagedPool @ 0x1C00049B0 (ndisAllocateFromNPagedPool.c)
 *     ndisAllocateFromLookasideList @ 0x1C0027C18 (ndisAllocateFromLookasideList.c)
 */

PSLIST_ENTRY __fastcall ndisPplAllocate(struct PPL_POOL_HANDLE__ *a1, __int64 a2, unsigned int *a3)
{
  unsigned int Number; // ebp
  bool v5; // zf
  unsigned __int64 v7; // rax
  char *v8; // rbx
  PSLIST_ENTRY v9; // rbx
  SIZE_T v10; // rdx
  __int64 v11; // r8
  POOL_TYPE v12; // ecx
  _SLIST_ENTRY *v13; // rax
  KSPIN_LOCK *v14; // rdi
  KIRQL v15; // al
  char *v16; // rsi
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  KAcquireSpinLock v20; // [rsp+20h] [rbp-18h] BYREF

  Number = KeGetPcr()->Prcb.Number;
  v5 = ndisMaxNumberOfProcessors == 1;
  *a3 = 1;
  if ( v5 )
    goto LABEL_5;
  v7 = (unsigned __int64)Number << 8;
  v8 = (char *)a1 + v7 + 384;
  if ( !v8[216] )
    ndisPplLazyInitializeLookaside((PLOOKASIDE_LIST_EX)((char *)a1 + v7 + 384), (__int64)a1 + 128);
  v9 = (PSLIST_ENTRY)ndisAllocateFromLookasideList(v8);
  if ( !v9 )
  {
LABEL_5:
    ++*((_DWORD *)a1 + 37);
    v9 = ExpInterlockedPopEntrySList((PSLIST_HEADER)a1 + 8);
    if ( !v9 )
    {
      v10 = *((unsigned int *)a1 + 43);
      v11 = *((unsigned int *)a1 + 42);
      v12 = *((_DWORD *)a1 + 41);
      ++*((_DWORD *)a1 + 38);
      v13 = (_SLIST_ENTRY *)ndisAllocateFromNPagedPool(v12, v10, v11, (PLOOKASIDE_LIST_EX)((char *)a1 + 128));
      v9 = v13;
      if ( !v13 )
      {
        *a3 = 0;
        return v9;
      }
      v14 = (KSPIN_LOCK *)((char *)a1 + 8);
      v13[-2].Next = (_SLIST_ENTRY *)a1;
      v20.m_lock = (KSpinLockBase *)((char *)a1 + 8);
      v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 1);
      v16 = (char *)a1 + 16;
      v17 = &v9[-2].Next + 1;
      v18 = *(_QWORD *)v16;
      if ( *(char **)(*(_QWORD *)v16 + 8LL) != v16 )
        __fastfail(3u);
      *v17 = v18;
      v17[1] = v16;
      *(_QWORD *)(v18 + 8) = v17;
      *(_QWORD *)v16 = v17;
      KeReleaseSpinLock(v14, v15);
      v20.m_oldIrql = -1;
      KAcquireSpinLock::~KAcquireSpinLock(&v20);
      *a3 = 0;
    }
    *((_DWORD *)&v9[-1].Next + 2) = Number;
  }
  return v9;
}
