/*
 * XREFs of ?ValidateAudioLevel@@YA_NM@Z @ 0x180012788
 * Callers:
 *     ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z @ 0x180011630 (-SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x180011920 (-SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?SetVolume@CServerAudioSessionControl@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x180011A90 (-SetVolume@CServerAudioSessionControl@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?SetAllVolumes@CAudioSession@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x1800DA780 (-SetAllVolumes@CAudioSession@@UEAAJIPEBMPEBU_GUID@@PEAH@Z.c)
 *     ?SetChannelVolume@CServerAudioSessionControl@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800DC700 (-SetChannelVolume@CServerAudioSessionControl@@UEAAJIMPEBU_GUID@@PEAH@Z.c)
 *     ?SetAllInitialStreamVolumes@CAudioStream@@QEAAJIPEBM_J@Z @ 0x1800E55E0 (-SetAllInitialStreamVolumes@CAudioStream@@QEAAJIPEBM_J@Z.c)
 *     ?SetChannelVolume@CVADServer@@UEAAJIMPEAH@Z @ 0x1800EFEB0 (-SetChannelVolume@CVADServer@@UEAAJIMPEAH@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ValidateAudioLevel(float a1)
{
  return a1 >= 0.0 && a1 <= 1.0;
}
