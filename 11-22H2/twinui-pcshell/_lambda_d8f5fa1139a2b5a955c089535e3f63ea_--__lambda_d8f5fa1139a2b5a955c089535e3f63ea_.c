/*
 * XREFs of _lambda_d8f5fa1139a2b5a955c089535e3f63ea_::__lambda_d8f5fa1139a2b5a955c089535e3f63ea_ @ 0x18055E630
 * Callers:
 *     __lambda_33b4202f4967ef1cd2a31cded00016d1_::operator()_::_1_::dtor$1 @ 0x18055E78E (__lambda_33b4202f4967ef1cd2a31cded00016d1_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ??1?$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800AC91C (--1-$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

int __fastcall lambda_d8f5fa1139a2b5a955c089535e3f63ea_::__lambda_d8f5fa1139a2b5a955c089535e3f63ea_(__int64 a1)
{
  int result; // eax

  result = wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>((__int64 *)(a1 + 8));
  if ( *(_QWORD *)a1 )
    return DeleteObject(*(HGDIOBJ *)a1);
  return result;
}
