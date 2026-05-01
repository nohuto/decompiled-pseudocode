/*
 * XREFs of ??1?$pair@QEAUHMONITOR__@@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@QEAA@XZ @ 0x1801E940C
 * Callers:
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs_::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs___lambda_37bafbeb3dd0776f24b59a9d11710915____::_1_::dtor$0 @ 0x1801E9300 (_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Foundation--IInspectable_winrt--W.c)
 *     _AgileRegistrationList::Register_::_1_::dtor$0 @ 0x18021F8D1 (_AgileRegistrationList--Register_--_1_--dtor$0.c)
 *     _Windows::Internal::COperationLambdaVar_0__lambda_67d44a18aa71790abd3976d622df6952__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_______::COperationLambdaVar_0__lambda_67d44a18aa71790abd3976d622df6952__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_________lambda_67d44a18aa71790abd3976d622df6952____::_1_::dtor$1 @ 0x1803BF9A4 (_Windows--Internal--COperationLambdaVar_0__lambda_67d44a18aa71790abd3976d622df6952__ea_1803BF9A4.c)
 *     _TaskFlowImmersiveShellBroker::GetCurrentActivityForAllViewsAsync_::_1_::dtor$1 @ 0x1803C45C1 (_TaskFlowImmersiveShellBroker--GetCurrentActivityForAllViewsAsync_--_1_--dtor$1.c)
 *     _CVirtualDesktopManager::SetCurrentDesktopForMonitorHelper_::_1_::dtor$0 @ 0x180547F65 (_CVirtualDesktopManager--SetCurrentDesktopForMonitorHelper_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::pair<HMONITOR__ * const,wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>::~pair<HMONITOR__ * const,wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>(
        __int64 a1)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a1 + 8));
}
