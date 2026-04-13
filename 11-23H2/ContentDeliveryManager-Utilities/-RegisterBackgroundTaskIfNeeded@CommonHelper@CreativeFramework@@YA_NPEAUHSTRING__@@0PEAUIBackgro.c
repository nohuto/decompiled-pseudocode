/*
 * XREFs of ?RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgroundTrigger@Background@ApplicationModel@Windows@@W4TaskConditionFlags@12@W4TaskRegistrationOptions@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800D2CD8
 * Callers:
 *     _lambda_633962cfafa552d6328dcc010e2c57bd_::operator() @ 0x1800D2808 (_lambda_633962cfafa552d6328dcc010e2c57bd_--operator().c)
 *     ?RegisterBackgroundTaskWithAlarmTrigger@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0UDateTime@Foundation@Windows@@IIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800D3324 (-RegisterBackgroundTaskWithAlarmTrigger@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0UDat.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180030D64 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@AEBV01@@Z @ 0x180051AC0 (--0-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@AEBV01@@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180060444 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$com_ptr_t@U?$IIterable@PEAU?$IKeyValuePair@U_GUID@@PEAUIBackgroundTaskRegistration@Background@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800ACAFC (--4-$com_ptr_t@U-$IIterable@PEAU-$IKeyValuePair@U_GUID@@PEAUIBackgroundTaskRegistration@Backgrou.c)
 *     ??$ActivateInstance@UIBackgroundTaskBuilder@Background@ApplicationModel@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIBackgroundTaskBuilder@Background@ApplicationModel@1@@Z @ 0x1800D2004 (--$ActivateInstance@UIBackgroundTaskBuilder@Background@ApplicationModel@Windows@@@Foundation@Win.c)
 *     CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_9bf169d33d4e1f2aada1302272b1c7f2___ @ 0x1800D2354 (CreativeFramework--CommonHelper--EnumerateRegisteredTasks__lambda_9bf169d33d4e1f2aada1302272b1c7.c)
 *     ??$query@UIBackgroundCondition@Background@ApplicationModel@Windows@@@?$com_ptr_t@UISystemCondition@Background@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIBackgroundCondition@Background@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800D2748 (--$query@UIBackgroundCondition@Background@ApplicationModel@Windows@@@-$com_ptr_t@UISystemConditi.c)
 *     ?UnregisterTask@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800D365C (-UnregisterTask@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@V-$shared_ptr@VCorrelationVect.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=18
char __fastcall CreativeFramework::CommonHelper::RegisterBackgroundTaskIfNeeded(
        HSTRING a1,
        __int64 a2,
        __int64 a3,
        char a4,
        int a5,
        __int64 *a6)
{
  std::_Ref_count_base *v10; // rcx
  _QWORD *v12; // rax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int ActivationFactory; // eax
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // eax
  __int64 *v21; // rax
  int v22; // eax
  __int64 v23; // rbx
  __int64 (__fastcall *v24)(__int64, __int64, _QWORD); // rsi
  __int64 (__fastcall ***v25)(_QWORD, GUID *, _QWORD *); // rcx
  int v26; // eax
  __int64 *v27; // rax
  int v28; // eax
  int v29; // eax
  __int64 v30; // rax
  int v31; // eax
  __int64 *v32; // rax
  int v33; // eax
  __int64 v34; // rbx
  __int64 (__fastcall *v35)(__int64, __int64, _QWORD); // rdi
  __int64 (__fastcall ***v36)(_QWORD, GUID *, _QWORD *); // rcx
  int v37; // eax
  __int64 *v38; // rax
  int v39; // eax
  __int64 v40; // rax
  int v41; // eax
  std::_Ref_count_base *v42; // rcx
  int v43; // [rsp+20h] [rbp-69h]
  char v44; // [rsp+30h] [rbp-59h] BYREF
  __int64 (__fastcall ***v45)(_QWORD, GUID *, _QWORD *); // [rsp+38h] [rbp-51h] BYREF
  __int64 *v46; // [rsp+40h] [rbp-49h] BYREF
  __int64 v47; // [rsp+48h] [rbp-41h] BYREF
  PCWSTR StringRawBuffer; // [rsp+50h] [rbp-39h] BYREF
  __int64 (__fastcall ***v49)(_QWORD, GUID *, _QWORD *); // [rsp+58h] [rbp-31h] BYREF
  __int64 *v50; // [rsp+60h] [rbp-29h] BYREF
  __int64 v51[2]; // [rsp+68h] [rbp-21h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp-11h] BYREF
  __int64 v53; // [rsp+90h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+4Fh]

  v51[1] = (__int64)a6;
  StringRawBuffer = WindowsGetStringRawBuffer(a1, 0LL);
  v44 = 0;
  hstringHeader.Reserved.Reserved1 = &v44;
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = &StringRawBuffer;
  CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_9bf169d33d4e1f2aada1302272b1c7f2___((__int64)&hstringHeader);
  if ( v44 )
  {
    if ( (unsigned int)(a5 - 1) > 1 )
    {
      v10 = (std::_Ref_count_base *)a6[1];
      if ( v10 )
        std::_Ref_count_base::_Decref(v10);
      return 0;
    }
    if ( a5 == 1 )
    {
      v12 = std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>(
              &hstringHeader,
              a6);
      CreativeFramework::CommonHelper::UnregisterTask(a1, v12);
    }
  }
  v46 = 0LL;
  v53 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.ApplicationModel.Background.BackgroundTaskBuilder",
    0x3Au,
    0x39u);
  v13 = Windows::Foundation::ActivateInstance<Windows::ApplicationModel::Background::IBackgroundTaskBuilder>(v53, &v46);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x82,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v13,
      v43);
  v14 = (*(__int64 (__fastcall **)(__int64 *, HSTRING))(*v46 + 80))(v46, a1);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x83,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v14,
      v43);
  v15 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v46 + 48))(v46, a2);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x84,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v15,
      v43);
  v16 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v46 + 64))(v46, a3);
  if ( v16 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x85,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v16,
      v43);
  v50 = 0LL;
  v53 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.ApplicationModel.Background.SystemCondition",
    0x34u,
    0x33u);
  ActivationFactory = RoGetActivationFactory(v53, &GUID_d269d1f1_05a7_49ae_87d7_16b2b8b9a553, &v50);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)ActivationFactory,
      v43);
  v45 = 0LL;
  v47 = 0LL;
  if ( (a4 & 9) != 0 )
  {
    v18 = *v50;
    v45 = 0LL;
    if ( (a4 & 4) != 0 || (v19 = 7LL, (a4 & 1) != 0) )
      v19 = 3LL;
    v20 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v18 + 48))(v50, v19, &v45);
    if ( v20 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x94,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v20,
        v43);
    v21 = wil::com_ptr_t<Windows::ApplicationModel::Background::ISystemCondition,wil::err_exception_policy>::query<Windows::ApplicationModel::Background::IBackgroundCondition>(
            &v45,
            &StringRawBuffer);
    wil::com_ptr_t<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<_GUID,Windows::ApplicationModel::Background::IBackgroundTaskRegistration *> *>,wil::err_exception_policy>::operator=(
      &v47,
      v21);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&StringRawBuffer);
    v22 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v46 + 72))(v46, v47);
    if ( v22 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x96,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v22,
        v43);
  }
  if ( (a4 & 2) != 0 )
  {
    v23 = (__int64)v50;
    v24 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*v50 + 48);
    v25 = v45;
    v45 = 0LL;
    if ( v25 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v25)[2])(v25);
    v26 = v24(v23, 5LL, &v45);
    if ( v26 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x9D,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v26,
        v43);
    v27 = wil::com_ptr_t<Windows::ApplicationModel::Background::ISystemCondition,wil::err_exception_policy>::query<Windows::ApplicationModel::Background::IBackgroundCondition>(
            &v45,
            &StringRawBuffer);
    wil::com_ptr_t<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<_GUID,Windows::ApplicationModel::Background::IBackgroundTaskRegistration *> *>,wil::err_exception_policy>::operator=(
      &v47,
      v27);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&StringRawBuffer);
    v28 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v46 + 72))(v46, v47);
    if ( v28 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x9F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v28,
        v43);
  }
  if ( (a4 & 0x10) != 0 )
  {
    StringRawBuffer = 0LL;
    v53 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.ApplicationModel.Background.CSystemCondition",
      0x35u,
      0x34u);
    v29 = RoGetActivationFactory(v53, &GUID_6f989a99_770e_4539_840b_ec97284926d5, &StringRawBuffer);
    if ( v29 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA7,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v29,
        v43);
    v49 = 0LL;
    v30 = *(_QWORD *)StringRawBuffer;
    v49 = 0LL;
    v31 = (*(__int64 (__fastcall **)(PCWSTR, __int64, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *)))(v30 + 48))(
            StringRawBuffer,
            7LL,
            0LL,
            &v49);
    if ( v31 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xAD,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v31,
        v43);
    v32 = wil::com_ptr_t<Windows::ApplicationModel::Background::ISystemCondition,wil::err_exception_policy>::query<Windows::ApplicationModel::Background::IBackgroundCondition>(
            &v49,
            &hstringHeader);
    wil::com_ptr_t<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<_GUID,Windows::ApplicationModel::Background::IBackgroundTaskRegistration *> *>,wil::err_exception_policy>::operator=(
      &v47,
      v32);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&hstringHeader);
    v33 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v46 + 72))(v46, v47);
    if ( v33 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xAF,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v33,
        v43);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v49);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&StringRawBuffer);
  }
  if ( (a4 & 0x20) == 0 )
  {
    v34 = (__int64)v50;
    v35 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*v50 + 48);
    v36 = v45;
    v45 = 0LL;
    if ( v36 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v36)[2])(v36);
    v37 = v35(v34, 8LL, &v45);
    if ( v37 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xB7,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v37,
        v43);
    v38 = wil::com_ptr_t<Windows::ApplicationModel::Background::ISystemCondition,wil::err_exception_policy>::query<Windows::ApplicationModel::Background::IBackgroundCondition>(
            &v45,
            &hstringHeader);
    wil::com_ptr_t<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<_GUID,Windows::ApplicationModel::Background::IBackgroundTaskRegistration *> *>,wil::err_exception_policy>::operator=(
      &v47,
      v38);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&hstringHeader);
    v39 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v46 + 72))(v46, v47);
    if ( v39 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xB9,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v39,
        v43);
  }
  v51[0] = 0LL;
  v40 = *v46;
  v51[0] = 0LL;
  v41 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v40 + 96))(v46, v51);
  if ( v41 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xBE,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v41,
      v43);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(v51);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v47);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v45);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v50);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v46);
  v42 = (std::_Ref_count_base *)a6[1];
  if ( v42 )
    std::_Ref_count_base::_Decref(v42);
  return 1;
}
