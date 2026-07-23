/*
 * XREFs of wcstoul @ 0x1403DC0D0
 * Callers:
 *     PnpStringToDwordValue @ 0x1403CEA1C (PnpStringToDwordValue.c)
 *     HalpMcEnumerateAndSetPatchConfig @ 0x14051BB20 (HalpMcEnumerateAndSetPatchConfig.c)
 *     LocalpConvertStringSidToSid @ 0x14069A428 (LocalpConvertStringSidToSid.c)
 *     LocalGetAclForString @ 0x14069C8EC (LocalGetAclForString.c)
 *     BiOpenSystemStore @ 0x140803794 (BiOpenSystemStore.c)
 *     BiCleanupLoadedStores @ 0x140807EB4 (BiCleanupLoadedStores.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14082AC90 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmSplitDevicePanelId @ 0x14082B8BC (_CmSplitDevicePanelId.c)
 *     _CmCreateOrdinalInstanceKey @ 0x1408801B0 (_CmCreateOrdinalInstanceKey.c)
 *     HalpInitChipHacks @ 0x140B5D968 (HalpInitChipHacks.c)
 *     KsepMatchInitBiosInfo @ 0x140B6162C (KsepMatchInitBiosInfo.c)
 * Callees:
 *     wcstoxlX @ 0x1403DBE50 (wcstoxlX.c)
 */

unsigned int __cdecl wcstoul(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, (wint_t *)Str, EndPtr, Radix, 1, 0);
}
