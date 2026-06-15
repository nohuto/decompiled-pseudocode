/*
 * XREFs of ??$com_query_to_nothrow@UIAudioDeviceEndpoint@@AEAPEAUIAudioEndpointRT@@@wil@@YAJAEAPEAUIAudioEndpointRT@@PEAPEAUIAudioDeviceEndpoint@@@Z @ 0x140005240
 * Callers:
 *     ?Initialize@CAudioPump@@UEAAJIKPEAUIAudioProcessRT@@PEAUIAudioEndpointRT@@PEAUICrossProcessEventManager@@@Z @ 0x1400053D0 (-Initialize@CAudioPump@@UEAAJIKPEAUIAudioProcessRT@@PEAUIAudioEndpointRT@@PEAUICrossProcessEvent.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_query_to_nothrow<IAudioDeviceEndpoint,IAudioEndpointRT * &>(_QWORD *a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac, a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E8,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\com.h",
      (const char *)(unsigned int)v2,
      v5);
  return v3;
}
