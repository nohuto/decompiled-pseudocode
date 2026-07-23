/*
 * XREFs of PopSessionDisconnected @ 0x140683338
 * Callers:
 *     PopSessionConnectionChange @ 0x1407EBC54 (PopSessionConnectionChange.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     PopSetSessionDisplayStatus @ 0x1407A5D20 (PopSetSessionDisplayStatus.c)
 *     PopSetSessionUserStatus @ 0x1407A5FAC (PopSetSessionUserStatus.c)
 *     PopDiagTraceSessionStates @ 0x1407EBB2C (PopDiagTraceSessionStates.c)
 */

__int64 __fastcall PopSessionDisconnected(unsigned int a1, __int64 a2)
{
  __int64 result; // rax

  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_DISCONNECTED);
  if ( dword_140C39C58 == a1 && a1 != -1 )
  {
    memset(&PopAdaptiveContext, 0, 0x50uLL);
    dword_140C39C58 = -1;
    dword_140C39C5C = 3;
  }
  PopSetSessionDisplayStatus(a1, 0LL, 0LL);
  PopSetSessionUserStatus(a1, 2LL);
  result = 0LL;
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 8) = 0;
  *(_BYTE *)(a2 + 12) = 0;
  return result;
}
