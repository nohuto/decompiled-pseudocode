/*
 * XREFs of wcstoul @ 0x1403E3880
 * Callers:
 *     PnpStringToDwordValue @ 0x140220238 (PnpStringToDwordValue.c)
 *     HalpMcEnumerateAndSetPatchConfig @ 0x14051EAEC (HalpMcEnumerateAndSetPatchConfig.c)
 *     LocalGetAclForString @ 0x140675DA8 (LocalGetAclForString.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140772E98 (_CmCreateOrdinalInstanceKey.c)
 *     BiCleanupLoadedStores @ 0x140811F10 (BiCleanupLoadedStores.c)
 *     BiOpenSystemStore @ 0x140813744 (BiOpenSystemStore.c)
 *     LocalpConvertStringSidToSid @ 0x140843D74 (LocalpConvertStringSidToSid.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x140A28700 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmSplitDevicePanelId @ 0x140A295FC (_CmSplitDevicePanelId.c)
 *     HalpInitChipHacks @ 0x140AF6E6C (HalpInitChipHacks.c)
 *     KsepMatchInitBiosInfo @ 0x140B001A8 (KsepMatchInitBiosInfo.c)
 * Callees:
 *     wcstoxlX @ 0x1403E3610 (wcstoxlX.c)
 */

unsigned int __cdecl wcstoul(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, (wint_t *)Str, EndPtr, Radix, 1, 0);
}
