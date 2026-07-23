/*
 * XREFs of MiLockCode @ 0x1402825C0
 * Callers:
 *     MmLockRegistryRecoverySections @ 0x14061ADD8 (MmLockRegistryRecoverySections.c)
 *     MiLockImageSection @ 0x1406F5980 (MiLockImageSection.c)
 *     MiDisablePagingOfDriver @ 0x14070378C (MiDisablePagingOfDriver.c)
 *     MmResetDriverPaging @ 0x140703840 (MmResetDriverPaging.c)
 *     MiHandleDriverNonPagedSections @ 0x140705D58 (MiHandleDriverNonPagedSections.c)
 *     MmLockPreChargedPagedPool @ 0x140A30C00 (MmLockPreChargedPagedPool.c)
 * Callees:
 *     MiGetSessionVm @ 0x14020B11C (MiGetSessionVm.c)
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     MiGetWsleContents @ 0x140216FB0 (MiGetWsleContents.c)
 *     MiWriteValidPteVolatile @ 0x140217020 (MiWriteValidPteVolatile.c)
 *     MmAccessFault @ 0x140235440 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x1402377D0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MiCopyOnWrite @ 0x140270030 (MiCopyOnWrite.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MmIsExecutivePagingDisabled @ 0x140282FD0 (MmIsExecutivePagingDisabled.c)
 *     MiGetPagePrivilege @ 0x140282FF0 (MiGetPagePrivilege.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiGetSystemRegionType @ 0x140284B00 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140284B40 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140285C64 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiMakeDriverPagesPrivate @ 0x140291CE0 (MiMakeDriverPagesPrivate.c)
 *     MiReleasePageFileInfo @ 0x14029556C (MiReleasePageFileInfo.c)
 *     MiUnlockProtoPoolPage @ 0x1402DB180 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1402DD490 (MiLockProtoPoolPage.c)
 *     MiReleaseFreshPage @ 0x1402E81B0 (MiReleaseFreshPage.c)
 *     MiTradeActivePage @ 0x1402EB0B4 (MiTradeActivePage.c)
 *     MiAddLockedPageCharge @ 0x1402EF5F8 (MiAddLockedPageCharge.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     MiCheckSlabPfnBitmap @ 0x1403249C0 (MiCheckSlabPfnBitmap.c)
 *     MiCapturePageFileInfoInline @ 0x140348F44 (MiCapturePageFileInfoInline.c)
 *     MiRemoveSystemImagePage @ 0x140351038 (MiRemoveSystemImagePage.c)
 *     MiBetterDriverPageNeeded @ 0x140355358 (MiBetterDriverPageNeeded.c)
 *     MiUnlockCodePage @ 0x140367B28 (MiUnlockCodePage.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiCopyOnWriteCheckConditions @ 0x140667370 (MiCopyOnWriteCheckConditions.c)
 *     MiPrefetchDriverPages @ 0x1406FA390 (MiPrefetchDriverPages.c)
 *     MiAllocateDriverPage @ 0x140706534 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiLockCode(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v5; // r15
  __int64 v7; // r12
  char v8; // di
  int v9; // ebp
  int SystemRegionType; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  char *AnyMultiplexedVm; // r13
  __int64 v15; // r9
  __int64 v16; // rsi
  unsigned __int64 v17; // r14
  __int64 v18; // r9
  ULONG_PTR v19; // rbx
  unsigned __int64 v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // r13
  __int64 v24; // rdi
  __int64 v25; // r8
  bool v26; // si
  __int64 v27; // r8
  __int64 v28; // rbx
  __int64 v29; // r8
  unsigned __int64 v30; // r14
  unsigned __int64 v31; // rcx
  char WsleContents; // r12
  __int64 v33; // rcx
  int v34; // esi
  unsigned __int64 v35; // rax
  bool v36; // zf
  __int64 v37; // r14
  unsigned __int64 v38; // r13
  __int64 v39; // rax
  __int16 v40; // cx
  __int64 v41; // rax
  int v42; // edx
  unsigned __int8 v43; // dl
  ULONG_PTR v44; // rax
  unsigned __int64 v46; // r8
  __int64 v47; // r9
  int v48; // eax
  unsigned __int8 v49; // al
  __int64 v50; // rcx
  __int64 v51; // rdx
  unsigned __int64 v52; // r14
  __int64 v53; // r8
  int IsExecutivePagingDisabled; // eax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v56; // rax
  __int64 v57; // rdx
  int v58; // ebx
  struct _LIST_ENTRY *v59; // r8
  __int64 v60; // rax
  __int64 v61; // r8
  struct _LIST_ENTRY *v62; // rcx
  __int64 v63; // rcx
  struct _LIST_ENTRY *v64; // r8
  __int64 v65; // rcx
  char v66; // [rsp+30h] [rbp-188h]
  unsigned __int8 v67; // [rsp+31h] [rbp-187h]
  __int64 DriverPage; // [rsp+38h] [rbp-180h]
  __int64 v69; // [rsp+48h] [rbp-170h]
  char *SessionVm; // [rsp+58h] [rbp-160h]
  unsigned __int64 v72; // [rsp+60h] [rbp-158h]
  int v73; // [rsp+68h] [rbp-150h]
  char v74; // [rsp+6Ch] [rbp-14Ch]
  int v75; // [rsp+70h] [rbp-148h]
  int v76; // [rsp+74h] [rbp-144h] BYREF
  int v77; // [rsp+78h] [rbp-140h] BYREF
  unsigned __int64 v78; // [rsp+80h] [rbp-138h]
  unsigned __int64 v79; // [rsp+88h] [rbp-130h]
  __int64 v80; // [rsp+90h] [rbp-128h]
  __int64 v81; // [rsp+98h] [rbp-120h]
  ULONG_PTR v82; // [rsp+A0h] [rbp-118h] BYREF
  unsigned __int64 v83; // [rsp+A8h] [rbp-110h]
  int v84; // [rsp+B0h] [rbp-108h] BYREF
  __int16 v85; // [rsp+B4h] [rbp-104h]
  __int16 v86; // [rsp+B6h] [rbp-102h]
  __int64 v87; // [rsp+B8h] [rbp-100h]
  __int64 v88; // [rsp+C0h] [rbp-F8h]
  __int64 v89; // [rsp+C8h] [rbp-F0h]
  _BYTE v90[152]; // [rsp+D0h] [rbp-E8h] BYREF

  v79 = a3;
  v5 = a2;
  v83 = a2;
  v80 = a1;
  v86 = 0;
  memset(v90, 0, sizeof(v90));
  v7 = 0LL;
  v81 = 0LL;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((__int64)(v5 << 25) >> 16) )
    return 0LL;
  v8 = 1;
  v66 = 1;
  v9 = 0;
  v75 = 0;
  SystemRegionType = MiGetSystemRegionType((__int64)(v5 << 25) >> 16);
  if ( SystemRegionType == 1 )
  {
    v78 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25];
    v9 = 2;
    SessionVm = (char *)MiGetSessionVm();
    v75 = 2;
    AnyMultiplexedVm = SessionVm;
  }
  else
  {
    v78 = 0LL;
    if ( SystemRegionType == 6 )
    {
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
      SessionVm = AnyMultiplexedVm;
    }
    else
    {
      AnyMultiplexedVm = (char *)&unk_140C69B40;
      SessionVm = (char *)&unk_140C69B40;
    }
  }
  LOBYTE(v13) = 0;
  v73 = 0;
  v74 = 0;
  v15 = 1LL;
  if ( a1 )
  {
    if ( v9 == 2 && (*(_DWORD *)(a1 + 104) & 0x8000000) == 0 )
    {
      IsExecutivePagingDisabled = MmIsExecutivePagingDisabled(v12, v11, v13, 1LL);
      v13 = (unsigned __int8)v13;
      if ( IsExecutivePagingDisabled == (_DWORD)v15 )
        v13 = (unsigned int)v15;
      v74 = v13;
    }
    if ( (*(_DWORD *)(a1 + 196) & 0x100) == 0 )
      v73 = 2;
  }
  MiPrefetchDriverPages(v5, a3, v13, v15);
  v16 = -1LL;
  v87 = 20LL;
  DriverPage = -1LL;
  v84 = v9;
  v17 = 0LL;
  v85 = 0;
  v88 = 0LL;
  v89 = 0LL;
  v72 = 0LL;
  v67 = MiLockWorkingSetShared(AnyMultiplexedVm);
  do
  {
    if ( v17 )
    {
      if ( (v5 & 0xFFF) != 0 )
        goto LABEL_12;
      MiFlushTbList(&v84);
      MiUnlockPageTableInternal(AnyMultiplexedVm, v17);
    }
    v17 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v72 = v17;
    MiLockPageTableInternal((__int64)AnyMultiplexedVm, v17, 0, v18);
LABEL_12:
    v19 = *(_QWORD *)v5;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL
      && v5 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v19 & 1) != 0
      && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v56 = *((_QWORD *)&Flink->Flink + ((v5 >> 3) & 0x1FF));
        v57 = v19 | 0x20;
        if ( (v56 & 0x20) == 0 )
          v57 = *(_QWORD *)v5;
        v19 = v57;
        if ( (v56 & 0x42) != 0 )
          v19 = v57 | 0x42;
      }
    }
    v82 = v19;
    v20 = (__int64)((v5 << 25) - v7) >> 16;
    if ( (v19 & 1) != 0 )
    {
      v23 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v82) >> 12) & 0xFFFFFFFFFFLL;
      v24 = 48 * v23 - 0x220000000000LL;
      v25 = *(_QWORD *)(v24 + 40);
      if ( (v25 & 0x10000000000LL) == 0 && *(__int64 *)(v24 + 8) > 0 )
      {
        MiFlushTbList(&v84);
        AnyMultiplexedVm = SessionVm;
        v58 = MiCopyOnWrite((__int64)((v5 << 25) - v7) >> 16, v5, 0xFFFFFFFFFFFFFFFFuLL, 0);
        if ( v58 < 0 )
        {
          MiUnlockPageTableInternal(SessionVm, v17);
          MiUnlockWorkingSetShared((__int64)SessionVm, v67);
          MiCopyOnWriteCheckConditions(SessionVm, (unsigned int)v58);
          v17 = 0LL;
          v72 = 0LL;
          MiLockWorkingSetShared(SessionVm);
        }
        goto LABEL_61;
      }
      v26 = 0;
      if ( (unsigned int)MmIsExecutivePagingDisabled(v22, v21, v25, 0xFFFFDE0000000000uLL) && (a4 & 4) != 0 )
        v26 = ((*(_BYTE *)(v24 + 16) >> 5) & 2) == 0;
      if ( v27 < 0 && (!v78 || v74 || v26) && (a4 & 1) != 0 )
      {
        MiFlushTbList(&v84);
        AnyMultiplexedVm = SessionVm;
        MiUnlockPageTableInternal(SessionVm, v17);
        MiUnlockWorkingSetShared((__int64)SessionVm, v67);
        v46 = v79;
        if ( v26 )
          v46 = v5;
        v47 = 0LL;
        goto LABEL_121;
      }
      if ( (v19 & 0x800) == 0 && (v19 & 0x200) != 0 )
      {
        MiFlushTbList(&v84);
        AnyMultiplexedVm = SessionVm;
        MiUnlockPageTableInternal(SessionVm, v17);
        MiUnlockWorkingSetShared((__int64)SessionVm, v67);
        v46 = v79;
        v47 = 1LL;
LABEL_121:
        MiMakeDriverPagesPrivate(v80, v5, v46, v47);
        v17 = 0LL;
        v72 = 0LL;
        MiLockWorkingSetShared(AnyMultiplexedVm);
        v16 = DriverPage;
LABEL_61:
        v8 = v66;
        continue;
      }
      v28 = 0LL;
      v29 = *(_QWORD *)(qword_140C673C8 + 8 * (((unsigned __int64)v27 >> 43) & 0x3FF));
      v69 = v29;
      v30 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v31 = *(_QWORD *)v30;
      if ( v30 >= 0xFFFFF6FB7DBED000uLL
        && v30 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v31 & 1) != 0
        && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
      {
        v59 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v59 )
        {
          v60 = *((_QWORD *)&v59->Flink + ((v30 >> 3) & 0x1FF));
          v61 = v31 | 0x20;
          if ( (v60 & 0x20) == 0 )
            v61 = *(_QWORD *)v30;
          v31 = v61;
          if ( (v60 & 0x42) != 0 )
            v31 = v61 | 0x42;
        }
        v29 = v69;
      }
      WsleContents = HIBYTE(v31) & 0xF | (16 * ((v31 >> 60) & 7));
      v33 = DriverPage;
      if ( DriverPage != -1 )
      {
        v50 = v18 + 48 * DriverPage;
        if ( v29 == *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v50 + 40) >> 43) & 0x3FFLL)) )
        {
          v33 = DriverPage;
          v34 = a4 & 2;
          v37 = v69;
          goto LABEL_38;
        }
        MiReleaseFreshPage(v50);
        v33 = -1LL;
        DriverPage = -1LL;
      }
      v34 = a4 & 2;
      if ( (a4 & 2) != 0 )
      {
        if ( (WsleContents & 0xF) == 9 )
        {
          v37 = v69;
          goto LABEL_38;
        }
      }
      else if ( *(_WORD *)(v24 + 32) != 1 )
      {
LABEL_76:
        v37 = v69;
LABEL_38:
        v76 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v76);
            while ( *(__int64 *)(v24 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) );
          v33 = DriverPage;
          v34 = a4 & 2;
        }
        if ( v33 == -1 )
          goto LABEL_40;
        if ( v34 )
        {
          WsleContents = MiGetWsleContents(v33, v20);
          if ( (WsleContents & 0xF) == 9 )
          {
            v38 = v20;
            goto LABEL_88;
          }
          v33 = DriverPage;
        }
        else if ( *(_WORD *)(v24 + 32) != 1 )
        {
          v38 = v20;
LABEL_42:
          if ( v75 == 2 )
          {
            if ( !(unsigned int)MiAddLockedPageCharge(v24, 0LL) )
              v66 = 0;
            goto LABEL_52;
          }
          v39 = *(_QWORD *)(v24 + 40);
          if ( (v39 & 0x10000000000LL) == 0 && (v39 & 0x20000000000000LL) == 0 )
          {
            v40 = *(_WORD *)(v24 + 32);
            v41 = *(_QWORD *)(v24 + 24) & 0x3FFFFFFFFFFFFFFFLL;
            v42 = 0;
            if ( v40 )
            {
              if ( v40 == 1 )
              {
                if ( v41 || (*(_BYTE *)(v24 + 34) & 8) != 0 )
                  v42 = 1;
                if ( !v42 )
                  goto LABEL_51;
              }
              else if ( v40 != 2 || !v41 || (*(_BYTE *)(v24 + 34) & 8) == 0 )
              {
                goto LABEL_51;
              }
            }
            *(_BYTE *)(v24 + 35) |= 0x20u;
          }
LABEL_51:
          ++*(_WORD *)(v24 + 32);
LABEL_52:
          if ( (*(_QWORD *)(v24 + 16) & 0x400) == 0 )
          {
            v43 = *(_BYTE *)(v24 + 34);
            if ( (v43 & 0x10) == 0 )
            {
              if ( (((*(_QWORD *)(v24 + 16) & 0x400LL) == 0) & (unsigned __int8)~(v43 >> 3)) != 0 )
                v28 = MiCapturePageFileInfoInline(v24 + 16, 1LL, 0LL);
              *(_BYTE *)(v24 + 34) |= 0x10u;
            }
          }
          v44 = *(_QWORD *)v5;
          if ( v5 >= 0xFFFFF6FB7DBED000uLL
            && v5 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0x600000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v44 & 1) != 0
            && ((v44 & 0x20) == 0 || (v44 & 0x42) == 0) )
          {
            v64 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v64 )
            {
              v65 = *((_QWORD *)&v64->Flink + ((v5 >> 3) & 0x1FF));
              if ( (v65 & 0x20) != 0 )
                LOWORD(v44) = v44 | 0x20;
              if ( (v65 & 0x42) != 0 )
                LOWORD(v44) = v44 | 0x42;
            }
          }
          if ( (v44 & 0x800) == 0 || (v44 & 0x42) != 0 )
          {
            v16 = DriverPage;
          }
          else
          {
            MiWriteValidPteVolatile((volatile signed __int64 *)v5, 2, 0);
            MiInsertTbFlushEntry((__int64)&v84, v38, 1LL, 0);
            v16 = DriverPage;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v28 )
            MiReleasePageFileInfo(v69, v28, 1LL);
          v17 = v72;
          v5 += 8LL;
          v7 = v81;
          AnyMultiplexedVm = SessionVm;
          goto LABEL_61;
        }
        if ( _bittest64((const signed __int64 *)(v24 + 40), 0x35u)
          || !(unsigned int)MiBetterDriverPageNeeded(v37, v23, v33) )
        {
LABEL_40:
          v38 = v20;
          goto LABEL_41;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( *(__int64 *)(v24 + 40) >= 0 )
        {
          v52 = 1LL;
        }
        else
        {
          v52 = MiLockProtoPoolPage(*(_QWORD *)(v24 + 8) | 0x8000000000000000uLL, 0LL);
          if ( !v52 )
          {
            v38 = v20;
LABEL_106:
            if ( v52 > 1 )
            {
              LOBYTE(v51) = 17;
              MiUnlockProtoPoolPage(v52, v51);
            }
            v77 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v77);
              while ( *(__int64 *)(v24 + 24) < 0 );
            }
LABEL_41:
            if ( !v34 )
              goto LABEL_42;
LABEL_88:
            if ( (WsleContents & 0xF) != 9 )
              MiRemoveSystemImagePage(SessionVm, v5, v24);
            goto LABEL_52;
          }
        }
        v38 = v20;
        if ( (unsigned int)MiTradeActivePage(v24, 48 * (int)DriverPage, v20, 0, 2, v73) == 1 )
        {
          *(_QWORD *)(v24 + 16) = ZeroPte;
          MiSetOriginalPtePfnFromFreeList(v24 + 16, v51, v53);
          MiReleaseFreshPage(v24);
          v24 = 48 * DriverPage - 0x220000000000LL;
          DriverPage = -1LL;
        }
        goto LABEL_106;
      }
      if ( _bittest64((const signed __int64 *)(v24 + 40), 0x35u)
        || (*(_QWORD *)(v24 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
        || *(_WORD *)(v24 + 32) != 1 )
      {
LABEL_75:
        v34 = a4 & 2;
        goto LABEL_76;
      }
      if ( (MiFlags & 0x4000) != 0 && (unsigned int)MiGetPagePrivilege(48 * v23 - 0x220000000000LL)
        || (MiFlags & 0x20000) != 0 && (unsigned int)MiGetPagePrivilege(48 * v23 - 0x220000000000LL) )
      {
LABEL_74:
        v33 = DriverPage;
        goto LABEL_75;
      }
      v35 = *(_QWORD *)v30;
      if ( v30 >= 0xFFFFF6FB7DBED000uLL
        && v30 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v35 & 1) != 0 )
      {
        if ( (v35 & 0x20) != 0 )
        {
          v36 = (v35 & 0x42) == 0;
          if ( (v35 & 0x42) != 0 )
          {
LABEL_35:
            if ( v36 || (v73 & 2) != 0 )
            {
              v37 = v69;
              if ( (unsigned int)MiCheckSlabPfnBitmap(48 * v23 - 0x220000000000LL, 1LL) )
              {
                v33 = DriverPage;
                v34 = a4 & 2;
              }
              else
              {
                if ( !*(_QWORD *)(v69 + 16264) || v23 < *(_QWORD *)(v69 + 16248) )
                {
                  MiFlushTbList(&v84);
                  AnyMultiplexedVm = SessionVm;
                  MiUnlockPageTableInternal(SessionVm, v72);
                  MiUnlockWorkingSetShared((__int64)SessionVm, v67);
                  v17 = 0LL;
                  DriverPage = MiAllocateDriverPage(v69, (*(_DWORD *)(v24 + 16) >> 5) & 0x1F, 0LL);
                  v72 = 0LL;
                  v16 = DriverPage;
                  v49 = MiLockWorkingSetShared(SessionVm);
                  v7 = v81;
                  v67 = v49;
                  goto LABEL_61;
                }
                v33 = DriverPage;
                v34 = a4 & 2;
              }
              goto LABEL_38;
            }
            goto LABEL_74;
          }
        }
        v62 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v62 )
        {
          v63 = *((_QWORD *)&v62->Flink + ((v30 >> 3) & 0x1FF));
          if ( (v63 & 0x20) != 0 )
            LOBYTE(v35) = v35 | 0x20;
          if ( (v63 & 0x42) != 0 )
            LOBYTE(v35) = v35 | 0x42;
        }
      }
      v36 = (v35 & 0x42) == 0;
      goto LABEL_35;
    }
    MiFlushTbList(&v84);
    MiUnlockPageTableInternal(AnyMultiplexedVm, v17);
    MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v67);
    v48 = MmAccessFault(0LL, (__int64)((v5 << 25) - v7) >> 16, 0, 0LL);
    if ( v48 < 0 )
      KeBugCheckEx(0x1Au, 0x3000uLL, (__int64)((v5 << 25) - v7) >> 16, v19, v48);
    v17 = 0LL;
    v72 = 0LL;
    MiLockWorkingSetShared(AnyMultiplexedVm);
  }
  while ( v5 <= v79 && v8 == 1 );
  if ( v67 != 17 )
  {
    MiFlushTbList(&v84);
    if ( v17 )
      MiUnlockPageTableInternal(AnyMultiplexedVm, v17);
    MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v67);
  }
  if ( v16 != -1 )
    MiReleaseFreshPage(48 * v16 - 0x220000000000LL);
  if ( v8 )
    return 0LL;
  MiUnlockCodePage(v83, v5 - 16, 0LL);
  return 3221225626LL;
}
