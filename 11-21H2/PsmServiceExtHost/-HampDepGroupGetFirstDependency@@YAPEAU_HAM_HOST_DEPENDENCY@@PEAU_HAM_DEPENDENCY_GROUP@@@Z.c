/*
 * XREFs of ?HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007537C
 * Callers:
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180072ED8 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x180074EF8 (-HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z.c)
 *     ?HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x180075A88 (-HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTI.c)
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800761DC (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampDepGroupGetFirstLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800753C0 (-HampDepGroupGetFirstLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z @ 0x1800754DC (-HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z.c)
 */

struct _HAM_HOST_DEPENDENCY *__fastcall HampDepGroupGetFirstDependency(struct _HAM_DEPENDENCY_GROUP *a1)
{
  struct _HAM_DEPENDENCY_LINK *i; // rax
  struct _HAM_DEPENDENCY_LINK *v2; // rdx
  char *v3; // r9

  for ( i = HampDepGroupGetFirstLink(a1); ; i = HampDepGroupGetNextLink(i) )
  {
    v3 = 0LL;
    if ( !i )
      break;
    v2 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)i + 8);
    if ( v2 != (struct _HAM_DEPENDENCY_LINK *)((char *)i + 64) )
      v3 = (char *)v2 - 16;
    if ( v3 )
      break;
  }
  return (struct _HAM_HOST_DEPENDENCY *)v3;
}
