/*
 * XREFs of ?RmpProcEntryAllocateState@@YAJPEAXPEAU_RM_PROC_ENTRY@@@Z @ 0x180013D64
 * Callers:
 *     ?RmpProcContextEntryCreate@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@KPEAX1PEAPEAU_RM_PROC_ENTRY@@@Z @ 0x180013220 (-RmpProcContextEntryCreate@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@KPEAX1PEAPEAU_RM_PROC_ENTRY@@.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B040 (__security_check_cookie.c)
 *     memset_0 @ 0x18001570E (memset_0.c)
 */

NTSTATUS __fastcall RmpProcEntryAllocateState(HANDLE SourceHandle, void **a2)
{
  HANDLE CurrentProcess; // rbx
  HANDLE v5; // rax
  NTSTATUS result; // eax
  HANDLE *v7; // rbx
  HANDLE v8; // rcx
  _BYTE JobInformation[16]; // [rsp+40h] [rbp-B8h] BYREF
  int v10; // [rsp+50h] [rbp-A8h]

  CurrentProcess = GetCurrentProcess();
  v5 = GetCurrentProcess();
  result = NtDuplicateObject(v5, SourceHandle, CurrentProcess, a2 + 5, 0x101301u, 0, 8u);
  if ( result >= 0 )
  {
    v7 = a2 + 6;
    result = NtCreateJobObject(a2 + 6, 0x1F003Fu, 0LL);
    if ( result >= 0 )
    {
      memset_0(JobInformation, 0, 0x90uLL);
      v8 = *v7;
      v10 = 6144;
      NtSetInformationJobObject(v8, JobObjectExtendedLimitInformation, JobInformation, 0x90u);
      result = NtAssignProcessToJobObject(*v7, a2[5]);
      if ( result >= 0 )
        return 0;
    }
  }
  return result;
}
