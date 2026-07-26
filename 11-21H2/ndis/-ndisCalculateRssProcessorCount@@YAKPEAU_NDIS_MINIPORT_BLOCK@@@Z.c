/*
 * XREFs of ?ndisCalculateRssProcessorCount@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0029330
 * Callers:
 *     NdisGetRssProcessorInformation @ 0x1C0029270 (NdisGetRssProcessorInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisCalculateRssProcessorCount(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v2; // r10d
  bool v3; // r11
  int *v4; // r8
  __int64 v5; // rbx
  _PROCESSOR_NUMBER RssBaseProcessor; // eax
  int v7; // ecx
  _PROCESSOR_NUMBER RssMaxProcessor; // edx

  v2 = 0;
  v3 = a1->MajorNdisVersion <= 6u && (a1->MajorNdisVersion != 6 || a1->MinorNdisVersion < 0x14u);
  if ( (_DWORD)ndisRssCpuCount )
  {
    v4 = (int *)ndisRssProcessors;
    v5 = (unsigned int)ndisRssCpuCount;
    do
    {
      if ( !v3 || !*(_WORD *)v4 )
      {
        RssBaseProcessor = a1->RssBaseProcessor;
        v7 = *v4;
        if ( (unsigned __int16)*v4 >= RssBaseProcessor.Group
          && ((unsigned __int16)v7 > RssBaseProcessor.Group || BYTE2(v7) >= RssBaseProcessor.Number) )
        {
          RssMaxProcessor = a1->RssMaxProcessor;
          if ( RssMaxProcessor.Group >= (unsigned __int16)v7
            && (RssMaxProcessor.Group > (unsigned __int16)v7 || RssMaxProcessor.Number >= BYTE2(v7)) )
          {
            ++v2;
          }
        }
      }
      ++v4;
      --v5;
    }
    while ( v5 );
  }
  return v2;
}
