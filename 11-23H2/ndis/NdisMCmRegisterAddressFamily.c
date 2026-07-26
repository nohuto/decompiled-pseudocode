/*
 * XREFs of NdisMCmRegisterAddressFamily @ 0x1C01572D0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0003060 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00030D0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00113A8 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C001C58C (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 */

NDIS_STATUS __stdcall NdisMCmRegisterAddressFamily(
        NDIS_HANDLE MiniportAdapterHandle,
        PCO_ADDRESS_FAMILY AddressFamily,
        PNDIS_CALL_MANAGER_CHARACTERISTICS CmCharacteristics,
        UINT SizeOfCmCharacteristics)
{
  NDIS_STATUS v8; // ebx
  __int64 **i; // rcx
  unsigned __int64 v10; // rdx
  __int64 Pool2; // rax
  __int64 v12; // r8
  void (__fastcall *CmRequestCompleteHandler)(int, void *, void *, void *, _NDIS_REQUEST *); // rax
  KIRQL v14; // dl
  KIRQL NewIrql; // [rsp+40h] [rbp+8h] BYREF

  NewIrql = 0;
  v8 = -1073676286;
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, &NewIrql);
  if ( (*((_DWORD *)MiniportAdapterHandle + 30) & 0x20000) != 0
    && CmCharacteristics->MajorVersion >= 5u
    && SizeOfCmCharacteristics >= 0x88 )
  {
    for ( i = (__int64 **)*((_QWORD *)MiniportAdapterHandle + 64); i; i = (__int64 **)*i )
    {
      v10 = (unsigned __int64)i[2] - *(_QWORD *)&AddressFamily->AddressFamily;
      if ( !v10 )
        v10 = *((unsigned int *)i + 6) - (unsigned __int64)AddressFamily->MinorVersion;
      if ( !v10 )
      {
        v8 = -1073741823;
        goto LABEL_17;
      }
    }
    if ( ndisReferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, 0x4Fu) )
    {
      Pool2 = ExAllocatePool2(64LL, 320LL, 1868776526);
      v12 = Pool2;
      if ( Pool2 )
      {
        *(_QWORD *)(Pool2 + 16) = *(_QWORD *)&AddressFamily->AddressFamily;
        *(_DWORD *)(Pool2 + 24) = AddressFamily->MinorVersion;
        *(_OWORD *)(Pool2 + 32) = *(_OWORD *)&CmCharacteristics->MajorVersion;
        *(_OWORD *)(Pool2 + 48) = *(_OWORD *)&CmCharacteristics->CmDeleteVcHandler;
        *(_OWORD *)(Pool2 + 64) = *(_OWORD *)&CmCharacteristics->CmCloseAfHandler;
        *(_OWORD *)(Pool2 + 80) = *(_OWORD *)&CmCharacteristics->CmDeregisterSapHandler;
        *(_OWORD *)(Pool2 + 96) = *(_OWORD *)&CmCharacteristics->CmCloseCallHandler;
        *(_OWORD *)(Pool2 + 112) = *(_OWORD *)&CmCharacteristics->CmAddPartyHandler;
        *(_OWORD *)(Pool2 + 128) = *(_OWORD *)&CmCharacteristics->CmActivateVcCompleteHandler;
        *(_OWORD *)(Pool2 + 144) = *(_OWORD *)&CmCharacteristics->CmModifyCallQoSHandler;
        CmRequestCompleteHandler = CmCharacteristics->CmRequestCompleteHandler;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 160) = CmRequestCompleteHandler;
        *(_QWORD *)v12 = *((_QWORD *)MiniportAdapterHandle + 64);
        *(_DWORD *)(v12 + 312) = 5;
        *((_QWORD *)MiniportAdapterHandle + 64) = v12;
        ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, 0x4Fu);
        v8 = 0;
      }
      else
      {
        ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, 0x4Fu);
        v8 = -1073741670;
      }
    }
  }
  else
  {
    v8 = -1073741823;
  }
LABEL_17:
  v14 = NewIrql;
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v14);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  return v8;
}
