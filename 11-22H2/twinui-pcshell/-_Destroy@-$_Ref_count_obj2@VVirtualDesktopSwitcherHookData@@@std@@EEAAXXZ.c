/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@VVirtualDesktopSwitcherHookData@@@std@@EEAAXXZ @ 0x180777300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Ref_count_obj2<VirtualDesktopSwitcherHookData>::_Destroy(__int64 a1)
{
  __int64 *v1; // rbx
  HHOOK v2; // rcx

  v1 = (__int64 *)(a1 + 16);
  v2 = *(HHOOK *)(a1 + 24);
  if ( v2 )
    UnhookWindowsHookEx(v2);
  return wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(v1);
}
