/*
 * XREFs of ?ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z @ 0x1C013E4D8
 * Callers:
 *     ?ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z @ 0x1C00B7BF4 (-ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z.c)
 * Callees:
 *     ndisIfOpenInterfaceRegistryKey @ 0x1C011BCC4 (ndisIfOpenInterfaceRegistryKey.c)
 */

__int64 __fastcall ndisIfOpenInterfacePersistedStorage(const struct _GUID *a1, struct KRegKey *a2)
{
  return ndisIfOpenInterfaceRegistryKey((__int64)a1, a2, 1u, 1LL);
}
