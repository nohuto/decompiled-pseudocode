/*
 * XREFs of NtUserGetWindowProcessHandle @ 0x1C010EA70
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     IsShellProcess @ 0x1C007B10C (IsShellProcess.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void *__fastcall NtUserGetWindowProcessHandle(__int64 a1, __int64 a2, __int64 a3)
{
  ACCESS_MASK v3; // esi
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  KPROCESSOR_MODE AccessMode; // bp
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rcx
  void *v14; // rbx
  char v16; // al
  __int64 v17; // rcx
  HANDLE ThreadProcessId; // rax
  PEPROCESS Process; // [rsp+70h] [rbp+18h] BYREF
  void *Handle; // [rsp+78h] [rbp+20h] BYREF

  Handle = 0LL;
  v3 = a2;
  EnterSharedCrit(a1, a2, a3);
  v6 = ValidateHwnd(a1);
  if ( v6 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v9 = *(_QWORD *)(v6 + 16);
    AccessMode = 0;
    v11 = ThreadWin32Thread;
    v12 = *(_QWORD *)(ThreadWin32Thread + 456);
    if ( *(_QWORD *)(v9 + 456) == v12 )
    {
      if ( v3 == 120 || (unsigned int)IsShellProcess(*(_QWORD *)(ThreadWin32Thread + 424)) && v3 == 4096 )
      {
        v16 = Enforced(v12);
        v8 = *(_QWORD *)(v9 + 424);
        v17 = *(_QWORD *)(v11 + 424);
        if ( v16 )
        {
          if ( !(unsigned __int8)CheckAccess(v17 + 880, v8 + 880) )
          {
            if ( *(int *)(*(_QWORD *)(v11 + 424) + 12LL) >= 0 )
              goto LABEL_7;
            AccessMode = 1;
          }
        }
        else if ( *(_DWORD *)(v8 + 780) != *(_DWORD *)(v17 + 780) || *(_DWORD *)(v8 + 784) != *(_DWORD *)(v17 + 784) )
        {
          goto LABEL_7;
        }
        if ( (*(_DWORD *)(v9 + 488) & 0xC) == 0 && (*(_DWORD *)(v9 + 1256) & 4) == 0 )
        {
          Process = 0LL;
          ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v9);
          if ( PsLookupProcessByProcessId(ThreadProcessId, &Process) >= 0 )
          {
            ObOpenObjectByPointer(Process, 0, 0LL, v3, (POBJECT_TYPE)PsProcessType, AccessMode, &Handle);
            ObfDereferenceObject(Process);
            goto LABEL_9;
          }
          v13 = 87LL;
          goto LABEL_8;
        }
      }
      else
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
      }
    }
LABEL_7:
    v13 = 5LL;
LABEL_8:
    UserSetLastError(v13, v8);
  }
LABEL_9:
  v14 = Handle;
  UserSessionSwitchLeaveCrit(v5);
  return v14;
}
