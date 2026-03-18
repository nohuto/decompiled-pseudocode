/*
 * XREFs of NVMeControllerDeleteLocalCommandPool @ 0x1C00044B0
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C0007E90 (NVMeHwFindAdapter.c)
 *     NVMeControllerRemove @ 0x1C000E2F4 (NVMeControllerRemove.c)
 * Callees:
 *     NVMeFreeDmaBuffer @ 0x1C000EFC4 (NVMeFreeDmaBuffer.c)
 */

void __fastcall NVMeControllerDeleteLocalCommandPool(__int64 a1)
{
  if ( a1 )
  {
    if ( a1 != -4512 )
      StorPortExtendedFunction(37LL, a1, a1 + 4512);
  }
}
