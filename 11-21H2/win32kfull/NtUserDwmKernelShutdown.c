/*
 * XREFs of NtUserDwmKernelShutdown @ 0x1C01F2FD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     xxxDwmStopRedirection @ 0x1C0098410 (xxxDwmStopRedirection.c)
 *     UserSetLastStatus @ 0x1C011A880 (UserSetLastStatus.c)
 */

__int64 NtUserDwmKernelShutdown()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 CurrentProcess; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  NTSTATUS v9; // eax

  EnterCrit(0LL, 0LL);
  CurrentProcess = PsGetCurrentProcess(v1, v0);
  v4 = 0LL;
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v5 = 5LL;
LABEL_10:
    UserSetLastError(v5, v3);
    goto LABEL_11;
  }
  v6 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( !v6 || (v7 = *(_QWORD *)(v6 + 8)) == 0 )
  {
    v5 = 87LL;
    goto LABEL_10;
  }
  v8 = *(unsigned int *)(*(_QWORD *)v7 + 64LL);
  if ( (v8 & 1) != 0 && (v9 = xxxDwmStopRedirection(), v9 < 0) )
    UserSetLastStatus(v9, 1);
  else
    v4 = 1LL;
LABEL_11:
  UserSessionSwitchLeaveCrit(v8);
  return v4;
}
