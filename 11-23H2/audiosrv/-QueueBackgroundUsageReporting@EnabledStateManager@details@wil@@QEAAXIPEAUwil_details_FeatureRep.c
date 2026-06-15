/*
 * XREFs of ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x1800620B0
 * Callers:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x180061F74 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 * Callees:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x18005FAC4 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180062148 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ??$EnsureCoalescedTimer@VEnabledStateManager@details@wil@@@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@AEA_NPEAVEnabledStateManager@01@@Z @ 0x180064D94 (--$EnsureCoalescedTimer@VEnabledStateManager@details@wil@@@details@wil@@YAXAEAV-$unique_any_t@V-.c)
 */

void __fastcall wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
        RTL_SRWLOCK *this,
        int a2,
        struct wil_details_FeatureReportingCache *a3)
{
  int Source; // [rsp+20h] [rbp-18h] BYREF
  struct wil_details_FeatureReportingCache *v7; // [rsp+28h] [rbp-10h]

  if ( LOBYTE(this->Ptr) && !wil::ProcessShutdownInProgress((wil *)this) )
  {
    AcquireSRWLockExclusive(this + 1);
    Source = a2;
    v7 = a3;
    wil::details_abi::heap_buffer::push_back((wil::details_abi::heap_buffer *)&this[6], &Source);
    wil::details::EnsureCoalescedTimer<wil::details::EnabledStateManager>(&this[2], &this[3], this);
    if ( this != (RTL_SRWLOCK *)-8LL )
      ReleaseSRWLockExclusive(this + 1);
  }
}
