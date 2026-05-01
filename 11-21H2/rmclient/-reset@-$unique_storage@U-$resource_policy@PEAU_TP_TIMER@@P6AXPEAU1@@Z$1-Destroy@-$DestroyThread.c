/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180012108
 * Callers:
 *     ??1EnabledStateManager@details@wil@@QEAA@XZ @ 0x18000CF5C (--1EnabledStateManager@details@wil@@QEAA@XZ.c)
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x18000D004 (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 *     ?QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z @ 0x18000F780 (-QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x18000F874 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x18000FE7C (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 * Callees:
 *     ??$invoke@P6AXPEAU_TP_TIMER@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_TP_TIMER@@@ZAEAPEAU1@@Z @ 0x18000CA70 (--$invoke@P6AXPEAU_TP_TIMER@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_TP_TIMER@@@ZAEAPEAU1@@Z.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x18000D15C (--1last_error_context@wil@@QEAA@XZ.c)
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
        __int64 *a1,
        __int64 a2)
{
  char v4; // [rsp+30h] [rbp+8h] BYREF
  DWORD LastError; // [rsp+34h] [rbp+Ch]
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  void (__fastcall *v7)(PTP_TIMER); // [rsp+40h] [rbp+18h] BYREF

  if ( *a1 )
  {
    v6 = *a1;
    v4 = 0;
    LastError = GetLastError();
    v7 = wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy;
    wistd::invoke<void (*)(_TP_TIMER *),_TP_TIMER * &>((__int64 (__fastcall **)(_QWORD))&v7, &v6);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v4);
  }
  *a1 = a2;
}
