/*
 * XREFs of RtlpInitializeLegacyDosDevicePathState @ 0x1800D7834
 * Callers:
 *     RtlpAreLegacyDosDeviceNamesEnabled @ 0x1800D76F0 (RtlpAreLegacyDosDeviceNamesEnabled.c)
 *     LdrpInitializeExecutionOptions @ 0x1800DD9FC (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpInitializeLegacyDosDevicePathState(int a1)
{
  int v1; // eax

  if ( a1 )
  {
    v1 = dword_180185388;
    if ( a1 == 1 )
      v1 = 1;
    dword_180185388 = v1;
  }
  else
  {
    dword_180185388 = 2;
  }
}
