/*
 * XREFs of ?IsMaCDisabledForDevice@MeetAndChatHelpers@@YA_NXZ @ 0x1805CD2D8
 * Callers:
 *     ?OnMessage@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAJI_K_J@Z @ 0x180041BE0 (-OnMessage@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAJI_K_J@Z.c)
 * Callees:
 *     _Init_thread_footer @ 0x180189828 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180189890 (_Init_thread_header.c)
 *     ?GetChatIconDefaultSetting@MeetAndChatHelpers@@YA?AW4ChatIconState@1@XZ @ 0x1805C1514 (-GetChatIconDefaultSetting@MeetAndChatHelpers@@YA-AW4ChatIconState@1@XZ.c)
 *     ?IsDisabledForMachineConfig@details@MeetAndChatHelpers@@YA_NXZ @ 0x1805CD0E8 (-IsDisabledForMachineConfig@details@MeetAndChatHelpers@@YA_NXZ.c)
 */

char __fastcall MeetAndChatHelpers::IsMaCDisabledForDevice(MeetAndChatHelpers *this)
{
  __int64 v1; // rdx
  MeetAndChatHelpers::details *v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  char v5; // bl
  int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( __TSS0__1__IsMaCDisabledForDevice_MeetAndChatHelpers__YA_NXZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                                                                      + (unsigned int)tls_index)
                                                                                    + 16LL) )
  {
    Init_thread_header(&__TSS0__1__IsMaCDisabledForDevice_MeetAndChatHelpers__YA_NXZ_4HA);
    if ( __TSS0__1__IsMaCDisabledForDevice_MeetAndChatHelpers__YA_NXZ_4HA == -1 )
    {
      v5 = 0;
      if ( MeetAndChatHelpers::details::IsDisabledForMachineConfig(v2, v1, v3, v4)
        || (RtlGetDeviceFamilyInfoEnum(0LL, &v7, 0LL), v7 != 3)
        || (unsigned int)MeetAndChatHelpers::GetChatIconDefaultSetting() == 3 )
      {
        v5 = 1;
      }
      `MeetAndChatHelpers::IsMaCDisabledForDevice'::`2'::s_disabled = v5;
      Init_thread_footer(&__TSS0__1__IsMaCDisabledForDevice_MeetAndChatHelpers__YA_NXZ_4HA);
    }
  }
  return `MeetAndChatHelpers::IsMaCDisabledForDevice'::`2'::s_disabled;
}
