/*
 * XREFs of MiFinishHardFault @ 0x1402D9300
 * Callers:
 *     MiIssueHardFault @ 0x1402A0F90 (MiIssueHardFault.c)
 *     MiPfCompleteInPageSupport @ 0x1402A39CC (MiPfCompleteInPageSupport.c)
 * Callees:
 *     MiReleasePrefetchGapPages @ 0x14020DC38 (MiReleasePrefetchGapPages.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     MmCheckCachedPageStates @ 0x140265200 (MmCheckCachedPageStates.c)
 *     MiRelockFaultState @ 0x140286D78 (MiRelockFaultState.c)
 *     MiCreateDecayPfn @ 0x140296130 (MiCreateDecayPfn.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8BC0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     MiFreeInPageSupportBlock @ 0x1402BD2CC (MiFreeInPageSupportBlock.c)
 *     MiAreChargesNeededToLockPage @ 0x1402CDF90 (MiAreChargesNeededToLockPage.c)
 *     MiPfnReferenceCountIsZero @ 0x1402D8FE0 (MiPfnReferenceCountIsZero.c)
 *     MiAddPageToInsertList @ 0x1402D99D0 (MiAddPageToInsertList.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402DAF84 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiRemoveLockedPageCharge @ 0x1402DBB20 (MiRemoveLockedPageCharge.c)
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 *     MiChargeForLockedPage @ 0x1402DC320 (MiChargeForLockedPage.c)
 *     MiLockOwnedProtoPage @ 0x1402DD410 (MiLockOwnedProtoPage.c)
 *     MiInsertPagesInList @ 0x1402DD520 (MiInsertPagesInList.c)
 *     MiReleaseFreshPage @ 0x1402E7F20 (MiReleaseFreshPage.c)
 *     MiReleaseFaultState @ 0x1402EF2A0 (MiReleaseFaultState.c)
 *     MiIsFaultPteIntact @ 0x1402EF3C8 (MiIsFaultPteIntact.c)
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     MiInvalidateCollidedIos @ 0x14032FF50 (MiInvalidateCollidedIos.c)
 *     MiHardFaultPageRelease @ 0x140334C08 (MiHardFaultPageRelease.c)
 *     MiDecayPfnFullyInitialized @ 0x14033EBB4 (MiDecayPfnFullyInitialized.c)
 *     MiInPageGapPage @ 0x140350EA8 (MiInPageGapPage.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 MiFinishHardFault(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v6; // r8
  __int64 v7; // rdx
  _DWORD *v8; // r9
  __int64 v9; // r12
  _QWORD *v10; // r13
  _DWORD *v11; // rax
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 CurrentIrql; // rcx
  bool v19; // zf
  unsigned __int8 v20; // r14
  __int64 v21; // rcx
  int v22; // r14d
  PSLIST_ENTRY DecayPfn; // rcx
  _QWORD *v24; // r12
  __int64 v25; // rcx
  __int64 *v26; // r15
  __int64 v27; // rbx
  int v28; // ecx
  char v29; // al
  __int64 v30; // rdx
  int v31; // r14d
  unsigned __int8 v32; // al
  unsigned __int8 v33; // bl
  __int64 v34; // rcx
  _QWORD *v36; // rcx
  _DWORD *v37; // rbx
  __int64 *v38; // r12
  __int64 v39; // rax
  __int64 v40; // rbx
  unsigned __int64 v41; // rsi
  unsigned __int8 v42; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v45; // eax
  unsigned __int8 v46; // cl
  struct _KPRCB *v47; // r10
  _DWORD *v48; // r9
  int v49; // eax
  __int64 v50; // rbx
  unsigned __int64 v51; // rsi
  struct _KPRCB *v52; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v54; // eax
  unsigned __int64 v55; // [rsp+20h] [rbp-E0h]
  int v56; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v57; // [rsp+38h] [rbp-C8h]
  __int64 v58; // [rsp+40h] [rbp-C0h] BYREF
  int v59; // [rsp+48h] [rbp-B8h]
  _BYTE v60[12]; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned __int64 v61; // [rsp+58h] [rbp-A8h]
  __int64 v62; // [rsp+60h] [rbp-A0h]
  __int16 v63; // [rsp+68h] [rbp-98h]
  int v64; // [rsp+6Ah] [rbp-96h]
  __int16 v65; // [rsp+6Eh] [rbp-92h]
  __int64 v66; // [rsp+70h] [rbp-90h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-88h]
  _DWORD *v68; // [rsp+80h] [rbp-80h]
  __int64 v69; // [rsp+88h] [rbp-78h]
  __int64 v70; // [rsp+90h] [rbp-70h]
  __int64 v71; // [rsp+98h] [rbp-68h]
  _QWORD v72[20]; // [rsp+A0h] [rbp-60h] BYREF
  int v73; // [rsp+150h] [rbp+50h] BYREF
  int v74; // [rsp+160h] [rbp+60h] BYREF
  __int64 v75; // [rsp+168h] [rbp+68h] BYREF
  va_list va; // [rsp+168h] [rbp+68h]
  va_list va1; // [rsp+170h] [rbp+70h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v75 = va_arg(va1, _QWORD);
  memset(v72, 0, 0x68uLL);
  v6 = *(_QWORD *)(a1 + 56);
  v7 = *(_QWORD *)(a3 + 152);
  v8 = (_DWORD *)(a3 + 272);
  v9 = *(_QWORD *)(a3 + 232);
  v71 = a1 + 56;
  v10 = 0LL;
  v11 = *(_DWORD **)(a3 + 256);
  memset(v60, 0, sizeof(v60));
  if ( v11 )
    v8 = v11;
  v64 = 0;
  v65 = 0;
  BugCheckParameter2 = 0LL;
  v63 = 0;
  v12 = v8 + 12;
  v13 = (v8[8] + v8[11]) & 0xFFF;
  v14 = (unsigned int)v8[10] + 4095LL;
  v70 = v6;
  v68 = v8;
  v55 = (unsigned __int64)&v8[2 * ((unsigned __int64)(v13 + v14) >> 12) + 10];
  v15 = *(unsigned int *)(a3 + 188);
  if ( (_DWORD)v15 == -1 )
    v61 = -1LL;
  else
    v61 = (unsigned __int64)&v12[v15];
  v16 = *(_QWORD *)(a3 + 160);
  v69 = *(_QWORD *)(a3 + 224);
  v17 = *(unsigned int *)(a3 + 192);
  if ( (v17 & 0x100000) != 0 || !v6 || (v17 & 8) != 0 )
  {
    v59 = -1073740748;
    LOBYTE(v73) = 17;
    if ( !v6 )
    {
      LOBYTE(v17) = 17;
      v57 = v17;
      goto LABEL_17;
    }
  }
  else
  {
    v59 = 0;
    LOBYTE(v73) = 17;
  }
  CurrentIrql = KeGetCurrentIrql();
  v57 = CurrentIrql;
  __writecr8(1uLL);
  if ( (*(_DWORD *)(a3 + 192) & 0x1000000) == 0 )
  {
    if ( (*(_BYTE *)(v6 + 184) & 7) != 0 )
    {
      v19 = (*(_WORD *)(v7 + 486))++ == 0xFFFF;
      if ( v19 && *(_QWORD *)(v7 + 152) != v7 + 152 )
        KiCheckForKernelApcDelivery(CurrentIrql, v7, v6, 1LL);
    }
    else
    {
      KeLeaveCriticalRegionThread(v7);
    }
  }
  MiRelockFaultState(a1 + 56, a2);
  LOBYTE(v17) = v57;
  *(_BYTE *)(a1 + 68) = v57;
LABEL_17:
  if ( v16 )
  {
    if ( (_BYTE)v17 == 17 )
    {
      v20 = MiLockPageInline(v16);
      LOBYTE(v73) = v20;
    }
    else
    {
      v74 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v74);
        while ( *(__int64 *)(v16 + 24) < 0 );
      }
      v20 = 17;
    }
    if ( !(unsigned int)MiAreChargesNeededToLockPage(v16) || (unsigned int)MiChargeForLockedPage(v21, 1LL) )
      ++*(_WORD *)(v16 + 32);
    MiLockOwnedProtoPage(v16, v20);
  }
  if ( *(_DWORD *)(a3 + 180) )
  {
    *(_DWORD *)(a3 + 80) = -1073741670;
    *(_QWORD *)(a3 + 88) = 0LL;
  }
  v22 = *(_DWORD *)(a3 + 80);
  if ( *(_QWORD *)(a3 + 16) != a3 + 16 )
  {
    HIBYTE(v63) = MiInvalidateCollidedIos(a3);
    if ( !HIBYTE(v63) )
    {
      *(_DWORD *)(a3 + 80) = -1073741801;
      *(_QWORD *)(a3 + 88) = 0LL;
    }
  }
  if ( v16 )
  {
    v56 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v56);
      while ( *(__int64 *)(v16 + 24) < 0 );
    }
    if ( (unsigned int)MiRemoveLockedPageCharge(v16) )
      MiPfnReferenceCountIsZero(v16, 0xAAAAAAAAAAAAAAABuLL * ((v16 + 0x220000000000LL) >> 4));
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( v59 >= 0 && !(unsigned int)MiIsFaultPteIntact(a1, v69, v9, a3 + 168) )
    v59 = -1073740748;
  if ( v22 >= 0
    && ((*(_DWORD *)(a3 + 192) & 8) != 0
     || *(_QWORD *)(a3 + 256)
     || (_DWORD *)v55 != v68 + 12 && v61 > (unsigned __int64)(v68 + 14))
    && (*(_DWORD *)(a3 + 192) & 0x88000) == 0x80000
    && (*(_DWORD *)(a3 + 192) & 0xE00) != 0 )
  {
    DecayPfn = MiCreateDecayPfn();
    BugCheckParameter2 = (ULONG_PTR)DecayPfn;
  }
  else
  {
    DecayPfn = 0LL;
    BugCheckParameter2 = 0LL;
  }
  v24 = 0LL;
  v62 = *(_QWORD *)(a1 + 56);
  v66 = v75;
  v72[2] = 0x3FFFFFFFFFLL;
  v72[3] = 0x3FFFFFFFFFLL;
  v58 = a3;
  LODWORD(v72[1]) = 0;
  LODWORD(v72[12]) = 2;
  v72[11] = DecayPfn;
  if ( (unsigned __int64)v12 > v55 )
  {
    v26 = (__int64 *)(a3 + 248);
    MiInsertPagesInList(v72, 0LL);
  }
  else
  {
    do
    {
      v25 = 48LL * *v12 - 0x220000000000LL;
      if ( v25 == qword_140C69800 || (*(_BYTE *)(v25 + 34) & 7) == 7 && *(_QWORD *)(v25 + 8) == -3LL )
      {
        if ( (unsigned int)MiInPageGapPage() )
        {
          *v36 = v24;
          v24 = v36;
        }
      }
      else if ( v25 == *(_QWORD *)(a3 + 248) )
      {
        v10 = v12;
      }
      else
      {
        *(_QWORD *)&v60[4] = v12;
        MiAddPageToInsertList(v72, &v58);
      }
      ++v12;
      v26 = (__int64 *)(a3 + 248);
    }
    while ( (unsigned __int64)v12 <= v55 );
    MiInsertPagesInList(v72, 0LL);
    if ( v24 )
      MiReleasePrefetchGapPages(v24);
  }
  v27 = *v26;
  LODWORD(v75) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx((__int64 *)va);
    while ( *(__int64 *)(v27 + 24) < 0 );
  }
  v28 = HIWORD(*(_DWORD *)(a3 + 112));
  if ( (*(_DWORD *)(a3 + 112) & 1) != 0 && (_WORD)v28 )
    *(_WORD *)(a3 + 114) = v28 - 1;
  v29 = *(_BYTE *)(v27 + 34) & 0xDF;
  *(_QWORD *)&v60[4] = v10;
  *(_BYTE *)(v27 + 34) = v29;
  *(_QWORD *)v27 = 0LL;
  MiHardFaultPageRelease(&v58, v27);
  v31 = *(_DWORD *)(a3 + 80);
  _InterlockedAnd64((volatile signed __int64 *)(*v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v16 )
  {
    v32 = v73;
    v33 = 17;
    v73 = 0;
    if ( (_BYTE)v57 == 17 )
      v33 = v32;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v73);
      while ( *(__int64 *)(v16 + 24) < 0 );
    }
    *(_BYTE *)(v16 + 34) &= ~0x20u;
    if ( (unsigned int)MiRemoveLockedPageCharge(v16) )
      MiPfnReferenceCountIsZero(v16, 0xAAAAAAAAAAAAAAABuLL * ((v16 + 0x220000000000LL) >> 4));
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v33 != 17 )
    {
      if ( (_DWORD)KiIrqlFlags )
      {
        v42 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v42 <= 0xFu && v33 <= 0xFu && v42 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v30 = -1LL << (v33 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v45 = ~(unsigned __int16)v30;
          v19 = (v45 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v45;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v33);
    }
  }
  if ( (*(_DWORD *)(a3 + 192) & 0x8000) != 0 )
  {
    v37 = v68;
    MmCheckCachedPageStates(v69 + (*(_DWORD *)(a3 + 96) & 0x3FFFF), (unsigned int)v68[10], 2, 0LL);
    v38 = (__int64 *)(v37 + 12);
    if ( (unsigned __int64)(v37 + 12) <= v55 )
    {
      do
      {
        if ( *v38 < 0 )
        {
          v39 = *v38 & 0x7FFFFFFFFFFFFFFFLL;
          *v38 = v39;
          v40 = 48 * v39 - 0x220000000000LL;
          v41 = (unsigned __int8)MiLockPageInline(v40);
          MiRemoveLockedPageChargeAndDecRef(v40);
          _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (_DWORD)KiIrqlFlags )
          {
            v46 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v46 <= 0xFu && (unsigned __int8)v41 <= 0xFu && v46 >= 2u )
            {
              v47 = KeGetCurrentPrcb();
              v30 = -1LL << ((unsigned __int8)v41 + 1);
              v48 = v47->SchedulerAssist;
              v49 = ~(unsigned __int16)v30;
              v19 = (v49 & v48[5]) == 0;
              v48[5] &= v49;
              if ( v19 )
                KiRemoveSystemWorkPriorityKick(v47);
            }
          }
          __writecr8(v41);
        }
        ++v38;
      }
      while ( (unsigned __int64)v38 <= v55 );
    }
  }
  if ( BugCheckParameter2 )
    MiDecayPfnFullyInitialized(BugCheckParameter2);
  if ( v70 && (*(_DWORD *)(a3 + 192) & 0x1000000) != 0 )
  {
    LOBYTE(v30) = 17;
    MiReleaseFaultState(v71, v30, 0LL);
  }
  if ( (*(_DWORD *)(a3 + 192) & 0x200000) == 0 )
    ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)(a3 + 200), 0x746C6644u);
  if ( *(int *)(a3 + 176) > 1 )
    KeSetEvent((PRKEVENT)(a3 + 56), 0, 0);
  v34 = *(_QWORD *)(a3 + 104);
  if ( !v34 )
    goto LABEL_71;
  v50 = *(_QWORD *)(qword_140C674C8 + 8 * ((*(_QWORD *)(v34 + 40) >> 43) & 0x3FFLL));
  MiReleaseFreshPage(v34);
  v51 = 1LL;
  MiReturnCommit(v50, 1LL);
  if ( (_UNKNOWN *)v50 != &MiSystemPartition
    || (v52 = KeGetCurrentPrcb(),
        CachedResidentAvailable = (int)v52->CachedResidentAvailable,
        (_DWORD)CachedResidentAvailable == -1) )
  {
LABEL_131:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v50 + 17280), v51);
    goto LABEL_71;
  }
  if ( (unsigned __int64)(CachedResidentAvailable + 1) > 0x100 )
  {
LABEL_127:
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&v52->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v51 = (int)CachedResidentAvailable - 192 + 1LL;
    }
    if ( !v51 )
      goto LABEL_71;
    goto LABEL_131;
  }
  while ( 1 )
  {
    v54 = _InterlockedCompareExchange(
            (volatile signed __int32 *)&v52->CachedResidentAvailable,
            CachedResidentAvailable + 1,
            CachedResidentAvailable);
    v19 = (_DWORD)CachedResidentAvailable == v54;
    LODWORD(CachedResidentAvailable) = v54;
    if ( v19 )
      break;
    if ( v54 == -1 || (unsigned __int64)(v54 + 1LL) > 0x100 )
      goto LABEL_127;
  }
LABEL_71:
  if ( v31 < 0 )
  {
    if ( (*(_DWORD *)(a3 + 112) & 3) != 1 )
      goto LABEL_73;
    goto LABEL_92;
  }
  v31 = v59;
  if ( !(_BYTE)v63 )
LABEL_92:
    v31 = -1073740748;
LABEL_73:
  MiFreeInPageSupportBlock((PSLIST_ENTRY)a3);
  return (unsigned int)v31;
}
