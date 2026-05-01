/*
 * XREFs of ?HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BAAC
 * Callers:
 *     ?HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x18003B6C8 (-HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003B798 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x18003BA64 (-HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTI.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180074B80 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     <none>
 */

struct _HAM_HOST_DEPENDENCY *__fastcall HampDepGroupGetFirstDependency(struct _HAM_DEPENDENCY_GROUP *a1)
{
  __int64 v1; // rax
  _QWORD *i; // r8
  _QWORD *v3; // r9
  _QWORD *v5; // rcx
  _QWORD **v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx

  v1 = *((_QWORD *)a1 + 10);
  if ( (v1 & 1) == 0 )
  {
    i = (_QWORD *)*((_QWORD *)a1 + 10);
    goto LABEL_3;
  }
  if ( v1 != 1 )
  {
    i = (_QWORD *)(v1 ^ (((unsigned __int64)a1 + 72) | 1));
LABEL_3:
    while ( i )
    {
      v5 = (_QWORD *)i[8];
      v3 = 0LL;
      if ( v5 != i + 8 )
        v3 = v5 - 2;
      if ( v3 )
        return (struct _HAM_HOST_DEPENDENCY *)v3;
      v6 = (_QWORD **)i[1];
      v7 = i;
      if ( v6 )
      {
        v8 = *v6;
        for ( i = (_QWORD *)i[1]; v8; v8 = (_QWORD *)*v8 )
          i = v8;
      }
      else
      {
        for ( i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL); i; i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL) )
        {
          if ( (_QWORD *)*i == v7 )
            break;
          v7 = i;
        }
      }
    }
  }
  return 0LL;
}
