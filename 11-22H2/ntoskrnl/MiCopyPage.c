/*
 * XREFs of MiCopyPage @ 0x140283CF0
 * Callers:
 *     MiCopyHeaderIfResident @ 0x14020ECD0 (MiCopyHeaderIfResident.c)
 *     MiMigratePfn @ 0x140262FC0 (MiMigratePfn.c)
 *     MiCopyOnWrite @ 0x14026FC80 (MiCopyOnWrite.c)
 *     MiWaitForInPageComplete @ 0x1402A1680 (MiWaitForInPageComplete.c)
 *     MiTradeActivePage @ 0x1402EAE24 (MiTradeActivePage.c)
 *     MiPrivateFixup @ 0x1402ED678 (MiPrivateFixup.c)
 *     MiReplaceTransitionPage @ 0x1403304D0 (MiReplaceTransitionPage.c)
 *     MiSwapStackPageNoDpc @ 0x140399FDC (MiSwapStackPageNoDpc.c)
 *     MiStealPage @ 0x1403BBD7C (MiStealPage.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14063C334 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiSplitDirectMapPage @ 0x14063F2D4 (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x140651E40 (MiSwapNumaStandbyPage.c)
 *     MiDuplicateCloneLeaf @ 0x1406640F8 (MiDuplicateCloneLeaf.c)
 *     MiIdealClusterPage @ 0x14066A500 (MiIdealClusterPage.c)
 *     MiFillPerSessionProtos @ 0x140A4A01C (MiFillPerSessionProtos.c)
 *     MiTradeBootImagePage @ 0x140B4A55C (MiTradeBootImagePage.c)
 * Callees:
 *     MiMarkPfnVerified @ 0x140219BF0 (MiMarkPfnVerified.c)
 *     MiAbortCombineScan @ 0x14021AACC (MiAbortCombineScan.c)
 *     MiPteInShadowRange @ 0x140271240 (MiPteInShadowRange.c)
 *     MiGetPagePrivilege @ 0x140282C40 (MiGetPagePrivilege.c)
 *     MiGetPteFromCopyList @ 0x140283F10 (MiGetPteFromCopyList.c)
 *     MiReturnPteMappingSet @ 0x140284068 (MiReturnPteMappingSet.c)
 *     MiGetPteMappingSet @ 0x1402840D0 (MiGetPteMappingSet.c)
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 *     MiClearPfnImageVerified @ 0x140335218 (MiClearPfnImageVerified.c)
 *     MiWritePteShadow @ 0x140356D4C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140356DAC (MiPteHasShadow.c)
 *     MiChangePageAttribute @ 0x14036ED6C (MiChangePageAttribute.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14036EF4C (MiFlushEntireTbDueToAttributeChange.c)
 *     KeSetPagePrivilege @ 0x1403D46B4 (KeSetPagePrivilege.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     KeCopyPage @ 0x140424020 (KeCopyPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     KeCopyPrivilegedPage @ 0x14056ECC8 (KeCopyPrivilegedPage.c)
 */

