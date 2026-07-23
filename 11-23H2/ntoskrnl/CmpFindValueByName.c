/*
 * XREFs of CmpFindValueByName @ 0x1406D00A8
 * Callers:
 *     CmQueryMultipleValueKey @ 0x1406CFB68 (CmQueryMultipleValueKey.c)
 *     CmpFindControlSet @ 0x140826040 (CmpFindControlSet.c)
 *     CmpMarkCurrentValueDirty @ 0x1408276B4 (CmpMarkCurrentValueDirty.c)
 *     CmpMarkCurrentProfileDirty @ 0x14084AB4C (CmpMarkCurrentProfileDirty.c)
 *     CmpPreserveSystemHiveData @ 0x140A227AC (CmpPreserveSystemHiveData.c)
 *     CmpSortDriverList @ 0x140B59238 (CmpSortDriverList.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140B5952C (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetSystemControlValues @ 0x140B59984 (CmpGetSystemControlValues.c)
 *     CmpFindTagIndex @ 0x140B5A060 (CmpFindTagIndex.c)
 *     CmpAddDriverToList @ 0x140B5A278 (CmpAddDriverToList.c)
 *     CmpIsLoadType @ 0x140B5AAC0 (CmpIsLoadType.c)
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140B5AD9C (CmpGetStateSepKeysRedirectionPathValue.c)
 * Callees:
 *     CmpFindNameInList @ 0x1406D0EEC (CmpFindNameInList.c)
 */

__int64 __fastcall CmpFindValueByName(int a1, int a2, int a3)
{
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  CmpFindNameInList(a1, a2 + 36, a3, 0, 0LL, (__int64)&v4);
  return v4;
}
