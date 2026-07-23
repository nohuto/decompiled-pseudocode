/*
 * XREFs of KiDisableCacheErrataSource @ 0x1405796E0
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x14056C604 (KeRestoreProcessorSpecificFeatures.c)
 *     KiInitializeCacheErrataSupport @ 0x140B9623C (KiInitializeCacheErrataSupport.c)
 * Callees:
 *     ReadAMDMsr @ 0x140428E40 (ReadAMDMsr.c)
 *     WriteAMDMsr @ 0x140428E60 (WriteAMDMsr.c)
 */

__int64 KiDisableCacheErrataSource()
{
  unsigned __int64 AMDMsr; // rax
  int v1; // eax
  unsigned __int64 v3; // [rsp+30h] [rbp+8h]

  __writemsr(0xC0010015, __readmsr(0xC0010015) | 8);
  AMDMsr = ReadAMDMsr(0xC0011023);
  HIDWORD(v3) = HIDWORD(AMDMsr);
  if ( KiTLBCOverride == 1 )
    v1 = AMDMsr & 0xFFDFFFFF;
  else
    v1 = AMDMsr | 0x800000;
  LODWORD(v3) = v1 | 2;
  return WriteAMDMsr(0xC0011023, v3);
}
