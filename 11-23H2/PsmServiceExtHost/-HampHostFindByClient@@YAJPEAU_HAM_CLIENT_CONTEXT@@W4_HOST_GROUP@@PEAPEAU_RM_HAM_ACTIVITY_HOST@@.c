/*
 * XREFs of ?HampHostFindByClient@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x18004BD0C
 * Callers:
 *     ?HamSrvTryEstimateRemainingQuiesceTime@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAK@Z @ 0x18003E54C (-HamSrvTryEstimateRemainingQuiesceTime@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAK@Z.c)
 *     ?HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEA_K@Z @ 0x180071A2C (-HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PE.c)
 *     ?HamSrvQueryTaskCompletionsForTerminateGraph@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEA_K@Z @ 0x180072E0C (-HamSrvQueryTaskCompletionsForTerminateGraph@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEA_K@Z.c)
 *     ?HamSrvTerminateSelf@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_TERMINATE_TYPE@@@Z @ 0x180074464 (-HamSrvTerminateSelf@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_TERMINATE_TYPE@@@Z.c)
 *     ?HamSrvTerminateSelfOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXW4_HAM_TERMINATE_TYPE@@E@Z @ 0x18007462C (-HamSrvTerminateSelfOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXW4_HAM_TERMINATE_TYPE@@E@Z.c)
 * Callees:
 *     ?HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x18003A204 (-HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_A.c)
 *     ?RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z @ 0x180041C14 (-RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z.c)
 *     ?HampClientAcquireLockShared@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004DAB0 (-HampClientAcquireLockShared@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientReleaseLockShared@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004E350 (-HampClientReleaseLockShared@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 */

__int64 __fastcall HampHostFindByClient(__int64 a1, char a2, struct _RM_HAM_ACTIVITY_HOST **a3, unsigned __int64 *a4)
{
  void *v8; // rcx
  int v9; // ebx
  __int64 v10; // r8
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  Handle = 0LL;
  HampClientAcquireLockShared((struct _HAM_CLIENT_CONTEXT *)a1);
  v8 = *(void **)(a1 + 192);
  if ( v8 )
  {
    v9 = RmpSystemDuplicateHandle(v8, 0x1000u, &Handle);
    HampClientReleaseLockShared((struct _HAM_CLIENT_CONTEXT *)a1);
    if ( v9 >= 0 )
    {
      LOBYTE(v10) = a2;
      v9 = HampHostFindByProcessHandle(
             (*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL) - 48LL * *(unsigned __int8 *)(a1 + 164) - 16,
             Handle,
             v10,
             a3,
             a4);
      if ( v9 >= 0 )
        v9 = 0;
    }
  }
  else
  {
    v9 = -1073741816;
    HampClientReleaseLockShared((struct _HAM_CLIENT_CONTEXT *)a1);
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v9;
}
