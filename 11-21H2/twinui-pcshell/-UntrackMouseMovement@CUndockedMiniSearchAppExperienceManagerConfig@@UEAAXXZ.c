/*
 * XREFs of ?UntrackMouseMovement@CUndockedMiniSearchAppExperienceManagerConfig@@UEAAXXZ @ 0x1803A49F0
 * Callers:
 *     ??1CUndockedMiniSearchAppExperienceManagerConfig@@UEAA@XZ @ 0x1803A0F60 (--1CUndockedMiniSearchAppExperienceManagerConfig@@UEAA@XZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18009E470 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@$$T@Z @ 0x1801A7028 (--4-$function@$$A6AXXZ@std@@QEAAAEAV01@$$T@Z.c)
 */

void __fastcall CUndockedMiniSearchAppExperienceManagerConfig::UntrackMouseMovement(struct _TP_TIMER **this)
{
  __int64 v2; // rdx

  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    this + 11,
    0LL);
  std::function<void (void)>::operator=((__int64)(this + 3), v2);
  *((_BYTE *)this + 96) = 0;
}
