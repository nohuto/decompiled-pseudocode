/*
 * XREFs of PnprGetStackLimits @ 0x140562EBC
 * Callers:
 *     PnprRecopyMirrorPages @ 0x14056322C (PnprRecopyMirrorPages.c)
 *     PnprQuiesceProcessorDpc @ 0x140A687F0 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x140294D90 (KeQueryCurrentStackInformation.c)
 *     KeGetCurrentStackPointer @ 0x14041FAB0 (KeGetCurrentStackPointer.c)
 */

__int64 __fastcall PnprGetStackLimits(char **a1, __int64 a2)
{
  char v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  *a1 = KeGetCurrentStackPointer();
  return KeQueryCurrentStackInformation((__int64)&v4, (__int64)&v5, a2);
}
