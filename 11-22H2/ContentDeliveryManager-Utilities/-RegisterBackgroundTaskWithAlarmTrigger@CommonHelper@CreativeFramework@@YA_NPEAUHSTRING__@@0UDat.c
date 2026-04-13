/*
 * XREFs of ?RegisterBackgroundTaskWithAlarmTrigger@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0UDateTime@Foundation@Windows@@IIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800D3374
 * Callers:
 *     ?RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800987B0 (-RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerI.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180030D64 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043350 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@AEBV01@@Z @ 0x180051B10 (--0-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@AEBV01@@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180060494 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$com_ptr_t@U?$IIterable@PEAU?$IKeyValuePair@U_GUID@@PEAUIBackgroundTaskRegistration@Background@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800ACB4C (--4-$com_ptr_t@U-$IIterable@PEAU-$IKeyValuePair@U_GUID@@PEAUIBackgroundTaskRegistration@Backgrou.c)
 *     ??$query@UIBackgroundTrigger@Background@ApplicationModel@Windows@@@?$com_ptr_t@UIAlarmTrigger@Background@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIBackgroundTrigger@Background@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800D27F8 (--$query@UIBackgroundTrigger@Background@ApplicationModel@Windows@@@-$com_ptr_t@UIAlarmTrigger@Ba.c)
 *     ?RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgroundTrigger@Background@ApplicationModel@Windows@@W4TaskConditionFlags@12@W4TaskRegistrationOptions@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800D2D28 (-RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgro.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
char __fastcall CreativeFramework::CommonHelper::RegisterBackgroundTaskWithAlarmTrigger(
        HSTRING a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7,
        __int64 *a8)
{
  int ActivationFactory; // eax
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rax
  int v15; // eax
  __int64 *v16; // rax
  __int64 *v17; // rax
  char v18; // bl
  std::_Ref_count_base *v19; // rcx
  int v21; // [rsp+20h] [rbp-61h]
  __int64 *v22; // [rsp+40h] [rbp-41h] BYREF
  __int64 v23; // [rsp+48h] [rbp-39h] BYREF
  __int64 v24[2]; // [rsp+50h] [rbp-31h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-21h] BYREF
  __int64 v26; // [rsp+78h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+37h]

  v24[1] = (__int64)a8;
  v24[0] = 0LL;
  v26 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.ApplicationModel.Background.AlarmTrigger",
    0x31u,
    0x30u);
  ActivationFactory = RoGetActivationFactory(v26, &GUID_4725971e_c31d_4857_b33b_50779cf665c1, v24);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x108,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)ActivationFactory,
      v21);
  v22 = 0LL;
  v12 = *(_QWORD *)v24[0];
  v22 = 0LL;
  LOBYTE(v21) = 0;
  v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(v12 + 48))(v24[0], a3, 0LL, 2LL);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x111,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v13,
      v21);
  hstringHeader.Reserved.Reserved1 = 0LL;
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = 0x4805800000000LL;
  v14 = *v22;
  *(_DWORD *)&hstringHeader.Reserved.Reserved2[16] = 1100;
  v15 = (*(__int64 (__fastcall **)(__int64 *, HSTRING_HEADER *))(v14 + 48))(v22, &hstringHeader);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x116,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v15,
      v21);
  v23 = 0LL;
  v16 = wil::com_ptr_t<Windows::ApplicationModel::Background::IAlarmTrigger,wil::err_exception_policy>::query<Windows::ApplicationModel::Background::IBackgroundTrigger>(
          (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))&v22,
          &hstringHeader);
  wil::com_ptr_t<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<_GUID,Windows::ApplicationModel::Background::IBackgroundTaskRegistration *> *>,wil::err_exception_policy>::operator=(
    &v23,
    v16);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&hstringHeader);
  v17 = std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>(
          &hstringHeader,
          a8);
  v18 = CreativeFramework::CommonHelper::RegisterBackgroundTaskIfNeeded(a1, a2, v23, a6, 0, v17);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v23);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v22);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(v24);
  v19 = (std::_Ref_count_base *)a8[1];
  if ( v19 )
    std::_Ref_count_base::_Decref(v19);
  return v18;
}
