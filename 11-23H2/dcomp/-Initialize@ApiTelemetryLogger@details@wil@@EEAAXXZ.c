/*
 * XREFs of ?Initialize@ApiTelemetryLogger@details@wil@@EEAAXXZ @ 0x1800894C0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180089508 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 */

void __fastcall wil::details::ApiTelemetryLogger::Initialize(wil::details::ApiTelemetryLogger *this)
{
  PTP_TIMER ThreadpoolTimer; // rax

  *((_DWORD *)this + 14) = 5000;
  ThreadpoolTimer = CreateThreadpoolTimer(_lambda_de534efdcf26ba0ba6da116d8cc25ee9_::_lambda_invoker_cdecl_, 0LL, 0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    (char *)this + 48,
    ThreadpoolTimer);
  wil::details::ApiTelemetryLogger::ScheduleFireEventCallback(this);
}
