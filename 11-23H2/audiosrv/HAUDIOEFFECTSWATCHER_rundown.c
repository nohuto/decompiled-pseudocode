/*
 * XREFs of HAUDIOEFFECTSWATCHER_rundown @ 0x1800D7250
 * Callers:
 *     <none>
 * Callees:
 *     s_afxCloseAudioEffectsWatcher @ 0x1800D7280 (s_afxCloseAudioEffectsWatcher.c)
 */

__int64 __fastcall HAUDIOEFFECTSWATCHER_rundown(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  return s_afxCloseAudioEffectsWatcher(&v2);
}
