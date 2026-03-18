/*
 * XREFs of MiMarkKernelCfgTarget @ 0x1402F7A50
 * Callers:
 *     MmGetSystemRoutineAddress @ 0x140756870 (MmGetSystemRoutineAddress.c)
 *     MiMarkKernelCfgAddressTakenImports @ 0x140A43FBC (MiMarkKernelCfgAddressTakenImports.c)
 * Callees:
 *     VslEnableKernelCfgTarget @ 0x1409421A4 (VslEnableKernelCfgTarget.c)
 */

__int64 MiMarkKernelCfgTarget()
{
  if ( (MiFlags & 0x40000) != 0 )
    VslEnableKernelCfgTarget();
  return 0LL;
}
