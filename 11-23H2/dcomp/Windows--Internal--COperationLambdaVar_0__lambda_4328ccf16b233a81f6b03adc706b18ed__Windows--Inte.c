/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_4328ccf16b233a81f6b03adc706b18ed__Windows::Internal::CMarshaledInterfaceResult_Windows::UI::Composition::Internal::IHolographicCompositionDisplay___::_COperationLambdaVar_0__lambda_4328ccf16b233a81f6b03adc706b18ed__Windows::Internal::CMarshaledInterfaceResult_Windows::UI::Composition::Internal::IHolographicCompositionDisplay___ @ 0x180115614
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_4328ccf16b233a81f6b03adc706b18ed__Windows::Internal::CMarshaledInterfaceResult_Windows::UI::Composition::Internal::IHolographicCompositionDisplay___::_scalar_deleting_destructor_ @ 0x180115A00 (Windows--Internal--COperationLambdaVar_0__lambda_4328ccf16b233a81f6b03adc706b18ed___ea_180115A00.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180085594 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?InternalRelease@?$ComPtr@VInteropDwmCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18008D740 (-InternalRelease@-$ComPtr@VInteropDwmCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void **__fastcall Windows::Internal::COperationLambdaVar_0__lambda_4328ccf16b233a81f6b03adc706b18ed__Windows::Internal::CMarshaledInterfaceResult_Windows::UI::Composition::Internal::IHolographicCompositionDisplay___::_COperationLambdaVar_0__lambda_4328ccf16b233a81f6b03adc706b18ed__Windows::Internal::CMarshaledInterfaceResult_Windows::UI::Composition::Internal::IHolographicCompositionDisplay___(
        __int64 a1)
{
  void **result; // rax

  `vector destructor iterator'(
    (char *)(a1 + 24),
    8LL,
    1LL,
    (void (__fastcall *)(char *))Microsoft::WRL::AgileRef::~AgileRef);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::InteropDwmCompositor>::InternalRelease((Microsoft::WRL2::NestableRuntimeClass **)(a1 + 8));
  result = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::UI::Composition::Internal::IHolographicCompositionDisplay>>::`vftable';
  *(_QWORD *)a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::UI::Composition::Internal::IHolographicCompositionDisplay>>::`vftable';
  return result;
}
