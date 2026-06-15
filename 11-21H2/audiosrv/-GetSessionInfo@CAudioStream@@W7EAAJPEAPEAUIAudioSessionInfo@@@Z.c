/*
 * XREFs of ?GetSessionInfo@CAudioStream@@W7EAAJPEAPEAUIAudioSessionInfo@@@Z @ 0x18006AFE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::GetSessionInfo(__int64 a1, struct IAudioSessionInfo **a2)
{
  return CAudioStream::GetSessionInfo((CAudioStream *)(a1 - 8), a2);
}
