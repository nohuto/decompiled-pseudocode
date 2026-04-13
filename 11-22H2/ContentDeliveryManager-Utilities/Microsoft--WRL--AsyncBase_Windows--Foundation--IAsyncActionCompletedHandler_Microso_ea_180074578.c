/*
 * XREFs of Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::RevertOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::_AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::RevertOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___ @ 0x180074578
 * Callers:
 *     Microsoft::WRL::Details::ImplementsHelper_Microsoft::WRL::RuntimeClassFlags_3__1_Microsoft::WRL::Details::ImplementsMarker_Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::RevertOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2______Microsoft::WRL::FtmBase_::_ImplementsHelper_Microsoft::WRL::RuntimeClassFlags_3__1_Microsoft::WRL::Details::ImplementsMarker_Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::RevertOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2______Microsoft::WRL::FtmBase_ @ 0x180074B1C (Microsoft--WRL--Details--ImplementsHelper_Microsoft--WRL--RuntimeClassFlags_3__1_Mi_ea_180074B1C.c)
 *     Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::RevertOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::_scalar_deleting_destructor_ @ 0x180075750 (Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncActionCompletedHandler_Microso_ea_180075750.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::TraceOperationComplete @ 0x18005F998 (Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncActionCompletedHandler_Microso_ea_18005F998.c)
 */

__int64 __fastcall Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::RevertOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::_AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::RevertOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___(
        __int64 a1)
{
  *(_QWORD *)a1 = off_1800E5898;
  if ( !*(_DWORD *)(a1 + 16) )
    Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::StageOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::TraceOperationComplete(a1);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 40));
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 24));
}
