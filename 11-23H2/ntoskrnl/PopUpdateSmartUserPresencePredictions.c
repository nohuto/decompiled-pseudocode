/*
 * XREFs of PopUpdateSmartUserPresencePredictions @ 0x14099C16C
 * Callers:
 *     PopPowerInformationInternal @ 0x1407ED33C (PopPowerInformationInternal.c)
 *     PopWnfAudioCallback @ 0x1408556A0 (PopWnfAudioCallback.c)
 *     PopWnfUserAwayPredictionCallback @ 0x1409848B0 (PopWnfUserAwayPredictionCallback.c)
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x14032F250 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14059E668 (PopIdleArmAoAcDozeS4Timer.c)
 */

void __fastcall PopUpdateSmartUserPresencePredictions(unsigned __int64 a1, unsigned int a2)
{
  __int64 v3; // rdx

  v3 = 0LL;
  if ( !byte_140C3D9AD && a1 >= MEMORY[0xFFFFF78000000014] && MEMORY[0xFFFFF78000000014] - a1 >= 0x10C388D000LL )
    v3 = a1;
  if ( qword_140C3CCC8 != v3 )
  {
    qword_140C3CCC8 = v3;
    if ( PopSmartUserPresenceAction )
    {
      if ( byte_140C3CCF1 && (PopIdleCancelAoAcDozeS4Timer(a2) || !*((_DWORD *)PopPolicy + 22)) )
        PopIdleArmAoAcDozeS4Timer();
    }
  }
}
