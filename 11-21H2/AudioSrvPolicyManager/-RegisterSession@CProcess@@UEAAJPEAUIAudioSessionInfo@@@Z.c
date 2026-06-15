/*
 * XREFs of ?RegisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x18001A440
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x180022044 (-RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 */

int __fastcall CProcess::RegisterSession(CProcess *this, struct IAudioSessionInfo *a2)
{
  if ( a2 )
    return CApplicationManager::RegisterSession(this, this, a2);
  else
    return -2147024809;
}
