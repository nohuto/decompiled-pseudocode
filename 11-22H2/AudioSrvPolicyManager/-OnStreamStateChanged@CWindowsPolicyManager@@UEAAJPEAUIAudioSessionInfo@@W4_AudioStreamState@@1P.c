/*
 * XREFs of ?OnStreamStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x18001D680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowsPolicyManager::OnStreamStateChanged(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        struct IAudioStreamInfo *a5)
{
  return CPlaybackManager::OnStreamStateChanged(*(CPlaybackManager **)(a1 + 24), a2, a3, a4, a5);
}
