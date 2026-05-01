/*
 * XREFs of ?HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z @ 0x1800754DC
 * Callers:
 *     ?HampDepGroupFindFirstDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800752B0 (-HampDepGroupFindFirstDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@.c)
 *     ?HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007537C (-HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z @ 0x1800753EC (-HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z.c)
 *     ?HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180075B14 (-HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupPruneEmptyLinks@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180075C5C (-HampDepGroupPruneEmptyLinks@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     <none>
 */

struct _HAM_DEPENDENCY_LINK *__fastcall HampDepGroupGetNextLink(struct _HAM_DEPENDENCY_LINK *a1)
{
  unsigned __int64 v1; // rdx
  struct _HAM_DEPENDENCY_LINK *v2; // rcx
  __int64 i; // rdx

  v1 = *((_QWORD *)a1 + 1);
  if ( v1 )
  {
    v2 = *(struct _HAM_DEPENDENCY_LINK **)v1;
    if ( *(_QWORD *)v1 )
    {
      do
      {
        v1 = (unsigned __int64)v2;
        v2 = *(struct _HAM_DEPENDENCY_LINK **)v2;
      }
      while ( v2 );
    }
  }
  else
  {
    for ( i = *((_QWORD *)a1 + 2); ; i = *(_QWORD *)(v1 + 16) )
    {
      v1 = i & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v1 || *(struct _HAM_DEPENDENCY_LINK **)v1 == a1 )
        break;
      a1 = (struct _HAM_DEPENDENCY_LINK *)v1;
    }
  }
  return (struct _HAM_DEPENDENCY_LINK *)v1;
}
