/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::AppService::AppServiceConnection___Windows::ApplicationModel::AppService::IAppServiceConnection____Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::AppService::AppServiceClosedEventArgs___Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs_____::_)(Windows::ApplicationModel::AppService::IAppServiceConnection___Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::AppService::AppServiceConnection___Windows::ApplicationModel::AppService::AppServiceClosedEventArgs____Microsoft::WRL::FtmBase___lambda_43d5cd0ad306fdb22566dc3fe2fed53d__&__1_Windows::ApplicationModel::AppService::IAppServiceConnection___Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs___::_scalar_deleting_destructor_ @ 0x180054460
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::AppService::AppServiceConnection___Windows::ApplicationModel::AppService::IAppServiceConnection____Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::AppService::AppServiceClosedEventArgs___Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs_____::___Windows::ApplicationModel::AppService::IAppServiceConnection___Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::AppService::AppServiceConnection___Windows::ApplicationModel::AppService::AppServiceClosedEventArgs____Microsoft::WRL::FtmBase___lambda_43d5cd0ad306fdb22566dc3fe2fed53d_____1_Windows::ApplicationModel::AppService::IAppServiceConnection___Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs___::_scalar_deleting_destructor_(
        __int64 a1,
        char a2)
{
  *(_DWORD *)(a1 + 60) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 32));
  if ( (a2 & 1) != 0 )
    operator delete((void *)a1);
  return a1;
}
