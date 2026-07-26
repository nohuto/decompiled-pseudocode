/*
 * XREFs of ?ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z @ 0x1C00B3D08
 * Callers:
 *     ?ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z @ 0x1C002AEC8 (-ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z.c)
 *     ndisConvertIdentifierForCompartment @ 0x1C005BEA8 (ndisConvertIdentifierForCompartment.c)
 *     NdisMSetInterfaceCompartment @ 0x1C00B2600 (NdisMSetInterfaceCompartment.c)
 *     ndisIfCreateCompartment @ 0x1C00B300C (ndisIfCreateCompartment.c)
 *     ?ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z @ 0x1C00B3DC0 (-ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

struct _NDIS_IF_COMPARTMENT_BLOCK *__fastcall ndisIfFindCompartmentBlockByGuid(const struct _GUID *a1)
{
  struct _NDIS_IF_COMPARTMENT_BLOCK *v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9

  v1 = qword_1C00ECDC0;
  v2 = 0LL;
  while ( v1 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00ECDC0 )
  {
    v3 = *((_QWORD *)v1 + 143) - *(_QWORD *)&a1->Data1;
    if ( !v3 )
      v3 = *((_QWORD *)v1 + 144) - *(_QWORD *)a1->Data4;
    if ( !v3 )
      return v1;
    v1 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v1;
  }
  return (struct _NDIS_IF_COMPARTMENT_BLOCK *)v2;
}
