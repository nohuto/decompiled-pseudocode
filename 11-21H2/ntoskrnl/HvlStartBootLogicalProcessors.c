/*
 * XREFs of HvlStartBootLogicalProcessors @ 0x1403DEDD0
 * Callers:
 *     KeStartAllProcessors @ 0x140B03C68 (KeStartAllProcessors.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x14036FA30 (HalQueryMaximumProcessorCount.c)
 *     HvlpReleaseHypercallPage @ 0x14039D8F0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF00 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14039DF90 (HvlpAcquireHypercallPage.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HvlpEnableNextLogicalProcessor @ 0x14054445C (HvlpEnableNextLogicalProcessor.c)
 *     HvlpGetLpcbByApicId @ 0x140544640 (HvlpGetLpcbByApicId.c)
 *     HvlpQueryApicIdAndNumaNode @ 0x1405449CC (HvlpQueryApicIdAndNumaNode.c)
 *     HvlpSelectLpSet @ 0x140544A9C (HvlpSelectLpSet.c)
 *     HvlpSelectVpSet @ 0x140544EF0 (HvlpSelectVpSet.c)
 *     HvlpSetLogicalProcessorProperty @ 0x1405454FC (HvlpSetLogicalProcessorProperty.c)
 *     HvlNotifyAllProcessorsStarted @ 0x140547850 (HvlNotifyAllProcessorsStarted.c)
 *     MmAllocateIndependentPages @ 0x140829AB0 (MmAllocateIndependentPages.c)
 *     HvlpDiscoverTopologyLocal @ 0x140931294 (HvlpDiscoverTopologyLocal.c)
 *     MmFreeIndependentPages @ 0x14096ED20 (MmFreeIndependentPages.c)
 */

