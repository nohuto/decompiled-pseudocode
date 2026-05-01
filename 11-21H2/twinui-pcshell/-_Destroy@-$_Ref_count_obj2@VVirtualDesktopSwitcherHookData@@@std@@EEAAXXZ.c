/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@VVirtualDesktopSwitcherHookData@@@std@@EEAAXXZ @ 0x18060C9C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHHOOK__@@P6AHPEAU1@@Z$1?UnhookWindowsHookEx@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180607EA0 (--1-$unique_storage@U-$resource_policy@PEAUHHOOK__@@P6AHPEAU1@@Z$1-UnhookWindowsHookEx@@YAH0@ZU-.c)
 */

void __fastcall std::_Ref_count_obj2<VirtualDesktopSwitcherHookData>::_Destroy(__int64 a1)
{
  __int64 *v1; // rbx

  v1 = (__int64 *)(a1 + 16);
  wil::details::unique_storage<wil::details::resource_policy<HHOOK__ *,int (*)(HHOOK__ *),&int UnhookWindowsHookEx(HHOOK__ *),wistd::integral_constant<unsigned __int64,0>,HHOOK__ *,HHOOK__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HHOOK__ *,int (*)(HHOOK__ *),&int UnhookWindowsHookEx(HHOOK__ *),wistd::integral_constant<unsigned __int64,0>,HHOOK__ *,HHOOK__ *,0,std::nullptr_t>>((HHOOK *)(a1 + 24));
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(v1);
}
