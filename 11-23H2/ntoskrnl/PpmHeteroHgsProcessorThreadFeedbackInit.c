/*
 * XREFs of PpmHeteroHgsProcessorThreadFeedbackInit @ 0x14059E81C
 * Callers:
 *     PpmHeteroHgsProcessorInit @ 0x1403813B0 (PpmHeteroHgsProcessorInit.c)
 *     PpmResetPerfEngineForProcessor @ 0x14058D618 (PpmResetPerfEngineForProcessor.c)
 * Callees:
 *     <none>
 */

__int64 PpmHeteroHgsProcessorThreadFeedbackInit()
{
  __int64 result; // rax

  if ( PpmHeteroHgsThreadEnabled )
  {
    result = 1LL;
    __writemsr(0x17D4u, 1uLL);
  }
  return result;
}
