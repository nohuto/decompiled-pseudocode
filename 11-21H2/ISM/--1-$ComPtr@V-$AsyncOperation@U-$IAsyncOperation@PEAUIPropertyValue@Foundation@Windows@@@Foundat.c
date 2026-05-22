/*
 * XREFs of ??1?$ComPtr@V?$AsyncOperation@U?$IAsyncOperation@PEAUIPropertyValue@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAUIPropertyValue@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180164D8C
 * Callers:
 *     _Windows::Internal::MakeAsyncHelper_Windows::Foundation::IAsyncOperation_Windows::Foundation::Collections::IVector_HSTRING_________Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Foundation::Collections::IVector_HSTRING_________Windows::Internal::INilDelegate_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVector_HSTRING________Windows::Internal::ComTaskPoolHandler_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2____::_1_::dtor$0 @ 0x1801621C1 (_Windows--Internal--MakeAsyncHelper_Windows--Foundation--IAsyncOperation_Windows--Foundation--Co.c)
 *     _Windows::Internal::MakeAsyncHelper_Windows::Foundation::IAsyncOperation_Windows::Foundation::IPropertyValue____Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Foundation::IPropertyValue____Windows::Internal::INilDelegate_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::IPropertyValue__Windows::Internal::ComTaskPoolHandler_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2____::_1_::dtor$0 @ 0x1801622BD (_Windows--Internal--MakeAsyncHelper_Windows--Foundation--IAsyncOperation_Windows--Foundation--IP.c)
 *     _Windows::Internal::MakeAsyncHelper_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::INilDelegate_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Microsoft::WRL::AsyncCausalityOptions_&SetAllConstantsForInputTypeToDefaultAsyncCasualityName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2____::_1_::dtor$0 @ 0x1801623C5 (_Windows--Internal--MakeAsyncHelper_Windows--Foundation--IAsyncAction_Windows--Foundation--IAsyn.c)
 *     _Windows::Internal::MakeAsyncHelper_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::INilDelegate_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Microsoft::WRL::AsyncCausalityOptions_&SetConstantAsyncCasualityName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2____::_1_::dtor$0 @ 0x1801624CD (_Windows--Internal--MakeAsyncHelper_Windows--Foundation--IAsyncAction_Windows--Foun_ea_1801624CD.c)
 *     _Windows::Internal::MakeAsyncHelper_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::INilDelegate_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Microsoft::WRL::AsyncCausalityOptions_&SetConstantToDefaultAsyncCasualityName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2____::_1_::dtor$0 @ 0x1801625D5 (_Windows--Internal--MakeAsyncHelper_Windows--Foundation--IAsyncAction_Windows--Foun_ea_1801625D5.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<Windows::Foundation::IPropertyValue *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::IPropertyValue *>,Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::IPropertyValue>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>::~ComPtr<Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<Windows::Foundation::IPropertyValue *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::IPropertyValue *>,Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::IPropertyValue>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(result + 8) + 16LL))(result + 8);
  }
  return result;
}
