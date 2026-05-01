/*
 * XREFs of ?StartUnboostPriorityTimer@MiniSearchExperienceManager@@AEAAXXZ @ 0x1803A3A04
 * Callers:
 *     ?BoostPriority@MiniSearchExperienceManager@@AEAAXXZ @ 0x1803A1538 (-BoostPriority@MiniSearchExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18009E470 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 */

void __fastcall MiniSearchExperienceManager::StartUnboostPriorityTimer(struct _TP_TIMER **pv)
{
  struct _TP_TIMER **v1; // rbx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  v1 = pv + 21;
  pftDueTime = (struct _FILETIME)-300000000LL;
  ThreadpoolTimer = CreateThreadpoolTimer(
                      (PTP_TIMER_CALLBACK)lambda_f80bbdc1e69d2ad3ef108398df7cb983_::_lambda_invoker_cdecl_,
                      pv,
                      0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    v1,
    ThreadpoolTimer);
  if ( *v1 )
    SetThreadpoolTimer(*v1, &pftDueTime, 0, 0);
}
