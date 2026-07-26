/*
 * XREFs of ?ndisPopulateRssProcessorSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RSS_PROCESSOR_INFO@@@Z @ 0x1C00293D4
 * Callers:
 *     NdisGetRssProcessorInformation @ 0x1C0029270 (NdisGetRssProcessorInformation.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisPopulateRssProcessorSet(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_RSS_PROCESSOR_INFO *a2)
{
  bool v4; // bp
  ULONG v5; // ebx
  PROCESSOR_NUMBER *p_RssBaseProcessor; // r12
  unsigned int i; // esi
  PROCESSOR_NUMBER RssBaseProcessor; // eax
  _PROCESSOR_NUMBER v9; // ecx
  NDIS_OBJECT_HEADER Header; // eax
  unsigned int v11; // eax
  _PROCESSOR_NUMBER *v12; // r14
  ULONG ProcessorIndexFromNumber; // eax
  unsigned __int16 *NumaDistances; // rcx
  unsigned __int16 v15; // cx
  ULONG MaxNumRssProcessors; // eax
  __int64 v17; // r8
  __int64 v18; // r11
  PROCESSOR_NUMBER *v19; // r9
  __int64 v20; // rax
  __int64 v21; // r10
  PROCESSOR_NUMBER *v22; // rdx
  __int64 v23; // [rsp+50h] [rbp+8h]

  v4 = a1->MajorNdisVersion <= 6u && (a1->MajorNdisVersion != 6 || a1->MinorNdisVersion < 0x14u);
  v5 = 0;
  p_RssBaseProcessor = &a2[1].RssBaseProcessor;
  for ( i = 0; i < (unsigned int)ndisRssCpuCount; ++i )
  {
    if ( !v4 || !*((_WORD *)ndisRssProcessors + 2 * i) )
    {
      RssBaseProcessor = a2->RssBaseProcessor;
      v9 = (_PROCESSOR_NUMBER)*((_DWORD *)ndisRssProcessors + i);
      if ( v9.Group >= RssBaseProcessor.Group
        && (v9.Group > RssBaseProcessor.Group || v9.Number >= RssBaseProcessor.Number) )
      {
        Header = a2[1].Header;
        if ( v9.Group < *(_WORD *)&Header.Type
          || v9.Group <= *(_WORD *)&Header.Type
          && ((v11 = HIWORD(*(unsigned int *)&Header), v9.Number < (unsigned __int8)v11)
           || v9.Number <= (unsigned __int8)v11) )
        {
          if ( !v4 || !v9.Group && *((_BYTE *)ndisRssProcessors + 4 * i + 2) < 0x20u )
          {
            v12 = &p_RssBaseProcessor[2 * v5];
            *v12 = v9;
            ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(v12);
            NumaDistances = a1->NumaDistances;
            if ( NumaDistances )
              v15 = NumaDistances[ProcessorIndexFromNumber];
            else
              v15 = 0;
            v12[1].Group = v15;
            ++v5;
          }
        }
      }
    }
  }
  MaxNumRssProcessors = a2->MaxNumRssProcessors;
  a2->RssProcessorCount = v5;
  if ( MaxNumRssProcessors >= v5 )
    MaxNumRssProcessors = v5;
  a2->RssProcessorArrayOffset = 40;
  a2->MaxNumRssProcessors = MaxNumRssProcessors;
  a2->RssProcessorEntrySize = 8;
  if ( a2->PreferredNumaNode != 0xFFFF && (int)v5 > 0 )
  {
    v17 = -1LL;
    v18 = v5;
    v19 = p_RssBaseProcessor;
    do
    {
      v20 = *(_QWORD *)&v19->Group;
      v21 = v17;
      v23 = *(_QWORD *)&v19->Group;
      if ( v17 >= 0 )
      {
        v22 = v19;
        do
        {
          if ( WORD2(v23) >= v22[-1].Group )
            break;
          *(_QWORD *)&v22->Group = *(_QWORD *)&v22[-2].Group;
          v22 -= 2;
          --v21;
        }
        while ( v21 >= 0 );
      }
      v19 += 2;
      *(_QWORD *)&p_RssBaseProcessor[2 * v21 + 2].Group = v20;
      ++v17;
      --v18;
    }
    while ( v18 );
  }
}
