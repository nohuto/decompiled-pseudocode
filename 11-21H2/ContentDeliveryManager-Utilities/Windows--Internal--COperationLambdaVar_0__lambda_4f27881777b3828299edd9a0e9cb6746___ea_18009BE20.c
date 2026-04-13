/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_4f27881777b3828299edd9a0e9cb6746__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_______::_scalar_deleting_destructor_ @ 0x18009BE20
 * Callers:
 *     <none>
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180021FCC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _lambda_4f27881777b3828299edd9a0e9cb6746_::__lambda_4f27881777b3828299edd9a0e9cb6746_ @ 0x18009AEEC (_lambda_4f27881777b3828299edd9a0e9cb6746_--__lambda_4f27881777b3828299edd9a0e9cb6746_.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Windows::Internal::COperationLambdaVar_0__lambda_4f27881777b3828299edd9a0e9cb6746__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_______::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  `eh vector destructor iterator'(
    a1 + 50,
    8uLL,
    1,
    (void (*)(void *))Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>);
  lambda_4f27881777b3828299edd9a0e9cb6746_::__lambda_4f27881777b3828299edd9a0e9cb6746_(a1 + 1);
  *a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
