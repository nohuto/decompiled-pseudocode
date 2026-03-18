/*
 * XREFs of MiDeleteValidSystemPage @ 0x14033BEC0
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x14027E810 (MiDeleteSystemPagableVm.c)
 *     MiTerminateWsleCluster @ 0x14032F750 (MiTerminateWsleCluster.c)
 *     MiDeleteKernelStack @ 0x14033BC30 (MiDeleteKernelStack.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiDecrementCombinedPte @ 0x1402399A8 (MiDecrementCombinedPte.c)
 *     MiPfnShareCountIsZero @ 0x1402BF640 (MiPfnShareCountIsZero.c)
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiGetContainingPageTable @ 0x14033AC10 (MiGetContainingPageTable.c)
 *     MiCaptureDirtyBitToPfn @ 0x14033C2A0 (MiCaptureDirtyBitToPfn.c)
 *     MiSetPfnIdentity @ 0x14033C300 (MiSetPfnIdentity.c)
 *     MiIsPfnSystemCharged @ 0x1403B2AB0 (MiIsPfnSystemCharged.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiDriverPageIsDangling @ 0x1405905CC (MiDriverPageIsDangling.c)
 *     MiBadShareCount @ 0x1405AD6C8 (MiBadShareCount.c)
 */

void __fastcall MiDeleteValidSystemPage(__int64 a1, unsigned __int64 a2, char a3, __int64 a4)
{
  unsigned __int64 v4; // rdi
  ULONG_PTR v6; // rbx
  unsigned __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // r14
  unsigned __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // r8
  ULONG_PTR v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdx
  ULONG_PTR v17; // rbp
  unsigned int v18; // eax
  unsigned __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rdx
  int IsZero; // ebx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // rbx
  int v36; // [rsp+30h] [rbp-68h] BYREF
  int v37; // [rsp+34h] [rbp-64h] BYREF
  __int64 v38; // [rsp+38h] [rbp-60h]
  ULONG_PTR v39; // [rsp+40h] [rbp-58h] BYREF
  __int64 v40; // [rsp+48h] [rbp-50h]
  __int64 v41; // [rsp+50h] [rbp-48h]
  int v43; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v44; // [rsp+B8h] [rbp+20h]

  v44 = a4;
  v4 = ZeroPte;
  v6 = *(_QWORD *)a2;
  v8 = 0LL;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v33 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
      v34 = v6 | 0x20;
      if ( (v33 & 0x20) == 0 )
        v34 = v6;
      v6 = v34;
      if ( (v33 & 0x42) != 0 )
        v6 = v34 | 0x42;
    }
  }
  v9 = *(unsigned __int16 *)(a1 + 174);
  v10 = qword_140C51F48;
  v39 = v6;
  v40 = *(_QWORD *)(qword_140C51F48 + 8 * v9);
  v11 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v39);
  v12 = 0xFFFFFFFFFFLL;
  v13 = 0xFFFFDE0000000000uLL;
  v41 = 48 * ((v11 >> 12) & 0xFFFFFFFFFFLL);
  v14 = v41 - 0x220000000000LL;
  v15 = *(_QWORD *)(v41 - 0x220000000000LL + 40);
  v38 = *(_QWORD *)(v10 + 8 * (((unsigned __int64)v15 >> 43) & 0x3FF));
  if ( v15 < 0 )
  {
    if ( (v15 & 0x10000000000LL) == 0 )
    {
      v27 = *(_QWORD *)(v14 + 8);
      if ( v27 > 0 )
        v8 = v27 | 0x8000000000000000uLL;
    }
    v17 = 48 * MiGetContainingPageTable(a2) - 0x220000000000LL;
    v36 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v36, v28, v29, v30);
      while ( *(__int64 *)(v14 + 24) < 0 );
    }
    if ( (v6 & 0x42) != 0 )
      v4 = MiCaptureDirtyBitToPfn(v14);
    v31 = *(_QWORD *)(v14 + 16);
    if ( (v31 & 0x400) == 0 || (v6 & 0x200) != 0 )
      goto LABEL_42;
    if ( qword_140C50780 && (v31 & 0x10) == 0 )
      v31 &= ~qword_140C50780;
    if ( (*(_DWORD *)(*(_QWORD *)(v31 >> 16) + 56LL) & 0x820) == 0x820 )
