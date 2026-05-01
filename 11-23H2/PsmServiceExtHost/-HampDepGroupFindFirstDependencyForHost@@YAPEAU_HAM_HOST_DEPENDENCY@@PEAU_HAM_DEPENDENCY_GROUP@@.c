/*
 * XREFs of ?HampDepGroupFindFirstDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003BB94
 * Callers:
 *     ?HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x18003B6C8 (-HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z.c)
 *     ?HampDepGroupGetTransitiveTaskCompletionsForHost@@YA_KPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007C87C (-HampDepGroupGetTransitiveTaskCompletionsForHost@@YA_KPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACT.c)
 * Callees:
 *     ?HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z @ 0x18003C51C (-HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z.c)
 *     ?HampDepGroupCompareDependencyLinkForHost@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x18003D580 (-HampDepGroupCompareDependencyLinkForHost@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

struct _RTL_BALANCED_NODE **__fastcall HampDepGroupFindFirstDependencyForHost(
        struct _HAM_DEPENDENCY_GROUP *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2)
{
  struct _RTL_BALANCED_NODE *NextLink; // rbx
  __int64 v3; // r8
  struct _RTL_BALANCED_NODE **result; // rax
  int v5; // eax
  struct _RTL_BALANCED_NODE *v6; // rdi
  struct _RTL_BALANCED_NODE *v7; // rsi
  int v8; // eax
  struct _RTL_BALANCED_NODE *v9; // r8
  struct _RTL_BALANCED_NODE *ParentValue; // rcx
  struct _RTL_BALANCED_NODE *v11; // [rsp+30h] [rbp+8h] BYREF

  NextLink = (struct _RTL_BALANCED_NODE *)*((_QWORD *)a1 + 9);
  v3 = 32LL;
  if ( a2 )
    v3 = (__int64)a2 - 32;
  v11 = *(struct _RTL_BALANCED_NODE **)v3;
  while ( 1 )
  {
    if ( !NextLink )
      return 0LL;
    v5 = HampDepGroupCompareDependencyLinkForHost(&v11, NextLink);
    if ( !v5 )
      break;
    if ( v5 >= 0 )
      NextLink = NextLink->Children[1];
    else
      NextLink = NextLink->Children[0];
  }
  v6 = NextLink->Children[0];
  v7 = 0LL;
  if ( NextLink->Children[0] )
  {
    while ( 1 )
    {
      v8 = HampDepGroupCompareDependencyLinkForHost(&v11, v6);
      if ( v8 >= 0 )
      {
        if ( v8 > 0 )
        {
          v6 = v6->Children[1];
          goto LABEL_12;
        }
        v7 = v6;
      }
      v6 = v6->Children[0];
LABEL_12:
      if ( !v6 )
      {
        if ( v7 )
          NextLink = v7;
        break;
      }
    }
  }
  v9 = v11;
  while ( NextLink[1].Children[0] == v9 )
  {
    ParentValue = (struct _RTL_BALANCED_NODE *)NextLink[2].ParentValue;
    if ( ParentValue != (struct _RTL_BALANCED_NODE *)&NextLink[2].16 )
    {
      result = &ParentValue[-1].Children[1];
      if ( ParentValue != (struct _RTL_BALANCED_NODE *)16 )
        return result;
    }
    NextLink = (struct _RTL_BALANCED_NODE *)HampDepGroupGetNextLink((struct _HAM_DEPENDENCY_LINK *)NextLink);
    if ( !NextLink )
      return 0LL;
  }
  return 0LL;
}
