/*
 * XREFs of RtlpWow64SuspendThread @ 0x180001C70
 * Callers:
 *     RtlWow64SuspendThread @ 0x180001C60 (RtlWow64SuspendThread.c)
 *     RtlWow64ChangeThreadState @ 0x1800E6670 (RtlWow64ChangeThreadState.c)
 * Callees:
 *     RtlWow64GetSharedInfoProcess @ 0x180001DA0 (RtlWow64GetSharedInfoProcess.c)
 *     RtlpWow64OpenThreadProcess @ 0x180001E1C (RtlpWow64OpenThreadProcess.c)
 *     RtlpCreateUserThreadEx @ 0x18005F2F0 (RtlpCreateUserThreadEx.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtWaitForSingleObject @ 0x18009EE70 (NtWaitForSingleObject.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     ZwQueryObject @ 0x18009EFF0 (ZwQueryObject.c)
 *     ZwQueryInformationThread @ 0x18009F290 (ZwQueryInformationThread.c)
 *     ZwDuplicateObject @ 0x18009F570 (ZwDuplicateObject.c)
 *     ZwResumeThread @ 0x18009F830 (ZwResumeThread.c)
 *     NtChangeThreadState @ 0x1800A00C0 (NtChangeThreadState.c)
 *     NtSuspendThread @ 0x1800A2760 (NtSuspendThread.c)
 */

__int64 __fastcall RtlpWow64SuspendThread(
        HANDLE ThreadHandle,
        HANDLE ThreadStateChangeHandle,
        int *PreviousSuspendCount)
{
  NTSTATUS SharedInfoProcess; // ebx
  int v7; // edi
  void *v9; // rcx
  PULONG ReturnLength; // [rsp+20h] [rbp-E0h]
  ULONG HandleAttributes[2]; // [rsp+28h] [rbp-D8h]
  ULONG Options; // [rsp+30h] [rbp-D0h]
  char v13; // [rsp+60h] [rbp-A0h]
  HANDLE TargetHandle; // [rsp+70h] [rbp-90h] BYREF
  HANDLE ThreadHandlea; // [rsp+78h] [rbp-88h] BYREF
  __int64 v16[2]; // [rsp+80h] [rbp-80h] BYREF
  char v17; // [rsp+9Ch] [rbp-64h]
  int ThreadInformation[12]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE ObjectInformation[56]; // [rsp+F0h] [rbp-10h] BYREF

  TargetHandle = 0LL;
  ThreadHandlea = 0LL;
  SharedInfoProcess = RtlpWow64OpenThreadProcess(ThreadHandle, (__int64)v16);
  if ( SharedInfoProcess < 0 )
    goto LABEL_11;
  if ( (void *)v16[0] == NtCurrentTeb()->ClientId.UniqueProcess
    && (void *)v16[1] == NtCurrentTeb()->ClientId.UniqueThread )
  {
    goto LABEL_7;
  }
  SharedInfoProcess = RtlWow64GetSharedInfoProcess(0LL);
  if ( SharedInfoProcess < 0 )
    goto LABEL_11;
  if ( !v13 || (v17 & 2) == 0 )
  {
LABEL_7:
    v7 = 0;
LABEL_8:
    if ( ThreadStateChangeHandle )
    {
      HandleAttributes[0] = 0;
      LODWORD(ReturnLength) = 0;
      SharedInfoProcess = NtChangeThreadState(
                            ThreadStateChangeHandle,
                            ThreadHandle,
                            ThreadStateChangeSuspend,
                            0LL,
                            (SIZE_T)ReturnLength,
                            *(ULONG64 *)HandleAttributes);
      if ( v7 )
        ZwResumeThread(ThreadHandle, 0LL);
    }
    else if ( !v7 )
    {
      SharedInfoProcess = NtSuspendThread(ThreadHandle, (PULONG)PreviousSuspendCount);
    }
    goto LABEL_11;
  }
  SharedInfoProcess = ZwQueryObject(ThreadHandle, ObjectBasicInformation, ObjectInformation, 0x38u, 0LL);
  if ( SharedInfoProcess < 0 )
    goto LABEL_11;
  if ( (ObjectInformation[4] & 2) == 0 )
  {
    SharedInfoProcess = -1073741790;
    goto LABEL_11;
  }
  SharedInfoProcess = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, ThreadHandle, 0LL, &TargetHandle, 0x10080Au, 0, 0);
  if ( SharedInfoProcess >= 0 )
  {
    v7 = 1;
    v9 = TargetHandle;
    if ( (void *)v16[0] != NtCurrentTeb()->ClientId.UniqueProcess )
      v9 = (void *)((unsigned __int64)TargetHandle | 1);
    SharedInfoProcess = RtlpCreateUserThreadEx(
                          0LL,
                          0LL,
                          0LL,
                          Options,
                          RtlpWow64SuspendThreadWorker,
                          v9,
                          (__int64)&ThreadHandlea,
                          0LL);
    if ( SharedInfoProcess >= 0 )
    {
      NtWaitForSingleObject(ThreadHandlea, 0, 0LL);
      ZwQueryInformationThread(ThreadHandlea, ThreadBasicInformation, ThreadInformation, 0x30u, 0LL);
      SharedInfoProcess = ThreadInformation[0];
      if ( ThreadInformation[0] >= 0 )
      {
        if ( PreviousSuspendCount )
          *PreviousSuspendCount = ThreadInformation[0];
        SharedInfoProcess = 0;
        goto LABEL_8;
      }
    }
  }
LABEL_11:
  if ( TargetHandle )
    ZwDuplicateObject(0LL, TargetHandle, 0LL, 0LL, 0, 0, 3u);
  if ( ThreadHandlea )
    NtClose(ThreadHandlea);
  return (unsigned int)SharedInfoProcess;
}
