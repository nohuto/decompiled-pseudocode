/*
 * XREFs of ?UpdateTriggerStateIfNeeded@Internal@TargetedContent@Services@Windows@@YAJPEAUHSTRING__@@AEAVsrwlock@wil@@V?$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@W4TargetedContentTriggerState@2345@1@Z@std@@@Z @ 0x18009F610
 * Callers:
 *     _lambda_4f27881777b3828299edd9a0e9cb6746_::operator() @ 0x1800900AC (_lambda_4f27881777b3828299edd9a0e9cb6746_--operator().c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004724 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180004938 (-_Xbad_alloc@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??1?$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z@std@@QEAA@XZ @ 0x180053324 (--1-$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Window.c)
 *     ?EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@V?$function@$$A6A_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@AEAVPropertySetHelper@Triggers@CreativeFramework@@@Z@6@@Z @ 0x18009C698 (-EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VI.c)
 *     ?GetTriggerRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@XZ @ 0x18009D2C8 (-GetTriggerRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$share.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Services::TargetedContent::Internal::UpdateTriggerStateIfNeeded(
        HSTRING a1,
        __int64 a2,
        __int64 a3)
{
  char *v4; // rax
  __int64 *TriggerRegistrationSettingsContainer; // rax
  const char *v6; // r9
  PCWSTR StringRawBuffer; // [rsp+20h] [rbp-78h] BYREF
  __int128 v9; // [rsp+28h] [rbp-70h]
  __int64 v10; // [rsp+38h] [rbp-60h]
  _BYTE *v11; // [rsp+40h] [rbp-58h]
  _BYTE v12[16]; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v13[24]; // [rsp+60h] [rbp-38h] BYREF
  char *v14; // [rsp+78h] [rbp-20h]
  __int64 v15; // [rsp+80h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v15 = a3;
  StringRawBuffer = WindowsGetStringRawBuffer(a1, 0LL);
  v11 = v13;
  *(_QWORD *)&v9 = &StringRawBuffer;
  *((_QWORD *)&v9 + 1) = &stru_1801963C0;
  v10 = a3;
  v14 = 0LL;
  try
  {
    v4 = (char *)operator new(0x28uLL);
    if ( !v4 )
      std::_Xbad_alloc();
    *(_QWORD *)v4 = off_1800E94F0;
    *(_OWORD *)(v4 + 8) = v9;
    *((_QWORD *)v4 + 3) = v10;
    v14 = v4;
    TriggerRegistrationSettingsContainer = (__int64 *)Windows::Services::TargetedContent::Internal::GetTriggerRegistrationSettingsContainer((__int64)v12);
    Windows::Services::TargetedContent::Internal::EnumerateAllTriggersInContainer(
      TriggerRegistrationSettingsContainer,
      (__int64)v13);
  }
  catch ( ... )
  {
    LODWORD(StringRawBuffer) = wil::details::in1diag3::Return_CaughtException(
                                 retaddr,
                                 (void *)0x255,
                                 (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggerman"
                                      "agersettings.cpp",
                                 v6);
    std::function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>::~function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>(v15);
    return (unsigned int)StringRawBuffer;
  }
  std::function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>::~function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>(a3);
  return 0LL;
}
