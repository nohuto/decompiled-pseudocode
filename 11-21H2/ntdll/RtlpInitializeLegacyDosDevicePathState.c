/*
 * XREFs of RtlpInitializeLegacyDosDevicePathState @ 0x1800D77B8
 * Callers:
 *     RtlpAreLegacyDosDeviceNamesEnabled @ 0x1800D768C (RtlpAreLegacyDosDeviceNamesEnabled.c)
 *     LdrpInitializeExecutionOptions @ 0x1800DD27C (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpInitializeLegacyDosDevicePathState(int a1)
{
  int v1; // eax

  if ( a1 )
  {
    v1 = dword_18017B0E8;
    if ( a1 == 1 )
      v1 = 1;
    dword_18017B0E8 = v1;
  }
  else
  {
    dword_18017B0E8 = 2;
  }
}
