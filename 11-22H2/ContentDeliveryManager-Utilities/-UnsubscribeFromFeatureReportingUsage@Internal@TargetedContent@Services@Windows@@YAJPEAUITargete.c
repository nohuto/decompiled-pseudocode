/*
 * XREFs of ?UnsubscribeFromFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180099480
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043350 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180060494 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetFeatureIdAndReportingIdForTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@AEAIAEAG@Z @ 0x180097A98 (-GetFeatureIdAndReportingIdForTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargete.c)
 *     ?GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA?AU_WNF_STATE_NAME@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800983BC (-GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA-AU_WNF_STATE_NAME@@PEAUITar.c)
 *     ?MakeFeatureUsageListener@Internal@TargetedContent@Services@Windows@@YA?AV?$com_ptr_t@UIFeatureUsageListener@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180098620 (-MakeFeatureUsageListener@Internal@TargetedContent@Services@Windows@@YA-AV-$com_ptr_t@UIFeatureU.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
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
  std::_Ref_count_base *v11; // rcx
  std::_Ref_count_base *v13; // rcx
  int v14; // [rsp+20h] [rbp-38h]
  __int64 v15[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v18; // [rsp+70h] [rbp+18h] BYREF
  unsigned int v19; // [rsp+78h] [rbp+20h] BYREF

  FeatureIdAndReportingIdForTrigger = Windows::Services::TargetedContent::Internal::GetFeatureIdAndReportingIdForTrigger(
                                        this,
                                        (struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *)&v19,
                                        &v18,
                                        a4);
  try
  {
    if ( FeatureIdAndReportingIdForTrigger < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x23C,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)FeatureIdAndReportingIdForTrigger,
        v14);
    WnfStateForTrigger = Windows::Services::TargetedContent::Internal::GetWnfStateForTrigger(this, v7);
    v15[1] = (__int64)WnfStateForTrigger;
    Windows::Services::TargetedContent::Internal::MakeFeatureUsageListener(v15);
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v15[0] + 32LL))(
           v15[0],
           v19,
           (unsigned __int16)v18,
           0LL);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x243,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v9,
        WnfStateForTrigger.Data[0]);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(v15);
  }
  catch ( ... )
  {
    v18 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x247,
            (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
            v10);
    v13 = *(std::_Ref_count_base **)(a2 + 8);
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
    return v18;
  }
  v11 = *(std::_Ref_count_base **)(a2 + 8);
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  return 0LL;
}
