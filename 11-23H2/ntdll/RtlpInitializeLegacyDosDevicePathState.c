/*
 * XREFs of RtlpInitializeLegacyDosDevicePathState @ 0x1800D716C
 * Callers:
 *     RtlpAreLegacyDosDeviceNamesEnabled @ 0x1800D7050 (RtlpAreLegacyDosDeviceNamesEnabled.c)
 *     LdrpInitializeExecutionOptions @ 0x1800DD3AC (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpInitializeLegacyDosDevicePathState(int a1)
{
  int v1; // eax

  if ( a1 )
  {
    v1 = dword_180188458;
    if ( a1 == 1 )
      v1 = 1;
    dword_180188458 = v1;
  }
  else
  {
    dword_180188458 = 2;
  }
}
