/*
 * XREFs of ?UnregisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x18001CB10
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x18000D92C (-UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 */

__int64 __fastcall CProcess::UnregisterSession(CProcess *this, struct IAudioSessionInfo *a2)
{
  if ( a2 )
    return CWindowsPolicyManager::UnregisterSession(this, this, a2);
  else
    return 2147942487LL;
}
