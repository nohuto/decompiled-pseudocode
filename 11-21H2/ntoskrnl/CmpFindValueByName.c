/*
 * XREFs of CmpFindValueByName @ 0x1406B4108
 * Callers:
 *     CmQueryMultipleValueKey @ 0x1406B3C34 (CmQueryMultipleValueKey.c)
 *     CmpFindControlSet @ 0x14082F3C4 (CmpFindControlSet.c)
 *     CmpMarkCurrentProfileDirty @ 0x140837E20 (CmpMarkCurrentProfileDirty.c)
 *     CmpMarkCurrentValueDirty @ 0x14083D474 (CmpMarkCurrentValueDirty.c)
 *     CmpPreserveSystemHiveData @ 0x14091FEFC (CmpPreserveSystemHiveData.c)
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140B132D0 (CmpGetStateSepKeysRedirectionPathValue.c)
 *     CmpSortDriverList @ 0x140B13578 (CmpSortDriverList.c)
 *     CmpFindTagIndex @ 0x140B13964 (CmpFindTagIndex.c)
 *     CmpAddDriverToList @ 0x140B13B7C (CmpAddDriverToList.c)
 *     CmpIsLoadType @ 0x140B143B0 (CmpIsLoadType.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140B146C4 (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetSystemControlValues @ 0x140B14B1C (CmpGetSystemControlValues.c)
 * Callees:
 *     CmpFindNameInList @ 0x14071F68C (CmpFindNameInList.c)
 */

__int64 __fastcall CmpFindValueByName(int a1, int a2, int a3)
{
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  CmpFindNameInList(a1, a2 + 36, a3, 0, 0LL, (__int64)&v4);
  return v4;
}
