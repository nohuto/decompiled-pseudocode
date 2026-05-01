/*
 * XREFs of _lambda_7e117e86fbbf7389a420f5618d976754_::__lambda_7e117e86fbbf7389a420f5618d976754_ @ 0x18019B8B8
 * Callers:
 *     _winrt::Windows::Foundation::DeferralCompletedHandler::DeferralCompletedHandler__lambda_4c7cf74572be3be5d52cc677d169632e____::_1_::dtor$0 @ 0x18019897C (_winrt--Windows--Foundation--DeferralCompletedHandler--DeferralCompletedHandler__lambda_4c7cf745.c)
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_winrt::Windows::Foundation::IInspectable_::TypedEventHandler_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_winrt::Windows::Foundation::IInspectable___lambda_7e117e86fbbf7389a420f5618d976754____::_1_::dtor$0 @ 0x1801C1448 (_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--ApplicationModel--Store--Preview-.c)
 *     _CAppThumbnailWindow::SetRectAndCallback_::_1_::dtor$1 @ 0x18049D5E4 (_CAppThumbnailWindow--SetRectAndCallback_--_1_--dtor$1.c)
 *     _StartupAppMonitor::ParentRegKeyCallback_::_1_::dtor$2 @ 0x18057FF32 (_StartupAppMonitor--ParentRegKeyCallback_--_1_--dtor$2.c)
 *     _StartupAppMonitor::RegKeyCallback_::_1_::dtor$1 @ 0x1805801C6 (_StartupAppMonitor--RegKeyCallback_--_1_--dtor$1.c)
 *     _StartupAppMonitor::StartMonitor_::_1_::dtor$3 @ 0x180580AF5 (_StartupAppMonitor--StartMonitor_--_1_--dtor$3.c)
 *     _StartupAppMonitor::StartMonitor_::_1_::dtor$8 @ 0x180580B43 (_StartupAppMonitor--StartMonitor_--_1_--dtor$8.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall lambda_7e117e86fbbf7389a420f5618d976754_::__lambda_7e117e86fbbf7389a420f5618d976754_(__int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
