/*
 * XREFs of _lambda_53dc6f5411cb2511b6cb0ef5cd4a893d_::__lambda_53dc6f5411cb2511b6cb0ef5cd4a893d_ @ 0x1801B67C0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_53dc6f5411cb2511b6cb0ef5cd4a893d___::_CTaskWrapper__lambda_53dc6f5411cb2511b6cb0ef5cd4a893d___ @ 0x1801B684C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_53dc6f5411cb2511b6cb0ef5cd4a893d___--_CTask.c)
 *     ?MakeBackgroundThumbnailFromWallpaperPathAsync@VirtualDesktopGestureWindow@@AEAAJPEAUIDCompThumbnail@@UtagRECT@@V?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@I0@Z @ 0x180554324 (-MakeBackgroundThumbnailFromWallpaperPathAsync@VirtualDesktopGestureWindow@@AEAAJPEAUIDCompThumb.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$tip_test@U_tip_SearchHideTest@@@tip@@QEAA@XZ @ 0x18019BD78 (--1-$tip_test@U_tip_SearchHideTest@@@tip@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCreationThreadDispatcher@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1803B1B70 (--1-$com_ptr_t@VCreationThreadDispatcher@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_53dc6f5411cb2511b6cb0ef5cd4a893d_::__lambda_53dc6f5411cb2511b6cb0ef5cd4a893d_(__int64 *a1)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(a1 + 13);
  tip::tip_test<_tip_SearchHideTest>::~tip_test<_tip_SearchHideTest>((__int64)(a1 + 10));
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(a1 + 9);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(a1 + 8);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(a1 + 7);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(a1 + 6);
  wil::com_ptr_t<CreationThreadDispatcher,wil::err_exception_policy>::~com_ptr_t<CreationThreadDispatcher,wil::err_exception_policy>(a1 + 5);
  return wil::com_ptr_t<VirtualDesktopGestureWindow,wil::err_returncode_policy>::~com_ptr_t<VirtualDesktopGestureWindow,wil::err_returncode_policy>(a1);
}
