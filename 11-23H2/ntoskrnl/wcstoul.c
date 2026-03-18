/*
 * XREFs of wcstoul @ 0x1403DBEF0
 * Callers:
 *     PnpStringToDwordValue @ 0x1403CE83C (PnpStringToDwordValue.c)
 *     HalpMcEnumerateAndSetPatchConfig @ 0x14051B5D0 (HalpMcEnumerateAndSetPatchConfig.c)
 *     LocalpConvertStringSidToSid @ 0x14069A428 (LocalpConvertStringSidToSid.c)
 *     LocalGetAclForString @ 0x14069C8EC (LocalGetAclForString.c)
 *     BiOpenSystemStore @ 0x1408034C4 (BiOpenSystemStore.c)
 *     BiCleanupLoadedStores @ 0x140807BE4 (BiCleanupLoadedStores.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14082A990 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmSplitDevicePanelId @ 0x14082B5BC (_CmSplitDevicePanelId.c)
 *     _CmCreateOrdinalInstanceKey @ 0x14087FF70 (_CmCreateOrdinalInstanceKey.c)
 *     HalpInitChipHacks @ 0x140B5D968 (HalpInitChipHacks.c)
 *     KsepMatchInitBiosInfo @ 0x140B6162C (KsepMatchInitBiosInfo.c)
 * Callees:
 *     wcstoxlX @ 0x1403DBC70 (wcstoxlX.c)
 */

unsigned int __cdecl wcstoul(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, (wint_t *)Str, EndPtr, Radix, 1, 0);
}
