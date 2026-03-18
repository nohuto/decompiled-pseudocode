/*
 * XREFs of MiCopyPage @ 0x1402E7D60
 * Callers:
 *     MiPrivateFixup @ 0x14024076C (MiPrivateFixup.c)
 *     MiSwapStackPageNoDpc @ 0x14024A0FC (MiSwapStackPageNoDpc.c)
 *     MiWaitForInPageComplete @ 0x14027AA30 (MiWaitForInPageComplete.c)
 *     MiCopyHeaderIfResident @ 0x14029E440 (MiCopyHeaderIfResident.c)
 *     MiReplaceTransitionPage @ 0x1402E7704 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x1402E97D4 (MiStealPage.c)
 *     MiTradeActivePage @ 0x1402EA95C (MiTradeActivePage.c)
 *     MiCopyOnWrite @ 0x140316400 (MiCopyOnWrite.c)
 *     MiMigratePfn @ 0x140327C60 (MiMigratePfn.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14059DB28 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiSplitDirectMapPage @ 0x1405A0B10 (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x1405B4024 (MiSwapNumaStandbyPage.c)
 *     MiDuplicateCloneLeaf @ 0x1405BA864 (MiDuplicateCloneLeaf.c)
 *     MiIdealClusterPage @ 0x1405C3C6C (MiIdealClusterPage.c)
 *     MiFillPerSessionProtos @ 0x140983680 (MiFillPerSessionProtos.c)
 *     MiTradeBootImagePage @ 0x140B05434 (MiTradeBootImagePage.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiClearPfnImageVerified @ 0x14023CC50 (MiClearPfnImageVerified.c)
 *     MiChangePageAttribute @ 0x140267E78 (MiChangePageAttribute.c)
 *     MiAbortCombineScan @ 0x140268998 (MiAbortCombineScan.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14026A230 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiMarkPfnVerified @ 0x14026C644 (MiMarkPfnVerified.c)
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 *     MiGetPteFromCopyList @ 0x1402CBF80 (MiGetPteFromCopyList.c)
 *     MiGetPteMappingSet @ 0x1402E8000 (MiGetPteMappingSet.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     MiGetPagePrivilege @ 0x140313B20 (MiGetPagePrivilege.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     KeSetPagePrivilege @ 0x14039FDB0 (KeSetPagePrivilege.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KeCopyPage @ 0x140424FF0 (KeCopyPage.c)
 *     KeCopyPrivilegedPage @ 0x14056B044 (KeCopyPrivilegedPage.c)
 */

