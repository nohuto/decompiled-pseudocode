/*
 * XREFs of ?ndisPopulateRssProcessorSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RSS_PROCESSOR_INFO@@@Z @ 0x1C0029E90
 * Callers:
 *     NdisGetRssProcessorInformation @ 0x1C0029CF0 (NdisGetRssProcessorInformation.c)
 * Callees:
 *     ?ndisCompareProcNum@@YAHU_PROCESSOR_NUMBER@@0@Z @ 0x1C002A2E8 (-ndisCompareProcNum@@YAHU_PROCESSOR_NUMBER@@0@Z.c)
 */

void __fastcall ndisPopulateRssProcessorSet(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_RSS_PROCESSOR_INFO *a2)
{
  bool v4; // bp
  PROCESSOR_NUMBER *p_RssBaseProcessor; // r12
  __int64 v6; // rbx
  unsigned int i; // esi
  struct _PROCESSOR_NUMBER v8; // r8d
  _PROCESSOR_NUMBER v9; // r8d
  __int64 v10; // r9
  __int64 v11; // r10
  _PROCESSOR_NUMBER *v12; // r15
  ULONG ProcessorIndexFromNumber; // eax
  unsigned __int16 *NumaDistances; // rcx
  unsigned __int16 v15; // cx
  unsigned int MaxNumRssProcessors; // eax
  __int64 v17; // r8
  PROCESSOR_NUMBER *v18; // r9
  __int64 v19; // rax
  __int64 v20; // r11
  PROCESSOR_NUMBER *v21; // r10
  __int64 v22; // [rsp+50h] [rbp+8h]

  v4 = a1->MajorNdisVersion <= 6u && (a1->MajorNdisVersion != 6 || a1->MinorNdisVersion < 0x14u);
  p_RssBaseProcessor = &a2[1].RssBaseProcessor;
  v6 = 0LL;
  for ( i = 0; i < (unsigned int)ndisRssCpuCount; ++i )
  {
    if ( (!v4 || !*((_WORD *)ndisRssProcessors + 2 * i))
      && (int)ndisCompareProcNum(*(struct _PROCESSOR_NUMBER *)((char *)ndisRssProcessors + 4 * i), a2->RssBaseProcessor) >= 0
      && (int)ndisCompareProcNum(v8, (struct _PROCESSOR_NUMBER)a2[1].Header) <= 0
      && (!v4 || !v9.Group && *(_BYTE *)(v11 + 4 * v10 + 2) < 0x20u) )
    {
      v12 = &p_RssBaseProcessor[2 * v6];
      *v12 = v9;
      ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(v12);
      NumaDistances = a1->NumaDistances;
      if ( NumaDistances )
        v15 = NumaDistances[ProcessorIndexFromNumber];
      else
        v15 = 0;
      v12[1].Group = v15;
      v6 = (unsigned int)(v6 + 1);
    }
  }
  MaxNumRssProcessors = a2->MaxNumRssProcessors;
  a2->RssProcessorCount = v6;
  if ( MaxNumRssProcessors >= (unsigned int)v6 )
    MaxNumRssProcessors = v6;
  a2->RssProcessorArrayOffset = 40;
  a2->MaxNumRssProcessors = MaxNumRssProcessors;
  a2->RssProcessorEntrySize = 8;
  if ( a2->PreferredNumaNode != 0xFFFF && (int)v6 > 0 )
  {
    v17 = -1LL;
    v18 = p_RssBaseProcessor;
    do
    {
      v19 = *(_QWORD *)&v18->Group;
      v20 = v17;
      v22 = *(_QWORD *)&v18->Group;
      if ( v17 >= 0 )
      {
        v21 = v18;
        do
        {
          if ( WORD2(v22) >= v21[-1].Group )
            break;
          --v20;
          *(_QWORD *)&v21->Group = *(_QWORD *)&v21[-2].Group;
          v21 -= 2;
        }
        while ( v20 >= 0 );
      }
      v18 += 2;
      *(_QWORD *)&p_RssBaseProcessor[2 * v20 + 2].Group = v19;
      ++v17;
      --v6;
    }
    while ( v6 );
  }
}
