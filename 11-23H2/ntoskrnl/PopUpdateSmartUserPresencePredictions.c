/*
 * XREFs of PopUpdateSmartUserPresencePredictions @ 0x14099BF6C
 * Callers:
 *     PopPowerInformationInternal @ 0x1407ED06C (PopPowerInformationInternal.c)
 *     PopWnfAudioCallback @ 0x1408553A0 (PopWnfAudioCallback.c)
 *     PopWnfUserAwayPredictionCallback @ 0x1409846B0 (PopWnfUserAwayPredictionCallback.c)
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x14032EFC0 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14059E178 (PopIdleArmAoAcDozeS4Timer.c)
 */

void __fastcall PopUpdateSmartUserPresencePredictions(unsigned __int64 a1, unsigned int a2)
{
  __int64 v3; // rdx

  v3 = 0LL;
  if ( !byte_140C3D8AD && a1 >= MEMORY[0xFFFFF78000000014] && MEMORY[0xFFFFF78000000014] - a1 >= 0x10C388D000LL )
    v3 = a1;
  if ( qword_140C3CD28 != v3 )
  {
    qword_140C3CD28 = v3;
    if ( PopSmartUserPresenceAction )
    {
      if ( byte_140C3CD51 && (PopIdleCancelAoAcDozeS4Timer(a2) || !*((_DWORD *)PopPolicy + 22)) )
        PopIdleArmAoAcDozeS4Timer();
    }
  }
}
