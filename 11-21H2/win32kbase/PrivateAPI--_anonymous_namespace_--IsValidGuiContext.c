/*
 * XREFs of PrivateAPI::_anonymous_namespace_::IsValidGuiContext @ 0x1C001DDB0
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C003ADD4 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     W32CalloutDispatch @ 0x1C00E4D10 (W32CalloutDispatch.c)
 *     NtUserSystemParametersInfo @ 0x1C0162FF0 (NtUserSystemParametersInfo.c)
 * Callees:
 *     <none>
 */

bool __fastcall PrivateAPI::_anonymous_namespace_::IsValidGuiContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 CurrentProcessWin32Process; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2, a3, a4);
  return CurrentProcessWin32Process
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
      && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
      && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0;
}
