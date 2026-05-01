/*
 * XREFs of _lambda_84429cdf929064e299b144c114ce1e9e_::__lambda_84429cdf929064e299b144c114ce1e9e_ @ 0x180440F0C
 * Callers:
 *     _XamlAllUpViewController::[IXamlSwitcherWindowInteractionEvents]::OnContainerNavigate_::_1_::dtor$3 @ 0x1804445F2 (_XamlAllUpViewController--[IXamlSwitcherWindowInteractionEvents]--OnContainerNaviga_ea_1804445F2.c)
 *     _XamlBaseViewController::[IXamlMultitaskingViewController]::CloseSwitchItem_::_1_::dtor$1 @ 0x180447DB5 (_XamlBaseViewController--[IXamlMultitaskingViewController]--CloseSwitchItem_--_1_--dtor$1.c)
 *     _XamlBaseViewController::DismissView_::_1_::dtor$1 @ 0x180447EAD (_XamlBaseViewController--DismissView_--_1_--dtor$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_84429cdf929064e299b144c114ce1e9e_::__lambda_84429cdf929064e299b144c114ce1e9e_(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = a1[1];
  if ( v2 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  if ( *a1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  return result;
}
