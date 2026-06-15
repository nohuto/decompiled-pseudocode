/*
 * XREFs of ??0CBridgeStreamInstanceProxy@@QEAA@XZ @ 0x1800D8488
 * Callers:
 *     ??$MakeAndInitialize@VCBridgeStreamInstanceProxy@@UIBridgeStreamInstanceProxy@@AEA_J@Details@WRL@Microsoft@@YAJPEAPEAUIBridgeStreamInstanceProxy@@AEA_J@Z @ 0x1800D78F8 (--$MakeAndInitialize@VCBridgeStreamInstanceProxy@@UIBridgeStreamInstanceProxy@@AEA_J@Details@WRL.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

CBridgeStreamInstanceProxy *__fastcall CBridgeStreamInstanceProxy::CBridgeStreamInstanceProxy(
        CBridgeStreamInstanceProxy *this)
{
  *(_QWORD *)this = &CStreamInstanceProxyImpl::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 13) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CStreamInstanceProxyImpl,IBridgeStreamInstanceProxy>::`vftable'{for `Microsoft::WRL::Details::Selector<CStreamInstanceProxyImpl,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CStreamInstanceProxyImpl>,IBridgeStreamInstanceProxy>>'};
  *((_QWORD *)this + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CStreamInstanceProxyImpl,IBridgeStreamInstanceProxy>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IBridgeStreamInstanceProxy>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CStreamInstanceProxyImpl>,IBridgeStreamInstanceProxy>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CBridgeStreamInstanceProxy::`vftable'{for `Microsoft::WRL::Details::Selector<CStreamInstanceProxyImpl,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CStreamInstanceProxyImpl>,IBridgeStreamInstanceProxy>>'};
  *((_QWORD *)this + 5) = &CBridgeStreamInstanceProxy::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IBridgeStreamInstanceProxy>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CStreamInstanceProxyImpl>,IBridgeStreamInstanceProxy>>'};
  return this;
}
