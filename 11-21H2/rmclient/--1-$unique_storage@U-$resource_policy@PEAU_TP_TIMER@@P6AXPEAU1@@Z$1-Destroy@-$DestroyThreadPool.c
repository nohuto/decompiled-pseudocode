/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18000CE7C
 * Callers:
 *     ??1EnabledStateManager@details@wil@@QEAA@XZ @ 0x18000CF5C (--1EnabledStateManager@details@wil@@QEAA@XZ.c)
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x18000D004 (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 * Callees:
 *     ??$invoke@P6AXPEAU_TP_TIMER@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_TP_TIMER@@@ZAEAPEAU1@@Z @ 0x18000CA70 (--$invoke@P6AXPEAU_TP_TIMER@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_TP_TIMER@@@ZAEAPEAU1@@Z.c)
 */

__int64 __fastcall wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>(
        __int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 (__fastcall *v3)(PTP_TIMER); // [rsp+38h] [rbp+10h] BYREF

  result = *a1;
  if ( *a1 )
  {
    v2 = *a1;
    v3 = wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy;
    return wistd::invoke<void (*)(_TP_TIMER *),_TP_TIMER * &>((__int64 (__fastcall **)(_QWORD))&v3, &v2);
  }
  return result;
}
