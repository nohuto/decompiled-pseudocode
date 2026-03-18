/*
 * XREFs of PopAdaptiveConsoleSessionOverrideTrigger @ 0x14099C794
 * Callers:
 *     PopSessionConnected @ 0x1407ED644 (PopSessionConnected.c)
 *     PopAdaptiveWnfCallback @ 0x14099CB50 (PopAdaptiveWnfCallback.c)
 * Callees:
 *     PopDiagTraceAdaptiveOverrideTriggered @ 0x140990FE0 (PopDiagTraceAdaptiveOverrideTriggered.c)
 */

void __fastcall PopAdaptiveConsoleSessionOverrideTrigger(int a1, int a2)
{
  __int64 v3; // r9
  unsigned __int128 v4; // rax

  v3 = 3LL * a1;
  *((_BYTE *)&unk_140C1F3C0 + 8 * v3) = 1;
  v4 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
  *((_DWORD *)&unk_140C1F3C0 + 2 * v3 + 4) = a2;
  *((_QWORD *)&unk_140C1F3C0 + v3 + 1) = *((_QWORD *)&v4 + 1);
  PopDiagTraceAdaptiveOverrideTriggered();
}
