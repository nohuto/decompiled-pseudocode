/*
 * XREFs of ?ndisCalculateRssParametersSize@@YAHPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAK@Z @ 0x1C009EE3C
 * Callers:
 *     ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0087D00 (-ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 *     ?ndisQueryMiniportRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00A50E4 (-ndisQueryMiniportRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQueryOpenRSSParameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00A5440 (-ndisQueryOpenRSSParameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisSetMiniportRSSParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00A5B74 (-ndisSetMiniportRSSParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetOpenRSSParameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00A637C (-ndisSetOpenRSSParameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisCalculateRssParametersSize(struct _NDIS_RECEIVE_SCALE_PARAMETERS *a1, unsigned int *a2)
{
  unsigned int IndirectionTableOffset; // r8d
  int IndirectionTableSize; // r9d
  unsigned int v5; // r9d
  unsigned int HashSecretKeyOffset; // r8d
  unsigned int v7; // edx
  unsigned __int64 v8; // rdx
  unsigned int ProcessorMasksOffset; // eax
  unsigned int v10; // ecx

  IndirectionTableOffset = a1->IndirectionTableOffset;
  IndirectionTableSize = a1->IndirectionTableSize;
  *a2 = 0;
  v5 = IndirectionTableOffset + IndirectionTableSize;
  if ( v5 >= IndirectionTableOffset )
  {
    HashSecretKeyOffset = a1->HashSecretKeyOffset;
    v7 = HashSecretKeyOffset + a1->HashSecretKeySize;
    if ( v7 >= HashSecretKeyOffset )
    {
      if ( v5 <= v7 )
        v5 = HashSecretKeyOffset + a1->HashSecretKeySize;
      if ( a1->Header.Revision < 2u )
        goto LABEL_11;
      v8 = a1->NumberOfProcessorMasks * (unsigned __int64)a1->ProcessorMasksEntrySize;
      if ( v8 <= 0xFFFFFFFF )
      {
        ProcessorMasksOffset = a1->ProcessorMasksOffset;
        v10 = ProcessorMasksOffset + v8;
        if ( ProcessorMasksOffset + (unsigned int)v8 >= ProcessorMasksOffset )
        {
          if ( v5 > v10 )
            v10 = v5;
          v5 = v10;
LABEL_11:
          *a2 = v5;
          return 0LL;
        }
      }
    }
  }
  return 3221291029LL;
}
