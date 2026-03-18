/*
 * XREFs of HalpTimerBuildKnownResourceIdString @ 0x1403BE3D0
 * Callers:
 *     HalpInitializeTimers @ 0x1403BBAC8 (HalpInitializeTimers.c)
 *     HalpTimerRegister @ 0x1403BE0BC (HalpTimerRegister.c)
 * Callees:
 *     HalpExtBuildResourceIdString @ 0x1403BE424 (HalpExtBuildResourceIdString.c)
 */

__int64 __fastcall HalpTimerBuildKnownResourceIdString(__int64 a1, int a2, wchar_t *Dst)
{
  size_t SizeInWords; // [rsp+38h] [rbp-20h]

  LODWORD(SizeInWords) = a2;
  return HalpExtBuildResourceIdString(
           1413894989,
           0,
           16640,
           *(unsigned __int16 *)(a1 + 136),
           1,
           0,
           *(_DWORD *)(a1 + 140),
           SizeInWords,
           Dst);
}
