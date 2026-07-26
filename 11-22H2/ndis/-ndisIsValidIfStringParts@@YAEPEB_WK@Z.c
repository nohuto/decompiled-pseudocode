/*
 * XREFs of ?ndisIsValidIfStringParts@@YAEPEB_WK@Z @ 0x1C0035978
 * Callers:
 *     ?ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPEAK@Z @ 0x1C001B778 (-ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPE.c)
 *     ndisIfCreateNetworkBlock @ 0x1C002F31C (ndisIfCreateNetworkBlock.c)
 *     ?ndisIsValidIfString@@YAEPEBU_IF_COUNTED_STRING_LH@@@Z @ 0x1C0035960 (-ndisIsValidIfString@@YAEPEBU_IF_COUNTED_STRING_LH@@@Z.c)
 *     ndisNsiChangeNetworkInfo @ 0x1C00BA9F4 (ndisNsiChangeNetworkInfo.c)
 *     ndisIfUpdateStringIfNeeded @ 0x1C013E844 (ndisIfUpdateStringIfNeeded.c)
 *     ?ndisIfInterfaceSubsystemInitialize@@YAJXZ @ 0x1C01636F4 (-ndisIfInterfaceSubsystemInitialize@@YAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsValidIfStringParts(const wchar_t *a1, unsigned int a2)
{
  return a2 <= 0x200 && (a2 & 1) == 0;
}
