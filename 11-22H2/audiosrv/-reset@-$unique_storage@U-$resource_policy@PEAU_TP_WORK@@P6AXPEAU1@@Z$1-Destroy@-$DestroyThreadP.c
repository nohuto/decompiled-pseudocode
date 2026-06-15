/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WORK@@@Z @ 0x18005BCE0
 * Callers:
 *     ?RuntimeClassInitialize@EffectPackConfigurationManager@@QEAAJXZ @ 0x18005B5FC (-RuntimeClassInitialize@EffectPackConfigurationManager@@QEAAJXZ.c)
 *     ?Shutdown@EffectPackConfigurationManager@@QEAAXXZ @ 0x18010E438 (-Shutdown@EffectPackConfigurationManager@@QEAAXXZ.c)
 * Callees:
 *     ?close_reset@?$close_invoke_helper@$00P6AXPEAU_TP_WORK@@@Z$1?Destroy@?$DestroyThreadPoolWork@$0A@@details@wil@@SAX0@ZPEAU1@@details@wil@@SAXPEAU_TP_WORK@@@Z @ 0x18010E83C (-close_reset@-$close_invoke_helper@$00P6AXPEAU_TP_WORK@@@Z$1-Destroy@-$DestroyThreadPoolWork@$0A.c)
 */

__int64 __fastcall wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<0>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,_TP_WORK *,0,std::nullptr_t>>::reset(
        struct _TP_WORK **a1,
        struct _TP_WORK *a2)
{
  struct _TP_WORK *v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = wil::details::close_invoke_helper<1,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<0>::Destroy(_TP_WORK *),_TP_WORK *>::close_reset(v4);
  *a1 = a2;
  return result;
}