LABEL_42:
      ++*(_QWORD *)(v44 + 32);
LABEL_12:
    if ( (a3 & 0x10) != 0 )
      *(_BYTE *)(v14 + 35) &= ~8u;
    v19 = ZeroPte;
    if ( MiPteInShadowRange(a2) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C51864) && (ZeroPte & 1) != 0 )
          v19 = ZeroPte | 0x8000000000000000uLL;
        *(_QWORD *)a2 = v19;
        MiWritePteShadow(a2, v19);
        goto LABEL_16;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v19 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)a2 = v19;
LABEL_16:
    if ( (*(_BYTE *)(v14 + 34) & 7) != 6 )
      MiBadShareCount(v14, v20, v21, v22);
    v23 = *(_QWORD *)(v14 + 24);
    v24 = (v23 & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)(v14 + 24) = v23 ^ (v24 ^ v23) & 0x3FFFFFFFFFFFFFFFLL;
    if ( (v23 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      IsZero = MiPfnShareCountIsZero(v14, v24);
    else
      IsZero = 2;
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v37 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v37, v24, v21, v22);
      while ( *(__int64 *)(v17 + 24) < 0 );
    }
    if ( (*(_BYTE *)(v17 + 34) & 7) != 6 )
      MiBadShareCount(v17, v24, v21, v22);
    v26 = (*(_QWORD *)(v17 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)(v17 + 24) ^= (*(_QWORD *)(v17 + 24) ^ v26) & 0x3FFFFFFFFFFFFFFFLL;
    if ( !v26 )
      MiPfnShareCountIsZero(v17, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v4 )
      MiReleasePageFileInfo(v38, v4, 1);
    if ( v8 )
      IsZero = MiDecrementCombinedPte(a1, v8);
    if ( IsZero == 3 )
      ++*(_QWORD *)(v44 + 8);
    return;
  }
  if ( v14 != qword_140C53270 )
  {
    v16 = *(_QWORD *)(v14 + 8);
    if ( (v16 | 0x8000000000000000uLL) != a2 )
      KeBugCheckEx(0x1Au, 0x404uLL, a2, v6, *(_QWORD *)(v14 + 8));
    v17 = 48 * (v15 & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v43 = 0;
    ++*(_QWORD *)(v44 + 32);
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v43, v16, v13, v12);
      while ( *(__int64 *)(v14 + 24) < 0 );
    }
    *(_QWORD *)(v14 + 24) |= 0x4000000000000000uLL;
    if ( ((*(_QWORD *)(v14 + 40) >> 60) & 7) == 2 )
    {
      v4 = MiCaptureDirtyBitToPfn(v14);
      v18 = *(unsigned __int16 *)(v14 + 32);
      if ( (!(_WORD)v18 || v18 > 2 && (v18 != 3 || (*(_BYTE *)(v14 + 34) & 8) == 0)) && v38 != v40 )
        KeBugCheckEx(0x1Au, 0x406uLL, a2, 0xAAAAAAAAAAAAAAABuLL * (v41 >> 4), *(unsigned __int16 *)(v14 + 32));
      MiSetPfnIdentity(v14, 0LL);
    }
    if ( (a3 & 4) != 0 && (unsigned int)MiIsPfnSystemCharged(v14) )
    {
      MiDriverPageIsDangling();
      *(_BYTE *)(v14 + 35) &= ~0x20u;
    }
    goto LABEL_12;
  }
  v35 = ZeroPte;
  if ( !MiPteInShadowRange(a2) )
  {
LABEL_72:
    *(_QWORD *)a2 = v35;
    return;
  }
  if ( !(unsigned int)MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v35 = ZeroPte | 0x8000000000000000uLL;
    }
    goto LABEL_72;
  }
  if ( !HIBYTE(word_140C51864) && (ZeroPte & 1) != 0 )
    v35 = ZeroPte | 0x8000000000000000uLL;
  *(_QWORD *)a2 = v35;
  MiWritePteShadow(a2, v35);
}
