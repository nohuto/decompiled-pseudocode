/*
 * XREFs of ??$try_com_query_to@UIDuckingController@@AEAPEAUIAudioStreamInfo@@@wil@@YA_NAEAPEAUIAudioStreamInfo@@PEAPEAUIDuckingController@@@Z @ 0x180015AA4
 * Callers:
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000CCE0 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x1800221B8 (-OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioS.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall wil::try_com_query_to<IDuckingController,IAudioStreamInfo * &>(_QWORD *a1, __int64 a2)
{
  return (**(int (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_390561ae_7375_4558_aff9_667acfe35ac5, a2) >= 0;
}
