/*
 * XREFs of _lambda_5ea9e0d66c10f711b3db559ea9842d24_::__lambda_5ea9e0d66c10f711b3db559ea9842d24_ @ 0x18049ECF0
 * Callers:
 *     __lambda_33b4202f4967ef1cd2a31cded00016d1_::operator()_::_1_::dtor$1 @ 0x18049EE1A (__lambda_33b4202f4967ef1cd2a31cded00016d1_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAgileReference@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800FA2EC (--1-$com_ptr_t@UIAgileReference@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

BOOL __fastcall lambda_5ea9e0d66c10f711b3db559ea9842d24_::__lambda_5ea9e0d66c10f711b3db559ea9842d24_(__int64 a1)
{
  wil::com_ptr_t<IAgileReference,wil::err_returncode_policy>::~com_ptr_t<IAgileReference,wil::err_returncode_policy>((__int64 *)(a1 + 8));
  return wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>((void **)a1);
}
