/*
 * XREFs of ?HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z @ 0x1800753EC
 * Callers:
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180072ED8 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x180074EF8 (-HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z.c)
 *     ?HampDepGroupGetNextDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z @ 0x180075450 (-HampDepGroupGetNextDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z.c)
 *     ?HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x180075A88 (-HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTI.c)
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800761DC (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z @ 0x1800754DC (-HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z.c)
 */

struct _HAM_HOST_DEPENDENCY *__fastcall HampDepGroupGetNextDependency(struct _HAM_HOST_DEPENDENCY *a1)
{
  struct _HAM_DEPENDENCY_LINK *v1; // r8
  struct _HAM_DEPENDENCY_LINK *v2; // rcx
  char *v3; // r9
  struct _HAM_DEPENDENCY_LINK *v4; // rcx
  struct _HAM_DEPENDENCY_LINK *NextLink; // rax

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
      v3 = 0LL;
      if ( v4 != (struct _HAM_DEPENDENCY_LINK *)((char *)NextLink + 64) )
        v3 = (char *)v4 - 16;
      if ( v3 )
        return (struct _HAM_HOST_DEPENDENCY *)v3;
      v2 = NextLink;
    }
    return 0LL;
  }
  return (struct _HAM_HOST_DEPENDENCY *)v3;
}
