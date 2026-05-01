/*
 * XREFs of ?UncloakWindow@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x1802E8E70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x1800C6334 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180107578 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::UncloakWindow(CApplicationManager *this, HWND a2)
{
  int CallingProcessHandle; // eax
  unsigned int v4; // ebx
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  DWORD ProcessId; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // eax
  _DWORD v12[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DWORD dwProcessId; // [rsp+50h] [rbp+18h] BYREF
  HANDLE Process; // [rsp+58h] [rbp+20h] BYREF

  Process = 0LL;
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle((__int64)this, 0, &Process);
  v4 = CallingProcessHandle;
  if ( CallingProcessHandle < 0 )
  {
    v5 = (unsigned int)CallingProcessHandle;
    v6 = 2562LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)v5);
    goto LABEL_19;
  }
  if ( !(unsigned int)GetProcessUIContextInformation(Process, v12) )
  {
    v4 = -2147024890;
    v6 = 2565LL;
LABEL_17:
    v5 = v4;
    goto LABEL_18;
  }
  if ( v12[0] != 2 )
  {
    v4 = -2089418751;
    v6 = 2566LL;
    goto LABEL_17;
  }
  if ( !GetWindowThreadProcessId(a2, &dwProcessId) )
  {
    v4 = -2147024890;
    v6 = 2570LL;
    goto LABEL_17;
  }
  ProcessId = GetProcessId(Process);
  if ( dwProcessId != ProcessId )
  {
    v6 = 2571LL;
LABEL_16:
    v4 = -2147024809;
    goto LABEL_17;
  }
  if ( !(unsigned int)IsShellManagedWindow(a2, v8, v9) || GetWindow(a2, 4u) )
  {
    v6 = 2574LL;
    goto LABEL_16;
  }
  v10 = (*(__int64 (__fastcall **)(PVOID, HWND, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr
                                                       + 24LL))(
          CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
          a2,
          0LL);
  v4 = v10;
  if ( v10 < 0 )
  {
    v5 = (unsigned int)v10;
    v6 = 2577LL;
    goto LABEL_18;
  }
LABEL_19:
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&Process);
  return v4;
}
