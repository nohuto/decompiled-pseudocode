/*
 * XREFs of ??_E?$COperationLambdaVar@$0A@V_lambda_bd2c9ce24b7a5ce2e1d9cd7856918807_@@VCHSTRINGResult@Internal@Windows@@$$V@Internal@Windows@@UEAAPEAXI@Z @ 0x18002F030
 * Callers:
 *     <none>
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180021FCC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

HSTRING *__fastcall Windows::Internal::COperationLambdaVar<0,_lambda_bd2c9ce24b7a5ce2e1d9cd7856918807_,Windows::Internal::CHSTRINGResult,>::`vector deleting destructor'(
        HSTRING *a1,
        char a2)
{
  `eh vector destructor iterator'(
    a1 + 5,
    8uLL,
    1,
    (void (*)(void *))Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>);
  WindowsDeleteString(a1[2]);
  a1[2] = 0LL;
  *a1 = (HSTRING)&Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
