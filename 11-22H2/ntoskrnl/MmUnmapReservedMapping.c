/*
 * XREFs of MmUnmapReservedMapping @ 0x14061E980
 * Callers:
 *     sub_1403F13A0 @ 0x1403F13A0 (sub_1403F13A0.c)
 *     HalpDmaReleaseBufferMappings @ 0x14045C178 (HalpDmaReleaseBufferMappings.c)
 *     SmFpFree @ 0x140465A48 (SmFpFree.c)
 *     HalpDmaFlushBufferWithEmergencyResources @ 0x140510F08 (HalpDmaFlushBufferWithEmergencyResources.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x1405115E4 (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     PnprCopyReservedMapping @ 0x140562C4C (PnprCopyReservedMapping.c)
 *     PnprSwap @ 0x14056357C (PnprSwap.c)
 *     PspIumFreePhysicalPages @ 0x1405A60E0 (PspIumFreePhysicalPages.c)
 *     EtwpSavePersistedLogger @ 0x1409EDAF4 (EtwpSavePersistedLogger.c)
 *     PnprMapPhysicalPages @ 0x140A9CDA8 (PnprMapPhysicalPages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7AE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140314440 (ExAcquireSpinLockShared.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiRetardMdl @ 0x14061CA30 (MiRetardMdl.c)
 *     MiUnmapMdlCommon @ 0x14061E248 (MiUnmapMdlCommon.c)
 */

void __stdcall MmUnmapReservedMapping(PVOID BaseAddress, ULONG PoolTag, PMDL MemoryDescriptorList)
{
  ULONG_PTR v3; // r14
  ULONG_PTR v5; // rsi
  ULONG_PTR BugCheckParameter4; // rbp
  KIRQL v7; // al
  __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  ULONG_PTR v17; // r9
  ULONG_PTR v18; // rcx
  __int64 v19; // rcx
  unsigned __int64 v20; // r15
  unsigned __int64 i; // rbx

  v3 = PoolTag;
  v5 = (ULONG_PTR)BaseAddress;
  if ( _bittest16(&MemoryDescriptorList->MdlFlags, 9u) )
    v5 = (ULONG_PTR)BaseAddress - (unsigned int)MiRetardMdl((__int64)MemoryDescriptorList);
  BugCheckParameter4 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
                      + (unsigned __int64)MemoryDescriptorList->ByteCount
                      + 4095) >> 12;
  v7 = ExAcquireSpinLockShared(&dword_140C685C0);
  v8 = qword_140C685C8;
  v9 = v5 & 0xFFFFFFFFFFFFF000uLL;
  v10 = v7;
  while ( v8 )
  {
    v11 = *(_QWORD *)(v8 + 24);
    if ( v9 >= v11 )
    {
      if ( v9 < v11 + (*(_QWORD *)(v8 + 32) << 12) )
        break;
      v8 = *(_QWORD *)(v8 + 8);
    }
    else
    {
      v8 = *(_QWORD *)v8;
    }
  }
  if ( !v8 )
    KeBugCheckEx(0xDAu, 0x106uLL, v5, v3, 2uLL);
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C685C0);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v10 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
      v16 = (v15 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v15;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v10);
  if ( *(_DWORD *)(v8 + 40) != (_DWORD)v3 )
    KeBugCheckEx(0xDAu, 0x102uLL, v5, v3, BugCheckParameter4);
  if ( (*(_DWORD *)(v8 + 44) & 1) != 0 )
  {
    v17 = *(_QWORD *)(v8 + 32);
    v18 = v17 - ((v5 - *(_QWORD *)(v8 + 24)) >> 12);
  }
  else
  {
    v18 = *(_QWORD *)(v8 + 32);
    v5 = *(_QWORD *)(v8 + 24);
    v17 = v18;
  }
  if ( BugCheckParameter4 > v18 )
    KeBugCheckEx(0xDAu, 0x10AuLL, v5, v17, BugCheckParameter4);
  MiUnmapMdlCommon(v5, 0LL, v3, (__int64)MemoryDescriptorList, BugCheckParameter4);
  if ( (*(_DWORD *)(v8 + 44) & 1) == 0 )
  {
    v19 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v20 = v19 + 8LL * *(_QWORD *)(v8 + 32);
    for ( i = v19 + 8 * BugCheckParameter4; i < v20; i += 8LL )
    {
      if ( MI_READ_PTE_LOCK_FREE(i) )
        KeBugCheckEx(0xDAu, 0x10CuLL, v5, v3, BugCheckParameter4);
    }
  }
  MemoryDescriptorList->MdlFlags &= 0xFFDEu;
  if ( (MemoryDescriptorList->MdlFlags & 4) != 0 )
    MemoryDescriptorList->MappedSystemVa = (char *)MemoryDescriptorList->StartVa + MemoryDescriptorList->ByteOffset;
}
