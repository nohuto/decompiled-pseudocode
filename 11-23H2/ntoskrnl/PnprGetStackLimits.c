/*
 * XREFs of PnprGetStackLimits @ 0x140562FE4
 * Callers:
 *     PnprRecopyMirrorPages @ 0x14056335C (PnprRecopyMirrorPages.c)
 *     PnprQuiesceProcessorDpc @ 0x140A9D480 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x14034E9B0 (KeQueryCurrentStackInformation.c)
 *     KeGetCurrentStackPointer @ 0x14041F130 (KeGetCurrentStackPointer.c)
 */

bool __fastcall PnprGetStackLimits(char **a1, unsigned __int64 *a2)
{
  int v4; // [rsp+30h] [rbp+8h] BYREF
  char *v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  *a1 = KeGetCurrentStackPointer();
  return KeQueryCurrentStackInformation(&v4, &v5, a2);
}
