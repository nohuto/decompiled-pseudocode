/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_6084a6cce004fd5fee81c22a52dae34d__Windows::Internal::CMarshaledInterfaceResult_Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults___::COperationLambdaVar_0__lambda_6084a6cce004fd5fee81c22a52dae34d__Windows::Internal::CMarshaledInterfaceResult_Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults_____lambda_6084a6cce004fd5fee81c22a52dae34d___ @ 0x1804988A0
 * Callers:
 *     Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults__Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults___Windows::Internal::ComTaskPoolHandler__lambda_6084a6cce004fd5fee81c22a52dae34d___ @ 0x18049A1F8 (Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult_Windows--Inte.c)
 * Callees:
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1801C92B4 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_6084a6cce004fd5fee81c22a52dae34d__Windows::Internal::CMarshaledInterfaceResult_Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults___::COperationLambdaVar_0__lambda_6084a6cce004fd5fee81c22a52dae34d__Windows::Internal::CMarshaledInterfaceResult_Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults_____lambda_6084a6cce004fd5fee81c22a52dae34d___(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>>>::`vftable';
  *(_OWORD *)(a1 + 8) = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)a1 = &off_1807D8220;
  *(_DWORD *)(a1 + 32) = 0;
  `eh vector constructor iterator'(
    (char *)(a1 + 40),
    8LL,
    1LL,
    (void (*)(void *))wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>);
  *(_DWORD *)(a1 + 32) = 0;
  return a1;
}
