/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_67d44a18aa71790abd3976d622df6952__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_______::_COperationLambdaVar_0__lambda_67d44a18aa71790abd3976d622df6952__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_______ @ 0x1803C2328
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_67d44a18aa71790abd3976d622df6952__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_______::_scalar_deleting_destructor_ @ 0x1803C2F10 (Windows--Internal--COperationLambdaVar_0__lambda_67d44a18aa71790abd3976d622df6952___ea_1803C2F10.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1801895D0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void **__fastcall Windows::Internal::COperationLambdaVar_0__lambda_67d44a18aa71790abd3976d622df6952__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_______::_COperationLambdaVar_0__lambda_67d44a18aa71790abd3976d622df6952__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_______(
        __int64 a1)
{
  void **result; // rax

  `eh vector destructor iterator'(
    (char *)(a1 + 32),
    8LL,
    1LL,
    (void (*)(void *))Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a1 + 16));
  result = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>>>::`vftable';
  *(_QWORD *)a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>>>::`vftable';
  return result;
}
