/*
 * XREFs of HalpInterruptLineToGsi @ 0x14050918C
 * Callers:
 *     HalpTimerConfigureInterrupt @ 0x1403AEA08 (HalpTimerConfigureInterrupt.c)
 *     HalpInterruptConnect @ 0x140507ED8 (HalpInterruptConnect.c)
 *     ExtEnvSetVpptTarget @ 0x14050C264 (ExtEnvSetVpptTarget.c)
 *     HalpTimerUnmapInterrupt @ 0x14050D048 (HalpTimerUnmapInterrupt.c)
 * Callees:
 *     HalpInterruptFindLines @ 0x1402520D4 (HalpInterruptFindLines.c)
 */

__int64 __fastcall HalpInterruptLineToGsi(unsigned int *a1, _DWORD *a2)
{
  _QWORD *Lines; // rax
  int v4; // ecx

  *a2 = -1;
  Lines = HalpInterruptFindLines(a1);
  if ( !Lines )
    return 3221225485LL;
  v4 = *((_DWORD *)Lines + 7);
  if ( v4 == -1 )
    return 3221225485LL;
  *a2 = v4;
  return 0LL;
}
