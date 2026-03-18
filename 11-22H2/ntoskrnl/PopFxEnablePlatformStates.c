/*
 * XREFs of PopFxEnablePlatformStates @ 0x14058A2C0
 * Callers:
 *     PpmEnableCoordinatedIdleStates @ 0x140981BDC (PpmEnableCoordinatedIdleStates.c)
 * Callees:
 *     PpmGetDeepSleepPlatformStateIndex @ 0x14058426C (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopPepPlatformStateRegistered @ 0x14059FA24 (PopPepPlatformStateRegistered.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x140984CE0 (PopFxInitializeSocSubsystemStaticInfo.c)
 */

void __fastcall PopFxEnablePlatformStates(int a1)
{
  unsigned __int32 DeepSleepPlatformStateIndex; // eax

  if ( a1 )
  {
    PopPepPlatformStateRegistered();
    DeepSleepPlatformStateIndex = PpmGetDeepSleepPlatformStateIndex();
    if ( DeepSleepPlatformStateIndex != -1 )
    {
      _InterlockedExchange(&dword_140CF7E40, DeepSleepPlatformStateIndex);
      PopFxInitializeSocSubsystemStaticInfo(DeepSleepPlatformStateIndex);
    }
  }
}
