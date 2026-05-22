/*
 * XREFs of Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::IPropertyValue__Windows::Foundation::IPropertyValue___Windows::Internal::ComTaskPoolHandler__lambda_7c875662d6abaa9f8d1386a75bd755d7___ @ 0x180162708
 * Callers:
 *     ?GetConstantAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAUIPropertyValue@Foundation@Windows@@@Foundation@6@@Z @ 0x180168CE0 (-GetConstantAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B738 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_7c875662d6abaa9f8d1386a75bd755d7__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::IPropertyValue___::COperationLambdaVar_0__lambda_7c875662d6abaa9f8d1386a75bd755d7__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::IPropertyValue_____lambda_7c875662d6abaa9f8d1386a75bd755d7___ @ 0x180160B20 (Windows--Internal--COperationLambdaVar_0__lambda_7c875662d6abaa9f8d1386a75bd755d7__Windows--Inte.c)
 *     ??$MakeAsyncHelper@U?$IAsyncOperation@PEAUIPropertyValue@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAUIPropertyValue@Foundation@Windows@@@23@UINilDelegate@Internal@3@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@63@VComTaskPoolHandler@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@YAJPEAPEAU?$IAsyncOperation@PEAUIPropertyValue@Foundation@Windows@@@Foundation@1@$$QEAVComTaskPoolHandler@01@QEBGW4TrustLevel@@PEAV?$AsyncCallbackBase@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@@01@@Z @ 0x1801621D4 (--$MakeAsyncHelper@U-$IAsyncOperation@PEAUIPropertyValue@Foundation@Windows@@@Foundation@Windows.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::IPropertyValue__Windows::Foundation::IPropertyValue___Windows::Internal::ComTaskPoolHandler__lambda_7c875662d6abaa9f8d1386a75bd755d7___(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  void *v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rax

  v7 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = 0LL;
  if ( v7 )
    v9 = Windows::Internal::COperationLambdaVar_0__lambda_7c875662d6abaa9f8d1386a75bd755d7__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::IPropertyValue___::COperationLambdaVar_0__lambda_7c875662d6abaa9f8d1386a75bd755d7__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::IPropertyValue_____lambda_7c875662d6abaa9f8d1386a75bd755d7___(
           (__int64)v7,
           a4);
  return Windows::Internal::MakeAsyncHelper<Windows::Foundation::IAsyncOperation<Windows::Foundation::IPropertyValue *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::IPropertyValue *>,Windows::Internal::INilDelegate,Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::IPropertyValue>,Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
           a2,
           a1,
           (__int64)L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.IPropertyValue>",
           v8,
           v9);
}
