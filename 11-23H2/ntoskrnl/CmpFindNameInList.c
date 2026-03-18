/*
 * XREFs of CmpFindNameInList @ 0x1406D0EBC
 * Callers:
 *     CmQueryMultipleValueKey @ 0x1406CFB38 (CmQueryMultipleValueKey.c)
 *     CmpFindValueByName @ 0x1406D0078 (CmpFindValueByName.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140A179D4 (CmEnumerateValueKeyFromMergedView.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140A2917C (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x140A29AB0 (CmpLightWeightPrepareSetValueKeyUoW.c)
 * Callees:
 *     CmpFindNameInListWithStatus @ 0x1406D2774 (CmpFindNameInListWithStatus.c)
 */

bool __fastcall CmpFindNameInList(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int NameInListWithStatus; // eax

  NameInListWithStatus = CmpFindNameInListWithStatus(a1, a5, a6);
  return (int)(NameInListWithStatus + 0x80000000) < 0 || NameInListWithStatus == -1073741772;
}
