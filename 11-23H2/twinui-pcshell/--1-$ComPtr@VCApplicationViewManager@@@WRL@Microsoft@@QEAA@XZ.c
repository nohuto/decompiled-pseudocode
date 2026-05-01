/*
 * XREFs of ??1?$ComPtr@VCApplicationViewManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1803CB840
 * Callers:
 *     _CWin32ApplicationView::GetRootSwitchableOwner_::_1_::dtor$2 @ 0x1802BAFA5 (_CWin32ApplicationView--GetRootSwitchableOwner_--_1_--dtor$2.c)
 *     _CWin32ApplicationView::SetSizeConstraintsForDpi_::_1_::dtor$1 @ 0x1802BB011 (_CWin32ApplicationView--SetSizeConstraintsForDpi_--_1_--dtor$1.c)
 *     _CApplicationViewBase::SetEnterpriseId_::_1_::dtor$1 @ 0x1802BFD8C (_CApplicationViewBase--SetEnterpriseId_--_1_--dtor$1.c)
 *     _CWinRTApplicationView::SetSizeConstraintsForDpi_::_1_::dtor$1 @ 0x1802C0056 (_CWinRTApplicationView--SetSizeConstraintsForDpi_--_1_--dtor$1.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CApplicationViewManager_IUnknown__::_1_::dtor$2 @ 0x1802C19D1 (_Microsoft--WRL--Details--MakeAndInitialize_CApplicationViewManager_IUnknown__--_1_--dtor$2.c)
 *     _CApplicationViewManager::_HandleFlashingChange__lambda_d2283a63d6b85274b5dfb750ad5a931e____::_1_::dtor$2 @ 0x1803CB5DA (_CApplicationViewManager--_HandleFlashingChange__lambda_d2283a63d6b85274b5dfb750ad5_ea_1803CB5DA.c)
 *     _CApplicationViewManager::_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360____::_1_::dtor$3 @ 0x1803CB777 (_CApplicationViewManager--_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558b_ea_1803CB777.c)
 *     _CWin32ApplicationView::EnumerateOwnershipTree_::_1_::dtor$5 @ 0x1803CDC66 (_CWin32ApplicationView--EnumerateOwnershipTree_--_1_--dtor$5.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@UIWindowOccludedChangeListener@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801330E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImm.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CApplicationViewManager>::~ComPtr<CApplicationViewManager>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl,IWindowOccludedChangeListener>>::Release(result);
  }
  return result;
}
