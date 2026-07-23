/*
 * XREFs of SdbGetTagDataSize @ 0x140757D80
 * Callers:
 *     SdbpGetIndex @ 0x140757408 (SdbpGetIndex.c)
 *     SdbpReadTagData @ 0x14075768C (SdbpReadTagData.c)
 *     SdbpGetNextTagId @ 0x140757C80 (SdbpGetNextTagId.c)
 *     SdbpGetFirstIndexedRecord @ 0x1407CB828 (SdbpGetFirstIndexedRecord.c)
 *     SdbpGetNextIndexedRecord @ 0x14084A2D4 (SdbpGetNextIndexedRecord.c)
 *     KsepDbReadKData @ 0x1409770D8 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x140A4F238 (SdbQueryDataExTagID.c)
 *     SdbpGetMatchingTextAttributes @ 0x140A51118 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140A51344 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbMergeIsEntryUpdated @ 0x140A5398C (SdbMergeIsEntryUpdated.c)
 *     SdbpMergeAreTagValuesEqual @ 0x140A53D74 (SdbpMergeAreTagValuesEqual.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetTagDataSize(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ebx
  __int64 v5; // rbp
  __int16 v6; // dx
  unsigned int v7; // eax

  v3 = 2;
  v5 = a2 + 2;
  if ( (unsigned int)v5 < 2 || *(_DWORD *)(a1 + 20) < (unsigned int)v5 )
  {
    AslLogCallPrintf(1LL);
    AslLogCallPrintf(1LL);
    v6 = 0;
  }
  else
  {
    v6 = *(_WORD *)(a2 + *(_QWORD *)(a1 + 8));
  }
  v7 = v6 & 0xF000;
  if ( v7 > 0x6000 )
    goto LABEL_5;
  if ( v7 > 0x4000 )
  {
    if ( v7 == 20480 )
    {
      v3 = 8;
      goto LABEL_8;
    }
    if ( v7 == 24576 )
      goto LABEL_14;
    goto LABEL_5;
  }
  switch ( v7 )
  {
    case 0x4000u:
LABEL_14:
      v3 = 4;
      goto LABEL_8;
    case 0x1000u:
      v3 = 0;
      goto LABEL_8;
    case 0x2000u:
      v3 = 1;
      goto LABEL_8;
  }
  if ( v7 != 12288 )
  {
LABEL_5:
    v3 = 0;
    if ( (unsigned int)v5 >= 0xFFFFFFFC || *(_DWORD *)(a1 + 20) < (unsigned int)(v5 + 4) )
    {
      AslLogCallPrintf(1LL);
      AslLogCallPrintf(1LL);
    }
    else
    {
      v3 = *(_DWORD *)(v5 + *(_QWORD *)(a1 + 8));
    }
  }
LABEL_8:
  if ( v3 + a2 >= v3 && v3 + a2 <= *(_DWORD *)(a1 + 20) )
    return v3;
  AslLogCallPrintf(1LL);
  return 0xFFFFFFFFLL;
}
