/*
 * XREFs of ?LaunchExecutableWithForeground@GamingOverlayExperienceManager@@UEAAJPEAUHSTRING__@@00@Z @ 0x1804017F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::LaunchExecutableWithForeground(
        GamingOverlayExperienceManager *this,
        HSTRING a2,
        HSTRING a3,
        HSTRING a4)
{
  __int64 v7; // rcx
  int v8; // eax
  const char *v9; // r9
  __int64 result; // rax
  SHELLEXECUTEINFOW pExecInfo; // [rsp+20h] [rbp-78h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v7 = *((_QWORD *)this + 25);
  try
  {
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD0F,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
    memset_0(&pExecInfo, 0, sizeof(pExecInfo));
    pExecInfo.cbSize = 112;
    pExecInfo.fMask = 67109888;
    pExecInfo.lpVerb = L"open";
    pExecInfo.lpFile = WindowsGetStringRawBuffer(a2, 0LL);
    pExecInfo.lpParameters = WindowsGetStringRawBuffer(a3, 0LL);
    pExecInfo.lpDirectory = WindowsGetStringRawBuffer(a4, 0LL);
    pExecInfo.nShow = 1;
    if ( ShellExecuteExW(&pExecInfo) )
      result = 0LL;
    else
      result = wil::details::in1diag3::Return_GetLastError(
                 retaddr,
                 (void *)0xD1D,
                 (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
                 v9);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xD20,
                           (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
                           v9);
  }
  return result;
}
