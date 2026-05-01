/*
 * XREFs of ?StartXamlApplicationThread@XamlExplorerHostShellComponent@@AEAAJXZ @ 0x1800619DC
 * Callers:
 *     ?PerformDelayedInitialization@XamlExplorerHostShellComponent@@UEAAJXZ @ 0x18005FF70 (-PerformDelayedInitialization@XamlExplorerHostShellComponent@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800CA2C4 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1801661D4 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlExplorerHostShellComponent::StartXamlApplicationThread(XamlExplorerHostShellComponent *this)
{
  wil::details *v2; // rcx
  HANDLE Event; // rbx
  HANDLE *v4; // rdi
  char *v5; // rsi
  const char *v6; // r9
  int LastErrorFailHr; // eax
  unsigned int v9; // ebx
  DWORD LastError; // ebx
  int pHandle; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      (char *)this + 296,
      Event);
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v2);
    v9 = LastErrorFailHr;
    if ( LastErrorFailHr < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14F,
        (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
        (const char *)(unsigned int)LastErrorFailHr,
        pHandle);
      return v9;
    }
  }
  v4 = (HANDLE *)((char *)this + 304);
  v5 = (char *)*((_QWORD *)this + 38);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = GetLastError();
    CloseHandle(v5);
    SetLastError(LastError);
  }
  *v4 = 0LL;
  if ( SHCreateThreadWithHandle(XamlExplorerHostShellComponent::s_XamlApplicationThreadProc, this, 0xC000u, 0LL, v4) )
    return 0LL;
  else
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x150,
             (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
             v6);
}
