/*
 * XREFs of ?LaunchUriWithForeground@GamingOverlayExperienceManager@@UEAAJPEAUIUriRuntimeClass@Foundation@Windows@@@Z @ 0x180334680
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
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
  const WCHAR *StringRawBuffer; // rax
  int v11; // eax
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HSTRING string; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 22);
  try
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x638,
        (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
    string = 0LL;
    v5 = *(__int64 (__fastcall **)(struct Windows::Foundation::IUriRuntimeClass *, HSTRING *))(*(_QWORD *)a2 + 48LL);
    WindowsDeleteString(0LL);
    string = 0LL;
    v6 = v5(a2, &string);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x63C,
        (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
      WindowsDeleteString(string);
      return v7;
    }
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v11 = (unsigned int)ShellExecuteW(0LL, L"open", StringRawBuffer, 0LL, 0LL, 1);
    v12 = v11;
    if ( v11 <= 32 )
    {
      if ( v11 )
      {
        if ( v11 > 0 )
          v12 = (unsigned __int16)v11 | 0x80070000;
        if ( (v12 & 0x80000000) == 0 )
          goto LABEL_13;
      }
      else
      {
        v12 = -2147024882;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x642,
        (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)v12);
LABEL_13:
      WindowsDeleteString(string);
      return v12;
    }
    WindowsDeleteString(string);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x645,
                           (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
                           v8);
  }
  return result;
}
