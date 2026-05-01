/*
 * XREFs of ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18069F040
 * Callers:
 *     _anonymous_namespace_::TryGetRequestorDisplayInformation @ 0x1806A7FD4 (_anonymous_namespace_--TryGetRequestorDisplayInformation.c)
 *     _anonymous_namespace_::TryGetTargetDisplayInformation @ 0x1806A85C8 (_anonymous_namespace_--TryGetTargetDisplayInformation.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHBITMAP__@@@Z @ 0x1802E004A (-reset@-$unique_storage@U-$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$in.c)
 */

void **__fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>::operator=(
        void **a1,
        void **a2)
{
  if ( a1 != a2 )
  {
    wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>::reset(
      a1,
      *a2);
    *a2 = 0LL;
  }
  return a1;
}
