/*
 * XREFs of ??$await_transform@Uapartment_context@winrt@@@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCToastCenterExperienceManager@@@experimental@std@@QEAA?A_P$$QEAUapartment_context@winrt@@@Z @ 0x180434EF4
 * Callers:
 *     CToastCenterExperienceManager::OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x1801E0640 (CToastCenterExperienceManager--OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::experimental::coroutine_traits<winrt::fire_and_forget,CToastCenterExperienceManager *>::promise_type::await_transform<winrt::apartment_context>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *a3;
  *(_QWORD *)a2 = *a3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  *(_DWORD *)(a2 + 8) = *((_DWORD *)a3 + 2);
  result = a2;
  *(_DWORD *)(a2 + 16) = 0;
  return result;
}
