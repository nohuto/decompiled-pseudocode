/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180067444
 * Callers:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800673F4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU.c)
 *     ?CreateSubscriptionHandle@SubscribedContentStore@CreativeFramework@@YAXPEBGPEAPEAX@Z @ 0x1800683C8 (-CreateSubscriptionHandle@SubscribedContentStore@CreativeFramework@@YAXPEBGPEAPEAX@Z.c)
 *     ??1SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAA@XZ @ 0x1800BAE94 (--1SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

HLOCAL __fastcall wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
        void **a1)
{
  void *v1; // rcx
  HLOCAL result; // rax

  v1 = *a1;
  if ( v1 )
    return LocalFree(v1);
  return result;
}
