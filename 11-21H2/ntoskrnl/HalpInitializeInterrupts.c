/*
 * XREFs of HalpInitializeInterrupts @ 0x140AF82A8
 * Callers:
 *     HalpInterruptInitDiscard @ 0x140AF819C (HalpInterruptInitDiscard.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x14036FA30 (HalQueryMaximumProcessorCount.c)
 *     HalpInterruptInitializeController @ 0x1403AE924 (HalpInterruptInitializeController.c)
 *     HalpInterruptSetIdtEntry @ 0x1403AEF08 (HalpInterruptSetIdtEntry.c)
 *     HalpInterruptParseAcpiTables @ 0x1403B85D0 (HalpInterruptParseAcpiTables.c)
 *     HalpInterruptInitializeIpis @ 0x1403B8D0C (HalpInterruptInitializeIpis.c)
 *     HalpInterruptSelectController @ 0x1403B8DA0 (HalpInterruptSelectController.c)
 *     HalpApicDiscover @ 0x1403BD04C (HalpApicDiscover.c)
 *     HalpPicDiscover @ 0x1403BD3FC (HalpPicDiscover.c)
 *     HalpMmAllocateMemoryInternal @ 0x1403BF104 (HalpMmAllocateMemoryInternal.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HalpInterruptSetProblemEx @ 0x14051E038 (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalpInitializeInterrupts(__int64 a1)
{
  int v2; // ebx
  unsigned int v3; // ebx
  void *MemoryInternal; // rax
  unsigned int v5; // ebx
  void *v6; // rax
  void *v7; // rax
  unsigned int v8; // ebx
  void *v9; // rax
  __int64 v10; // r9
  __int64 v11; // r9
  __int64 v12; // r9
  __int64 v13; // r9
  __int64 v14; // r9
  __int64 v15; // r9
  __int64 v16; // r9
  __int64 v17; // r9
  ULONG_PTR *i; // rdi
  ULONG_PTR v19; // rcx
  int v20; // eax
  _DWORD *v22; // rax
  unsigned int v23; // ecx
  int v24; // eax
  ULONG_PTR v25; // [rsp+60h] [rbp+18h] BYREF

  v25 = 0LL;
  HalpInterruptOverridesLock = 0LL;
  HalpInterruptLocalUnitErrorLock = 0LL;
  qword_140C4AD88 = (__int64)&HalpInterruptOverrides;
  HalpInterruptOverrides = (__int64)&HalpInterruptOverrides;
  HalpInterruptPhysicalTargets = 2097153;
  memset(&unk_140C4DD64, 0, 0x104uLL);
  v2 = HalpInterruptParseAcpiTables(a1, 0);
  if ( v2 < 0 )
    goto LABEL_25;
  HalpInterruptMaxProcessors = HalQueryMaximumProcessorCount();
  v3 = 24 * HalpInterruptMaxProcessors;
  MemoryInternal = (void *)HalpMmAllocateMemoryInternal(24 * HalpInterruptMaxProcessors, 1u);
  HalpInterruptTargets = (__int64)MemoryInternal;
  if ( !MemoryInternal )
    goto LABEL_24;
  memset(MemoryInternal, 0, v3);
  v5 = HalpInterruptMaxProcessors << 6;
  v6 = (void *)HalpMmAllocateMemoryInternal(HalpInterruptMaxProcessors << 6, 1u);
  HalpInterruptProcessorState = (ULONG_PTR)v6;
  if ( !v6
    || (memset(v6, 0, v5),
        v7 = (void *)HalpMmAllocateMemoryInternal(v5, 1u),
        (HalpInterruptDynamicProcessorState = (__int64)v7) == 0)
    || (memset(v7, 0, v5),
        v8 = 8 * HalpInterruptMaxProcessors,
        v9 = (void *)HalpMmAllocateMemoryInternal(8 * HalpInterruptMaxProcessors, 1u),
        (HalpInterruptProcessorPcr = (__int64)v9) == 0) )
  {
LABEL_24:
    v2 = -1073741801;
    goto LABEL_25;
  }
  memset(v9, 0, v8);
  *(_QWORD *)HalpInterruptProcessorPcr = KeGetPcr();
  v2 = HalpApicDiscover();
  if ( v2 >= 0 )
    v2 = HalpPicDiscover();
  if ( v2 < 0 )
  {
    HalpInterruptSetProblemEx(0LL, 3, v2, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 0x248u);
    goto LABEL_25;
  }
  HalpInterruptSetIdtEntry(0x35u, (int)HalpInterruptDeferredErrorService, 5, v10, -1LL);
  HalpInterruptSetIdtEntry(0xE3u, (int)HalpInterruptDeferredRecoveryService, 14, v11, -1LL);
  HalpInterruptSetIdtEntry(0x36u, (int)HalpInterruptDeferredErrorService, 5, v12, -1LL);
  HalpInterruptSetIdtEntry(0xDFu, (int)HalpInterruptSpuriousService, 15, v13, -2LL);
  HalpInterruptSetIdtEntry(0xD8u, (int)HalpInterruptStubService, 15, v14, -1LL);
  HalpInterruptSetIdtEntry(0xE2u, (int)HalpInterruptLocalErrorService, 15, v15, -1LL);
  HalpInterruptSetIdtEntry(0xD7u, (int)HalpInterruptRebootService, 15, v16, -1LL);
  HalpInterruptSetIdtEntry(0xFEu, (int)HalpPerfInterrupt, 15, v17, -3LL);
  byte_140D688E2 = 17;
  byte_140D68AEA = 15;
  dword_140D68AEB = 2;
  byte_140D689BF = 17;
  byte_140D68F3B = 15;
  dword_140D68F3C = 223;
  v2 = HalpInterruptSelectController(&v25);
  if ( v2 < 0 )
    goto LABEL_25;
  for ( i = (ULONG_PTR *)HalpRegisteredInterruptControllers; i != &HalpRegisteredInterruptControllers; i = (ULONG_PTR *)*i )
  {
    v2 = HalpInterruptInitializeController((ULONG_PTR)i);
    if ( v2 < 0 )
      goto LABEL_25;
  }
  v2 = HalpInterruptParseAcpiTables(a1, 1u);
  if ( v2 < 0 )
    goto LABEL_25;
  v19 = v25;
  HalpHwToSwIrqlMap = (__int128)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  LOWORD(HalpHwToSwIrqlMap) = 256;
  v20 = *(_DWORD *)(v25 + 228);
  *(_WORD *)((char *)&HalpHwToSwIrqlMap + 13) = 3597;
  BYTE12(HalpHwToSwIrqlMap) = 12;
  HIBYTE(HalpHwToSwIrqlMap) = 15;
  BYTE2(HalpHwToSwIrqlMap) = 2;
  if ( (v20 & 1) == 0 )
  {
    v22 = (_DWORD *)HalpInterruptTargets;
    LODWORD(HalpInterruptProcessorCount) = 1;
    *(_DWORD *)(HalpInterruptTargets + 8) = 0;
    *v22 = 4;
    v20 = *(_DWORD *)(v19 + 228);
  }
  if ( !(_DWORD)HalpInterruptProcessorCount )
    LODWORD(HalpInterruptProcessorCount) = 1;
  if ( (v20 & 4) == 0 )
    HalpInterruptLogicalFlatLimit = 0;
  HalpInterruptController = v19;
  v2 = HalpInterruptInitializeIpis();
  if ( v2 < 0 )
LABEL_25:
    KeBugCheckEx(0x5Cu, 0x200uLL, 0x5250631uLL, HalpInterruptLastProblem, v2);
  if ( (*(_DWORD *)(HalpInterruptController + 228) & 0x100) != 0 )
  {
    if ( KeGetCurrentPrcb()->CpuVendor == 1 )
    {
      v24 = 0x200000;
    }
    else
    {
      v23 = 240 * HalQueryMaximumProcessorCount();
      v24 = 0x10000;
      if ( v23 <= 0x10000 )
      {
        _BitScanReverse(&v23, 2 * v23 - 1);
        v24 = 1 << v23;
      }
    }
    HalpIrtTotalEntries = v24;
  }
  return (unsigned int)v2;
}
