/*
 * XREFs of ??_G?$COperationLambdaVar@$0A@V_lambda_a1ff6082cb2eb641f5b40d58c2b5fcec_@@VCNoResult@Internal@Windows@@$$V@Internal@Windows@@UEAAPEAXI@Z @ 0x18002EFB0
 * Callers:
 *     <none>
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180021FCC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

_QWORD *__fastcall Windows::Internal::COperationLambdaVar<0,_lambda_a1ff6082cb2eb641f5b40d58c2b5fcec_,Windows::Internal::CNoResult,>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  HSTRING v4; // rcx

  `eh vector destructor iterator'(
    a1 + 5,
    8uLL,
    1,
    (void (*)(void *))Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>);
  v4 = (HSTRING)a1[1];
  if ( v4 )
    WindowsDeleteString(v4);
  *a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
