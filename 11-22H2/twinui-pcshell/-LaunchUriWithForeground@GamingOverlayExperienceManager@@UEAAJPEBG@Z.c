/*
 * XREFs of ?LaunchUriWithForeground@GamingOverlayExperienceManager@@UEAAJPEBG@Z @ 0x180402210
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::LaunchUriWithForeground(
        GamingOverlayExperienceManager *this,
        const unsigned __int16 *a2)
{
  int v3; // eax
  const char *v4; // r9
  SHELLEXECUTEINFOW pExecInfo; // [rsp+20h] [rbp-78h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 44) + 24LL))(*((_QWORD *)this + 44));
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x665,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  memset_0(&pExecInfo, 0, sizeof(pExecInfo));
  pExecInfo.cbSize = 112;
  pExecInfo.lpVerb = L"open";
  pExecInfo.fMask = 67109888;
  pExecInfo.lpFile = a2;
  pExecInfo.nShow = 1;
  if ( ShellExecuteExW(&pExecInfo) )
    return 0LL;
  else
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x672,
             (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
             v4);
}