char __fastcall MiCopyPage(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter2, __int16 a3)
{
  char v6; // bl
  ULONG_PTR v7; // rbp
  ULONG_PTR v8; // r15
  int v9; // edi
  int PagePrivilege; // eax
  __int64 v11; // rdx
  int v12; // esi
  char result; // al
  __int64 v14; // rdx
  unsigned __int64 PteFromCopyList; // rdi
  unsigned __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  bool v24; // di
  __int64 v25; // rcx
  __int64 v26; // rdi
  _QWORD *v27; // rdx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v31; // eax
  bool v32; // zf
  char v33; // al
  int v34; // eax
  unsigned __int8 v35; // r9
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r10
  _DWORD *v38; // r8
  int v39; // eax
  _QWORD *v40; // [rsp+30h] [rbp-98h]
  __int128 v41; // [rsp+40h] [rbp-88h] BYREF
  __int128 v42; // [rsp+50h] [rbp-78h] BYREF
  __int128 v43; // [rsp+60h] [rbp-68h] BYREF
  __int64 v44; // [rsp+70h] [rbp-58h]
  char v45; // [rsp+D0h] [rbp+8h]
  int v46; // [rsp+D8h] [rbp+10h]
  char v47; // [rsp+E0h] [rbp+18h]
  unsigned __int8 v48; // [rsp+E0h] [rbp+18h]

  v44 = 0LL;
  *(_QWORD *)&v41 = 0LL;
  v43 = 0LL;
  v6 = 0;
  v42 = 0LL;
  v7 = 48 * BugCheckParameter2 - 0x220000000000LL;
  v8 = 48 * BugCheckParameter3 - 0x220000000000LL;
  v46 = a3 & 4;
  v9 = -1073741823;
  PagePrivilege = MiGetPagePrivilege(v7, v46, (unsigned __int64 *)&v42);
  if ( PagePrivilege )
  {
    if ( (a3 & 0x12) != 0 )
    {
      v6 = 2;
    }
    else if ( (MiFlags & 0x8000) != 0 && (a3 & 8) == 0 && (PagePrivilege & 1) != 0 && *(__int64 *)(v7 + 40) >= 0 )
    {
      v6 = 2;
    }
    else if ( (MiFlags & 0x20000) == 0 || (v6 = 2, (PagePrivilege & 2) == 0 || (a3 & 8) != 0) )
    {
      v6 = 4;
    }
    v12 = a3 & 2;
  }
  else
  {
    v12 = a3 & 2;
    if ( (a3 & 2) == 0 )
    {
      v6 = 4;
      goto LABEL_10;
    }
  }
  if ( (v6 & 2) != 0 )
  {
    v47 = 17;
    *((_QWORD *)&v41 + 1) = 0LL;
    v24 = v12 != 0;
    v25 = v12 != 0;
    v45 = v12 != 0;
    if ( (MiFlags & 0x20000) != 0 )
    {
      MiFlushEntireTbDueToAttributeChange(v25, v11, 0xFFFFF68000000000uLL);
      LOBYTE(v25) = v12 != 0;
      v45 = v12 != 0;
      if ( (a3 & 0x100) != 0 )
      {
        LOBYTE(v25) = v24 | 0x80;
        v45 = v24 | 0x80;
      }
    }
    v26 = 0LL;
    if ( (MiFlags & 0x4000) != 0 )
    {
      v27 = (_QWORD *)(v8 + 8);
      v40 = (_QWORD *)(v8 + 8);
      if ( v12 )
      {
        v41 = v42;
      }
      else
      {
        *(_QWORD *)&v41 = (__int64)(*v27 << 25) >> 16;
        if ( (unsigned __int64)v41 < 0xFFFF800000000000uLL )
        {
          v6 |= 8u;
          *((_QWORD *)&v41 + 1) = KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle;
          if ( v46 )
          {
            MiMarkPfnVerified(v8, 4);
            MiAbortCombineScan(v8);
          }
          else
          {
            v48 = MiLockPageInline(v8);
            MiMarkPfnVerified(v8, 4);
            MiAbortCombineScan(v8);
            _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( (_DWORD)KiIrqlFlags )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v48 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v31 = ~(unsigned __int16)(-1LL << (v48 + 1));
                v32 = (v31 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v31;
                if ( v32 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            __writecr8(v48);
          }
          v27 = (_QWORD *)(v8 + 8);
          v47 = 17;
          v40 = (_QWORD *)(v8 + 8);
        }
        LOBYTE(v25) = v45;
      }
      if ( (a3 & 0x20) != 0 )
      {
        if ( !v46 )
        {
          v33 = MiLockPageInline(v8);
          v27 = v40;
          LOBYTE(v25) = v45;
          v47 = v33;
        }
        v26 = (((*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFLL) << 12) + (*(_DWORD *)v27 & 0xFFF)) | 1;
      }
    }
    v34 = KeCopyPrivilegedPage(BugCheckParameter3, (unsigned int)&v41, BugCheckParameter2, (unsigned int)&v42, v26, v25);
    v9 = v34;
    if ( v34 < 0 )
      KeBugCheckEx(0x1Au, 0x5150AuLL, BugCheckParameter2, BugCheckParameter3, v34);
    v35 = v47;
    if ( v47 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (_DWORD)KiIrqlFlags )
      {
        v36 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v36 <= 0xFu && (unsigned __int8)v47 <= 0xFu && v36 >= 2u )
        {
          v37 = KeGetCurrentPrcb();
          v38 = v37->SchedulerAssist;
          v39 = ~(unsigned __int16)(-1LL << (v47 + 1));
          v32 = (v39 & v38[5]) == 0;
          v38[5] &= v39;
          if ( v32 )
          {
            KiRemoveSystemWorkPriorityKick(v37);
            v35 = v47;
          }
        }
      }
      __writecr8(v35);
    }
    if ( (_bittest((const signed __int32 *)&MiFlags, 0x11u) & ((a3 & 2) == 0)) != 0
      && (*(_QWORD *)(v8 + 8) | 0x8000000000000000uLL) < 0xFFFFF6C000000000uLL )
    {
      v9 = KeSetPagePrivilege(BugCheckParameter3, &v41, 4LL);
      if ( v9 < 0 )
        KeBugCheckEx(0x1Au, 0x5150DuLL, BugCheckParameter2, BugCheckParameter3, 0LL);
    }
  }
LABEL_10:
  result = (*(_QWORD *)(v7 + 40) >> 60) & 7;
  if ( result == 3 )
  {
    if ( v12 )
      result = MiClearPfnImageVerified(v7);
    if ( (v6 & 4) == 0 )
    {
      result = (*(_QWORD *)(v8 + 40) >> 60) & 7;
      if ( result != 3 )
        result = MiMarkPfnVerified(v8, v46 != 0 ? 4 : 0);
    }
  }
  if ( v9 < 0 )
  {
    v14 = *(unsigned __int8 *)(v7 + 34) >> 6;
    if ( *(unsigned __int8 *)(v8 + 34) >> 6 != (_DWORD)v14 )
      MiChangePageAttribute(v8, v14, 0LL);
    if ( (a3 & 1) != 0 )
      v6 = 1;
    MiGetPteMappingSet(v6 & 1, 2LL, &v43);
    PteFromCopyList = MiGetPteFromCopyList(&v43, BugCheckParameter3, BugCheckParameter2);
    KeCopyPage((__int64)(PteFromCopyList << 25) >> 16, ((__int64)(PteFromCopyList << 25) >> 16) + 4096);
    v16 = ZeroPte;
    if ( MiPteInShadowRange(PteFromCopyList) )
    {
      if ( (unsigned int)MiPteHasShadow(v18, v17, v19) )
      {
        if ( !HIBYTE(word_140C66DFC) && (ZeroPte & 1) != 0 )
          v16 = ZeroPte | 0x8000000000000000uLL;
        *(_QWORD *)PteFromCopyList = v16;
        MiWritePteShadow(PteFromCopyList, v16);
LABEL_18:
        v20 = ZeroPte;
        if ( MiPteInShadowRange(PteFromCopyList + 8) )
        {
          if ( (unsigned int)MiPteHasShadow(v22, v21, v23) )
          {
            if ( !HIBYTE(word_140C66DFC) && (ZeroPte & 1) != 0 )
              v20 = ZeroPte | 0x8000000000000000uLL;
            *(_QWORD *)(PteFromCopyList + 8) = v20;
            MiWritePteShadow(PteFromCopyList + 8, v20);
            return MiReturnPteMappingSet(&v43);
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (ZeroPte & 1) != 0 )
          {
            v20 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)(PteFromCopyList + 8) = v20;
        return MiReturnPteMappingSet(&v43);
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v16 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)PteFromCopyList = v16;
    goto LABEL_18;
  }
  return result;
}
