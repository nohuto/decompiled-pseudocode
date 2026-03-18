/*
 * XREFs of KiCheckKeepAlive @ 0x1402BFF4C
 * Callers:
 *     KeAccumulateTicks @ 0x1402C7B10 (KeAccumulateTicks.c)
 * Callees:
 *     KeCheckProcessorAffinityEx @ 0x140257360 (KeCheckProcessorAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x1402573A0 (KeAddProcessorAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402C02B0 (KeRemoveProcessorAffinityEx.c)
 */

char __fastcall KiCheckKeepAlive(__int64 a1)
{
  unsigned int v1; // edi
  char v2; // bl
  wchar_t *v5; // rcx

  v1 = *(_DWORD *)(a1 + 36);
  v2 = 0;
  if ( KiClockTimerPerCpuTickScheduling )
  {
    if ( (unsigned int)KeCheckProcessorAffinityEx(KiClockCheckReady, v1) )
    {
      v5 = KiClockCheckReady;
      goto LABEL_7;
    }
    if ( *(_BYTE *)(a1 + 36488) && MEMORY[0xFFFFF78000000008] > *(_QWORD *)(a1 + 36352) )
      goto LABEL_4;
  }
  else if ( (unsigned int)KeCheckProcessorAffinityEx(KiClockCheckPending, v1) )
  {
    if ( !(unsigned int)KeCheckProcessorAffinityEx(KiClockCheckReady, v1) )
    {
LABEL_4:
      KeAddProcessorAffinityEx(KiClockCheckReady, v1);
      return v2;
    }
    KeRemoveProcessorAffinityEx(KiClockCheckReady, v1);
    v5 = KiClockCheckPending;
LABEL_7:
    KeRemoveProcessorAffinityEx(v5, v1);
    return 1;
  }
  return v2;
}
