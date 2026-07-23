/*
 * XREFs of MiTransferFileExtent @ 0x14063FDBC
 * Callers:
 *     MiIssueHardFaultIo @ 0x1402A1E70 (MiIssueHardFaultIo.c)
 *     MiFlushFileOnlyMdl @ 0x14063DA50 (MiFlushFileOnlyMdl.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14027D1F0 (MmMapLockedPagesSpecifyCache.c)
 *     MiReservePtes @ 0x14027D420 (MiReservePtes.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     MiReleasePtes @ 0x1402CBB70 (MiReleasePtes.c)
 *     MiMakeValidPte @ 0x1402CF540 (MiMakeValidPte.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     KePersistMemory @ 0x140424A40 (KePersistMemory.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KeInvalidateRangeAllCaches @ 0x140460AA0 (KeInvalidateRangeAllCaches.c)
 *     MiGetCachedExtentWalkerNextPage @ 0x14063DBB8 (MiGetCachedExtentWalkerNextPage.c)
 *     MiInitializeCachedExtentWalker @ 0x14063E138 (MiInitializeCachedExtentWalker.c)
 */

__int64 __fastcall MiTransferFileExtent(
        PMDL MemoryDescriptorList,
        __int64 *BugCheckParameter2,
        ULONG_PTR a3,
        int a4,
        __int64 a5)
{
  __int64 v5; // rdi
  unsigned __int64 v9; // r14
  int v10; // r15d
  int v11; // r9d
  __int64 result; // rax
  int v13; // ecx
  __int64 v14; // rdi
  bool v15; // zf
  unsigned __int64 MappedSystemVa; // r13
  ULONG Priority; // eax
  __int64 v18; // r15
  ULONG_PTR v19; // rax
  __int64 *v20; // r12
  __int64 v21; // r15
  unsigned __int64 ValidPte; // rbx
  unsigned __int64 v23; // rdi
  int v24; // r14d
  __int64 v25; // r8
  unsigned int v26; // edi
  unsigned int v27; // r14d
  int CachedExtentWalkerNextPage; // eax
  unsigned __int64 v29; // rdi
  __int64 v30; // r8
  int v31; // eax
  __int64 v32; // rax
  bool v33; // cf
  _DWORD *v34; // rdx
  int v35; // r12d
  __int64 v36; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v38; // r14
  unsigned int AbEntrySummary; // eax
  unsigned int v40; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v43; // eax
  signed __int32 v44; // ett
  int SessionId; // eax
  _QWORD *v46; // r14
  unsigned int v47; // eax
  __int64 v48; // r8
  unsigned __int64 v49; // r13
  unsigned __int64 v50; // rbx
  int v51; // r14d
  __int64 v52; // r8
  unsigned __int64 v53; // rax
  int v54; // r11d
  __int64 v55; // rdx
  __int64 v56; // r8
  PVOID v57; // r14
  __int64 v58; // rdi
  unsigned __int64 v59; // rbx
  int v60; // r15d
  __int64 v61; // r8
  int v62; // eax
  struct _KTHREAD *v63; // rcx
  int v64; // [rsp+30h] [rbp-D0h]
  int v65; // [rsp+34h] [rbp-CCh]
  unsigned int v66; // [rsp+34h] [rbp-CCh]
  int v67; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v69; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v70; // [rsp+48h] [rbp-B8h]
  unsigned int v71; // [rsp+50h] [rbp-B0h]
  int v72; // [rsp+54h] [rbp-ACh]
  unsigned int v73; // [rsp+58h] [rbp-A8h]
  __int64 v74; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+68h] [rbp-98h]
  BOOL v76; // [rsp+70h] [rbp-90h]
  __int64 v77; // [rsp+78h] [rbp-88h]
  PVOID BaseAddress; // [rsp+80h] [rbp-80h]
  __int64 *v79; // [rsp+88h] [rbp-78h]
  __int64 v80; // [rsp+90h] [rbp-70h]
  __int64 v81; // [rsp+98h] [rbp-68h]
  ULONG_PTR BugCheckParameter2a; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v83; // [rsp+B0h] [rbp-50h]
  __int64 v84; // [rsp+B8h] [rbp-48h]
  __int128 v85; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v86; // [rsp+D0h] [rbp-30h]
  __int64 v87; // [rsp+E0h] [rbp-20h]
  _QWORD v88[24]; // [rsp+F0h] [rbp-10h] BYREF

  v5 = a5;
  BugCheckParameter3 = a3;
  BugCheckParameter2a = (ULONG_PTR)BugCheckParameter2;
  v80 = a5;
  v87 = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  memset(v88, 0, 0xB8uLL);
  v9 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
      + (unsigned __int64)MemoryDescriptorList->ByteCount
      + 4095) >> 12;
  v73 = v9;
  if ( a4 )
  {
    v65 = 4;
    v10 = 1;
    v67 = 1;
    v11 = 0;
  }
  else
  {
    v10 = 4;
    v65 = 1;
    v67 = 4;
    v11 = 1;
  }
  result = MiInitializeCachedExtentWalker((__int64)&v85, BugCheckParameter2, BugCheckParameter3, v11);
  v13 = result;
  if ( (int)result < 0 )
  {
LABEL_7:
    if ( a4 )
      KeBugCheckEx(0x1Au, 0x14000uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, v13);
    *(_QWORD *)(v5 + 8) = 0LL;
    *(_DWORD *)v5 = v13;
    return result;
  }
  v14 = v86;
  result = 0x8000000000000000uLL;
  if ( (_QWORD)v86 == 0x8000000000000000uLL )
  {
    v5 = v80;
    v13 = -1073740023;
    goto LABEL_7;
  }
  v15 = (MemoryDescriptorList->MdlFlags & 5) == 0;
  v74 = v86;
  if ( v15 )
  {
    Priority = 1073741840;
    if ( v10 != 4 )
      Priority = -1073741808;
    MappedSystemVa = (unsigned __int64)MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, Priority);
    v69 = MappedSystemVa;
  }
  else
  {
    MappedSystemVa = (unsigned __int64)MemoryDescriptorList->MappedSystemVa;
    v69 = MappedSystemVa;
  }
  if ( MappedSystemVa )
  {
    v18 = ((MappedSystemVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v81 = v18;
    v19 = MiReservePtes((__int64)&qword_140C69940, v9);
    v20 = (__int64 *)v19;
    if ( !v19 )
    {
      v77 = 1LL;
      goto LABEL_53;
    }
    v21 = (__int64)(v19 << 25) >> 16;
    ValidPte = MiMakeValidPte(v19, v14, v65 | 0xA0000000);
    v23 = ValidPte;
    v24 = 0;
    if ( !MiPteInShadowRange((unsigned __int64)v20) )
      goto LABEL_24;
    if ( MiPteHasShadow() )
    {
      v24 = 1;
      if ( HIBYTE(word_140C66CFC) )
        goto LABEL_24;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_24;
    }
    if ( (ValidPte & 1) != 0 )
      v23 = ValidPte | 0x8000000000000000uLL;
LABEL_24:
    *v20 = v23;
    if ( v24 )
      MiWritePteShadow((__int64)v20, v23, v25);
    v26 = v73;
    v27 = 1;
    if ( v73 <= 1 )
    {
LABEL_41:
      if ( !a4 )
        goto LABEL_49;
      memmove((void *)v21, (const void *)MappedSystemVa, v27 << 12);
      if ( !byte_140C65AE8 )
      {
        if ( _bittest64(&KeFeatureBits, 0x24u) )
          KePersistMemory(v21, 4096LL);
        else
          KeInvalidateRangeAllCaches((PVOID)v21, 0x1000u);
      }
LABEL_50:
      MiReleasePtes((__int64)&qword_140C69940, v20, v26);
      v32 = v27 << 12;
      v33 = v27 != 0;
      goto LABEL_51;
    }
    while ( 1 )
    {
      CachedExtentWalkerNextPage = MiGetCachedExtentWalkerNextPage((__int64)&v85, &v74);
      if ( CachedExtentWalkerNextPage < 0 )
      {
        if ( a4 )
          KeBugCheckEx(0x1Au, 0x14000uLL, BugCheckParameter2a, BugCheckParameter3, CachedExtentWalkerNextPage);
        MappedSystemVa = v69;
LABEL_49:
        memmove((void *)MappedSystemVa, (const void *)v21, v27 << 12);
        goto LABEL_50;
      }
      ValidPte ^= (ValidPte ^ (v74 << 12)) & 0xFFFFFFFFFF000LL;
      v29 = ValidPte;
      if ( MiPteInShadowRange((unsigned __int64)&v20[v27]) )
      {
        if ( MiPteHasShadow() )
        {
          v31 = 1;
          if ( !HIBYTE(word_140C66CFC) && (ValidPte & 1) != 0 )
            v29 = ValidPte | 0x8000000000000000uLL;
          goto LABEL_37;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (ValidPte & 1) != 0 )
        {
          v29 = ValidPte | 0x8000000000000000uLL;
        }
      }
      v31 = 0;
LABEL_37:
      v20[v27] = v29;
      if ( v31 )
        MiWritePteShadow((__int64)&v20[v27], v29, v30);
      v26 = v73;
      if ( ++v27 >= v73 )
      {
        MappedSystemVa = v69;
        goto LABEL_41;
      }
    }
  }
  v18 = 0LL;
  v81 = 0LL;
  v77 = 2LL;
LABEL_53:
  WORD2(v88[0]) = 0;
  v88[1] = 20LL;
  LODWORD(v88[0]) = 0;
  v88[2] = 0LL;
  v83 = qword_140C696E8 + 8;
  v88[3] = 0LL;
  v70 = qword_140C696E8;
  v35 = 0;
  v84 = 0LL;
  BaseAddress = (PVOID)(qword_140C696E8 << 25 >> 16);
  v79 = (__int64 *)&MemoryDescriptorList[1];
  v36 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v64 = 0;
  --CurrentThread->SpecialApcDisable;
  v38 = KeGetCurrentThread();
  _disable();
  AbEntrySummary = v38->AbEntrySummary;
  if ( v38->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(0LL, (__int64)v38)) != 0 )
  {
    _BitScanForward(&v40, AbEntrySummary);
    v71 = v40;
    v38->AbEntrySummary = AbEntrySummary & ~(1 << v40);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v43 = *SchedulerAssist;
      do
      {
        v44 = v43;
        v43 = _InterlockedCompareExchange(SchedulerAssist, v43 & 0xFFDFFFFF, v43);
      }
      while ( v44 != v43 );
      if ( (v43 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    v36 = (__int64)(&v38[1].Process + 12 * v71);
    if ( (unsigned __int64)&qword_140C658B0 - qword_140C659E8 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)v38->ApcState.Process);
    *(_DWORD *)(v36 + 8) = SessionId;
    *(_QWORD *)v36 = (unsigned __int64)&qword_140C658B0 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C658B0, 0LL) )
    ExfAcquirePushLockExclusiveEx(&qword_140C658B0, v36, (__int64)&qword_140C658B0);
  if ( v36 )
    *(_BYTE *)(v36 + 18) = 1;
  v72 = 0;
  if ( !v73 )
    goto LABEL_117;
  v46 = (_QWORD *)v70;
  v66 = v65 | 0xA0000000;
  v76 = MiPteInShadowRange(v70);
  v47 = v67;
  while ( 2 )
  {
    if ( !v18 )
    {
      v48 = v47;
      v49 = v83;
      LODWORD(v48) = v47 | 0x20000000;
      v50 = MiMakeValidPte(v83, *v79, v48);
      v51 = 0;
      if ( MiPteInShadowRange(v49) )
      {
        if ( MiPteHasShadow() )
        {
          v51 = 1;
          if ( !HIBYTE(word_140C66CFC) )
          {
LABEL_76:
            if ( (v50 & 1) != 0 )
              v50 |= 0x8000000000000000uLL;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          goto LABEL_76;
        }
      }
      *(_QWORD *)v49 = v50;
      if ( v51 )
        MiWritePteShadow(v49, v50, v52);
      v46 = (_QWORD *)v70;
      MappedSystemVa = (__int64)((v49 << 25) - v84) >> 16;
      v69 = MappedSystemVa;
    }
    v53 = MiMakeValidPte((unsigned __int64)v46, v74, v66);
    v54 = 0;
    v55 = v53;
    v56 = 0LL;
    if ( v76 )
    {
      if ( MiPteHasShadow() )
      {
        v56 = 1LL;
        if ( HIBYTE(word_140C66CFC) == (_BYTE)v54 )
        {
LABEL_86:
          if ( (v55 & 1) != 0 )
            v55 |= 0x8000000000000000uLL;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        goto LABEL_86;
      }
    }
    *v46 = v55;
    if ( (_DWORD)v56 )
      MiWritePteShadow((__int64)v46, v55, v56);
    if ( a4 == v54 )
    {
      memmove((void *)MappedSystemVa, BaseAddress, 0x1000uLL);
    }
    else
    {
      v57 = BaseAddress;
      memmove(BaseAddress, (const void *)MappedSystemVa, 0x1000uLL);
      if ( !byte_140C65AE8 )
      {
        if ( (KeFeatureBits & 0x1000000000LL) != 0 )
          KePersistMemory((__int64)v57, 4096LL);
        else
          KeInvalidateRangeAllCaches(v57, 0x1000u);
      }
      v46 = (_QWORD *)v70;
    }
    ++v64;
    if ( v18 )
      v69 = MappedSystemVa + 4096;
    v58 = v77;
    do
    {
      v59 = ZeroPte;
      v60 = 0;
      if ( !MiPteInShadowRange((unsigned __int64)v46) )
        goto LABEL_107;
      if ( MiPteHasShadow() )
      {
        v60 = 1;
        if ( HIBYTE(word_140C66CFC) )
          goto LABEL_107;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
        goto LABEL_107;
      }
      if ( (ZeroPte & 1) != 0 )
        v59 = ZeroPte | 0x8000000000000000uLL;
LABEL_107:
      *v46 = v59;
      if ( v60 )
        MiWritePteShadow((__int64)v46, v59, v61);
      ++v46;
      --v58;
    }
    while ( v58 );
    MappedSystemVa = v69;
    MiInsertTbFlushEntry((__int64)v88, (unsigned __int64)BaseAddress, v77, 0);
    MiFlushTbList((int *)v88);
    if ( v64 == v73 || (v62 = MiGetCachedExtentWalkerNextPage((__int64)&v85, &v74), v62 >= 0) )
    {
      ++v79;
      v47 = v67;
      if ( ++v72 < v73 )
      {
        v18 = v81;
        v46 = (_QWORD *)v70;
        continue;
      }
    }
    else if ( a4 )
    {
      KeBugCheckEx(0x1Au, 0x14000uLL, BugCheckParameter2a, BugCheckParameter3, v62);
    }
    break;
  }
  v35 = v64;
LABEL_117:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C658B0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C658B0);
  KeAbPostRelease((ULONG_PTR)&qword_140C658B0);
  v63 = KeGetCurrentThread();
  v15 = v63->SpecialApcDisable++ == -1;
  if ( v15 && ($C71981A45BEB2B45F82C232A7085991E *)v63->ApcState.ApcListHead[0].Flink != &v63->152 )
    KiCheckForKernelApcDelivery();
  v32 = (unsigned int)(v35 << 12);
  v33 = v35 != 0;
LABEL_51:
  v34 = (_DWORD *)v80;
  *(_QWORD *)(v80 + 8) = v32;
  result = v33 ? 0 : 0xC0000709;
  *v34 = result;
  return result;
}
