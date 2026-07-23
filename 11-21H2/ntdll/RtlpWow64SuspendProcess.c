/*
 * XREFs of RtlpWow64SuspendProcess @ 0x1800E7A68
 * Callers:
 *     RtlWow64ChangeProcessState @ 0x1800E77F0 (RtlWow64ChangeProcessState.c)
 *     RtlWow64SuspendProcess @ 0x1800E7A30 (RtlWow64SuspendProcess.c)
 * Callees:
 *     RtlWow64GetSharedInfoProcess @ 0x180001B50 (RtlWow64GetSharedInfoProcess.c)
 *     RtlpCreateUserThreadEx @ 0x180008100 (RtlpCreateUserThreadEx.c)
 *     RtlIsCurrentProcess @ 0x180074370 (RtlIsCurrentProcess.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtWaitForSingleObject @ 0x1800A40F0 (NtWaitForSingleObject.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     ZwQueryObject @ 0x1800A4270 (ZwQueryObject.c)
 *     ZwQueryInformationThread @ 0x1800A4510 (ZwQueryInformationThread.c)
 *     ZwDuplicateObject @ 0x1800A47F0 (ZwDuplicateObject.c)
 *     NtChangeProcessState @ 0x1800A5320 (NtChangeProcessState.c)
 *     ZwSuspendProcess @ 0x1800A7940 (ZwSuspendProcess.c)
 */

__int64 __fastcall RtlpWow64SuspendProcess(HANDLE ProcessHandle, HANDLE ProcessStateChangeHandle)
{
  HANDLE v3; // rdi
  int SharedInfoProcess; // ebx
  unsigned __int64 v6; // rbx
  NTSTATUS v7; // eax
  NTSTATUS v8; // eax
  PULONG ReturnLength; // [rsp+20h] [rbp-E0h]
  ULONG HandleAttributes[2]; // [rsp+28h] [rbp-D8h]
  ULONG Options; // [rsp+30h] [rbp-D0h]
  _BYTE v13[8]; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  HANDLE TargetHandle; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v16[40]; // [rsp+78h] [rbp-88h] BYREF
  int ThreadInformation[12]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE ObjectInformation[4]; // [rsp+D0h] [rbp-30h] BYREF
  int v19; // [rsp+D4h] [rbp-2Ch]

  Handle = 0LL;
  TargetHandle = 0LL;
  v3 = 0LL;
  SharedInfoProcess = RtlWow64GetSharedInfoProcess(ProcessHandle, v13, v16);
  if ( SharedInfoProcess >= 0 )
  {
    if ( v13[0] && (v16[4] & 2) != 0 )
    {
      SharedInfoProcess = ZwQueryObject(ProcessHandle, ObjectBasicInformation, ObjectInformation, 0x38u, 0LL);
      if ( SharedInfoProcess >= 0 )
      {
        if ( (v19 & 0x800) != 0 )
        {
          if ( !ProcessStateChangeHandle
            || (SharedInfoProcess = ZwDuplicateObject(
                                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                                      ProcessStateChangeHandle,
                                      ProcessHandle,
                                      &TargetHandle,
                                      0,
                                      0,
                                      2u),
                SharedInfoProcess >= 0) )
          {
            v6 = (unsigned __int64)TargetHandle;
            if ( !RtlIsCurrentProcess(ProcessHandle) )
              v6 |= 1uLL;
            v7 = RtlpCreateUserThreadEx(
                   ProcessHandle,
                   0LL,
                   102,
                   0,
                   0LL,
                   0LL,
                   Options,
                   (PUSER_THREAD_START_ROUTINE)RtlpWow64SuspendLocalProcess,
                   (PVOID)v6,
                   &Handle,
                   0LL);
            v3 = Handle;
            SharedInfoProcess = v7;
            if ( v7 >= 0 )
            {
              NtWaitForSingleObject(Handle, 0, 0LL);
              ZwQueryInformationThread(v3, ThreadBasicInformation, ThreadInformation, 0x30u, 0LL);
              SharedInfoProcess = ThreadInformation[0];
            }
          }
        }
        else
        {
          SharedInfoProcess = -1073741790;
        }
      }
    }
    else
    {
      if ( ProcessStateChangeHandle )
      {
        HandleAttributes[0] = 0;
        LODWORD(ReturnLength) = 0;
        v8 = NtChangeProcessState(
               ProcessStateChangeHandle,
               ProcessHandle,
               ProcessStateChangeSuspend,
               0LL,
               (SIZE_T)ReturnLength,
               *(ULONG64 *)HandleAttributes);
      }
      else
      {
        v8 = ZwSuspendProcess(ProcessHandle);
      }
      SharedInfoProcess = v8;
    }
  }
  if ( TargetHandle )
    ZwDuplicateObject(ProcessHandle, TargetHandle, 0LL, 0LL, 0, 0, 3u);
  if ( v3 )
    NtClose(v3);
  return (unsigned int)SharedInfoProcess;
}
