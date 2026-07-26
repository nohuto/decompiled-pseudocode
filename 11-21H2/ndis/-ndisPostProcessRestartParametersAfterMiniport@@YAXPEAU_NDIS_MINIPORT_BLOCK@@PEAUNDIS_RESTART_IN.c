/*
 * XREFs of ?ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0025900
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C0107914 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 */

void __fastcall ndisPostProcessRestartParametersAfterMiniport(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_RESTART_INFORMATION *a2)
{
  bool v2; // zf
  unsigned int v5; // edx
  __int64 MediaType; // rcx
  unsigned int LookaheadSize; // eax
  unsigned int SupportedOidListLength; // eax
  unsigned int v9; // edx
  unsigned int *v10; // rcx
  unsigned int *SupportedOidList; // rcx
  KIRQL NewIrql; // [rsp+30h] [rbp+8h] BYREF

  v2 = (a1->DeviceFlags & 1) == 0;
  NewIrql = 0;
  if ( !v2 )
    a2->General.SupportedPacketFilters |= 0x20u;
  if ( a2->Attributes.Oid )
  {
    a1->RecvScaleCapabilities = a2->RssCaps;
    v5 = a2->General.MacOptions | a2->MiniportMacOptionsToPreserve;
    a2->General.MacOptions = v5;
    a1->MacOptions = v5;
    MediaType = a1->MediaType;
    if ( (_DWORD)MediaType )
    {
      if ( (_DWORD)MediaType == 3 )
      {
        a1->MiniportMaximumLookahead = 512;
      }
      else
      {
        if ( (_DWORD)MediaType == 4
          || (int)MediaType > 8
          && ((int)MediaType <= 10
           || (int)MediaType > 14 && ((int)MediaType <= 16 || (unsigned int)(MediaType - 18) <= 1)) )
        {
          a1->MiniportMaximumLookahead = a2->General.LookaheadSize;
        }
        if ( (int)MediaType >= 20 )
          a1->MiniportMaximumLookahead = a2->General.LookaheadSize;
        if ( (unsigned int)MediaType > 0x13 )
          goto LABEL_13;
      }
    }
    else
    {
      LookaheadSize = a2->General.LookaheadSize;
      if ( LookaheadSize > 0x200 )
        LookaheadSize = 512;
      a1->MiniportMaximumLookahead = LookaheadSize;
    }
    if ( (ndisMediaTypeCl[MediaType] || (_DWORD)MediaType == 3) && (v5 & 0x80000001) == 0x80000001 )
      a1->MiniportMaximumLookahead = 512;
    if ( !(_DWORD)MediaType )
      a1->MaximumLongAddresses = a2->General.MaxMulticastListSize;
LABEL_13:
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    SupportedOidListLength = a2->General.SupportedOidListLength;
    v9 = a1->SupportedOidListLength;
    if ( SupportedOidListLength != v9 )
    {
      SupportedOidList = a1->SupportedOidList;
      if ( SupportedOidList )
      {
        ExFreePoolWithTag(SupportedOidList, 0);
        a1->SupportedOidListLength = 0;
        SupportedOidListLength = a2->General.SupportedOidListLength;
        v9 = 0;
      }
    }
    if ( SupportedOidListLength && !v9 )
      a1->SupportedOidList = (unsigned int *)ExAllocatePool2(66LL, SupportedOidListLength, 1835091022);
    v10 = a1->SupportedOidList;
    if ( v10 )
    {
      memmove(v10, a2->General.SupportedOidList, a2->General.SupportedOidListLength);
      a1->SupportedOidListLength = a2->General.SupportedOidListLength;
    }
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, NewIrql);
    a1->IfBlock->AccessType = a2->General.AccessType;
    a1->IfBlock->ConnectionType = a2->General.ConnectionType;
    a1->IfBlock->ifMtu = a2->General.MtuSize;
  }
}
