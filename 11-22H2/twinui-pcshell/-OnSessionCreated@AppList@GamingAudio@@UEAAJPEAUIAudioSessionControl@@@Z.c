/*
 * XREFs of ?OnSessionCreated@AppList@GamingAudio@@UEAAJPEAUIAudioSessionControl@@@Z @ 0x1804032B0
 * Callers:
 *     <none>
 * Callees:
 *     ?RebuildList@AppList@GamingAudio@@QEAAX_N@Z @ 0x18040E21C (-RebuildList@AppList@GamingAudio@@QEAAX_N@Z.c)
 */

__int64 __fastcall GamingAudio::AppList::OnSessionCreated(GamingAudio::AppList *this, struct IAudioSessionControl *a2)
{
  GamingAudio::AppList::RebuildList((GamingAudio::AppList *)((char *)this - 8), 1);
  return 0LL;
}
