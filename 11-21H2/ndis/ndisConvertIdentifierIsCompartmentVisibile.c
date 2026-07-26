/*
 * XREFs of ndisConvertIdentifierIsCompartmentVisibile @ 0x1C005C0B4
 * Callers:
 *     ndisConvertIdentifierForCompartment @ 0x1C005BEA8 (ndisConvertIdentifierForCompartment.c)
 *     ndisConvertIdentifierForNetworkInterface @ 0x1C005BF78 (ndisConvertIdentifierForNetworkInterface.c)
 * Callees:
 *     ?ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_INFO@@E@Z @ 0x1C002BB04 (-ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_IN.c)
 */

bool __fastcall ndisConvertIdentifierIsCompartmentVisibile(const struct _NDIS_IF_COMPARTMENT_BLOCK *a1, __int64 a2)
{
  char v2; // r8
  bool result; // al

  if ( !*(_DWORD *)a2 )
  {
    v2 = 1;
LABEL_5:
    result = ndisIsCompartmentAccessibleByClient(a1, (const struct _NDIS_NSI_CLIENT_INFO *)(a2 + 4), v2);
    if ( !result )
      return result;
    return 1;
  }
  if ( *(_DWORD *)a2 == 1 )
  {
    v2 = 0;
    goto LABEL_5;
  }
  return 1;
}
