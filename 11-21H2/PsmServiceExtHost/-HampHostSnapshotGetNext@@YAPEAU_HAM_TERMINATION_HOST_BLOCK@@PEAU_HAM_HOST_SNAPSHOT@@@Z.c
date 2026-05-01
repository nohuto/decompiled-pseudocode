/*
 * XREFs of ?HampHostSnapshotGetNext@@YAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAU_HAM_HOST_SNAPSHOT@@@Z @ 0x180043944
 * Callers:
 *     ?HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@KK@Z @ 0x1800436FC (-HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x180078C24 (-HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_APPLICATION_EXECUTION_S.c)
 * Callees:
 *     <none>
 */

struct _HAM_TERMINATION_HOST_BLOCK *__fastcall HampHostSnapshotGetNext(struct _HAM_HOST_SNAPSHOT *a1)
{
  unsigned int v1; // edx
  struct _HAM_TERMINATION_HOST_BLOCK *result; // rax

  v1 = *((_DWORD *)a1 + 4);
  result = 0LL;
  if ( v1 != *((_DWORD *)a1 + 2) )
  {
    result = (struct _HAM_TERMINATION_HOST_BLOCK *)(*(_QWORD *)a1 + 16LL * v1);
    *((_DWORD *)a1 + 4) = v1 + 1;
  }
  return result;
}
