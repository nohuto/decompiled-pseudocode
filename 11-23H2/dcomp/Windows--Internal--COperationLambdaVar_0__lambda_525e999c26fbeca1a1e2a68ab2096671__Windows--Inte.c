/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_525e999c26fbeca1a1e2a68ab2096671__Windows::Internal::CMarshaledInterfaceResult_Windows::UI::Composition::Internal::IHolographicCompositor___::COperationLambdaVar_0__lambda_525e999c26fbeca1a1e2a68ab2096671__Windows::Internal::CMarshaledInterfaceResult_Windows::UI::Composition::Internal::IHolographicCompositor_____lambda_525e999c26fbeca1a1e2a68ab2096671___ @ 0x18011464C
 * Callers:
 *     Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::UI::Composition::Internal::IHolographicCompositor__Windows::UI::Composition::Internal::HolographicCompositor___Windows::Internal::ComTaskPoolHandler__lambda_525e999c26fbeca1a1e2a68ab2096671___ @ 0x180114E10 (Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult_Windows--UI--.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800E3E84 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_525e999c26fbeca1a1e2a68ab2096671__Windows::Internal::CMarshaledInterfaceResult_Windows::UI::Composition::Internal::IHolographicCompositor___::COperationLambdaVar_0__lambda_525e999c26fbeca1a1e2a68ab2096671__Windows::Internal::CMarshaledInterfaceResult_Windows::UI::Composition::Internal::IHolographicCompositor_____lambda_525e999c26fbeca1a1e2a68ab2096671___(
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
  *(_QWORD *)a1 = &off_1801CC7D0;
  `vector constructor iterator'(
    (char *)(a1 + 24),
    8LL,
    1LL,
    (void (__fastcall *)(char *))Microsoft::WRL::AgileRef::AgileRef);
  *(_DWORD *)(a1 + 16) = 0;
  return a1;
}
