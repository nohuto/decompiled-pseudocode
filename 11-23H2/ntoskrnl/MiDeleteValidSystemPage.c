/*
 * XREFs of MiDeleteValidSystemPage @ 0x140280AA0
 * Callers:
 *     MiTerminateWsleCluster @ 0x140279430 (MiTerminateWsleCluster.c)
 *     MiDeleteKernelStack @ 0x140283C20 (MiDeleteKernelStack.c)
 *     MiDeleteSystemPagableVm @ 0x1402E96D0 (MiDeleteSystemPagableVm.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiPfnShareCountIsZero @ 0x140281B50 (MiPfnShareCountIsZero.c)
 *     MiCaptureDirtyBitToPfn @ 0x140283390 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x14029556C (MiReleasePageFileInfo.c)
 *     MiGetContainingPageTable @ 0x1402E1500 (MiGetContainingPageTable.c)
 *     MiDecrementCombinedPteEx @ 0x1402F3DA8 (MiDecrementCombinedPteEx.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     MiIsPfnSystemCharged @ 0x1403A654C (MiIsPfnSystemCharged.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     MiDriverPageIsDangling @ 0x14062CAF8 (MiDriverPageIsDangling.c)
 *     MiBadShareCount @ 0x14064DBDC (MiBadShareCount.c)
 */

struct _KTHREAD *__fastcall MiDeleteValidSystemPage(__int64 a1, unsigned __int64 a2, char a3, struct _KTHREAD *a4)
{
  __int64 v4; // rdi
  ULONG_PTR v6; // rbx
  unsigned __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rsi
  signed __int64 v11; // r15
  __int64 v12; // rcx
  signed __int64 v13; // rbp
  __int64 v14; // rsi
  unsigned int v15; // eax
  signed __int64 v16; // rax
  signed __int64 v17; // rax
  volatile signed __int32 *v18; // r15
  unsigned __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  int IsZero; // ebx
  __int64 v25; // rcx
  __int64 v26; // rdx
  struct _KTHREAD *result; // rax
  char v28; // al
  __int64 v29; // rax
  __int64 v30; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  signed __int64 v38; // rdx
  int v39; // [rsp+30h] [rbp-B8h] BYREF
  int v40; // [rsp+34h] [rbp-B4h] BYREF
  __int64 v41; // [rsp+38h] [rbp-B0h]
  ULONG_PTR v42; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v43; // [rsp+48h] [rbp-A0h]
  __int128 v44; // [rsp+50h] [rbp-98h]
  __int128 v45; // [rsp+60h] [rbp-88h]
  __int64 v46; // [rsp+70h] [rbp-78h]
  signed __int64 v47; // [rsp+78h] [rbp-70h]
  __int128 v48; // [rsp+80h] [rbp-68h]
  __int128 v49; // [rsp+90h] [rbp-58h]
  __int128 v50; // [rsp+A0h] [rbp-48h]
  int v52; // [rsp+F8h] [rbp+10h] BYREF
  struct _KTHREAD *v53; // [rsp+108h] [rbp+20h]

