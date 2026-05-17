/*
 * XREFs of RtlpWow64SuspendThread @ 0x180001CA0
 * Callers:
 *     RtlWow64SuspendThread @ 0x180001C90 (RtlWow64SuspendThread.c)
 *     RtlWow64ChangeThreadState @ 0x1800E79A0 (RtlWow64ChangeThreadState.c)
 * Callees:
 *     RtlWow64GetSharedInfoProcess @ 0x180001DD0 (RtlWow64GetSharedInfoProcess.c)
 *     RtlpWow64OpenThreadProcess @ 0x180001E4C (RtlpWow64OpenThreadProcess.c)
 *     RtlpCreateUserThreadEx @ 0x18005C2F0 (RtlpCreateUserThreadEx.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtWaitForSingleObject @ 0x1800A0F30 (NtWaitForSingleObject.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     ZwQueryObject @ 0x1800A10B0 (ZwQueryObject.c)
 *     ZwQueryInformationThread @ 0x1800A1350 (ZwQueryInformationThread.c)
 *     ZwDuplicateObject @ 0x1800A1630 (ZwDuplicateObject.c)
 *     ZwResumeThread @ 0x1800A18F0 (ZwResumeThread.c)
 *     NtChangeThreadState @ 0x1800A2180 (NtChangeThreadState.c)
 *     NtSuspendThread @ 0x1800A4820 (NtSuspendThread.c)
 */

__int64 __fastcall RtlpWow64SuspendThread(__int64 a1, __int64 a2, int *a3)
{
  int SharedInfoProcess; // ebx
  int v7; // edi
  __int64 v9; // rcx
  _BYTE v10[8]; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  __int64 v12; // [rsp+70h] [rbp-90h] BYREF
  HANDLE v13; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v14[2]; // [rsp+80h] [rbp-80h] BYREF
  char v15; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v16[40]; // [rsp+98h] [rbp-68h] BYREF
  int v17[12]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v18[56]; // [rsp+F0h] [rbp-10h] BYREF

  Handle = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  SharedInfoProcess = RtlpWow64OpenThreadProcess(a1, a2, (unsigned int)&v15, (unsigned int)&Handle, (__int64)v14);
  if ( SharedInfoProcess < 0 )
    goto LABEL_11;
  if ( (void *)v14[0] == NtCurrentTeb()->ClientId.UniqueProcess
    && (void *)v14[1] == NtCurrentTeb()->ClientId.UniqueThread )
  {
    goto LABEL_7;
  }
  SharedInfoProcess = RtlWow64GetSharedInfoProcess(Handle, v10, v16);
  if ( SharedInfoProcess < 0 )
    goto LABEL_11;
  if ( !v10[0] || (v16[4] & 2) == 0 )
  {
LABEL_7:
    v7 = 0;
LABEL_8:
    if ( a2 )
    {
      SharedInfoProcess = NtChangeThreadState(a2, a1, 0LL, 0LL, 0, 0);
      if ( v7 )
        ZwResumeThread(a1, 0LL);
    }
    else if ( !v7 )
    {
      SharedInfoProcess = NtSuspendThread(a1, a3);
    }
    goto LABEL_11;
  }
  SharedInfoProcess = ZwQueryObject(a1, 0LL, v18, 56LL, 0LL);
  if ( SharedInfoProcess < 0 )
    goto LABEL_11;
  if ( (v18[4] & 2) == 0 )
  {
    SharedInfoProcess = -1073741790;
    goto LABEL_11;
  }
  SharedInfoProcess = ZwDuplicateObject(-1LL, a1, Handle, &v12, 1050634, 0);
  if ( SharedInfoProcess >= 0 )
  {
    v7 = 1;
    v9 = v12;
    if ( (void *)v14[0] != NtCurrentTeb()->ClientId.UniqueProcess )
      v9 = v12 | 1;
    SharedInfoProcess = RtlpCreateUserThreadEx(
                          (_DWORD)Handle,
                          0,
                          102,
                          0,
                          0LL,
                          0LL,
                          0,
                          (__int64)RtlpWow64SuspendThreadWorker,
                          v9,
                          (__int64)&v13,
                          0LL);
    if ( SharedInfoProcess >= 0 )
    {
      NtWaitForSingleObject(v13, 0, 0LL);
      ZwQueryInformationThread(v13, 0LL, v17, 48LL, 0LL);
      SharedInfoProcess = v17[0];
      if ( v17[0] >= 0 )
      {
        if ( a3 )
          *a3 = v17[0];
        SharedInfoProcess = 0;
        goto LABEL_8;
      }
    }
  }
LABEL_11:
  if ( v12 )
    ZwDuplicateObject(Handle, v12, 0LL, 0LL, 0, 0);
  if ( Handle )
    NtClose(Handle);
  if ( v13 )
    NtClose(v13);
  return (unsigned int)SharedInfoProcess;
}
