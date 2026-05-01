/*
 * XREFs of ?TryGetLastActiveTimestampForWindow@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA?AV?$time_point@Uclock@winrt@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@chrono@std@@UWindowId@WindowManagement@ApplicationModel@567@@Z @ 0x18058B71C
 * Callers:
 *     ?TryGetLastActiveTimestampForWindow@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@@impl@winrt@@UEAAHUstruct_Windows_Internal_ApplicationModel_WindowManagement_WindowId@23@PEA_J@Z @ 0x18058B6B0 (-TryGetLastActiveTimestampForWindow@-$produce@UTaskGroupsComponent@implementation@TaskGroups@She.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::TryGetLastActiveTimestampForWindow(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0LL;
  v4 = *(__int64 **)(a1 + 136);
  v5 = *v4;
  v10 = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, _QWORD, __int64 *))(v5 + 48))(v4, a3, &v10) >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 480LL))(v10, &v11);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xBC,
        (int)"pcshell\\twinui\\taskgroups\\lib\\taskgroupscomponent.cpp",
        (const char *)(unsigned int)v6,
        v8);
    *a2 = v11;
  }
  else
  {
    *a2 = 116444736000000000LL;
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v10);
  return a2;
}
