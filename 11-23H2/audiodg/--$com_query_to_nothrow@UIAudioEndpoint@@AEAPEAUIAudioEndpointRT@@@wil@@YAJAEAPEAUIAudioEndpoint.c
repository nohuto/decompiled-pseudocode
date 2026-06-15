/*
 * XREFs of ??$com_query_to_nothrow@UIAudioEndpoint@@AEAPEAUIAudioEndpointRT@@@wil@@YAJAEAPEAUIAudioEndpointRT@@PEAPEAUIAudioEndpoint@@@Z @ 0x14001DFD8
 * Callers:
 *     ?Initialize@CAudioPump@@UEAAJIKPEAUIAudioProcessRT@@PEAUIAudioEndpointRT@@PEAUICrossProcessEventManager@@@Z @ 0x14001D9D0 (-Initialize@CAudioPump@@UEAAJIKPEAUIAudioProcessRT@@PEAUIAudioEndpointRT@@PEAUICrossProcessEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_query_to_nothrow<IAudioEndpoint,IAudioEndpointRT * &>(_QWORD *a1, __int64 a2)
{
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_30a99515_1527_4451_af9f_00c5f0234daf, a2);
}
