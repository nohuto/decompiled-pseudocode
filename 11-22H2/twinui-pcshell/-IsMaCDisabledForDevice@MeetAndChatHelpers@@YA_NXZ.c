/*
 * XREFs of ?IsMaCDisabledForDevice@MeetAndChatHelpers@@YA_NXZ @ 0x1806BE8A0
 * Callers:
 *     ?OnMessage@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAJI_K_J@Z @ 0x180071270 (-OnMessage@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RemoveChat@@@details@wil@@QEAA_NXZ @ 0x180098788 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RemoveChat@@@details@wil@@QEAA_NX.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MainKey_ChatCompliance@@@details@wil@@QEAA_NXZ @ 0x180098904 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_MainKey_ChatCompliance@@@details@.c)
 *     _Init_thread_footer @ 0x1801C9108 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801C9170 (_Init_thread_header.c)
 *     ?GetChatIconDefaultSetting@MeetAndChatHelpers@@YA?AW4ChatIconState@1@XZ @ 0x1806B1C74 (-GetChatIconDefaultSetting@MeetAndChatHelpers@@YA-AW4ChatIconState@1@XZ.c)
 *     ?IsChinaCTAPolicyEnabled@MeetAndChatHelpers@@YA_NXZ @ 0x1806BE608 (-IsChinaCTAPolicyEnabled@MeetAndChatHelpers@@YA_NXZ.c)
 *     ?IsDisabledForMachineConfig@details@MeetAndChatHelpers@@YA_NXZ @ 0x1806BE6B0 (-IsDisabledForMachineConfig@details@MeetAndChatHelpers@@YA_NXZ.c)
 */

char __fastcall MeetAndChatHelpers::IsMaCDisabledForDevice(MeetAndChatHelpers *this)
{
  char v1; // bl
  __int64 v3; // rdx
  MeetAndChatHelpers::details *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  MeetAndChatHelpers *v7; // rcx
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_RemoveChat>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_RemoveChat>::GetImpl'::`2'::impl)
    && wil::details::FeatureImpl<__WilFeatureTraits_Feature_MainKey_ChatCompliance>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_MainKey_ChatCompliance>::GetImpl'::`2'::impl) )
  {
    return 1;
  }
  if ( __TSS0__6__IsMaCDisabledForDevice_MeetAndChatHelpers__YA_NXZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                                                                      + (unsigned int)tls_index)
                                                                                    + 16LL) )
  {
    Init_thread_header(&__TSS0__6__IsMaCDisabledForDevice_MeetAndChatHelpers__YA_NXZ_4HA);
    if ( __TSS0__6__IsMaCDisabledForDevice_MeetAndChatHelpers__YA_NXZ_4HA == -1 )
    {
      if ( MeetAndChatHelpers::details::IsDisabledForMachineConfig(v4, v3, v5, v6)
        || (RtlGetDeviceFamilyInfoEnum(0LL, &v8, 0LL), v8 != 3)
        || (unsigned int)MeetAndChatHelpers::GetChatIconDefaultSetting() == 3
        || MeetAndChatHelpers::IsChinaCTAPolicyEnabled(v7) )
      {
        v1 = 1;
      }
      `MeetAndChatHelpers::IsMaCDisabledForDevice'::`7'::s_disabled = v1;
      Init_thread_footer(&__TSS0__6__IsMaCDisabledForDevice_MeetAndChatHelpers__YA_NXZ_4HA);
    }
  }
  return `MeetAndChatHelpers::IsMaCDisabledForDevice'::`7'::s_disabled;
}
