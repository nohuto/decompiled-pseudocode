/*
 * XREFs of ?RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgroundTrigger@Background@ApplicationModel@Windows@@W4TaskConditionFlags@12@W4TaskRegistrationOptions@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800EB7F8
 * Callers:
 *     _lambda_633962cfafa552d6328dcc010e2c57bd_::operator() @ 0x1800EB520 (_lambda_633962cfafa552d6328dcc010e2c57bd_--operator().c)
 *     ?RegisterBackgroundTaskWithAlarmTrigger@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0UDateTime@Foundation@Windows@@IIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800EC20C (-RegisterBackgroundTaskWithAlarmTrigger@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0UDat.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18003F5AC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ?_Reset0@?$_Ptr_base@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAAXPEAVCorrelationVectorWrapper@Background@ContentDeliveryManager@@PEAV_Ref_count_base@2@@Z @ 0x1800696B0 (-_Reset0@-$_Ptr_base@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAAXPEA.c)
 *     CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_7779f375762769ec339d0b17f2cf373b___ @ 0x1800EA934 (CreativeFramework--CommonHelper--EnumerateRegisteredTasks__lambda_7779f375762769ec339d0b17f2cf37.c)
 *     CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_9bf169d33d4e1f2aada1302272b1c7f2___ @ 0x1800EAE78 (CreativeFramework--CommonHelper--EnumerateRegisteredTasks__lambda_9bf169d33d4e1f2aada1302272b1c7.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=20
char __fastcall CreativeFramework::CommonHelper::RegisterBackgroundTaskIfNeeded(
        HSTRING a1,
        __int64 a2,
        __int64 a3,
        char a4,
        int a5,
        __int64 *a6)
{
  int v6; // ebx
  __int64 v12; // r8
  __int64 v13; // rdx
  HRESULT v14; // eax
  __int64 *v15; // rcx
  wil::details::in1diag3 *v16; // rax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  HRESULT v20; // eax
  int ActivationFactory; // eax
  wil::details::in1diag3 *v22; // rcx
  void *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  __int64 *v29; // rdi
  __int64 (__fastcall *v30)(__int64 *, __int64, __int64 *); // r14
  __int64 v31; // rcx
  int v32; // eax
  int v33; // eax
  __int128 *v34; // rdi
  __int128 *v35; // rcx
  void *v36; // rdx
  int v37; // eax
  HRESULT v38; // eax
  int v39; // eax
  wil::details::in1diag3 *v40; // rcx
  __int64 v41; // rax
  int v42; // eax
  int v43; // eax
  __int128 *v44; // rdi
  __int128 *v45; // rcx
  void *v46; // rdx
  int v47; // eax
  __int64 *v48; // rdi
  __int64 (__fastcall *v49)(__int64 *, __int64, __int64 *); // rsi
  __int64 v50; // rcx
  int v51; // eax
  int v52; // eax
  bool *v53; // rdi
  bool *v54; // rcx
  void *v55; // rdx
  int v56; // eax
  __int64 v57; // rax
  int v58; // eax
  int v59; // [rsp+20h] [rbp-E0h]
  char v60; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v61; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v62; // [rsp+40h] [rbp-C0h] BYREF
  __int128 *v63; // [rsp+48h] [rbp-B8h] BYREF
  PCWSTR StringRawBuffer; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v65; // [rsp+58h] [rbp-A8h] BYREF
  bool *v66[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v67; // [rsp+70h] [rbp-90h] BYREF
  __int64 v68; // [rsp+78h] [rbp-88h] BYREF
  __int128 v69; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v70[3]; // [rsp+90h] [rbp-70h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A8h] [rbp-58h] BYREF
  HSTRING string; // [rsp+C0h] [rbp-40h] BYREF
  HSTRING_HEADER v73; // [rsp+C8h] [rbp-38h] BYREF
  HSTRING v74; // [rsp+E0h] [rbp-20h] BYREF
  HSTRING_HEADER v75; // [rsp+E8h] [rbp-18h] BYREF
  HSTRING v76; // [rsp+100h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v70[2] = a6;
  StringRawBuffer = WindowsGetStringRawBuffer(a1, 0LL);
  v60 = 0;
  v66[0] = (bool *)&v60;
  v66[1] = (bool *)&StringRawBuffer;
  CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_9bf169d33d4e1f2aada1302272b1c7f2___(v66);
  if ( v60 )
  {
    if ( a5 == 1 )
    {
      v69 = 0LL;
      v12 = a6[1];
      v13 = *a6;
      if ( v12 )
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
      std::_Ptr_base<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Reset0(&v69, v13, v12);
      v63 = &v69;
      StringRawBuffer = (PCWSTR)a1;
      v70[0] = &StringRawBuffer;
      v70[1] = &v69;
      CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_7779f375762769ec339d0b17f2cf373b___((__int64)v70);
      std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)&v69);
    }
    else if ( a5 != 2 )
    {
      std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)a6);
      return 0;
    }
  }
  v61 = 0LL;
  string = 0LL;
  v14 = WindowsCreateStringReference(
          L"Windows.ApplicationModel.Background.BackgroundTaskBuilder",
          0x39u,
          &hstringHeader,
          &string);
  if ( v14 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v14);
LABEL_76:
    wil::details::in1diag3::Throw_Hr(
      v16,
      130LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v6,
      v59);
  }
  v61 = 0LL;
  v6 = RoActivateInstance(string, &v65);
  if ( v6 >= 0 )
  {
    if ( *(_QWORD *)&GUID_0351550e_3e64_4572_a93a_84075a37c917.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
      && *(_QWORD *)GUID_0351550e_3e64_4572_a93a_84075a37c917.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      v15 = v65;
      v61 = v65;
      goto LABEL_15;
    }
    v6 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 **))*v65)(
           v65,
           &GUID_0351550e_3e64_4572_a93a_84075a37c917,
           &v61);
    (*(void (__fastcall **)(__int64 *))(*v65 + 16))(v65);
  }
  v15 = v61;
LABEL_15:
  v16 = retaddr;
  if ( v6 < 0 )
    goto LABEL_76;
  v17 = (*(__int64 (__fastcall **)(__int64 *, HSTRING))(*v15 + 80))(v15, a1);
  if ( v17 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      131LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v17,
      v59);
  v18 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v61 + 48))(v61, a2);
  if ( v18 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      132LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v18,
      v59);
  v19 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v61 + 64))(v61, a3);
  if ( v19 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      133LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v19,
      v59);
  v67 = 0LL;
  v74 = 0LL;
  v20 = WindowsCreateStringReference(L"Windows.ApplicationModel.Background.SystemCondition", 0x33u, &v73, &v74);
  if ( v20 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v20);
LABEL_81:
    wil::details::in1diag3::Throw_Hr(
      v22,
      138LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)ActivationFactory,
      v59);
  }
  ActivationFactory = RoGetActivationFactory(v74, &GUID_d269d1f1_05a7_49ae_87d7_16b2b8b9a553, &v67);
  v22 = retaddr;
  if ( ActivationFactory < 0 )
    goto LABEL_81;
  v62 = 0LL;
  v23 = 0LL;
  v65 = 0LL;
  if ( (a4 & 9) != 0 )
  {
    v24 = *v67;
    v62 = 0LL;
    if ( (a4 & 4) != 0 || (v25 = 7LL, (a4 & 1) != 0) )
      v25 = 3LL;
    v26 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v24 + 48))(v67, v25, &v62);
    if ( v26 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        148LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v26,
        v59);
    StringRawBuffer = 0LL;
    v27 = (**(__int64 (__fastcall ***)(__int64, GUID *, PCWSTR *))v62)(
            v62,
            &GUID_ae48a1ee_8951_400a_8302_9c9c9a2a3a3b,
            &StringRawBuffer);
    if ( v27 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        6136LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v27,
        v59);
    v23 = (void *)StringRawBuffer;
    v65 = (__int64 *)StringRawBuffer;
    v28 = (*(__int64 (__fastcall **)(__int64 *, PCWSTR))(*v61 + 72))(v61, StringRawBuffer);
    if ( v28 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        150LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v28,
        v59);
  }
  if ( (a4 & 2) != 0 )
  {
    v29 = v67;
    v30 = *(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(*v67 + 48);
    v31 = v62;
    v62 = 0LL;
    if ( v31 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    v32 = v30(v29, 5LL, &v62);
    if ( v32 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        157LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v32,
        v59);
    v63 = 0LL;
    v33 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int128 **))v62)(
            v62,
            &GUID_ae48a1ee_8951_400a_8302_9c9c9a2a3a3b,
            &v63);
    if ( v33 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        6136LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v33,
        v59);
    v34 = v63;
    v35 = 0LL;
    v63 = 0LL;
    v36 = v23;
    v23 = v34;
    v65 = (__int64 *)v34;
    if ( v36 )
    {
      (*(void (__fastcall **)(void *))(*(_QWORD *)v36 + 16LL))(v36);
      v35 = v63;
    }
    if ( v35 )
      (*(void (__fastcall **)(__int128 *))(*(_QWORD *)v35 + 16LL))(v35);
    v37 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(*v61 + 72))(v61, v34);
    if ( v37 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        159LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v37,
        v59);
  }
  if ( (a4 & 0x10) == 0 )
    goto LABEL_52;
  StringRawBuffer = 0LL;
  v76 = 0LL;
  v38 = WindowsCreateStringReference(L"Windows.ApplicationModel.Background.CSystemCondition", 0x34u, &v75, &v76);
  if ( v38 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v38);
LABEL_89:
    wil::details::in1diag3::Throw_Hr(
      v40,
      167LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v39,
      v59);
  }
  v39 = RoGetActivationFactory(v76, &GUID_6f989a99_770e_4539_840b_ec97284926d5, &StringRawBuffer);
  v40 = retaddr;
  if ( v39 < 0 )
    goto LABEL_89;
  v66[0] = 0LL;
  v41 = *(_QWORD *)StringRawBuffer;
  v66[0] = 0LL;
  v42 = (*(__int64 (__fastcall **)(PCWSTR, __int64, _QWORD, bool **))(v41 + 48))(StringRawBuffer, 7LL, 0LL, v66);
  if ( v42 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      173LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v42,
      v59);
  v63 = 0LL;
  v43 = (**(__int64 (__fastcall ***)(bool *, GUID *, __int128 **))v66[0])(
          v66[0],
          &GUID_ae48a1ee_8951_400a_8302_9c9c9a2a3a3b,
          &v63);
  if ( v43 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      6136LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v43,
      v59);
  v44 = v63;
  v45 = 0LL;
  v63 = 0LL;
  v46 = v23;
  v23 = v44;
  v65 = (__int64 *)v44;
  if ( v46 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v46 + 16LL))(v46);
    v45 = v63;
  }
  if ( v45 )
    (*(void (__fastcall **)(__int128 *))(*(_QWORD *)v45 + 16LL))(v45);
  v47 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(*v61 + 72))(v61, v44);
  if ( v47 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      175LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v47,
      v59);
  if ( v66[0] )
    (*(void (__fastcall **)(bool *))(*(_QWORD *)v66[0] + 16LL))(v66[0]);
  if ( StringRawBuffer )
    (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)StringRawBuffer + 16LL))(StringRawBuffer);
LABEL_52:
  if ( (a4 & 0x20) == 0 )
  {
    v48 = v67;
    v49 = *(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(*v67 + 48);
    v50 = v62;
    v62 = 0LL;
    if ( v50 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
    v51 = v49(v48, 8LL, &v62);
    if ( v51 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        183LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v51,
        v59);
    v66[0] = 0LL;
    v52 = (**(__int64 (__fastcall ***)(__int64, GUID *, bool **))v62)(
            v62,
            &GUID_ae48a1ee_8951_400a_8302_9c9c9a2a3a3b,
            v66);
    if ( v52 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        6136LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v52,
        v59);
    v53 = v66[0];
    v54 = 0LL;
    v66[0] = 0LL;
    v55 = v23;
    v23 = v53;
    v65 = (__int64 *)v53;
    if ( v55 )
    {
      (*(void (__fastcall **)(void *))(*(_QWORD *)v55 + 16LL))(v55);
      v54 = v66[0];
    }
    if ( v54 )
      (*(void (__fastcall **)(bool *))(*(_QWORD *)v54 + 16LL))(v54);
    v56 = (*(__int64 (__fastcall **)(__int64 *, bool *))(*v61 + 72))(v61, v53);
    if ( v56 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        185LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v56,
        v59);
  }
  v68 = 0LL;
  v57 = *v61;
  v68 = 0LL;
  v58 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v57 + 96))(v61, &v68);
  if ( v58 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      190LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v58,
      v59);
  if ( v68 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v68 + 16LL))(v68);
  if ( v23 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v62 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
  if ( v67 )
    (*(void (__fastcall **)(__int64 *))(*v67 + 16))(v67);
  if ( v61 )
    (*(void (__fastcall **)(__int64 *))(*v61 + 16))(v61);
  std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)a6);
  return 1;
}
