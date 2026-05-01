/*
 * XREFs of ?reset@?$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180171E08
 * Callers:
 *     _lambda_69bbfac175da7369ff64947ef3e1264d_::operator() @ 0x1800331A8 (_lambda_69bbfac175da7369ff64947ef3e1264d_--operator().c)
 *     ?WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x1800782C0 (-WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@.c)
 *     ?SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800D6D00 (-SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     _lambda_8eaa9d9bc48e0c760b532341ceadabea_::operator() @ 0x180129B38 (_lambda_8eaa9d9bc48e0c760b532341ceadabea_--operator().c)
 *     _lambda_7206e95aa8b06e05a5361a090cf4be35_::operator() @ 0x180174E08 (_lambda_7206e95aa8b06e05a5361a090cf4be35_--operator().c)
 *     _lambda_764ee8b4a8419d9c80cead9f7e3da01b_::operator() @ 0x1803EAD64 (_lambda_764ee8b4a8419d9c80cead9f7e3da01b_--operator().c)
 *     _lambda_c0f08dfecf23d4c97e456f7dc771f40c_::operator() @ 0x1803EAFB0 (_lambda_c0f08dfecf23d4c97e456f7dc771f40c_--operator().c)
 *     ?UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIActivationRequestedEventArgs@WindowManagement@ApplicationModel@56@@Z @ 0x1803F457C (-UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLife.c)
 *     ?UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@Shell@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x1803F5190 (-UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@.c)
 *     _lambda_00182c6ee200e78e0959b7edcc3d9c9f_::operator() @ 0x1803FFC58 (_lambda_00182c6ee200e78e0959b7edcc3d9c9f_--operator().c)
 *     ?PushWindowVisibility@UwpWindowManagerBridge@@AEAAXPEAUIUwpWindowWrapperInternal@@_N@Z @ 0x180402958 (-PushWindowVisibility@UwpWindowManagerBridge@@AEAAXPEAUIUwpWindowWrapperInternal@@_N@Z.c)
 *     _lambda_3e87ed8f2ab8c127964bc6cd9a92329c_::operator() @ 0x180409874 (_lambda_3e87ed8f2ab8c127964bc6cd9a92329c_--operator().c)
 *     _lambda_d2f8d784326582b7ecd3555e759088d4_::operator() @ 0x18040A02C (_lambda_d2f8d784326582b7ecd3555e759088d4_--operator().c)
 *     _lambda_36b912ab9b140b1050ef71f40390bee1_::operator() @ 0x180411828 (_lambda_36b912ab9b140b1050ef71f40390bee1_--operator().c)
 *     _lambda_53f05934ca3aac523abd35d792594eec_::operator() @ 0x180411C60 (_lambda_53f05934ca3aac523abd35d792594eec_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IViewPresentationMediator,wil::err_returncode_policy>::reset(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
