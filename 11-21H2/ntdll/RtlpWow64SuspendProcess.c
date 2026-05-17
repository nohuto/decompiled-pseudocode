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

__int64 __fastcall RtlpWow64SuspendProcess(void *a1, __int64 a2)
{
  HANDLE v3; // rdi
  int SharedInfoProcess; // ebx
  __int64 v6; // rbx
  int v7; // eax
  int v8; // eax
  __int64 v10; // [rsp+30h] [rbp-D0h]
  _BYTE v11[8]; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  __int64 v13; // [rsp+70h] [rbp-90h]
  _BYTE v14[40]; // [rsp+78h] [rbp-88h] BYREF
  int v15; // [rsp+A0h] [rbp-60h]
  int v16; // [rsp+D4h] [rbp-2Ch]

  Handle = 0LL;
  v13 = 0LL;
  v3 = 0LL;
  SharedInfoProcess = RtlWow64GetSharedInfoProcess(a1, v11, (__int64)v14);
  if ( SharedInfoProcess >= 0 )
  {
    if ( v11[0] && (v14[4] & 2) != 0 )
    {
      SharedInfoProcess = ZwQueryObject();
      if ( SharedInfoProcess >= 0 )
      {
        if ( (v16 & 0x800) != 0 )
        {
          if ( !a2 || (LODWORD(v10) = 2, SharedInfoProcess = ZwDuplicateObject(), SharedInfoProcess >= 0) )
          {
            v6 = v13;
            if ( !RtlIsCurrentProcess((__int64)a1) )
              v6 |= 1uLL;
            v7 = RtlpCreateUserThreadEx(
                   (__int64)a1,
                   0LL,
                   102,
                   0,
                   0LL,
                   0LL,
                   v10,
                   (__int64)RtlpWow64SuspendLocalProcess,
                   v6,
                   &Handle,
                   0LL);
            v3 = Handle;
            SharedInfoProcess = v7;
            if ( v7 >= 0 )
            {
              NtWaitForSingleObject(Handle, 0, 0LL);
              ZwQueryInformationThread();
              SharedInfoProcess = v15;
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
      if ( a2 )
        v8 = NtChangeProcessState();
      else
        v8 = ZwSuspendProcess();
      SharedInfoProcess = v8;
    }
  }
  if ( v13 )
    ZwDuplicateObject();
  if ( v3 )
    NtClose(v3);
  return (unsigned int)SharedInfoProcess;
}
