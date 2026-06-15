/*
 * XREFs of Microsoft::WRL::Details::OutOfProcModuleBase_Windows::Internal::SvcHostModule_::GenericReleaseNotifier__lambda_b07e40d598d2e6cc64bbba968f53c163___::_scalar_deleting_destructor_ @ 0x1800C2C90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::OutOfProcModuleBase_Windows::Internal::SvcHostModule_::GenericReleaseNotifier__lambda_b07e40d598d2e6cc64bbba968f53c163___::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  *a1 = &Microsoft::WRL::Details::OutOfProcModuleBase<Windows::Internal::SvcHostModule>::ReleaseNotifier::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
