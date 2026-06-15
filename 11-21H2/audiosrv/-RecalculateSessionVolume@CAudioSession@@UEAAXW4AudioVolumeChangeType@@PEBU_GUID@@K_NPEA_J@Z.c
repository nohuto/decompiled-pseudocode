/*
 * XREFs of ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x180008A90
 * Callers:
 *     ?OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x1800D9630 (-OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 * Callees:
 *     _lambda_cbf6d06ac8f65fdd5bf72a52cf7f9da8_::operator() @ 0x180008AF0 (_lambda_cbf6d06ac8f65fdd5bf72a52cf7f9da8_--operator().c)
 */

__int64 __fastcall CAudioSession::RecalculateSessionVolume(__int64 a1, int a2, __int64 a3, int a4, char a5)
{
  _QWORD v6[6]; // [rsp+20h] [rbp-30h] BYREF
  int v7; // [rsp+68h] [rbp+18h] BYREF
  __int64 v8; // [rsp+70h] [rbp+20h] BYREF
  int v9; // [rsp+78h] [rbp+28h] BYREF

  v9 = a4;
  v8 = a3;
  v7 = a2;
  v6[0] = a1 - 8;
  v6[1] = &v8;
  v6[2] = &a5;
  v6[3] = &v7;
  v6[4] = &v9;
  return lambda_cbf6d06ac8f65fdd5bf72a52cf7f9da8_::operator()(v6);
}
