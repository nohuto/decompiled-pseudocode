/*
 * XREFs of CmpValueToData @ 0x140826528
 * Callers:
 *     CmpFindControlSet @ 0x140826040 (CmpFindControlSet.c)
 *     CmpSortDriverList @ 0x140B59238 (CmpSortDriverList.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140B5952C (CmSelectQualifiedInstallLanguage.c)
 *     CmpFindTagIndex @ 0x140B5A060 (CmpFindTagIndex.c)
 *     CmpAddDriverToList @ 0x140B5A278 (CmpAddDriverToList.c)
 *     CmpIsLoadType @ 0x140B5AAC0 (CmpIsLoadType.c)
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140B5AD9C (CmpGetStateSepKeysRedirectionPathValue.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     CmpGetValueData @ 0x1406DC850 (CmpGetValueData.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

PVOID __fastcall CmpValueToData(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, ULONG_PTR a3, unsigned int *a4)
{
  _BYTE v7[8]; // [rsp+40h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+48h] [rbp-10h] BYREF

  P[0] = 0LL;
  v7[0] = 0;
  if ( !CmpGetValueData(BugCheckParameter3, a2, a3, a4, (__int64)P, (__int64)v7) )
    return 0LL;
  if ( v7[0] == 1 )
  {
    ExFreePoolWithTag(P[0], 0);
    KeBugCheckEx(0x51u, 8uLL, 0LL, BugCheckParameter3, a3);
  }
  return P[0];
}
