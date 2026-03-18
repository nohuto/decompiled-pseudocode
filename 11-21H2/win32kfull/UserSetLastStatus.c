/*
 * XREFs of UserSetLastStatus @ 0x1C011A880
 * Callers:
 *     NtUserSetLayeredWindowAttributes @ 0x1C001F230 (NtUserSetLayeredWindowAttributes.c)
 *     NtUserFindExistingCursorIcon @ 0x1C00236D0 (NtUserFindExistingCursorIcon.c)
 *     NtUserConsoleControl @ 0x1C007A5F0 (NtUserConsoleControl.c)
 *     NtUserUpdateLayeredWindow @ 0x1C008FA50 (NtUserUpdateLayeredWindow.c)
 *     NtUserDestroyDCompositionHwndTarget @ 0x1C00B3530 (NtUserDestroyDCompositionHwndTarget.c)
 *     NtUserCreateDCompositionHwndTarget @ 0x1C00B4DF0 (NtUserCreateDCompositionHwndTarget.c)
 *     NtUserOpenWindowStation @ 0x1C00CEC80 (NtUserOpenWindowStation.c)
 *     NtUserRegisterWindowMessage @ 0x1C00E0410 (NtUserRegisterWindowMessage.c)
 *     NtUserGetResizeDCompositionSynchronizationObject @ 0x1C0100130 (NtUserGetResizeDCompositionSynchronizationObject.c)
 *     NtUserSetWindowCompositionTransition @ 0x1C010EC60 (NtUserSetWindowCompositionTransition.c)
 *     NtUserDwmKernelStartup @ 0x1C0121980 (NtUserDwmKernelStartup.c)
 *     NtUserDwmGetRemoteSessionOcclusionEvent @ 0x1C0155170 (NtUserDwmGetRemoteSessionOcclusionEvent.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C016CB60 (NtUserHwndQueryRedirectionInfo.c)
 *     NtUserDwmKernelShutdown @ 0x1C01F2FD0 (NtUserDwmKernelShutdown.c)
 *     NtUserSetAutoRotation @ 0x1C01FC560 (NtUserSetAutoRotation.c)
 *     NtUserUpdateDefaultDesktopThumbnail @ 0x1C01FFFF0 (NtUserUpdateDefaultDesktopThumbnail.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

struct _NT_TIB *__fastcall UserSetLastStatus(NTSTATUS Status, int a2)
{
  NTSTATUS v4; // ebx
  struct _NT_TIB *result; // rax
  __int64 v6; // rcx
  ULONG v7; // eax
  __int64 v8; // rdx

  if ( (Status & 0x1FFF0000) == 0x3F0000 || (Status & 0x1FFF0000) == 0x3E0000 )
  {
    v4 = 0;
    if ( Status < 0 )
      v4 = -1073741823;
  }
  else
  {
    v4 = Status;
  }
  result = (struct _NT_TIB *)KeIsAttachedProcess();
  if ( !(_BYTE)result )
  {
    LODWORD(KeGetPcr()->NtTib.Self[83].ArbitraryUserPointer) = Status;
    result = (struct _NT_TIB *)PsGetCurrentProcessWow64Process(v6);
    if ( result )
    {
      result = KeGetPcr()->NtTib.Self;
      HIDWORD(result[200].Self) = Status;
    }
    if ( a2 )
    {
      v7 = RtlNtStatusToDosError(v4);
      return UserSetLastError(v7, v8);
    }
  }
  return result;
}
