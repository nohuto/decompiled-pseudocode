/*
 * XREFs of ?NotifyPendingResourceSetTransition@ResourceSetClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x18001FF60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B040 (__security_check_cookie.c)
 *     memset_0 @ 0x18001570E (memset_0.c)
 */

__int64 __fastcall ResourceSetClientProxy::NotifyPendingResourceSetTransition(
        ResourceSetClientProxy *this,
        struct ExecutionModel::_ResourceSetInfo *a2)
{
  HANDLE CurrentProcess; // rax
  _DWORD v4[4]; // [rsp+20h] [rbp-588h] BYREF
  void *v5; // [rsp+30h] [rbp-578h]
  CONTEXT ContextRecord; // [rsp+C0h] [rbp-4E8h] BYREF
  void *retaddr; // [rsp+5A8h] [rbp+0h]

  memset_0(&ContextRecord, 0, sizeof(ContextRecord));
  RtlCaptureContext(&ContextRecord);
  memset_0(v4, 0, 0x98uLL);
  v5 = retaddr;
  v4[0] = -1073741637;
  v4[1] = 1;
  RtlReportException(v4, &ContextRecord, 8LL);
  CurrentProcess = GetCurrentProcess();
  NtTerminateProcess(CurrentProcess, -1073741637);
  return 2147500033LL;
}