  v53 = a4;
  v4 = ZeroPte;
  v6 = *(_QWORD *)a2;
  v8 = 0LL;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v32 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
      v33 = v6 | 0x20;
      if ( (v32 & 0x20) == 0 )
        v33 = v6;
      v6 = v33;
      if ( (v32 & 0x42) != 0 )
        v6 = v33 | 0x42;
    }
  }
  v9 = *(unsigned __int16 *)(a1 + 174);
  v10 = qword_140C673C8;
  v42 = v6;
  v43 = *(_QWORD *)(qword_140C673C8 + 8 * v9);
  v11 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v42) >> 12) & 0xFFFFFFFFFFLL);
  v12 = *(_QWORD *)(v11 - 0x220000000000LL + 40);
  v13 = v11 - 0x220000000000LL;
  v41 = *(_QWORD *)(v10 + 8 * (((unsigned __int64)v12 >> 43) & 0x3FF));
  if ( v12 < 0 )
  {
    if ( (v12 & 0x10000000000LL) == 0 )
    {
      v29 = *(_QWORD *)(v13 + 8);
      if ( v29 > 0 )
        v8 = v29 | 0x8000000000000000uLL;
    }
    v14 = 48 * MiGetContainingPageTable(a2) - 0x220000000000LL;
    v39 = 0;
    v18 = (volatile signed __int32 *)(v13 + 24);
    while ( _interlockedbittestandset64(v18, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v39);
      while ( *(__int64 *)v18 < 0 );
    }
    if ( (v6 & 0x42) != 0 )
      v4 = MiCaptureDirtyBitToPfn(v13);
    v30 = *(_QWORD *)(v13 + 16);
    if ( (v30 & 0x400) == 0 || (v6 & 0x200) != 0 )
      goto LABEL_43;
    if ( qword_140C65B40 && (v30 & 0x10) == 0 )
      v30 &= ~qword_140C65B40;
    if ( (*(_DWORD *)(*(_QWORD *)(v30 >> 16) + 56LL) & 0x820) == 0x820 )
LABEL_43:
      ++v53->QuantumTarget;
LABEL_12:
    if ( (a3 & 0x10) != 0 )
    {
      v28 = *(_BYTE *)(v13 + 35);
      if ( (v28 & 8) != 0 )
        *(_BYTE *)(v13 + 35) = v28 & 0xF7;
    }
    v19 = ZeroPte;
    if ( MiPteInShadowRange(a2) )
    {
      if ( (unsigned int)MiPteHasShadow(v21, v20, v22) )
      {
        if ( !HIBYTE(word_140C66CFC) && (ZeroPte & 1) != 0 )
          v19 = ZeroPte | 0x8000000000000000uLL;
        *(_QWORD *)a2 = v19;
        MiWritePteShadow(a2, v19);
        goto LABEL_15;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v19 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)a2 = v19;
    v18 = (volatile signed __int32 *)(v13 + 24);
LABEL_15:
    if ( (*(_BYTE *)(v13 + 34) & 7) != 6 )
      MiBadShareCount(v13);
    v23 = (*(_QWORD *)v18 & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)v18 ^= (v23 ^ *(_QWORD *)v18) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v23 )
      IsZero = 2;
    else
      IsZero = MiPfnShareCountIsZero(v13, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)v18, 0x7FFFFFFFFFFFFFFFuLL);
    v40 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v40);
      while ( *(__int64 *)(v14 + 24) < 0 );
    }
    if ( (*(_BYTE *)(v14 + 34) & 7) != 6 )
      MiBadShareCount(v14);
    v25 = *(_QWORD *)(v14 + 24);
    v26 = (v25 & 0x3FFFFFFFFFFFFFFFLL) - 1;
    result = (struct _KTHREAD *)(v25 ^ (v26 ^ v25) & 0x3FFFFFFFFFFFFFFFLL);
    *(_QWORD *)(v14 + 24) = result;
    if ( (v25 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      result = (struct _KTHREAD *)MiPfnShareCountIsZero(v14, v26);
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v4 )
      result = (struct _KTHREAD *)MiReleasePageFileInfo(v41, v4, 1LL);
    if ( v8 )
    {
      result = (struct _KTHREAD *)MiDecrementCombinedPteEx(a1, v8, 0LL);
      IsZero = (int)result;
    }
    if ( IsZero == 3 )
    {
      result = v53;
      ++v53->Header.WaitListHead.Flink;
    }
    return result;
  }
  if ( v13 != qword_140C696F0 )
  {
    if ( (*(_QWORD *)(v13 + 8) | 0x8000000000000000uLL) != a2 )
      KeBugCheckEx(0x1Au, 0x404uLL, a2, v6, *(_QWORD *)(v13 + 8));
    v14 = 48 * (v12 & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v52 = 0;
    ++v53->QuantumTarget;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v52);
      while ( *(__int64 *)(v13 + 24) < 0 );
    }
    *(_QWORD *)(v13 + 24) |= 0x4000000000000000uLL;
    if ( ((*(_QWORD *)(v13 + 40) >> 60) & 7) == 2 )
    {
      v4 = MiCaptureDirtyBitToPfn(v11 - 0x220000000000LL);
      v15 = *(unsigned __int16 *)(v13 + 32);
      if ( (!(_WORD)v15 || v15 > 2 && (v15 != 3 || (*(_BYTE *)(v13 + 34) & 8) == 0)) && v41 != v43 )
        KeBugCheckEx(0x1Au, 0x406uLL, a2, 0xAAAAAAAAAAAAAAABuLL * (v11 >> 4), *(unsigned __int16 *)(v13 + 32));
      v16 = *(_QWORD *)(v13 + 40);
      v46 = 0LL;
      v47 = v16;
      v44 = 0LL;
      v45 = 0LL;
      v48 = 0LL;
      v49 = 0LL;
      v50 = 0LL;
      v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 40), v16 & 0x8FFFFFFFFFFFFFFFuLL, v16);
      *((_QWORD *)&v50 + 1) = v17;
      if ( v47 != v17 )
      {
        do
        {
          v47 = v17;
          v38 = v17;
          v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 40), v17 & 0x8FFFFFFFFFFFFFFFuLL, v17);
          *((_QWORD *)&v50 + 1) = v17;
        }
        while ( v38 != v17 );
      }
    }
    v18 = (volatile signed __int32 *)(v13 + 24);
    if ( (a3 & 4) != 0 )
    {
      v18 = (volatile signed __int32 *)(v13 + 24);
      if ( (unsigned int)MiIsPfnSystemCharged(v13) )
      {
        MiDriverPageIsDangling();
        *(_BYTE *)(v13 + 35) &= ~0x20u;
        v18 = (volatile signed __int32 *)(v13 + 24);
      }
    }
    goto LABEL_12;
  }
  v34 = ZeroPte;
  result = (struct _KTHREAD *)MiPteInShadowRange(a2);
  if ( !(_DWORD)result )
  {
LABEL_67:
    *(_QWORD *)a2 = v34;
    return result;
  }
  if ( !(unsigned int)MiPteHasShadow(v36, v35, v37) )
  {
    result = KeGetCurrentThread();
    if ( (HIDWORD(result->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (ZeroPte & 1) != 0 )
    {
      result = (struct _KTHREAD *)0x8000000000000000LL;
      v34 = ZeroPte | 0x8000000000000000uLL;
    }
    goto LABEL_67;
  }
  if ( !HIBYTE(word_140C66CFC) && (ZeroPte & 1) != 0 )
    v34 = ZeroPte | 0x8000000000000000uLL;
  *(_QWORD *)a2 = v34;
  return (struct _KTHREAD *)MiWritePteShadow(a2, v34);
}
