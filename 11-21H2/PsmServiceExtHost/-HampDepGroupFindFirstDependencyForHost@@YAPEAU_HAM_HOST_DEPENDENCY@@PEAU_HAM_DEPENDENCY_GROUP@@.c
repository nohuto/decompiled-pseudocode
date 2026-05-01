/*
 * XREFs of ?HampDepGroupFindFirstDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800752B0
 * Callers:
 *     ?HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x180074EF8 (-HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z.c)
 *     ?HampDepGroupGetTransitiveTaskCompletionsForHost@@YA_KPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180075520 (-HampDepGroupGetTransitiveTaskCompletionsForHost@@YA_KPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACT.c)
 * Callees:
 *     ?HampDepGroupCompareDependencyLinkForHost@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1800749FC (-HampDepGroupCompareDependencyLinkForHost@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z @ 0x1800754DC (-HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z.c)
 */

struct _RTL_BALANCED_NODE **__fastcall HampDepGroupFindFirstDependencyForHost(
        struct _HAM_DEPENDENCY_GROUP *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2)
{
  struct _RTL_BALANCED_NODE *NextLink; // rbx
  int v3; // eax
  struct _RTL_BALANCED_NODE *v4; // rdi
  struct _RTL_BALANCED_NODE *v5; // rsi
  int v6; // eax
  unsigned __int64 v7; // r9
  struct _RTL_BALANCED_NODE **v8; // rcx
  struct _RTL_BALANCED_NODE *ParentValue; // rdx
  unsigned __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  NextLink = (struct _RTL_BALANCED_NODE *)*((_QWORD *)a1 + 9);
  v11 = *((_QWORD *)a2 - 4);
  while ( 1 )
  {
    if ( !NextLink )
      return 0LL;
    v3 = HampDepGroupCompareDependencyLinkForHost(&v11, NextLink);
    if ( !v3 )
      break;
    if ( v3 >= 0 )
      NextLink = NextLink->Children[1];
    else
      NextLink = NextLink->Children[0];
  }
  v4 = NextLink->Children[0];
  v5 = 0LL;
  if ( NextLink->Children[0] )
  {
    while ( 1 )
    {
      v6 = HampDepGroupCompareDependencyLinkForHost(&v11, v4);
      if ( v6 < 0 )
        goto LABEL_13;
      if ( v6 <= 0 )
        break;
      v4 = v4->Children[1];
LABEL_14:
      if ( !v4 )
      {
        if ( v5 )
          NextLink = v5;
        goto LABEL_17;
      }
    }
    v5 = v4;
LABEL_13:
    v4 = v4->Children[0];
    goto LABEL_14;
  }
LABEL_17:
  v7 = v11;
  while ( 1 )
  {
    v8 = 0LL;
    if ( NextLink[1].Children[0] != (struct _RTL_BALANCED_NODE *)v7 )
      break;
    ParentValue = (struct _RTL_BALANCED_NODE *)NextLink[2].ParentValue;
    if ( ParentValue != (struct _RTL_BALANCED_NODE *)&NextLink[2].16 )
      v8 = &ParentValue[-1].Children[1];
    if ( v8 )
      break;
    NextLink = (struct _RTL_BALANCED_NODE *)HampDepGroupGetNextLink((struct _HAM_DEPENDENCY_LINK *)NextLink);
    if ( !NextLink )
      return 0LL;
  }
  return v8;
}
