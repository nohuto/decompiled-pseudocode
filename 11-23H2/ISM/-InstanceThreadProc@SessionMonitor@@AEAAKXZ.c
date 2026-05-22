/*
 * XREFs of ?InstanceThreadProc@SessionMonitor@@AEAAKXZ @ 0x180058CE4
 * Callers:
 *     ?ThreadProc@SessionMonitor@@CAKPEAX@Z @ 0x1800590B0 (-ThreadProc@SessionMonitor@@CAKPEAX@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180031848 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ??1?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QEAA@XZ @ 0x1800556EC (--1-$unique_any_t@V-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SessionMonitor::InstanceThreadProc(SessionMonitor *this)
{
  struct SessionMonitor *v1; // rbx
  const char *v2; // r9
  HWND Window; // rax
  const char *v4; // r9
  wil::details *v5; // rax
  const char *v6; // r9
  DWORD v7; // eax
  void *v8; // rdx
  signed int LastError; // eax
  bool v10; // sf
  signed int v11; // eax
  bool v12; // sf
  HMODULE ModuleHandleW; // rax
  void *v14; // rdx
  int X; // [rsp+20h] [rbp-E0h]
  HANDLE Handles[2]; // [rsp+60h] [rbp-A0h] BYREF
  MSG Msg; // [rsp+70h] [rbp-90h] BYREF
  WNDCLASSW hInstance; // [rsp+A0h] [rbp-60h] BYREF
  tagWNDCLASSW WndClass; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]
  wil::details *v22; // [rsp+160h] [rbp+60h] BYREF
  wil::details *v23; // [rsp+168h] [rbp+68h] BYREF

  v22 = this;
  v1 = SessionMonitor::_instance;
  v23 = 0LL;
  memset_0(&hInstance, 0, sizeof(hInstance));
  memset_0(&WndClass, 0, sizeof(WndClass));
  hInstance.cbWndExtra = 8;
  hInstance.lpfnWndProc = (WNDPROC)SessionMonitor::WndProc;
  hInstance.hInstance = GetModuleHandleW(0LL);
  hInstance.lpszClassName = L"SessionMonitorWindow";
  if ( !GetClassInfoW(hInstance.hInstance, L"SessionMonitorWindow", &WndClass) && !RegisterClassW(&hInstance) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x9E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\sessionmonitor.cpp",
      v2);
  Window = CreateWindowExW(0, hInstance.lpszClassName, &Src, 0, 0, 0, 0, 0, HWND_MESSAGE, 0LL, hInstance.hInstance, 0LL);
  *(_QWORD *)v1 = Window;
  if ( !Window )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xAD,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\sessionmonitor.cpp",
      v4);
  if ( !WTSRegisterSessionNotification(Window, 0) && (GetLastError() == 1702 || GetLastError() == 1722) )
  {
    v22 = 0LL;
    v5 = (wil::details *)OpenEventW(0x100000u, 0, L"Global\\TermSrvReadyEvent");
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      &v22,
      v5);
    if ( !v22 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xB9,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\sessionmonitor.cpp",
        v6);
    Handles[0] = v22;
    Handles[1] = *((HANDLE *)v1 + 3);
    v7 = WaitForMultipleObjects(2u, Handles, 0, 0xFFFFFFFF);
    if ( v7 )
    {
      if ( v7 != 1 )
      {
        if ( v7 != -1 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xD3,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\sessionmonitor.cpp",
            (const char *)0x8000FFFFLL,
            X);
        LastError = GetLastError();
        v10 = LastError < 0;
        if ( LastError > 0 )
        {
          LastError = (unsigned __int16)LastError | 0x80070000;
          v10 = LastError < 0;
        }
        if ( v10 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xC3,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\sessionmonitor.cpp",
            (const char *)(unsigned int)LastError,
            X);
      }
    }
    else if ( !WTSRegisterSessionNotification(*(HWND *)v1, 0) )
    {
      v11 = GetLastError();
      v12 = v11 < 0;
      if ( v11 > 0 )
      {
        v11 = (unsigned __int16)v11 | 0x80070000;
        v12 = v11 < 0;
      }
      if ( v12 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xCA,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\sessionmonitor.cpp",
          (const char *)(unsigned int)v11,
          X);
    }
    __1__unique_any_t_V__mutex_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil___wil__QEAA_XZ(
      &v22,
      v8);
  }
  memset(&Msg, 0, sizeof(Msg));
  while ( GetMessageW(&Msg, 0LL, 0, 0) )
    DispatchMessageW(&Msg);
  ModuleHandleW = GetModuleHandleW(0LL);
  UnregisterClassW(L"SessionMonitorWindow", ModuleHandleW);
  __1__unique_any_t_V__mutex_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil___wil__QEAA_XZ(
    &v23,
    v14);
  return 0LL;
}
