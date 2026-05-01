/*
 * XREFs of ?HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z @ 0x18007CB2C
 * Callers:
 *     ?HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x18003B748 (-HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003B818 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x18003BAE4 (-HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTI.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180074DA0 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampDepGroupGetNextDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z @ 0x18007CB88 (-HampDepGroupGetNextDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z.c)
 * Callees:
 *     ?HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z @ 0x18003C59C (-HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z.c)
 */

struct _HAM_HOST_DEPENDENCY *__fastcall HampDepGroupGetNextDependency(struct _HAM_HOST_DEPENDENCY *a1)
{
  struct _HAM_DEPENDENCY_LINK *v1; // r8
  struct _HAM_DEPENDENCY_LINK *v2; // rcx
  char *v3; // r9
  struct _HAM_DEPENDENCY_LINK *v4; // r9
  struct _HAM_DEPENDENCY_LINK *NextLink; // r8

  v1 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)a1 + 2);
  v2 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)a1 + 1);
  v3 = 0LL;
  if ( v1 != (struct _HAM_DEPENDENCY_LINK *)((char *)v2 + 64) )
    v3 = (char *)v1 - 16;
  if ( !v3 )
  {
    while ( 1 )
    {
      NextLink = HampDepGroupGetNextLink(v2);
      if ( !NextLink )
        break;
      v4 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)NextLink + 8);
      if ( v4 != (struct _HAM_DEPENDENCY_LINK *)((char *)NextLink + 64) )
      {
        v3 = (char *)v4 - 16;
        if ( v3 )
          return (struct _HAM_HOST_DEPENDENCY *)v3;
      }
      v2 = NextLink;
    }
    return 0LL;
  }
  return (struct _HAM_HOST_DEPENDENCY *)v3;
}