__int64 __fastcall HvlStartBootLogicalProcessors(int a1)
{
  unsigned int v1; // r12d
  unsigned int MaximumProcessorCount; // eax
  __int64 v4; // rbx
  size_t v5; // r15
  char *IndependentPages; // rax
  char *v7; // rsi
  signed int ApicIdAndNumaNode; // edi
  struct _KPRCB *CurrentPrcb; // r14
  unsigned int v10; // r14d
  unsigned __int16 *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  char *v15; // r9
  __int64 v16; // r11
  __int64 LpcbByApicId; // rax
  char v18; // r10
  unsigned int i; // ebx
  __int64 v20; // rdx
  int *v21; // r14
  __int64 v22; // rcx
  _DWORD *v23; // rax
  unsigned __int16 v24; // bx
  __m256i v25; // [rsp+30h] [rbp-D8h] BYREF
  int v26; // [rsp+50h] [rbp-B8h]
  __int128 v27; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v28; // [rsp+68h] [rbp-A0h]
  __int128 v29; // [rsp+78h] [rbp-90h]
  __int64 v30; // [rsp+88h] [rbp-80h]
  __int64 v31; // [rsp+90h] [rbp-78h]
  _DWORD v32[816]; // [rsp+98h] [rbp-70h] BYREF
  int v33; // [rsp+D88h] [rbp+C80h] BYREF

  v33 = a1;
  v1 = KiMaximumGroupSize;
  v30 = 0LL;
  LOWORD(v31) = 0;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  if ( (HvlpFlags & 2) == 0 )
    return 0LL;
  v33 = 0;
  if ( ((int (__fastcall *)(__int64, __int64, __int128 *, int *))off_140C020D8[0])(11LL, 64LL, &v27, &v33) >= 0
    && v33 == 64 )
  {
    HvlpQueryProcessorNode = *((_QWORD *)&v27 + 1);
    HvlpQueryProximityId = *((_QWORD *)&v29 + 1);
    HvlpQueryProximityNode = *((_QWORD *)&v28 + 1);
    HvlpQueryNodeDistance = v31;
  }
  else
  {
    HvlpQueryProcessorNode = 0LL;
    HvlpQueryProximityId = 0LL;
    HvlpQueryProximityNode = 0LL;
    HvlpQueryNodeDistance = 0LL;
  }
  MaximumProcessorCount = HalQueryMaximumProcessorCount();
  v4 = MaximumProcessorCount;
  v5 = 40 * MaximumProcessorCount;
  IndependentPages = (char *)MmAllocateIndependentPages(v5, 0xFFFFFFFFLL);
  v7 = IndependentPages;
  if ( IndependentPages )
  {
    memset(IndependentPages, 0, v5);
    CurrentPrcb = KeGetCurrentPrcb();
    dword_140D125E4[0] = 0;
    ApicIdAndNumaNode = HvlpQueryApicIdAndNumaNode(0LL, &dword_140D125E8, &word_140D125EC);
    if ( ApicIdAndNumaNode >= 0 )
    {
      word_140D125EE = *(_WORD *)(KeNodeBlock[(unsigned __int16)word_140D125EC] + 2);
      qword_140D12600 = (__int64)CurrentPrcb->StatisticsPage;
      dword_140D125F8 = CurrentPrcb->Number;
      HvlpCpuVendor = CurrentPrcb->CpuVendor;
      HvlpDiscoverTopologyLocal(
        (unsigned __int16)word_140D125EE,
        (unsigned int)dword_140D125E8,
        &unk_140D125F0,
        &unk_140D125F4);
      LODWORD(HvlpLogicalProcessorCount) = 1;
      HvlpLogicalProcessorRegions[0] = 1;
      ApicIdAndNumaNode = HvlpSelectLpSet((unsigned int)v4, v7);
      if ( ApicIdAndNumaNode >= 0 )
      {
        v10 = 1;
        if ( (unsigned int)v4 > 1 )
        {
          v11 = (unsigned __int16 *)(v7 + 48);
          do
          {
            if ( *((_BYTE *)v11 - 7) )
            {
              if ( (int)HvlpEnableNextLogicalProcessor(*((unsigned int *)v11 - 1), *v11) < 0 )
                break;
              LODWORD(HvlpLogicalProcessorCount) = HvlpLogicalProcessorCount + 1;
              *((_BYTE *)v11 - 6) = 1;
            }
            ++v10;
            v11 += 20;
          }
          while ( v10 < (unsigned int)v4 );
        }
        ApicIdAndNumaNode = HvlpSelectVpSet((unsigned int)v4, v7, v1);
        if ( ApicIdAndNumaNode >= 0 )
        {
          if ( (_DWORD)v4 )
          {
            v15 = v7 + 1;
            v16 = v4;
            do
            {
              if ( *v15 || v15[2] )
              {
                LpcbByApicId = HvlpGetLpcbByApicId(*(unsigned int *)(v15 + 3));
                if ( v18 )
                  *(_DWORD *)(LpcbByApicId + 48) = 1;
                if ( v15[2] )
                {
                  ++HvlpActiveProcessorCount;
                  *(_BYTE *)(LpcbByApicId + 112) = 1;
                }
              }
              v15 += 40;
              --v16;
            }
            while ( v16 );
          }
          if ( (HvlpRootFlags & 0x800) == 0 )
            goto LABEL_36;
          if ( HvlpActiveProcessorCount != (_DWORD)HvlpLogicalProcessorCount )
          {
            qsort(HvlpLogicalProcessorRegions, (unsigned int)HvlpLogicalProcessorCount, 0x78uLL, HvlpCompareActiveLpcbs);
            for ( i = 0; i < (unsigned int)HvlpLogicalProcessorCount; ++i )
            {
              memset(v32, 0, 0xCB4uLL);
              ApicIdAndNumaNode = 0;
              v21 = &dword_140D125E4[30 * i];
              v22 = (unsigned int)*v21;
              if ( (_DWORD)v22 == i
                || (v32[0] = i, ApicIdAndNumaNode = HvlpSetLogicalProcessorProperty(v22, v20, v32),
                                ApicIdAndNumaNode < 0) )
              {
                if ( ApicIdAndNumaNode < 0 )
                  goto LABEL_38;
              }
              else
              {
                *v21 = i;
              }
            }
          }
          v26 = 0;
          memset(&v25.m256i_u64[1], 0, 24);
          v23 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v25.m256i_i64[1], 1, 0LL, 8LL);
          v23[1] = HvlpActiveProcessorCount;
          *v23 = 5;
          v24 = HvcallInitiateHypercall(135);
          HvlpReleaseHypercallPage((__int64)&v25.m256i_i64[1]);
          v13 = v24;
          LOWORD(v13) = -v24;
          ApicIdAndNumaNode = v24 != 0 ? 0xC0000001 : 0;
          if ( !v24 )
          {
LABEL_36:
            ApicIdAndNumaNode = 0;
            if ( !KeDynamicPartitioningSupported )
              HvlNotifyAllProcessorsStarted(v13, v12, v14, v15);
          }
        }
      }
    }
LABEL_38:
    MmFreeIndependentPages(v7, v5);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)ApicIdAndNumaNode;
}
