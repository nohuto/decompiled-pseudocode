/*
 * XREFs of HalpInterruptWaitForProcessorStartUp @ 0x140376A84
 * Callers:
 *     HalpInterruptStartProcessor @ 0x140A88D4C (HalpInterruptStartProcessor.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x1402C32C0 (KeStallExecutionProcessor.c)
 */

__int64 __fastcall HalpInterruptWaitForProcessorStartUp(_BYTE *a1, char a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // edi
  __int64 result; // rax

  v2 = 0;
  v5 = 2;
  while ( a2 || v2 < 0x2710 )
  {
    if ( *a1 )
    {
      if ( a2 || (v5 = 3, v2 < 0x190) )
        v5 = 4;
      break;
    }
    KeStallExecutionProcessor(0x3E8u);
    ++v2;
  }
  result = v5;
  HalpInterruptLastProcessorStartupInMs = v2;
  return result;
}
