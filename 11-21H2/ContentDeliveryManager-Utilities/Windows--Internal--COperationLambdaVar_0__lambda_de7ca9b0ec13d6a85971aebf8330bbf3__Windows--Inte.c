/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_de7ca9b0ec13d6a85971aebf8330bbf3__Windows::Internal::CBasicResult_unsigned_char_0___::_COperationLambdaVar_0__lambda_de7ca9b0ec13d6a85971aebf8330bbf3__Windows::Internal::CBasicResult_unsigned_char_0___ @ 0x1800B3E4C
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_de7ca9b0ec13d6a85971aebf8330bbf3__Windows::Internal::CBasicResult_unsigned_char_0___::_scalar_deleting_destructor_ @ 0x1800B4340 (Windows--Internal--COperationLambdaVar_0__lambda_de7ca9b0ec13d6a85971aebf8330bbf3___ea_1800B4340.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180021FCC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall Windows::Internal::COperationLambdaVar_0__lambda_de7ca9b0ec13d6a85971aebf8330bbf3__Windows::Internal::CBasicResult_unsigned_char_0___::_COperationLambdaVar_0__lambda_de7ca9b0ec13d6a85971aebf8330bbf3__Windows::Internal::CBasicResult_unsigned_char_0___(
        _QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  void **result; // rax

  `eh vector destructor iterator'(
    a1 + 4,
    8uLL,
    1,
    (void (*)(void *))Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>);
  v2 = a1[2];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = a1[1];
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  result = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  *a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  return result;
}
