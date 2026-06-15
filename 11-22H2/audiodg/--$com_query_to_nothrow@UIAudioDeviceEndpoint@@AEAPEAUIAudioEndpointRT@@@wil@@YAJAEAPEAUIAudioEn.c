/*
 * XREFs of ??$com_query_to_nothrow@UIAudioDeviceEndpoint@@AEAPEAUIAudioEndpointRT@@@wil@@YAJAEAPEAUIAudioEndpointRT@@PEAPEAUIAudioDeviceEndpoint@@@Z @ 0x14001DFAC
 * Callers:
 *     ?Initialize@CAudioPump@@UEAAJIKPEAUIAudioProcessRT@@PEAUIAudioEndpointRT@@PEAUICrossProcessEventManager@@@Z @ 0x14001D9D0 (-Initialize@CAudioPump@@UEAAJIKPEAUIAudioProcessRT@@PEAUIAudioEndpointRT@@PEAUICrossProcessEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_query_to_nothrow<IAudioDeviceEndpoint,IAudioEndpointRT * &>(_QWORD *a1, __int64 a2)
{
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac, a2);
}
