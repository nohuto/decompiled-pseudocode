/*
 * XREFs of ?HampActRequestStopForTerminate@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18007B998
 * Callers:
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x180017E20 (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 * Callees:
 *     ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18007B784 (-HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_.c)
 */

void __fastcall HampActRequestStopForTerminate(__int64 a1, int a2, __int16 a3, struct _HAM_CLIENT_CONTEXT *a4)
{
  int v4; // edx
  __int64 v5; // rdx

  v4 = a2 - 1;
  if ( v4 )
  {
    if ( (unsigned int)(v4 - 1) > 1 )
      return;
    v5 = 3LL;
  }
  else
  {
    v5 = (unsigned int)((*(_QWORD *)(*(_QWORD *)(a1 + 80) + 664LL) & 0x100000000000LL) != 0) + 1;
  }
  HampActRequestStopEx(a1, v5, 5, 0, a3, (*(_DWORD *)(a1 + 112) >> 7) & 0x400, a4);
}
