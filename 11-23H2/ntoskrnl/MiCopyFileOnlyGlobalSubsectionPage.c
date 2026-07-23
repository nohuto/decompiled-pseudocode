/*
 * XREFs of MiCopyFileOnlyGlobalSubsectionPage @ 0x14063C814
 * Callers:
 *     MiResolveMappedFileFault @ 0x1402E0870 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiTryLockLeafPage @ 0x140219AC4 (MiTryLockLeafPage.c)
 *     MiInitializeTransitionPfn @ 0x14021AF58 (MiInitializeTransitionPfn.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14021C84C (MiTryLockProtoPoolPageAtDpc.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCopyPage @ 0x1402840A0 (MiCopyPage.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     PsGetIoPriorityThread @ 0x1402A8E40 (PsGetIoPriorityThread.c)
 *     MiUnlockProtoPoolPage @ 0x1402DB180 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402DB214 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiStartingOffset @ 0x1402E25A0 (MiStartingOffset.c)
 *     MiAdvanceFaultList @ 0x1402EEA84 (MiAdvanceFaultList.c)
 *     MiObtainProtoReference @ 0x1402EF5A8 (MiObtainProtoReference.c)
 *     MiHandleInPageError @ 0x14033540C (MiHandleInPageError.c)
 *     MiFlowThroughInsertNode @ 0x140369D78 (MiFlowThroughInsertNode.c)
 */

__int64 __fastcall MiCopyFileOnlyGlobalSubsectionPage(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        __int64 a4,
        ULONG_PTR BugCheckParameter3,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // rbx
  ULONG_PTR v12; // r14
  unsigned __int64 v13; // r15
  __int64 v14; // r15
  __int64 v15; // rbx
  __int64 *v16; // rdi
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // ebx
  ULONG_PTR v20; // rbx
  _QWORD *v21; // r12
  __int64 v22; // rax
  ULONG_PTR v23; // r12
  unsigned __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v29; // [rsp+20h] [rbp-10h] BYREF
  int v30; // [rsp+70h] [rbp+40h] BYREF
  __int64 *v31; // [rsp+78h] [rbp+48h]
  __int64 v32; // [rsp+80h] [rbp+50h] BYREF

  v31 = a2;
  v7 = BugCheckParameter3;
  v32 = 0LL;
  v29 = 0LL;
  v12 = 48 * BugCheckParameter3 - 0x220000000000LL;
  v30 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v30);
    while ( *(__int64 *)(v12 + 24) < 0 );
  }
  v13 = MI_READ_PTE_LOCK_FREE(a3);
  if ( (v13 & 0x400) != 0 )
  {
    v14 = -1LL;
  }
  else
  {
    if ( qword_140C65B40 )
    {
      if ( (v13 & 0x10) != 0 )
        v13 &= ~0x10uLL;
      else
        v13 &= ~qword_140C65B40;
    }
    v14 = (v13 >> 12) & 0xFFFFFFFFFFLL;
  }
  MiInitializeTransitionPfn(v7, (__int64 *)a3, v14);
  *(_BYTE *)(v12 + 34) = *(_BYTE *)(v12 + 34) & 0xF8 | 2;
  *(_WORD *)(v12 + 32) = 1;
  *(_BYTE *)(v12 + 34) |= 0x20u;
  *(_QWORD *)v12 = (a1 + 32) & -(__int64)(a1 != 0);
  *(_BYTE *)(v12 + 35) ^= (*(_BYTE *)(v12 + 35) ^ (*(_DWORD *)(a1 + 192) >> 9)) & 7;
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v15 = *a2;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(*a2 + 72));
  ++*(_QWORD *)(v15 + 32);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v15 + 72));
  v16 = v31;
  v17 = v31[1] + 8LL * (unsigned int)((__int64)(a3 - *(_QWORD *)(a7 + 72)) >> 3);
  if ( ((a3 ^ v17) & 0xFFFFFFFFF000LL) != 0 )
    v18 = MiTryLockProtoPoolPageAtDpc((unsigned __int64 *)v17, 0xFFFFFFFFF000LL, &v29, &v32);
  else
    v18 = MiTryLockLeafPage((unsigned __int64 *)v17, 0LL, &v32);
  v19 = v18;
  if ( v18 < 0 )
    goto LABEL_29;
  if ( (*(_BYTE *)(v32 + 35) & 0x40) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v29 )
      MiUnlockProtoPoolPage(v29, 2u);
    v19 = -1073740023;
LABEL_29:
    LODWORD(BugCheckParameter3) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&BugCheckParameter3);
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
    MiHandleInPageError(v12);
    MiRemoveLockedPageChargeAndDecRef(v12);
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return v19;
  }
  v20 = 0xAAAAAAAAAAAAAAABuLL * ((v32 + 0x220000000000LL) >> 4);
  if ( (a4 & 1) != 0 )
  {
    v21 = (_QWORD *)(a4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( *(_BYTE *)v21 == 1 )
    {
      MiAdvanceFaultList(v21);
      *(_DWORD *)(a1 + 192) |= 8u;
    }
  }
  *(_QWORD *)(a1 + 168) = MI_READ_PTE_LOCK_FREE(a3);
  *(_QWORD *)(a1 + 232) = a3;
  if ( (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) < 2 )
    *(_DWORD *)(a1 + 192) |= 0x80u;
  v22 = a7;
  v23 = BugCheckParameter3;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_DWORD *)(a1 + 280) = 4325432;
  *(_QWORD *)(a1 + 312) = 4096LL;
  *(_QWORD *)(a1 + 320) = v23;
  v24 = MiStartingOffset(v16, a3, *(_DWORD *)(v22 + 64));
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = v16;
  v25 = a6;
  *(_QWORD *)(a1 + 248) = v12;
  *(_QWORD *)(a1 + 96) = v24;
  *(_QWORD *)(a1 + 240) = a3;
  *(_DWORD *)(a1 + 184) = 4096;
  MiObtainProtoReference(v25, 1LL, v26, v27);
  *(_QWORD *)(a1 + 160) = v25;
  MiCopyPage(v23, v20, 68);
  if ( v14 != -1 )
    MiFlowThroughInsertNode(a1, (_QWORD *)(48 * v14 - 0x220000000000LL));
  _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v29 )
    MiUnlockProtoPoolPage(v29, 2u);
  MiUnlockProtoPoolPage(v25, 2u);
  __incgsdword(0x2E98u);
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 4096LL;
  KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
  return 0LL;
}
