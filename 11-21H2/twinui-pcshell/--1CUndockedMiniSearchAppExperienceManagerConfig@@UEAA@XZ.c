/*
 * XREFs of ??1CUndockedMiniSearchAppExperienceManagerConfig@@UEAA@XZ @ 0x1803A0F60
 * Callers:
 *     ??_ECUndockedMiniSearchAppExperienceManagerConfig@@UEAAPEAXI@Z @ 0x1803A1260 (--_ECUndockedMiniSearchAppExperienceManagerConfig@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x1801819FC (--1-$_Func_class@X$$V@std@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1802D6820 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$D.c)
 *     ?UntrackMouseMovement@CUndockedMiniSearchAppExperienceManagerConfig@@UEAAXXZ @ 0x1803A49F0 (-UntrackMouseMovement@CUndockedMiniSearchAppExperienceManagerConfig@@UEAAXXZ.c)
 */

void __fastcall CUndockedMiniSearchAppExperienceManagerConfig::~CUndockedMiniSearchAppExperienceManagerConfig(
        struct _TP_TIMER **this)
{
  __int64 v2; // rdx

  *this = (struct _TP_TIMER *)&CUndockedMiniSearchAppExperienceManagerConfig::`vftable';
  CUndockedMiniSearchAppExperienceManagerConfig::UntrackMouseMovement((CUndockedMiniSearchAppExperienceManagerConfig *)this);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>>(this + 11);
  std::_Func_class<void,>::~_Func_class<void,>((__int64)(this + 3), v2);
  *this = (struct _TP_TIMER *)&IUndockedMiniSearchAppExperienceManagerConfig::`vftable';
}
