/*
 * XREFs of PopPepRequestWork @ 0x140313AA0
 * Callers:
 *     PopPepUpdateConstraints @ 0x14028D234 (PopPepUpdateConstraints.c)
 *     PopPepTryPowerDownDevice @ 0x140310CD0 (PopPepTryPowerDownDevice.c)
 *     PopPepProcessEvent @ 0x140313900 (PopPepProcessEvent.c)
 *     PopPepIdleTimeoutRoutine @ 0x1403552F0 (PopPepIdleTimeoutRoutine.c)
 *     PopPepComponentSetLatency @ 0x14035B570 (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x1403B3D44 (PopPepComponentSetResidency.c)
 *     PopPepCompleteComponentIdleState @ 0x14059EBA4 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetWakeHint @ 0x14059ECB0 (PopPepComponentSetWakeHint.c)
 *     PopPepSurprisePowerOn @ 0x14059FDC0 (PopPepSurprisePowerOn.c)
 * Callees:
 *     PopFxRequestWorkerInternal @ 0x140314F74 (PopFxRequestWorkerInternal.c)
 */

__int64 __fastcall PopPepRequestWork(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // edi
  unsigned int v4; // r8d
  __int64 v5; // rbx
  __int64 result; // rax

  if ( a3 > a2 )
  {
    v3 = (*(_DWORD *)(a1 + 24) >> 5) & 1;
    v4 = a3 - a2;
    if ( v4 )
    {
      v5 = v4;
      do
      {
        result = PopFxRequestWorkerInternal(0LL, v3);
        --v5;
      }
      while ( v5 );
    }
  }
  return result;
}
