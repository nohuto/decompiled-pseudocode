/*
 * XREFs of ndisConvertIdentifierIsCompartmentVisibile @ 0x1C0061304
 * Callers:
 *     ndisConvertIdentifierForCompartment @ 0x1C00610F8 (ndisConvertIdentifierForCompartment.c)
 *     ndisConvertIdentifierForNetworkInterface @ 0x1C00611C8 (ndisConvertIdentifierForNetworkInterface.c)
 * Callees:
 *     ?ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_INFO@@E@Z @ 0x1C002F5B4 (-ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_IN.c)
 */

bool __fastcall ndisConvertIdentifierIsCompartmentVisibile(const struct _NDIS_IF_COMPARTMENT_BLOCK *a1, __int64 a2)
{
  bool result; // al

  if ( !*(_DWORD *)a2 )
    return ndisIsCompartmentAccessibleByClient(a1, (const struct _NDIS_NSI_CLIENT_INFO *)(a2 + 4), 1);
  if ( *(_DWORD *)a2 != 1 )
    return 1;
  result = ndisIsCompartmentAccessibleByClient(a1, (const struct _NDIS_NSI_CLIENT_INFO *)(a2 + 4), 0);
  if ( result )
    return 1;
  return result;
}
