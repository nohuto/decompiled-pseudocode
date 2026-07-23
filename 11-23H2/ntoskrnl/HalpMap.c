/*
 * XREFs of HalpMap @ 0x14037E3C8
 * Callers:
 *     HalpAcpiCheckAndMapTable @ 0x140335A7C (HalpAcpiCheckAndMapTable.c)
 *     HalpAcpiGetRsdt @ 0x140337058 (HalpAcpiGetRsdt.c)
 *     HalpPciMapMmConfigPhysicalAddress @ 0x14033F948 (HalpPciMapMmConfigPhysicalAddress.c)
 *     HalpMmAllocateMemoryInternal @ 0x14037DCA8 (HalpMmAllocateMemoryInternal.c)
 *     HalpAcpiAllocateMemory @ 0x14037E070 (HalpAcpiAllocateMemory.c)
 *     HalMapIoSpace @ 0x14037E2D0 (HalMapIoSpace.c)
 *     HalpMapPhysicalMemoryWriteThrough64 @ 0x14037F9D0 (HalpMapPhysicalMemoryWriteThrough64.c)
 *     HalpMapPhysicalMemory64 @ 0x14040F930 (HalpMapPhysicalMemory64.c)
 *     HalpAllocateEarlyPages @ 0x140505AA0 (HalpAllocateEarlyPages.c)
 *     HalpMapEarlyPages @ 0x140505B80 (HalpMapEarlyPages.c)
 *     HalpPowerWriteResetCommand @ 0x14050700C (HalpPowerWriteResetCommand.c)
 *     HalpInterruptMapParkedPage @ 0x14051ACB0 (HalpInterruptMapParkedPage.c)
 *     HalpUsbLegacyStopOhciInterrupt @ 0x1405215C0 (HalpUsbLegacyStopOhciInterrupt.c)
 *     HalpAcpiTableCacheInit @ 0x140B48D28 (HalpAcpiTableCacheInit.c)
 *     HalpSetupAcpiPhase0 @ 0x140B65578 (HalpSetupAcpiPhase0.c)
 *     HalpBlkAllocateAndShadowMemory @ 0x140B91BDC (HalpBlkAllocateAndShadowMemory.c)
 *     HalpBlkAllocatePageTablePage @ 0x140B91CD4 (HalpBlkAllocatePageTablePage.c)
 *     HalpBlkInitializeVirtualAddressSpace @ 0x140B91ECC (HalpBlkInitializeVirtualAddressSpace.c)
 * Callees:
 *     HalpMmGetPteAddressSafe @ 0x14037E58C (HalpMmGetPteAddressSafe.c)
 *     HalpFlushTLB @ 0x14037E63C (HalpFlushTLB.c)
 *     HalpIsHeap64KRegionExecutable @ 0x140505B10 (HalpIsHeap64KRegionExecutable.c)
 */

unsigned __int64 __fastcall HalpMap(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  char v6; // r12
  unsigned __int64 v7; // r8
  unsigned int v8; // ebp
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  unsigned int v12; // esi
  unsigned __int64 v13; // r14
  _BYTE *PteAddressSafe; // rax
  bool v15; // cf
  unsigned __int64 v16; // r14
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // rax

  v6 = a4;
  v7 = 1LL;
  v8 = a2;
  if ( a3 > 1 )
    return 0LL;
  if ( a5 > 0x20 )
    return 0LL;
  v10 = 0x100000014LL;
  if ( !_bittest64(&v10, a5) )
    return 0LL;
  v11 = HalpHeapStart;
  v12 = 0;
  if ( (_DWORD)a2 )
  {
    while ( 2 )
    {
      while ( 1 )
      {
        v12 = 0;
        v13 = v11;
        while ( 1 )
        {
          if ( v13 == HalpHeapEnd )
            return 0LL;
          PteAddressSafe = (_BYTE *)HalpMmGetPteAddressSafe(v13);
          if ( !PteAddressSafe )
            return 0LL;
          v13 += 4096LL;
          v7 = 1LL;
          if ( (*PteAddressSafe & 1) != 0 )
            break;
          if ( ++v12 >= v8 )
            goto LABEL_10;
        }
        v11 = v13;
LABEL_10:
        if ( a5 != 32 )
          break;
        v15 = v12 < v8;
        if ( v12 != v8 )
          goto LABEL_12;
        if ( !(unsigned __int8)HalpIsHeap64KRegionExecutable(v11)
          && !(unsigned __int8)HalpIsHeap64KRegionExecutable(v11 + (v8 << 12) - 4096) )
        {
          v7 = 1LL;
          goto LABEL_13;
        }
      }
      v15 = v12 < v8;
LABEL_12:
      if ( v15 )
        continue;
      break;
    }
  }
LABEL_13:
  v16 = v11 | a1 & 0xFFF;
  if ( v11 == HalpHeapStart )
    HalpHeapStart = v11 + (v8 << 12);
  if ( v12 )
  {
    v17 = 3LL;
    if ( a5 != 4 )
      v17 = 1LL;
    v18 = v17 | 0x8000000000000000uLL;
    if ( a5 == 32 )
      v18 = v17;
    a2 = v18 | 0x18;
    if ( a3 == 1 )
      a2 = v18;
    do
    {
      v19 = a2 | a1 & 0xFFFFFFFFFF000LL;
      v7 = 0xFFFFF68000000000uLL;
      a1 += 4096LL;
      v10 = 8 * ((v11 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL;
      *(_QWORD *)v10 = v19;
      if ( v6 )
        __invlpg((void *)v11);
      v11 += 4096LL;
      --v12;
    }
    while ( v12 );
  }
  if ( !v6 )
    HalpFlushTLB(v10, a2, v7, a4);
  return v16;
}
