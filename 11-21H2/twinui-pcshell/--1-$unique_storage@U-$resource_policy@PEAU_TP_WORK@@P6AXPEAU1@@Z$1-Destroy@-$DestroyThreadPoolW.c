/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$01@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1803CCE4C
 * Callers:
 *     ??1?$EventInvocationContext@$00@details@wil@@UEAA@XZ @ 0x1803CCCD8 (--1-$EventInvocationContext@$00@details@wil@@UEAA@XZ.c)
 * Callees:
 *     ?Destroy@?$DestroyThreadPoolWork@$01@details@wil@@SAXPEAU_TP_WORK@@@Z @ 0x1803CE104 (-Destroy@-$DestroyThreadPoolWork@$01@details@wil@@SAXPEAU_TP_WORK@@@Z.c)
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<2>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,_TP_WORK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<2>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,_TP_WORK *,0,std::nullptr_t>>(
        struct _TP_WORK **a1)
{
  struct _TP_WORK *v1; // rcx

  v1 = *a1;
  if ( v1 )
    wil::details::DestroyThreadPoolWork<2>::Destroy(v1);
}
