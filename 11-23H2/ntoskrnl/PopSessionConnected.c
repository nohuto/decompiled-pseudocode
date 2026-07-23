/*
 * XREFs of PopSessionConnected @ 0x1407EBAAC
 * Callers:
 *     PopSessionConnectionChange @ 0x1407EBC54 (PopSessionConnectionChange.c)
 * Callees:
 *     PopSetSessionDisplayStatus @ 0x1407A5D20 (PopSetSessionDisplayStatus.c)
 *     PopDiagTraceSessionStates @ 0x1407EBB2C (PopDiagTraceSessionStates.c)
 *     PopAdaptiveGetSessionStateUnsafe @ 0x1407EC070 (PopAdaptiveGetSessionStateUnsafe.c)
 *     PopDiagTraceAdaptiveOverrideTriggered @ 0x14098C86C (PopDiagTraceAdaptiveOverrideTriggered.c)
 */

__int64 __fastcall PopSessionConnected(unsigned int a1, __int64 a2, __int64 a3)
{
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CONNECTED);
  if ( *(_BYTE *)(a2 + 1) )
  {
    PopConsoleSession = 1;
    dword_140C39C58 = a1;
  }
  PopSetSessionDisplayStatus(a1, 1, 0);
  if ( PopAdaptiveBootContext )
  {
    dword_140C39C8C = 0;
    byte_140C39C78 = 1;
    qword_140C39C80 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    dword_140C39C88 = 2;
    PopDiagTraceAdaptiveOverrideTriggered(qword_140C39C80, 1LL, 2LL, 0LL);
  }
  return PopAdaptiveGetSessionStateUnsafe(a1, a2 + 8, a3);
}
