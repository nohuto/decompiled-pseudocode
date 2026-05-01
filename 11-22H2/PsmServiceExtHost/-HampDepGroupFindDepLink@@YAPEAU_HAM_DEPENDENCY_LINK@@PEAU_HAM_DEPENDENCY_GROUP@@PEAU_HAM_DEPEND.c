/*
 * XREFs of ?HampDepGroupFindDepLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_LINK_ID@@@Z @ 0x18003CCB0
 * Callers:
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003CA04 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 *     ?HampDepGroupRemoveDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0W4_HAM_HOST_DEPENDENCY_TYPE@@@Z @ 0x18007CECC (-HampDepGroupRemoveDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0W4_HAM_HOST_DEPENDENCY_TYPE@@@Z.c)
 * Callees:
 *     ?HampDepGroupCompareDependencyLinkForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x18003D5CC (-HampDepGroupCompareDependencyLinkForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

struct _HAM_DEPENDENCY_LINK *__fastcall HampDepGroupFindDepLink(
        struct _HAM_DEPENDENCY_GROUP *a1,
        struct _HAM_DEPENDENCY_LINK_ID *a2)
{
  char v2; // di
  unsigned __int64 v3; // rcx
  int v4; // edi
  unsigned __int64 v6; // rbx
  int v7; // eax
  unsigned __int64 v8; // rax

  v2 = *((_BYTE *)a1 + 80);
  v3 = (unsigned __int64)a1 + 72;
  v4 = v2 & 1;
  v6 = *(_QWORD *)v3;
  if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
  {
    if ( v6 )
    {
      v6 ^= v3;
      goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    while ( v6 )
    {
      v7 = HampDepGroupCompareDependencyLinkForRbTree(a2, (struct _RTL_BALANCED_NODE *)v6);
      if ( v7 >= 0 )
      {
        if ( v7 <= 0 )
          return (struct _HAM_DEPENDENCY_LINK *)v6;
        v8 = *(_QWORD *)(v6 + 8);
      }
      else
      {
        v8 = *(_QWORD *)v6;
      }
      if ( v4 && v8 )
        v6 ^= v8;
      else
        v6 = v8;
    }
  }
  return (struct _HAM_DEPENDENCY_LINK *)v6;
}
