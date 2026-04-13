/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_cdeb3b86346b203bd3e87afbcbd1e510__Windows::Internal::CNoResult_::_scalar_deleting_destructor_ @ 0x1800594C0
 * Callers:
 *     <none>
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180021FCC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _lambda_cdeb3b86346b203bd3e87afbcbd1e510_::__lambda_cdeb3b86346b203bd3e87afbcbd1e510_ @ 0x1800568C8 (_lambda_cdeb3b86346b203bd3e87afbcbd1e510_--__lambda_cdeb3b86346b203bd3e87afbcbd1e510_.c)
 */

_QWORD *__fastcall Windows::Internal::COperationLambdaVar_0__lambda_cdeb3b86346b203bd3e87afbcbd1e510__Windows::Internal::CNoResult_::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  `eh vector destructor iterator'(
    a1 + 15,
    8uLL,
    1,
    (void (*)(void *))Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>);
  lambda_cdeb3b86346b203bd3e87afbcbd1e510_::__lambda_cdeb3b86346b203bd3e87afbcbd1e510_(a1 + 1);
  *a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
