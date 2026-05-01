/*
 * XREFs of ?HampSlsBlockerEntryCompare@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x180055858
 * Callers:
 *     ?HampSlsBlockerEntryFind@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@_KPEAPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x18004EFEC (-HampSlsBlockerEntryFind@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@_KPEAPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER.c)
 *     ?HampSlsBlockerEntryFindOrInsert@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@PEAPEAU2@@Z @ 0x180081718 (-HampSlsBlockerEntryFindOrInsert@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampSlsBlockerEntryCompare(unsigned __int64 *a1, struct _RTL_BALANCED_NODE *a2)
{
  return HampUtilCompareHostIds(*a1, a2[1].Children[0][3].ParentValue);
}
