/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x140050440
 * Callers:
 *     _lambda_10c7ce318882e0e942d95a651b89d589_::operator() @ 0x1400504E0 (_lambda_10c7ce318882e0e942d95a651b89d589_--operator().c)
 *     __lambda_10c7ce318882e0e942d95a651b89d589_::operator()_::_1_::dtor$0 @ 0x1400509CD (__lambda_10c7ce318882e0e942d95a651b89d589_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

HLOCAL __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>(
        void **a1)
{
  void *v1; // rcx
  HLOCAL result; // rax

  v1 = *a1;
  if ( v1 )
    return LocalFree(v1);
  return result;
}
