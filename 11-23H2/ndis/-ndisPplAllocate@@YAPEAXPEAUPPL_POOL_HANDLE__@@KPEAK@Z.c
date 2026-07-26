/*
 * XREFs of ?ndisPplAllocate@@YAPEAXPEAUPPL_POOL_HANDLE__@@KPEAK@Z @ 0x1C0001828
 * Callers:
 *     NdisAllocateNetBuffer @ 0x1C0001740 (NdisAllocateNetBuffer.c)
 * Callees:
 *     ndisAllocateFromLookasideList @ 0x1C0001984 (ndisAllocateFromLookasideList.c)
 *     ndisAllocateFromNPagedPool @ 0x1C00019F0 (ndisAllocateFromNPagedPool.c)
 *     ??1KAcquireSpinLock@@QEAA@XZ @ 0x1C0001A30 (--1KAcquireSpinLock@@QEAA@XZ.c)
 *     ndisPplLazyInitializeLookaside @ 0x1C00024CC (ndisPplLazyInitializeLookaside.c)
 *     ?ndisPplAllocateFromSpecialPool@@YAPEAXPEBU_NDIS_POOL_HEADER@@@Z @ 0x1C00B4CA4 (-ndisPplAllocateFromSpecialPool@@YAPEAXPEBU_NDIS_POOL_HEADER@@@Z.c)
 */

PSLIST_ENTRY __fastcall ndisPplAllocate(struct PPL_POOL_HANDLE__ *a1, __int64 a2, unsigned int *a3)
{
  unsigned int Number; // ebp
  bool v6; // zf
  unsigned __int64 v7; // rax
  char *v8; // rbx
  PSLIST_ENTRY v9; // rbx
  SIZE_T v11; // rdx
  ULONG v12; // r8d
  POOL_TYPE v13; // ecx
  _SLIST_ENTRY *v14; // rax
  KSPIN_LOCK *v15; // rdi
  KIRQL v16; // al
  char *v17; // rsi
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  KAcquireSpinLock v20; // [rsp+20h] [rbp-18h] BYREF

  if ( (*((_DWORD *)a1 + 1) & 1) == 0 )
  {
    Number = KeGetPcr()->Prcb.Number;
    v6 = ndisMaxNumberOfProcessors == 1;
    *a3 = 1;
    if ( !v6 )
    {
      v7 = (unsigned __int64)Number << 8;
      v8 = (char *)a1 + v7 + 384;
      if ( !v8[216] )
        ndisPplLazyInitializeLookaside((PLOOKASIDE_LIST_EX)((char *)a1 + v7 + 384));
      v9 = (PSLIST_ENTRY)ndisAllocateFromLookasideList(v8);
      if ( v9 )
        return v9;
    }
    ++*((_DWORD *)a1 + 37);
    v9 = ExpInterlockedPopEntrySList((PSLIST_HEADER)a1 + 8);
    if ( !v9 )
    {
      v11 = *((unsigned int *)a1 + 43);
      v12 = *((_DWORD *)a1 + 42);
      v13 = *((_DWORD *)a1 + 41);
      ++*((_DWORD *)a1 + 38);
      v14 = (_SLIST_ENTRY *)ndisAllocateFromNPagedPool(v13, v11, v12, (PLOOKASIDE_LIST_EX)((char *)a1 + 128));
      v9 = v14;
      if ( !v14 )
      {
        *a3 = 0;
        return v9;
      }
      v15 = (KSPIN_LOCK *)((char *)a1 + 8);
      v14[-2].Next = (_SLIST_ENTRY *)a1;
      v20.m_lock = (KSpinLockBase *)((char *)a1 + 8);
      v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 1);
      v17 = (char *)a1 + 16;
      v18 = &v9[-2].Next + 1;
      v19 = *(_QWORD *)v17;
      if ( *(char **)(*(_QWORD *)v17 + 8LL) != v17 )
        __fastfail(3u);
      *v18 = v19;
      v18[1] = v17;
      *(_QWORD *)(v19 + 8) = v18;
      *(_QWORD *)v17 = v18;
      KeReleaseSpinLock(v15, v16);
      v20.m_oldIrql = -1;
      KAcquireSpinLock::~KAcquireSpinLock(&v20);
      *a3 = 0;
    }
    *((_DWORD *)&v9[-1].Next + 2) = Number;
    return v9;
  }
  *a3 = 0;
  return (PSLIST_ENTRY)ndisPplAllocateFromSpecialPool((const struct _NDIS_POOL_HEADER *)a1);
}
