/*
 * XREFs of MiDeleteTransitionPte @ 0x1402DCE80
 * Callers:
 *     MiDeleteSubsectionPages @ 0x140218F10 (MiDeleteSubsectionPages.c)
 *     MiDecommitPages @ 0x14027F6B0 (MiDecommitPages.c)
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MmPurgeSection @ 0x1402DC8D0 (MmPurgeSection.c)
 *     MiDeleteSystemPagableVm @ 0x1402E9440 (MiDeleteSystemPagableVm.c)
 *     MiTryDeleteTransitionPte @ 0x1402F4108 (MiTryDeleteTransitionPte.c)
 *     MiDeletePerSessionProtos @ 0x14033E9C4 (MiDeletePerSessionProtos.c)
 *     MiPurgeFileOnlyPfn @ 0x14063EF38 (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     MiUnlinkPageFromListEx @ 0x140266510 (MiUnlinkPageFromListEx.c)
 *     MiPteInShadowRange @ 0x140271240 (MiPteInShadowRange.c)
 *     MiPfnShareCountIsZero @ 0x1402817A0 (MiPfnShareCountIsZero.c)
 *     MiReleasePageFileInfo @ 0x1402951BC (MiReleasePageFileInfo.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3670 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInvalidateCollidedIos @ 0x14032FF50 (MiInvalidateCollidedIos.c)
 *     MiDereferenceControlAreaPfnList @ 0x1403399D0 (MiDereferenceControlAreaPfnList.c)
 *     MiCapturePageFileInfoInline @ 0x1403487C4 (MiCapturePageFileInfoInline.c)
 *     MiWritePteShadow @ 0x140356D4C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140356DAC (MiPteHasShadow.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiBadShareCount @ 0x14064D6FC (MiBadShareCount.c)
 */

__int64 __fastcall MiDeleteTransitionPte(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, unsigned __int8 a3, int a4)
{
  ULONG_PTR v6; // rbx
  ULONG_PTR v7; // rbp
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rdx
  __int64 v11; // r12
  char v12; // r13
  __int16 v13; // r14
  unsigned __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rbx
  __int64 v18; // r8
  unsigned int v19; // r14d
  ULONG_PTR v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned __int64 v23; // rbx
  __int64 v25; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v27; // rax
  char v28; // al
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v32; // eax
  bool v33; // zf
  __int64 v34; // [rsp+30h] [rbp-58h]
  BOOL v35; // [rsp+90h] [rbp+8h] BYREF
  __int64 v36; // [rsp+98h] [rbp+10h]
  unsigned __int8 v37; // [rsp+A0h] [rbp+18h]
  int v38; // [rsp+A8h] [rbp+20h]

  v38 = a4;
  v37 = a3;
  v6 = *(_QWORD *)BugCheckParameter2;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4);
  v35 = MiPteInShadowRange(BugCheckParameter2);
  if ( v35
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v27 = *((_QWORD *)&Flink->Flink + ((BugCheckParameter2 >> 3) & 0x1FF));
      if ( (v27 & 0x20) != 0 )
        v6 |= 0x20uLL;
      if ( (v27 & 0x42) != 0 )
        v6 |= 0x42uLL;
    }
  }
  if ( (*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL) != BugCheckParameter2 )
    KeBugCheckEx(0x1Au, 0x402uLL, BugCheckParameter2, v6, *(_QWORD *)(a2 + 8));
  v10 = *(_QWORD *)(a2 + 40);
  v11 = v10 & 0xFFFFFFFFFFLL;
  v12 = 0;
  v13 = *(_WORD *)(a2 + 32);
  v14 = 0LL;
  v34 = 0LL;
  if ( !v13 )
  {
    MiUnlinkPageFromListEx(a2, 0LL);
    v10 = *(_QWORD *)(a2 + 40);
  }
  v15 = *(_QWORD *)(a2 + 16);
  v16 = a2 + 16;
  if ( (v15 & 0x400) != 0 )
  {
    if ( qword_140C65C40 && (v15 & 0x10) == 0 )
      v15 &= ~qword_140C65C40;
    MiDereferenceControlAreaPfnList(*(_QWORD *)(v15 >> 16), v15 >> 16, v8, 2LL);
    v15 = *(_QWORD *)(a2 + 16);
    v16 = a2 + 16;
    if ( (v15 & 0x400) != 0 )
      v17 = v15 & 0xFFFFFFFFFFFFF7FFuLL;
    else
      v17 = v15 & 0xFFFFFFFFFFFFFFF1uLL;
    v10 = *(_QWORD *)(a2 + 40);
  }
  else
  {
    v17 = 0LL;
  }
  v36 = 0LL;
  v18 = 1LL;
  if ( v13 )
  {
    v19 = 3;
    *(_QWORD *)(a2 + 24) |= 0x4000000000000000uLL;
    if ( (*(_BYTE *)(a2 + 34) & 0x20) != 0 )
    {
      v16 = *(_QWORD *)a2 - 32LL;
      v36 = v16;
      if ( *(_QWORD *)(v16 + 16) == v16 + 16 )
        v36 = 0LL;
    }
  }
  else
  {
    if ( (v15 & 0x400) == 0 )
    {
      v25 = MiCapturePageFileInfoInline(v16, 0LL, 1LL);
      v10 = *(_QWORD *)(a2 + 40);
      v14 = v25;
      v16 = (v10 >> 43) & 0x3FF;
      v34 = *(_QWORD *)(qword_140C674C8 + 8 * v16);
    }
    v19 = 4;
  }
  if ( (v10 & 0x20000000000000LL) != 0 )
  {
    v28 = *(_BYTE *)(a2 + 35);
    if ( (v28 & 0x10) == 0 )
      *(_BYTE *)(a2 + 35) = v28 | 0x10;
  }
  if ( !v35 )
    goto LABEL_18;
  if ( !(unsigned int)MiPteHasShadow(v16, v10, v18) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v17 & 1) != 0 )
      v17 |= 0x8000000000000000uLL;
LABEL_18:
    *(_QWORD *)BugCheckParameter2 = v17;
    goto LABEL_19;
  }
  if ( !HIBYTE(word_140C66DFC) && (v17 & 1) != 0 )
    v17 |= 0x8000000000000000uLL;
  *(_QWORD *)BugCheckParameter2 = v17;
  MiWritePteShadow(BugCheckParameter2, v17);
LABEL_19:
  if ( v19 == 4 )
    MiInsertPageInFreeOrZeroedList(v7, 2);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v20 = 48 * v11 - 0x220000000000LL;
  v35 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v35);
    while ( *(__int64 *)(v20 + 24) < 0 );
  }
  if ( (*(_BYTE *)(v20 + 34) & 7) != 6 )
    MiBadShareCount(v20);
  v21 = *(_QWORD *)(v20 + 24);
  v22 = (v21 & 0x3FFFFFFFFFFFFFFFLL) - 1;
  *(_QWORD *)(v20 + 24) = v21 ^ (v22 ^ v21) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v21 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    MiPfnShareCountIsZero(v20, v22, (_QWORD *)0x3FFFFFFFFFFFFFFFLL, v9);
  _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v23 = v37;
  if ( v37 != 17 )
  {
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v37 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v32 = ~(unsigned __int16)(-1LL << (v37 + 1));
        v33 = (v32 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v32;
        if ( v33 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v23);
  }
  if ( v36 )
    MiInvalidateCollidedIos(v36);
  if ( v14 && v38 )
  {
    if ( (_BYTE)v23 == 17 )
      v12 = 1;
    MiReleasePageFileInfo(v34, v14, v12);
  }
  return v19;
}
