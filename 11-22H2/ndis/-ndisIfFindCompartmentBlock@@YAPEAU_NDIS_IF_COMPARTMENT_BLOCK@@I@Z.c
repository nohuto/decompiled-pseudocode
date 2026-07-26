/*
 * XREFs of ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1C002F998
 * Callers:
 *     ndisIfRegisterInterfaceEx @ 0x1C001B90C (ndisIfRegisterInterfaceEx.c)
 *     ndisIfCreateInterfaceFromPersistentStore @ 0x1C002A3F8 (ndisIfCreateInterfaceFromPersistentStore.c)
 *     ?ndisIfNetworkSubsystemInitializePhase2@@YAJXZ @ 0x1C002F068 (-ndisIfNetworkSubsystemInitializePhase2@@YAJXZ.c)
 *     ?ndisGetNsiClientInfoForThread@@YAXPEAU_ETHREAD@@PEAU_NDIS_NSI_CLIENT_INFO@@@Z @ 0x1C002F8B0 (-ndisGetNsiClientInfoForThread@@YAXPEAU_ETHREAD@@PEAU_NDIS_NSI_CLIENT_INFO@@@Z.c)
 *     ?ndisIfGetDefaultNetworkGuid@@YA?AU_GUID@@XZ @ 0x1C002F928 (-ndisIfGetDefaultNetworkGuid@@YA-AU_GUID@@XZ.c)
 *     ndisConvertIdentifierForCompartment @ 0x1C00610F8 (ndisConvertIdentifierForCompartment.c)
 *     ndisIfCreateCompartment @ 0x1C00B823C (ndisIfCreateCompartment.c)
 *     ndisIfDeleteCompartment @ 0x1C00B865C (ndisIfDeleteCompartment.c)
 *     ?ndisIfGetCompartmentNamespaceGuid@@YAJIPEAU_GUID@@@Z @ 0x1C00B8D24 (-ndisIfGetCompartmentNamespaceGuid@@YAJIPEAU_GUID@@@Z.c)
 *     ?ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z @ 0x1C00B8D94 (-ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z.c)
 *     ndisNsiChangeNetworkInfo @ 0x1C00BA9F4 (ndisNsiChangeNetworkInfo.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C00BB2C0 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C00BB820 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 * Callees:
 *     <none>
 */

struct _NDIS_IF_COMPARTMENT_BLOCK *__fastcall ndisIfFindCompartmentBlock(unsigned int a1)
{
  struct _NDIS_IF_COMPARTMENT_BLOCK *v1; // rax
  __int64 v2; // rdx

  v1 = qword_1C00F5DA0;
  v2 = 0LL;
  while ( v1 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00F5DA0 )
  {
    if ( *((_DWORD *)v1 + 4) == a1 )
      return v1;
    if ( *((_DWORD *)v1 + 4) > a1 )
      return (struct _NDIS_IF_COMPARTMENT_BLOCK *)v2;
    v1 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v1;
  }
  return (struct _NDIS_IF_COMPARTMENT_BLOCK *)v2;
}
