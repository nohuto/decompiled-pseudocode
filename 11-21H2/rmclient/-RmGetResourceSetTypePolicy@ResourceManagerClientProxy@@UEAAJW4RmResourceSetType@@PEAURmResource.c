/*
 * XREFs of ?RmGetResourceSetTypePolicy@ResourceManagerClientProxy@@UEAAJW4RmResourceSetType@@PEAURmResourceSetInfo@@@Z @ 0x180020600
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B040 (__security_check_cookie.c)
 *     memset_0 @ 0x18001570E (memset_0.c)
 */

__int64 ResourceManagerClientProxy::RmGetResourceSetTypePolicy()
{
  HANDLE CurrentProcess; // rax
  _DWORD v2[4]; // [rsp+20h] [rbp-588h] BYREF
  void *v3; // [rsp+30h] [rbp-578h]
  CONTEXT ContextRecord; // [rsp+C0h] [rbp-4E8h] BYREF
  void *retaddr; // [rsp+5A8h] [rbp+0h]

  memset_0(&ContextRecord, 0, sizeof(ContextRecord));
  RtlCaptureContext(&ContextRecord);
  memset_0(v2, 0, 0x98uLL);
  v3 = retaddr;
  v2[0] = -1073741637;
  v2[1] = 1;
  RtlReportException(v2, &ContextRecord, 8LL);
  CurrentProcess = GetCurrentProcess();
  NtTerminateProcess(CurrentProcess, -1073741637);
  return 2147500037LL;
}
