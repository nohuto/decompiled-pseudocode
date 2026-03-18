/*
 * XREFs of MiMakeOutswappedPageResident @ 0x1405803C8
 * Callers:
 *     KiInSwapProcesses @ 0x14021119C (KiInSwapProcesses.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiIsPteInStore @ 0x140232E74 (MiIsPteInStore.c)
 *     MiInitializePfnForOtherProcess @ 0x14027CCE4 (MiInitializePfnForOtherProcess.c)
 *     MiIsRetryIoStatus @ 0x14028D2D8 (MiIsRetryIoStatus.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiSwizzleInvalidPte @ 0x1402CCC50 (MiSwizzleInvalidPte.c)
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 *     MiMakeTransitionPte @ 0x1402E4D28 (MiMakeTransitionPte.c)
 *     MiGetPagingFileOffset @ 0x1402E76C0 (MiGetPagingFileOffset.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     MiLockTransitionLeafPageEx @ 0x140315D60 (MiLockTransitionLeafPageEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 *     MiUnlinkPageFromListEx @ 0x140326870 (MiUnlinkPageFromListEx.c)
 *     MiInitializePageColorBase @ 0x140339C20 (MiInitializePageColorBase.c)
 *     MiCaptureDirtyBitToPfn @ 0x14033C2A0 (MiCaptureDirtyBitToPfn.c)
 *     MiInitializeInPageSupport @ 0x14033C4D0 (MiInitializeInPageSupport.c)
 *     IoPageReadEx @ 0x140342C50 (IoPageReadEx.c)
 *     MiSetPageTablePfnBuddy @ 0x14036C868 (MiSetPageTablePfnBuddy.c)
 *     MiDiscardTransitionPteEx @ 0x1403941B0 (MiDiscardTransitionPteEx.c)
 *     MiStoreFaultComplete @ 0x140394B24 (MiStoreFaultComplete.c)
 *     SmPageRead @ 0x140394BE8 (SmPageRead.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiValidatePagefilePageHash @ 0x14045D5EA (MiValidatePagefilePageHash.c)
 *     MiFlushAllFilesystemPages @ 0x14058DCA8 (MiFlushAllFilesystemPages.c)
 *     MiReadFromMemoryPagefile @ 0x14059A410 (MiReadFromMemoryPagefile.c)
 *     MiWaitForFreePage @ 0x1405B8348 (MiWaitForFreePage.c)
 */

