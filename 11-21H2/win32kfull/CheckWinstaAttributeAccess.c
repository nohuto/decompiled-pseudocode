/*
 * XREFs of CheckWinstaAttributeAccess @ 0x1C009EAE0
 * Callers:
 *     NtUserLockWorkStation @ 0x1C0005370 (NtUserLockWorkStation.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C009BDD0 (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     _RegisterHotKey @ 0x1C009E114 (_RegisterHotKey.c)
 *     _SetCaretBlinkTime @ 0x1C009E700 (_SetCaretBlinkTime.c)
 *     NtUserGetCursorInfo @ 0x1C009E790 (NtUserGetCursorInfo.c)
 *     ?xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z @ 0x1C009E99C (-xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C009EBF8 (xxxSystemParametersInfoWorker.c)
 *     CheckCursorClipAccess @ 0x1C00A8870 (CheckCursorClipAccess.c)
 *     _SetDoubleClickTime @ 0x1C010D2A8 (_SetDoubleClickTime.c)
 *     ?zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C01CFA40 (-zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     NtUserShowSystemCursor @ 0x1C01FFAD0 (NtUserShowSystemCursor.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall CheckWinstaAttributeAccess(__int64 DesiredAccess)
{
  ACCESS_MASK v1; // edi
  __int64 CurrentProcessWin32Process; // rbx
  HANDLE CurrentProcessId; // rax
  __int64 v4; // rdx
  __int64 v6; // rcx

  v1 = DesiredAccess;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(DesiredAccess);
  CurrentProcessId = PsGetCurrentProcessId();
  v4 = gpidLogon;
  if ( CurrentProcessId == (HANDLE)gpidLogon )
    return 1LL;
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x40000) != 0 )
  {
    if ( RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 680), v1) )
      return 1LL;
    v6 = 5LL;
  }
  else
  {
    v6 = 1459LL;
  }
  UserSetLastError(v6, v4);
  return 0LL;
}
