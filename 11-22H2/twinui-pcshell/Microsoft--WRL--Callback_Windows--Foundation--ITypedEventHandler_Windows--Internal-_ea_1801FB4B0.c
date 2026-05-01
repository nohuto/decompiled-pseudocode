/*
 * XREFs of Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::UI::WindowId___lambda_d8817a5bf489acbf44c898e094114795___ @ 0x1801FB4B0
 * Callers:
 *     ?InitializeCortanaExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x1800F1AF4 (-InitializeCortanaExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experi.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____ @ 0x1801D079C (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b773.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::ICortanaExperienceManager____Windows::UI::WindowId_::_)(Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::UI::WindowId)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::UI::WindowId___lambda_d8817a5bf489acbf44c898e094114795___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::UI::WindowId_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::UI::WindowId___lambda_d8817a5bf489acbf44c898e094114795___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::UI::WindowId_ @ 0x1801FE370 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1801FE370.c)
 */

__int64 *__fastcall Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::UI::WindowId___lambda_d8817a5bf489acbf44c898e094114795___(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rbx
  void *v5; // rax
  __int64 v6; // rax
  __int64 *result; // rax
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v5;
  if ( v5 )
  {
    v6 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::ICortanaExperienceManager____Windows::UI::WindowId_::___Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::UI::WindowId__::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::UI::WindowId___lambda_d8817a5bf489acbf44c898e094114795___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::UI::WindowId_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::UI::WindowId___lambda_d8817a5bf489acbf44c898e094114795___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::UI::WindowId_(
           v5,
           a2);
    v8 = 0LL;
    v4 = v6;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____(&v8);
  result = a1;
  *a1 = v4;
  return result;
}
