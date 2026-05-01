/*
 * XREFs of ?LaunchUriWithForeground@GamingOverlayExperienceManager@@UEAAJPEAUIUriRuntimeClass@Foundation@Windows@@@Z @ 0x180402020
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GamingOverlayExperienceManager::LaunchUriWithForeground(
        GamingOverlayExperienceManager *this,
        struct Windows::Foundation::IUriRuntimeClass *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  __int64 (__fastcall *v5)(struct Windows::Foundation::IUriRuntimeClass *, HSTRING *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  const char *v8; // r9
  __int64 result; // rax
  const char *v10; // r9
  unsigned int LastError; // ebx
  SHELLEXECUTEINFOW pExecInfo; // [rsp+20h] [rbp-78h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  HSTRING string; // [rsp+A0h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 27);
  try
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x64C,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
    string = 0LL;
    v5 = *(__int64 (__fastcall **)(struct Windows::Foundation::IUriRuntimeClass *, HSTRING *))(*(_QWORD *)a2 + 48LL);
    WindowsDeleteString(0LL);
    string = 0LL;
    v6 = v5(a2, &string);
    v7 = v6;
    if ( v6 >= 0 )
    {
      memset_0(&pExecInfo, 0, sizeof(pExecInfo));
      pExecInfo.cbSize = 112;
      pExecInfo.fMask = 67109888;
      pExecInfo.lpVerb = L"open";
      pExecInfo.lpFile = WindowsGetStringRawBuffer(string, 0LL);
      pExecInfo.nShow = 1;
      if ( ShellExecuteExW(&pExecInfo) )
      {
        WindowsDeleteString(string);
        result = 0LL;
      }
      else
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x65B,
                      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
                      v10);
        WindowsDeleteString(string);
        result = LastError;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x650,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
      WindowsDeleteString(string);
      result = v7;
    }
  }
  catch ( ... )
  {
    LODWORD(string) = wil::details::in1diag3::Return_CaughtException(
                        retaddr,
                        (void *)0x65E,
                        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
                        v8);
    return (unsigned int)string;
  }
  return result;
}
