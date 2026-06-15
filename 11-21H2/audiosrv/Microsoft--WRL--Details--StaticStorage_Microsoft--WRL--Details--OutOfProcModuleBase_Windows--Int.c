/*
 * XREFs of Microsoft::WRL::Details::StaticStorage_Microsoft::WRL::Details::OutOfProcModuleBase_Windows::Internal::SvcHostModule_::GenericReleaseNotifier__lambda_b07e40d598d2e6cc64bbba968f53c163____2_Windows::Internal::SvcHostModule_::_StaticStorage_Microsoft::WRL::Details::OutOfProcModuleBase_Windows::Internal::SvcHostModule_::GenericReleaseNotifier__lambda_b07e40d598d2e6cc64bbba968f53c163____2_Windows::Internal::SvcHostModule_ @ 0x18005E0B8
 * Callers:
 *     _dynamic_atexit_destructor_for__Microsoft::WRL::Details::StaticStorage_Microsoft::WRL::Details::OutOfProcModuleBase_Windows::Internal::SvcHostModule_::GenericReleaseNotifier__lambda_b07e40d598d2e6cc64bbba968f53c163____2_Windows::Internal::SvcHostModule_::instance___ @ 0x1800728B0 (_dynamic_atexit_destructor_for__Microsoft--WRL--Details--StaticStorage_Microsoft--WRL--Details--.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::StaticStorage_Microsoft::WRL::Details::OutOfProcModuleBase_Windows::Internal::SvcHostModule_::GenericReleaseNotifier__lambda_b07e40d598d2e6cc64bbba968f53c163____2_Windows::Internal::SvcHostModule_::_StaticStorage_Microsoft::WRL::Details::OutOfProcModuleBase_Windows::Internal::SvcHostModule_::GenericReleaseNotifier__lambda_b07e40d598d2e6cc64bbba968f53c163____2_Windows::Internal::SvcHostModule_(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    result = (**(__int64 (__fastcall ***)(__int64, _QWORD))a1)(a1, 0LL);
    *(_BYTE *)(a1 + 24) = 0;
  }
  return result;
}
