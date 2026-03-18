/*
 * XREFs of PopPepRequestWork @ 0x14035666C
 * Callers:
 *     PopPepTryPowerDownDevice @ 0x140355DFC (PopPepTryPowerDownDevice.c)
 *     PopPepProcessEvent @ 0x140356454 (PopPepProcessEvent.c)
 *     PopPepSurprisePowerOn @ 0x140397B04 (PopPepSurprisePowerOn.c)
 *     PopPepUpdateConstraints @ 0x1403B17EC (PopPepUpdateConstraints.c)
 *     PopPepComponentSetLatency @ 0x14045E4C2 (PopPepComponentSetLatency.c)
 *     PopPepCompleteComponentIdleState @ 0x1405D4C64 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetResidency @ 0x1405D4D6C (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x1405D4E64 (PopPepComponentSetWakeHint.c)
 *     PopPepIdleTimeoutRoutine @ 0x1405D5360 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     PopFxRequestWorker @ 0x140358140 (PopFxRequestWorker.c)
 */

__int64 __fastcall PopPepRequestWork(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // edx
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a2 > a1 )
  {
    v2 = a2 - a1;
    if ( v2 )
    {
      v3 = v2;
      do
      {
        result = PopFxRequestWorker(0LL);
        --v3;
      }
      while ( v3 );
    }
  }
  return result;
}
