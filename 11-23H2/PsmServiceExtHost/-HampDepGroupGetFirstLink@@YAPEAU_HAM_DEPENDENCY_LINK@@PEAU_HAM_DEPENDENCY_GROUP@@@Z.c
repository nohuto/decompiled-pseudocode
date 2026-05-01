/*
 * XREFs of ?HampDepGroupGetFirstLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003C1CC
 * Callers:
 *     ?HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003C06C (-HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupPruneEmptyLinks@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003C130 (-HampDepGroupPruneEmptyLinks@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007D21C (-HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     <none>
 */

struct _HAM_DEPENDENCY_LINK *__fastcall HampDepGroupGetFirstLink(struct _HAM_DEPENDENCY_GROUP *a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rcx

  v1 = (unsigned __int64)a1 + 72;
  v2 = *((_QWORD *)a1 + 10);
  if ( (v2 & 1) == 0 )
    return (struct _HAM_DEPENDENCY_LINK *)v2;
  if ( v2 == 1 )
    return 0LL;
  return (struct _HAM_DEPENDENCY_LINK *)(v2 ^ (v1 | 1));
}
