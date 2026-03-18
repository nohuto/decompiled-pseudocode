/*
 * XREFs of ?WaitForMessagesOrCustomInputEventsAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C01DCA20
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     ?Dispatch@LegacyInputDispatcher@@QEBAJI@Z @ 0x1C00B7C14 (-Dispatch@LegacyInputDispatcher@@QEBAJI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

NTSTATUS __fastcall LegacyInputDispatcher::WaitForMessagesOrCustomInputEventsAndDispatch(LegacyInputDispatcher *this)
{
  NTSTATUS result; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  if ( !*((_QWORD *)this + 2) )
    return -1073741790;
  **((_QWORD **)this + 2) = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1416);
  while ( 1 )
  {
    result = KeWaitForMultipleObjects(
               *((_DWORD *)this + 12),
               *((PVOID **)this + 2),
               WaitAny,
               WrUserRequest,
               *((_BYTE *)this + 56),
               *((_BYTE *)this + 57),
               0LL,
               *((PKWAIT_BLOCK *)this + 3));
    if ( result < 0 )
      break;
    if ( !result )
    {
      result = *((_DWORD *)this + 15);
      break;
    }
    v3 = *((unsigned int *)this + 10);
    v4 = *((unsigned int *)this + 13);
    if ( (unsigned int)v3 >= (unsigned int)v4 )
    {
LABEL_9:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5);
      v3 = 0LL;
    }
    else
    {
      v5 = *((_QWORD *)this + 1);
      while ( *(_QWORD *)(v5 + 8LL * (unsigned int)v3) != *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * (unsigned int)result) )
      {
        v3 = (unsigned int)(v3 + 1);
        if ( (unsigned int)v3 >= (unsigned int)v4 )
          goto LABEL_9;
      }
    }
    LegacyInputDispatcher::Dispatch(this, v3, v5);
  }
  *((_DWORD *)this + 12) = 1;
  return result;
}
