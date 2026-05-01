/*
 * XREFs of ?HampHostProcessDepAllocateState@@YAJPEAU_HAM_HOST_PROCESS_DEPENDENCY@@KK@Z @ 0x18007C134
 * Callers:
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180073A60 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 * Callees:
 *     ?RmpSystemOpenProcess@@YAJPEAPEAXKK@Z @ 0x1800067C0 (-RmpSystemOpenProcess@@YAJPEAPEAXKK@Z.c)
 */

NTSTATUS __fastcall HampHostProcessDepAllocateState(void **a1, unsigned int a2, unsigned int a3)
{
  NTSTATUS result; // eax

  result = RmpSystemOpenProcess(a1 + 8, 0x100000u, a2);
  if ( result >= 0 )
  {
    result = RmpSystemOpenProcess(a1 + 9, 0x100000u, a3);
    if ( result >= 0 )
    {
      result = TpAllocWait(a1 + 10, HampHostDepProcessExitCallback, a1, 0LL);
      if ( result >= 0 )
      {
        result = TpAllocWait(a1 + 11, HampHostDepProcessExitCallback, a1, 0LL);
        if ( result >= 0 )
          return 0;
      }
    }
  }
  return result;
}
