/*
 * XREFs of ?RegisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x180028AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x18002E9E0 (-RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 */

int __fastcall CProcess::RegisterSession(CProcess *this, struct IAudioSessionInfo *a2)
{
  if ( a2 )
    return CApplicationManager::RegisterSession(this, this, a2);
  else
    return -2147024809;
}
