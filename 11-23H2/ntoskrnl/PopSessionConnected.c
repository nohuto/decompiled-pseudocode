/*
 * XREFs of PopSessionConnected @ 0x1407EB7DC
 * Callers:
 *     PopSessionConnectionChange @ 0x1407EB984 (PopSessionConnectionChange.c)
 * Callees:
 *     PopSetSessionDisplayStatus @ 0x1407A5B30 (PopSetSessionDisplayStatus.c)
 *     PopDiagTraceSessionStates @ 0x1407EB85C (PopDiagTraceSessionStates.c)
 *     PopAdaptiveGetSessionStateUnsafe @ 0x1407EBDA0 (PopAdaptiveGetSessionStateUnsafe.c)
 *     PopDiagTraceAdaptiveOverrideTriggered @ 0x14098C66C (PopDiagTraceAdaptiveOverrideTriggered.c)
 */

__int64 __fastcall PopSessionConnected(unsigned int a1, __int64 a2, __int64 a3)
{
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CONNECTED);
  if ( *(_BYTE *)(a2 + 1) )
  {
    PopConsoleSession = 1;
    dword_140C39CF8 = a1;
  }
  PopSetSessionDisplayStatus(a1, 1, 0);
  if ( PopAdaptiveBootContext )
  {
    dword_140C39D2C = 0;
    byte_140C39D18 = 1;
    qword_140C39D20 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    dword_140C39D28 = 2;
    PopDiagTraceAdaptiveOverrideTriggered(qword_140C39D20, 1LL, 2LL, 0LL);
  }
  return PopAdaptiveGetSessionStateUnsafe(a1, a2 + 8, a3);
}
