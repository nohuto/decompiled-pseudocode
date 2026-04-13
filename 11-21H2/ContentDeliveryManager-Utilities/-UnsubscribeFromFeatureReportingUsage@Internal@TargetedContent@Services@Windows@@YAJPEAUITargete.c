/*
 * XREFs of ?UnsubscribeFromFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800A6FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ?GetFeatureIdAndReportingIdForTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@AEAIAEAG@Z @ 0x1800A4FB8 (-GetFeatureIdAndReportingIdForTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargete.c)
 *     ?GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA?AU_WNF_STATE_NAME@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800A5A0C (-GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA-AU_WNF_STATE_NAME@@PEAUITar.c)
 *     ?MakeFeatureUsageListener@Internal@TargetedContent@Services@Windows@@YA?AV?$com_ptr_t@UIFeatureUsageListener@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1800A5D64 (-MakeFeatureUsageListener@Internal@TargetedContent@Services@Windows@@YA-AV-$com_ptr_t@UIFeatureU.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Services::TargetedContent::Internal::UnsubscribeFromFeatureReportingUsage(
        Windows::Services::TargetedContent::Internal *this,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4)
{
  int FeatureIdAndReportingIdForTrigger; // eax
  struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *v7; // rdx
  struct _WNF_STATE_NAME WnfStateForTrigger; // rbx
  int v9; // eax
  const char *v10; // r9
  int v12; // [rsp+20h] [rbp-38h]
  _QWORD v13[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v16; // [rsp+70h] [rbp+18h] BYREF
  unsigned int v17; // [rsp+78h] [rbp+20h] BYREF

  FeatureIdAndReportingIdForTrigger = Windows::Services::TargetedContent::Internal::GetFeatureIdAndReportingIdForTrigger(
                                        this,
                                        (struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *)&v17,
                                        &v16,
                                        a4);
  try
  {
    if ( FeatureIdAndReportingIdForTrigger < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        572LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)FeatureIdAndReportingIdForTrigger,
        v12);
    WnfStateForTrigger = Windows::Services::TargetedContent::Internal::GetWnfStateForTrigger(this, v7);
    v13[1] = WnfStateForTrigger;
    Windows::Services::TargetedContent::Internal::MakeFeatureUsageListener(v13);
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v13[0] + 32LL))(
           v13[0],
           v17,
           (unsigned __int16)v16,
           0LL);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        579LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v9,
        WnfStateForTrigger.Data[0]);
    if ( v13[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13[0] + 16LL))(v13[0]);
  }
  catch ( ... )
  {
    v16 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x247,
            (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
            v10);
    std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>(a2);
    return v16;
  }
  std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>(a2);
  return 0LL;
}