char __fastcall MiCopyPage(ULONG_PTR a1, ULONG_PTR a2, unsigned int *a3, __int16 a4)
{
  char v6; // bl
  ULONG_PTR v7; // r14
  __int64 v8; // r13
  int v9; // r12d
  int v10; // edi
  int PagePrivilege; // eax
  int v12; // ebp
  __int64 v13; // r12
  __int128 *v14; // rax
  unsigned int v15; // edx
  __int64 PteFromCopyList; // rdi
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rbx
  unsigned __int8 v19; // bl
  _QWORD *MmInternal; // rcx
  bool v21; // di
  char v22; // cl
  __int64 v23; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v27; // eax
  bool v28; // zf
  char v29; // al
  int v30; // eax
  unsigned __int8 v31; // r10
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r11
  _DWORD *v34; // r9
  int v35; // eax
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r9
  _DWORD *v38; // r8
  int v39; // eax
  char v41; // [rsp+30h] [rbp-88h]
  int v42; // [rsp+34h] [rbp-84h]
  __int128 v43; // [rsp+40h] [rbp-78h] BYREF
  __int128 v44; // [rsp+50h] [rbp-68h] BYREF
  __int128 v45; // [rsp+60h] [rbp-58h] BYREF
  __int64 v46; // [rsp+70h] [rbp-48h]
  char v49; // [rsp+D8h] [rbp+20h]
  unsigned __int8 v50; // [rsp+D8h] [rbp+20h]

  v46 = 0LL;
  *(_QWORD *)&v43 = 0LL;
  v6 = 0;
  v45 = 0LL;
  v44 = 0LL;
  v7 = 48 * a2 - 0x220000000000LL;
  v8 = 48 * a1 - 0x220000000000LL;
  v9 = a4 & 4;
  v10 = -1073741823;
  v42 = v9 != 0 ? 4 : 0;
  PagePrivilege = MiGetPagePrivilege(v7);
  if ( PagePrivilege )
  {
    if ( (a4 & 0x12) != 0 )
    {
      v6 = 2;
    }
    else if ( (MiFlags & 0x8000) != 0 && (a4 & 8) == 0 && (PagePrivilege & 1) != 0 && *(__int64 *)(v7 + 40) >= 0 )
    {
      v6 = 2;
    }
    else if ( (MiFlags & 0x20000) == 0 || (v6 = 2, (PagePrivilege & 2) == 0 || (a4 & 8) != 0) )
    {
      v6 = 4;
    }
    v12 = a4 & 2;
  }
  else
  {
    v12 = a4 & 2;
    if ( (a4 & 2) == 0 )
    {
      v6 = 4;
LABEL_10:
      v13 = a1;
      goto LABEL_11;
    }
  }
  if ( (v6 & 2) == 0 )
    goto LABEL_10;
  v49 = 17;
  *((_QWORD *)&v43 + 1) = 0LL;
  v21 = v12 != 0;
  v22 = v12 != 0;
  v41 = v12 != 0;
  if ( (MiFlags & 0x20000) != 0 )
  {
    MiFlushEntireTbDueToAttributeChange();
    v22 = v12 != 0;
    v41 = v12 != 0;
    if ( (a4 & 0x100) != 0 )
    {
      v22 = v21 | 0x80;
      v41 = v21 | 0x80;
    }
  }
  v23 = 0LL;
  if ( (MiFlags & 0x4000) != 0 )
  {
    if ( v12 )
    {
      v43 = v44;
    }
    else
    {
      *(_QWORD *)&v43 = (__int64)(*(_QWORD *)(v8 + 8) << 25) >> 16;
      if ( (unsigned __int64)v43 < 0xFFFF800000000000uLL )
      {
        v6 |= 8u;
        *((_QWORD *)&v43 + 1) = KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle;
        if ( v9 )
        {
          MiMarkPfnVerified(v8, 4);
          MiAbortCombineScan(v8);
        }
        else
        {
          v50 = MiLockPageInline(v8);
          MiMarkPfnVerified(v8, 4);
          MiAbortCombineScan(v8);
          _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && v50 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v27 = ~(unsigned __int16)(-1LL << (v50 + 1));
                v28 = (v27 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v27;
                if ( v28 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(v50);
        }
      }
      v22 = v41;
    }
    v49 = 17;
    if ( (a4 & 0x20) != 0 )
    {
      v49 = 17;
      if ( !v9 )
      {
        v29 = MiLockPageInline(v8);
        v22 = v41;
        v49 = v29;
      }
      v23 = (((*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFLL) << 12) + (*(_DWORD *)(v8 + 8) & 0xFFF)) | 1;
    }
  }
  v13 = a1;
  v30 = KeCopyPrivilegedPage(a1, (unsigned int)&v43, a2, (unsigned int)&v44, v23, v22);
  v10 = v30;
  if ( v30 < 0 )
    KeBugCheckEx(0x1Au, 0x5150AuLL, a2, a1, v30);
  v31 = v49;
  if ( v49 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v32 = KeGetCurrentIrql();
        if ( v32 <= 0xFu && (unsigned __int8)v49 <= 0xFu && v32 >= 2u )
        {
          v33 = KeGetCurrentPrcb();
          v34 = v33->SchedulerAssist;
          v35 = ~(unsigned __int16)(-1LL << (v49 + 1));
          v28 = (v35 & v34[5]) == 0;
          v34[5] &= v35;
          if ( v28 )
          {
            KiRemoveSystemWorkPriorityKick(v33);
            v31 = v49;
          }
        }
      }
    }
    __writecr8(v31);
  }
  if ( (MiFlags & 0x20000) != 0 && !v12 && (*(_QWORD *)(v8 + 8) | 0x8000000000000000uLL) < 0xFFFFF6C000000000uLL )
  {
    v10 = KeSetPagePrivilege(a1, &v43, 4LL);
    if ( v10 < 0 )
      KeBugCheckEx(0x1Au, 0x5150DuLL, a2, a1, 0LL);
  }
LABEL_11:
  LOBYTE(v14) = (*(_QWORD *)(v7 + 40) >> 60) & 7;
  if ( (_BYTE)v14 == 3 )
  {
    if ( v12 )
      LOBYTE(v14) = MiClearPfnImageVerified(v7, v42);
    if ( (v6 & 4) == 0 )
    {
      LOBYTE(v14) = (*(_QWORD *)(v8 + 40) >> 60) & 7;
      if ( (_BYTE)v14 != 3 )
        LOBYTE(v14) = MiMarkPfnVerified(v8, v42);
    }
  }
  if ( v10 < 0 )
  {
    v15 = *(unsigned __int8 *)(v7 + 34) >> 6;
    if ( *(unsigned __int8 *)(v8 + 34) >> 6 != v15 )
      MiChangePageAttribute(v8, v15, 0);
    if ( !a3 )
    {
      if ( (a4 & 1) != 0 )
        v6 = 1;
      a3 = (unsigned int *)&v45;
      MiGetPteMappingSet(v6 & 1, 2LL, &v45);
    }
    PteFromCopyList = (__int64)MiGetPteFromCopyList(a3, v13, a2);
    KeCopyPage(PteFromCopyList << 25 >> 16, (PteFromCopyList << 25 >> 16) + 4096);
    v17 = ZeroPte;
    if ( (unsigned int)MiPteInShadowRange(PteFromCopyList) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C51864) && (ZeroPte & 1) != 0 )
          v17 = ZeroPte | 0x8000000000000000uLL;
        *(_QWORD *)PteFromCopyList = v17;
        MiWritePteShadow(PteFromCopyList, v17);
LABEL_21:
        v18 = ZeroPte;
        if ( (unsigned int)MiPteInShadowRange(PteFromCopyList + 8) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            if ( !HIBYTE(word_140C51864) && (ZeroPte & 1) != 0 )
              v18 = ZeroPte | 0x8000000000000000uLL;
            *(_QWORD *)(PteFromCopyList + 8) = v18;
            MiWritePteShadow(PteFromCopyList + 8, v18);
            goto LABEL_23;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (ZeroPte & 1) != 0 )
          {
            v18 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)(PteFromCopyList + 8) = v18;
LABEL_23:
        v14 = &v45;
        if ( a3 == (unsigned int *)&v45 )
        {
          v19 = *((_BYTE *)a3 + 8);
          if ( v19 == 17 )
          {
            LOBYTE(v14) = MiReleasePtes((__int64)&qword_140C534C0, *((_QWORD **)a3 + 2), a3[1]);
          }
          else
          {
            MmInternal = KeGetCurrentPrcb()->MmInternal;
            if ( MmInternal )
            {
              MmInternal[1543] = 0LL;
              v19 = *((_BYTE *)a3 + 8);
            }
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v36 = KeGetCurrentIrql();
                if ( v36 <= 0xFu && v19 <= 0xFu && v36 >= 2u )
                {
                  v37 = KeGetCurrentPrcb();
                  v38 = v37->SchedulerAssist;
                  v39 = ~(unsigned __int16)(-1LL << (v19 + 1));
                  v28 = (v39 & v38[5]) == 0;
                  v38[5] &= v39;
                  if ( v28 )
                    KiRemoveSystemWorkPriorityKick(v37);
                }
              }
            }
            LOBYTE(v14) = v19;
            __writecr8(v19);
          }
        }
        return (char)v14;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v17 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)PteFromCopyList = v17;
    goto LABEL_21;
  }
  return (char)v14;
}
