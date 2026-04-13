/*
 * XREFs of ?RegisterBackgroundTaskWithAlarmTrigger@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0UDateTime@Foundation@Windows@@IIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800EC20C
 * Callers:
 *     ?RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800A5F50 (-RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerI.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18003F5AC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ?_Reset0@?$_Ptr_base@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAAXPEAVCorrelationVectorWrapper@Background@ContentDeliveryManager@@PEAV_Ref_count_base@2@@Z @ 0x1800696B0 (-_Reset0@-$_Ptr_base@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAAXPEA.c)
 *     ?RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgroundTrigger@Background@ApplicationModel@Windows@@W4TaskConditionFlags@12@W4TaskRegistrationOptions@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800EB7F8 (-RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgro.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
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
  HRESULT v11; // eax
  int ActivationFactory; // eax
  wil::details::in1diag3 *v13; // rcx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // rdx
  char v20; // si
  int v22; // [rsp+20h] [rbp-B1h]
  __int64 v23; // [rsp+48h] [rbp-89h] BYREF
  __int64 v24; // [rsp+50h] [rbp-81h] BYREF
  __int128 v25; // [rsp+58h] [rbp-79h] BYREF
  __int64 v26; // [rsp+68h] [rbp-69h]
  __int128 v27; // [rsp+70h] [rbp-61h]
  int v28; // [rsp+80h] [rbp-51h]
  __int128 v29; // [rsp+90h] [rbp-41h] BYREF
  int v30; // [rsp+A0h] [rbp-31h]
  __int64 *v31; // [rsp+B0h] [rbp-21h]
  HSTRING_HEADER hstringHeader; // [rsp+B8h] [rbp-19h] BYREF
  HSTRING string; // [rsp+D0h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+37h]

  v31 = a8;
  v24 = 0LL;
  string = 0LL;
  v11 = WindowsCreateStringReference(
          L"Windows.ApplicationModel.Background.AlarmTrigger",
          0x30u,
          &hstringHeader,
          &string);
  if ( v11 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v11);
LABEL_15:
    wil::details::in1diag3::Throw_Hr(
      v13,
      264LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)ActivationFactory,
      v22);
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_4725971e_c31d_4857_b33b_50779cf665c1, &v24);
  v13 = retaddr;
  if ( ActivationFactory < 0 )
    goto LABEL_15;
  LOBYTE(v22) = 0;
  v14 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v24 + 48LL))(v24, a3, 0LL, 2LL);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      273LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v14,
      v22);
  *(_QWORD *)&v27 = 0LL;
  *((_QWORD *)&v27 + 1) = 0x4805800000000LL;
  v28 = 1100;
  v29 = v27;
  v30 = 1100;
  v15 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(MEMORY[0] + 48LL))(0LL, &v29);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      278LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v15,
      v22);
  v26 = 0LL;
  v23 = 0LL;
  v16 = ((__int64 (__fastcall *)(_QWORD, GUID *, __int64 *))*MEMORY[0])(
          0LL,
          &GUID_84b3a058_6027_4b87_9790_bdf3f757dbd7,
          &v23);
  if ( v16 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      6136LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v16,
      v22);
  v17 = v23;
  v26 = v23;
  v25 = 0LL;
  v18 = a8[1];
  v19 = *a8;
  if ( v18 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
    v17 = v23;
  }
  std::_Ptr_base<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Reset0(&v25, v19, v18);
  v20 = CreativeFramework::CommonHelper::RegisterBackgroundTaskIfNeeded(a1, a2, v17, a6, 0, (__int64 *)&v25);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)a8);
  return v20;
}
