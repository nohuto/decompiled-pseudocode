/*
 * XREFs of MiPersistMdl @ 0x14063EB64
 * Callers:
 *     MiFlushFileOnlyMdl @ 0x14063DA50 (MiFlushFileOnlyMdl.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14027D1F0 (MmMapLockedPagesSpecifyCache.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     MmUnmapLockedPages @ 0x1402CB990 (MmUnmapLockedPages.c)
 *     MiMakeValidPte @ 0x1402CF540 (MiMakeValidPte.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KePersistMemory @ 0x140424A40 (KePersistMemory.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KeInvalidateRangeAllCaches @ 0x140460AA0 (KeInvalidateRangeAllCaches.c)
 */

void __fastcall MiPersistMdl(PMDL MemoryDescriptorList)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rsi
  PVOID MappedSystemVa; // rax
  __int64 v5; // rsi
  __int64 *v6; // r14
  __int64 *v7; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // r15
  struct _KTHREAD *v10; // rbp
  __int64 v11; // rdi
  unsigned int AbEntrySummary; // eax
  unsigned int v13; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  int SessionId; // eax
  BOOL v19; // edi
  unsigned __int64 ValidPte; // rax
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r8
  struct _KTHREAD *v25; // rcx
  bool v26; // zf
  unsigned int v27; // [rsp+30h] [rbp-108h]
  _QWORD v28[24]; // [rsp+40h] [rbp-F8h] BYREF

  memset(v28, 0, 0xB8uLL);
  if ( byte_140C65AE8 )
    return;
  v2 = 1LL;
  v3 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
      + (unsigned __int64)MemoryDescriptorList->ByteCount
      + 4095) >> 12;
  if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
    MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
  else
    MappedSystemVa = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0xC0000010);
  if ( MappedSystemVa )
  {
    v5 = v3 << 12;
    if ( _bittest64(&KeFeatureBits, 0x24u) )
      KePersistMemory((__int64)MappedSystemVa, v5);
    else
      KeInvalidateRangeAllCaches(MappedSystemVa, v5);
    MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
    return;
  }
  v6 = (__int64 *)qword_140C696E8;
  v7 = (__int64 *)&MemoryDescriptorList[1];
  v28[3] = 0LL;
  LODWORD(v28[1]) = 20;
  CurrentThread = KeGetCurrentThread();
  v9 = qword_140C696E8 << 25 >> 16;
  --CurrentThread->SpecialApcDisable;
  v10 = KeGetCurrentThread();
  v11 = 0LL;
  _disable();
  AbEntrySummary = v10->AbEntrySummary;
  if ( v10->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v2, (__int64)v10)) != 0 )
  {
    _BitScanForward(&v13, AbEntrySummary);
    v27 = v13;
    v10->AbEntrySummary = AbEntrySummary & ~(1 << v13);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v16 = *SchedulerAssist;
      do
      {
        v17 = v16;
        v16 = _InterlockedCompareExchange(SchedulerAssist, v16 & 0xFFDFFFFF, v16);
      }
      while ( v17 != v16 );
      if ( (v16 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    v11 = (__int64)(&v10[1].Process + 12 * v27);
    if ( (unsigned __int64)&qword_140C658B0 - qword_140C659E8 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)v10->ApcState.Process);
    *(_DWORD *)(v11 + 8) = SessionId;
    *(_QWORD *)v11 = (unsigned __int64)&qword_140C658B0 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C658B0, 0LL) )
    ExfAcquirePushLockExclusiveEx(&qword_140C658B0, v11, (__int64)&qword_140C658B0);
  if ( v11 )
    *(_BYTE *)(v11 + 18) = 1;
  if ( v3 )
  {
    v19 = MiPteInShadowRange((unsigned __int64)v6);
    do
    {
      ValidPte = MiMakeValidPte((unsigned __int64)v6, *v7, 536870913LL);
      v21 = 0LL;
      v22 = ValidPte;
      if ( !v19 )
        goto LABEL_34;
      if ( MiPteHasShadow() )
      {
        v21 = 1LL;
        if ( HIBYTE(word_140C66CFC) )
          goto LABEL_34;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
        goto LABEL_34;
      }
      if ( (v22 & 1) != 0 )
        v22 |= 0x8000000000000000uLL;
LABEL_34:
      *v6 = v22;
      if ( (_DWORD)v21 )
        MiWritePteShadow((__int64)v6, v22, v21);
      if ( !byte_140C65AE8 )
      {
        if ( _bittest64(&KeFeatureBits, 0x24u) )
          KePersistMemory(v9, 4096LL);
        else
          KeInvalidateRangeAllCaches((PVOID)v9, 0x1000u);
      }
      v23 = ZeroPte;
      v24 = 0LL;
      if ( !v19 )
        goto LABEL_47;
      if ( MiPteHasShadow() )
      {
        v24 = 1LL;
        if ( !HIBYTE(word_140C66CFC) )
          goto LABEL_45;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
LABEL_45:
        if ( (v23 & 1) != 0 )
          v23 |= 0x8000000000000000uLL;
      }
LABEL_47:
      *v6 = v23;
      if ( (_DWORD)v24 )
        MiWritePteShadow((__int64)v6, v23, v24);
      MiInsertTbFlushEntry((__int64)v28, v9, 1LL, 0);
      MiFlushTbList((int *)v28);
      ++v7;
      --v3;
    }
    while ( v3 );
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C658B0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C658B0);
  KeAbPostRelease((ULONG_PTR)&qword_140C658B0);
  v25 = KeGetCurrentThread();
  v26 = v25->SpecialApcDisable++ == -1;
  if ( v26 && ($C71981A45BEB2B45F82C232A7085991E *)v25->ApcState.ApcListHead[0].Flink != &v25->152 )
    KiCheckForKernelApcDelivery();
}
