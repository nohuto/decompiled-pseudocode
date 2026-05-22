/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_4328ccf16b233a81f6b03adc706b18ed__Windows::Internal::CMarshaledInterfaceResult_Windows::UI::Composition::Internal::IHolographicCompositionDisplay___::COperationLambdaVar_0__lambda_4328ccf16b233a81f6b03adc706b18ed__Windows::Internal::CMarshaledInterfaceResult_Windows::UI::Composition::Internal::IHolographicCompositionDisplay_____lambda_4328ccf16b233a81f6b03adc706b18ed___ @ 0x180118A3C
 * Callers:
 *     Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::UI::Composition::Internal::IHolographicCompositionDisplay__Windows::UI::Composition::Internal::HolographicCompositionDisplay___Windows::Internal::ComTaskPoolHandler__lambda_4328ccf16b233a81f6b03adc706b18ed___ @ 0x180118E6C (Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult__ea_180118E6C.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800E3E84 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_4328ccf16b233a81f6b03adc706b18ed__Windows::Internal::CMarshaledInterfaceResult_Windows::UI::Composition::Internal::IHolographicCompositionDisplay___::COperationLambdaVar_0__lambda_4328ccf16b233a81f6b03adc706b18ed__Windows::Internal::CMarshaledInterfaceResult_Windows::UI::Composition::Internal::IHolographicCompositionDisplay_____lambda_4328ccf16b233a81f6b03adc706b18ed___(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // rcx

  *(_QWORD *)a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::UI::Composition::Internal::IHolographicCompositionDisplay>>::`vftable';
  v3 = (_QWORD *)(a1 + 8);
  *v3 = 0LL;
  if ( v3 != a2 )
  {
    *v3 = *a2;
    *a2 = 0LL;
  }
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = &off_1801CCFD8;
  `vector constructor iterator'(
    (char *)(a1 + 24),
    8LL,
    1LL,
    (void (__fastcall *)(char *))Microsoft::WRL::AgileRef::AgileRef);
  *(_DWORD *)(a1 + 16) = 0;
  return a1;
}