unsigned __int64 __fastcall MiMakeOutswappedPageResident(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rcx
  _QWORD *v7; // r13
  unsigned __int8 CurrentIrql; // r14
  _DWORD *SchedulerAssist; // r9
  __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  __int64 v12; // r15
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r10
  _DWORD *v15; // r9
  int v16; // eax
  char v17; // al
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  unsigned __int8 v20; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v22; // r8
  int v23; // eax
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r10
  _DWORD *v26; // r9
  int v27; // eax
  signed __int32 v28; // eax
  __int64 v29; // rsi
  unsigned int v30; // ebx
  __int64 Page; // rax
  __int64 v32; // rsi
  __int64 TransitionPte; // rbx
  int v34; // r14d
  bool v35; // zf
  __int64 *v36; // r14
  __int16 v37; // r13
  int v38; // edi
  __int64 v39; // rdx
  __int16 IsPteInStore; // ax
  __int64 v41; // r14
  int v42; // r9d
  __int16 v43; // bx
  unsigned int PagingFileOffset; // eax
  char v45; // bl
  __int64 v46; // r13
  int v47; // eax
  int v48; // eax
  unsigned __int8 v49; // al
  unsigned __int8 v50; // bl
  struct _KPRCB *v51; // r10
  _DWORD *v52; // r9
  int v53; // eax
  NTSTATUS v54; // edi
  char v55; // al
  unsigned __int64 v56; // rbx
  unsigned __int8 v57; // al
  unsigned __int8 v58; // di
  struct _KPRCB *v59; // r9
  _DWORD *v60; // r8
  int v61; // eax
  unsigned __int64 ValidPte; // rdi
  unsigned __int64 v63; // rbx
  int v64; // esi
  bool v65; // zf
  __int16 v67[2]; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v68; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v69; // [rsp+50h] [rbp-B8h]
  __int64 v70; // [rsp+58h] [rbp-B0h]
  __int64 v71; // [rsp+60h] [rbp-A8h]
  __int128 v72; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v73; // [rsp+78h] [rbp-90h]
  _QWORD *v74; // [rsp+80h] [rbp-88h]
  _BYTE BugCheckParameter2[448]; // [rsp+88h] [rbp-80h] BYREF

  v68 = 0;
  LOBYTE(v67[0]) = 0;
  v72 = 0LL;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  v6 = *(unsigned __int16 *)(a1 + 1838);
  v7 = (_QWORD *)(a1 + 1432);
  v74 = (_QWORD *)(a1 + 1432);
  v70 = *(_QWORD *)(qword_140C51F48 + 8 * v6);
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v10 = MiLockTransitionLeafPageEx((ULONG_PTR)v7, v67, 0);
    v11 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v7);
    if ( (v11 & 0x800) == 0 )
      break;
    LOBYTE(v67[0]) = CurrentIrql;
    v12 = 0xAAAAAAAAAAAAAAABuLL * ((v10 + 0x220000000000LL) >> 4);
    if ( (*(_BYTE *)(v10 + 34) & 7) == 6 )
    {
      v18 = *(_QWORD *)(v10 + 24) ^ ((*(_QWORD *)(v10 + 24) + 1LL) ^ *(_QWORD *)(v10 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
LABEL_19:
      *(_QWORD *)(v10 + 24) = v18;
      v19 = MiCaptureDirtyBitToPfn(v10);
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v20 = KeGetCurrentIrql();
          if ( v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v22 = CurrentPrcb->SchedulerAssist;
            v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v35 = (v23 & v22[5]) == 0;
            v22[5] &= v23;
            if ( v35 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
      if ( v19 )
        MiReleasePageFileInfo(v70, v19, 0);
      goto LABEL_93;
    }
    if ( (MiUnlinkPageFromListEx(v10, 0) & 3) == 0 )
    {
      v17 = *(_BYTE *)(v10 + 34);
      ++*(_WORD *)(v10 + 32);
      *(_BYTE *)(v10 + 34) = v17 & 0xF8 | 6;
      v18 = *(_QWORD *)(v10 + 24) & 0xC000000000000000uLL | 1;
      goto LABEL_19;
    }
    MiDiscardTransitionPteEx(v10, 0);
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v13 = KeGetCurrentIrql();
        if ( v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
        {
          v14 = KeGetCurrentPrcb();
          v15 = v14->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v35 = (v16 & v15[5]) == 0;
          v15[5] &= v16;
          if ( v35 )
            KiRemoveSystemWorkPriorityKick((__int64)v14);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v24 = KeGetCurrentIrql();
      if ( v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
      {
        v25 = KeGetCurrentPrcb();
        v26 = v25->SchedulerAssist;
        v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v35 = (v27 & v26[5]) == 0;
        v26[5] &= v27;
        if ( v35 )
          KiRemoveSystemWorkPriorityKick((__int64)v25);
      }
    }
  }
  __writecr8(CurrentIrql);
  MiInitializePageColorBase(0LL, a5, (__int64)&v72);
  v28 = _InterlockedExchangeAdd((volatile signed __int32 *)v72, 1u);
  v29 = v70;
  v30 = DWORD2(v72) & v28 | HIDWORD(v72);
  while ( 1 )
  {
    Page = MiGetPage(v29, v30, 0x200u);
    v12 = Page;
    if ( Page != -1 )
      break;
    MiWaitForFreePage(v29);
  }
  v32 = 48 * Page - 0x220000000000LL;
  TransitionPte = MiMakeTransitionPte(Page, (v11 >> 5) & 0x1F);
  v34 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v7) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v34 = 1;
      if ( !HIBYTE(word_140C51864) )
      {
        v35 = (TransitionPte & 1) == 0;
        goto LABEL_44;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v35 = (TransitionPte & 1) == 0;
LABEL_44:
      if ( !v35 )
        TransitionPte |= 0x8000000000000000uLL;
    }
  }
  *v7 = TransitionPte;
  if ( v34 )
    MiWritePteShadow((__int64)v7, TransitionPte);
  MiInitializePfnForOtherProcess(v12, 0xFFFFF6FB7DBEDF68uLL, v12, 2560);
  v36 = (__int64 *)(v32 + 16);
  *(_QWORD *)(v32 + 16) = v11;
  v73 = 0xFFFFF6FB7DBED000uLL;
  v37 = 56;
  v38 = 0;
  LOWORD(v69) = 56;
  v71 = 0LL;
  while ( 1 )
  {
    MiInitializeInPageSupport((__int64)BugCheckParameter2, 0);
    v39 = *v36;
    *(_DWORD *)&BugCheckParameter2[192] |= 0x200000u;
    IsPteInStore = MiIsPteInStore(v70, v39);
    v41 = (unsigned __int8)HIBYTE(*(_WORD *)v36) >> 4;
    v43 = v42 ^ (v42 ^ (IsPteInStore << 8)) & 0x100;
    *(_DWORD *)&BugCheckParameter2[192] = v42 ^ ((unsigned __int16)v42 ^ (unsigned __int16)(IsPteInStore << 8)) & 0x100;
    PagingFileOffset = MiGetPagingFileOffset(v32 + 16);
    *(_QWORD *)&BugCheckParameter2[96] = (v43 & 0x100) != 0
                                       ? PagingFileOffset | ((unsigned __int64)(unsigned int)v41 << 60)
                                       : (unsigned __int64)PagingFileOffset << 12;
    MiSetPageTablePfnBuddy(v32, 0xFFFF800000000030uLL, 0);
    v45 = 0;
    *(_QWORD *)&BugCheckParameter2[304] = v73;
    *(_WORD *)&BugCheckParameter2[282] = 16386;
    *(_QWORD *)&BugCheckParameter2[272] = 0LL;
    *(_WORD *)&BugCheckParameter2[280] = v37;
    *(_DWORD *)&BugCheckParameter2[316] = v38;
    *(_DWORD *)&BugCheckParameter2[312] = 4096;
    *(_DWORD *)&BugCheckParameter2[184] = 4096;
    *(_QWORD *)&BugCheckParameter2[320] = v12;
    v46 = *(_QWORD *)(v70 + 8 * v41 + 16736);
    if ( _bittest16((const signed __int16 *)(v46 + 204), 0xBu) )
    {
      MiReadFromMemoryPagefile(*(_QWORD *)(v70 + 8 * v41 + 16736), BugCheckParameter2);
    }
    else
    {
      if ( (*(_WORD *)&BugCheckParameter2[192] & 0x100) != 0 )
      {
        *(_DWORD *)&BugCheckParameter2[80] = 0;
        *(_QWORD *)&BugCheckParameter2[88] = 0LL;
        v47 = SmPageRead((union _MM_STORE_KEY *)&BugCheckParameter2[96], (unsigned __int64)&BugCheckParameter2[272]);
      }
      else
      {
        v47 = IoPageReadEx(
                *(PFILE_OBJECT *)(v46 + 56),
                (__int64)&BugCheckParameter2[272],
                &BugCheckParameter2[96],
                (__int64)&BugCheckParameter2[32],
                (__int64)&BugCheckParameter2[80],
                0,
                0LL);
      }
      if ( v47 < 0 )
      {
        *(_DWORD *)&BugCheckParameter2[80] = v47;
        *(_QWORD *)&BugCheckParameter2[88] = 0LL;
        KeSetEvent((PRKEVENT)&BugCheckParameter2[32], 0, 0);
      }
    }
    KeWaitForSingleObject(&BugCheckParameter2[32], WrPageIn, 0, 0, 0LL);
    v48 = *(_DWORD *)&BugCheckParameter2[192];
    v68 = 0;
    if ( (*(_WORD *)&BugCheckParameter2[192] & 0x100) != 0 )
    {
      MiStoreFaultComplete((ULONG_PTR)BugCheckParameter2, &v68);
      LOBYTE(v67[0]) = MiLockPageInline(v32);
      if ( HIWORD(v68) )
        v68 = (unsigned __int16)v68 | ((HIWORD(v68) - 1) << 16);
      _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v49 = KeGetCurrentIrql(), v49 <= 0xFu) )
      {
        v50 = v67[0];
        if ( LOBYTE(v67[0]) <= 0xFu && v49 >= 2u )
        {
          v51 = KeGetCurrentPrcb();
          v52 = v51->SchedulerAssist;
          v50 = v67[0];
          v53 = ~(unsigned __int16)(-1LL << (LOBYTE(v67[0]) + 1));
          v35 = (v53 & v52[5]) == 0;
          v52[5] &= v53;
          if ( v35 )
            KiRemoveSystemWorkPriorityKick((__int64)v51);
        }
      }
      else
      {
        v50 = v67[0];
      }
      __writecr8(v50);
      v45 = v68;
      v48 = *(_DWORD *)&BugCheckParameter2[192];
    }
    v54 = *(_DWORD *)&BugCheckParameter2[80];
    if ( *(int *)&BugCheckParameter2[80] >= 0 && *(_QWORD *)(v46 + 216) )
    {
      *(_DWORD *)&BugCheckParameter2[192] = v48 | 0x400000;
      v54 = MiValidatePagefilePageHash(BugCheckParameter2);
    }
    if ( (BugCheckParameter2[282] & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)&BugCheckParameter2[296], (PMDL)&BugCheckParameter2[272]);
    MiSetPageTablePfnBuddy(v32, 0LL, 0);
    if ( v54 >= 0 )
      break;
    if ( !MiIsRetryIoStatus(v54, 0x1000uLL) )
    {
      MiFlushAllFilesystemPages(1LL);
      KeBugCheckEx(0x77u, v54, v54, (unsigned int)v41, *(unsigned int *)&BugCheckParameter2[96]);
    }
    if ( (v45 & 1) != 0 )
    {
      v38 = v71;
      v36 = (__int64 *)(v32 + 16);
      v37 = v69;
      if ( (v45 & 2) == 0 )
        continue;
    }
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
    v38 = v71;
    v36 = (__int64 *)(v32 + 16);
    v37 = v69;
  }
  if ( *(_QWORD *)&BugCheckParameter2[88] != 4096LL )
  {
    MiFlushAllFilesystemPages(1LL);
    KeBugCheckEx(0x77u, 2uLL, v54, (unsigned int)v41, *(unsigned int *)&BugCheckParameter2[96]);
  }
  v55 = MiLockPageInline(v32);
  v56 = *(_QWORD *)(v32 + 16);
  LOBYTE(v67[0]) = v55;
  *(_QWORD *)(v32 + 16) = MiSwizzleInvalidPte(128LL);
  *(_BYTE *)(v32 + 34) |= 0x10u;
  _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v57 = KeGetCurrentIrql(), v57 <= 0xFu) )
  {
    v58 = v67[0];
    if ( LOBYTE(v67[0]) <= 0xFu && v57 >= 2u )
    {
      v59 = KeGetCurrentPrcb();
      v60 = v59->SchedulerAssist;
      v58 = v67[0];
      v61 = ~(unsigned __int16)(-1LL << (LOBYTE(v67[0]) + 1));
      v35 = (v61 & v60[5]) == 0;
      v60[5] &= v61;
      if ( v35 )
        KiRemoveSystemWorkPriorityKick((__int64)v59);
    }
  }
  else
  {
    v58 = v67[0];
  }
  __writecr8(v58);
  MiReleasePageFileInfo(v70, v56, 0);
  v7 = v74;
LABEL_93:
  ValidPte = MiMakeValidPte(0xFFFFF6FB7DBEDF68uLL, v12, -2147483644);
  v63 = ValidPte;
  v64 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v7) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v64 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_101;
      v65 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_101;
      v65 = (ValidPte & 1) == 0;
    }
    if ( !v65 )
      v63 = ValidPte | 0x8000000000000000uLL;
  }
LABEL_101:
  *v7 = v63;
  if ( v64 )
    MiWritePteShadow((__int64)v7, v63);
  return ValidPte;
}
