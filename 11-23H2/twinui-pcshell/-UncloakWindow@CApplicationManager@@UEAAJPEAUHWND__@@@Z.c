/*
 * XREFs of ?UncloakWindow@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x1803A1800
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x180012B84 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180165FBC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::UncloakWindow(CApplicationManager *this, HWND a2)
{
  __int64 v3; // rcx
  int CallingProcessHandle; // eax
  unsigned int v5; // ebx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  DWORD ProcessId; // eax
  int v9; // eax
  _DWORD v11[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DWORD dwProcessId; // [rsp+50h] [rbp+18h] BYREF
  HANDLE Process; // [rsp+58h] [rbp+20h] BYREF

  Process = 0LL;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &Process,
    0LL);
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(v3, 0, &Process);
  v5 = CallingProcessHandle;
  if ( CallingProcessHandle < 0 )
  {
    v6 = (unsigned int)CallingProcessHandle;
    v7 = 2514LL;
    goto LABEL_18;
  }
  if ( !(unsigned int)GetProcessUIContextInformation(Process, v11) )
  {
    v5 = -2147024890;
    v7 = 2517LL;
LABEL_17:
    v6 = v5;
    goto LABEL_18;
  }
  if ( v11[0] != 2 )
  {
    v5 = -2089418751;
    v7 = 2518LL;
    goto LABEL_17;
  }
  if ( !GetWindowThreadProcessId(a2, &dwProcessId) )
  {
    v5 = -2147024890;
    v7 = 2522LL;
    goto LABEL_17;
  }
  ProcessId = GetProcessId(Process);
  if ( dwProcessId != ProcessId )
  {
    v7 = 2523LL;
LABEL_16:
    v5 = -2147024809;
    goto LABEL_17;
  }
  if ( !(unsigned int)IsShellManagedWindow(a2) || GetWindow(a2, 4u) )
  {
    v7 = 2526LL;
    goto LABEL_16;
  }
  v9 = (*(__int64 (__fastcall **)(PVOID, HWND, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr
                                                      + 24LL))(
         CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
         a2,
         0LL);
  v5 = v9;
  if ( v9 >= 0 )
    goto LABEL_19;
  v6 = (unsigned int)v9;
  v7 = 2529LL;
LABEL_18:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)v6);
LABEL_19:
  if ( (char *)Process - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(Process);
  return v5;
}
