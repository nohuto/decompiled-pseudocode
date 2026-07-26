/*
 * XREFs of ?ndisIsValidIfString@@YAEPEBU_IF_COUNTED_STRING_LH@@@Z @ 0x1C0033F60
 * Callers:
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C010A270 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 * Callees:
 *     ?ndisIsValidIfStringParts@@YAEPEB_WK@Z @ 0x1C0033F78 (-ndisIsValidIfStringParts@@YAEPEB_WK@Z.c)
 */

unsigned __int8 __fastcall ndisIsValidIfString(const struct _IF_COUNTED_STRING_LH *a1)
{
  return ndisIsValidIfStringParts(&a1->Length, a1->Length);
}
