/*
 * XREFs of sub_180013460 @ 0x180013460
 * Callers:
 *     sub_1800128FC @ 0x1800128FC (sub_1800128FC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 *     memset @ 0x180016A5E (memset.c)
 */

NTSTATUS __fastcall sub_180013460(HANDLE SourceHandle, __int64 a2)
{
  HANDLE CurrentProcess; // rbx
  HANDLE v5; // rax
  NTSTATUS result; // eax
  HANDLE *v7; // rbx
  HANDLE v8; // rcx
  _DWORD JobInformation[36]; // [rsp+40h] [rbp-B8h] BYREF

  CurrentProcess = GetCurrentProcess();
  v5 = GetCurrentProcess();
  result = NtDuplicateObject(v5, SourceHandle, CurrentProcess, (PHANDLE)(a2 + 40), 0x101301u, 0, 8u);
  if ( result >= 0 )
  {
    v7 = (HANDLE *)(a2 + 48);
    result = NtCreateJobObject((PHANDLE)(a2 + 48), 0x1F003Fu, 0LL);
    if ( result >= 0 )
    {
      memset(JobInformation, 0, sizeof(JobInformation));
      v8 = *v7;
      JobInformation[4] = 6144;
      NtSetInformationJobObject(v8, JobObjectExtendedLimitInformation, JobInformation, 0x90u);
      result = NtAssignProcessToJobObject(*v7, *(HANDLE *)(a2 + 40));
      if ( result >= 0 )
        return 0;
    }
  }
  return result;
}
