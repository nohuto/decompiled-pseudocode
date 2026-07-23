/*
 * XREFs of KeRestoreProcessorSpecificFeatures @ 0x14056C604
 * Callers:
 *     PnprQuiesceProcessorDpc @ 0x140A9D2F0 (PnprQuiesceProcessorDpc.c)
 *     PopHandleNextState @ 0x140AA7F8C (PopHandleNextState.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRestoreFeatureBits @ 0x140576BD0 (KiRestoreFeatureBits.c)
 *     KiDisableCacheErrataSource @ 0x1405796E0 (KiDisableCacheErrataSource.c)
 *     KiSetPageAttributesTable @ 0x140A8C7B0 (KiSetPageAttributesTable.c)
 *     KiRestoreXSaveSupport @ 0x140A9F4C4 (KiRestoreXSaveSupport.c)
 */

__int64 __fastcall KeRestoreProcessorSpecificFeatures(__int64 a1)
{
  unsigned __int64 v7; // rax

  KiSetPageAttributesTable();
  if ( KiTLBCOverride )
    KiDisableCacheErrataSource();
  _RAX = 2147483649LL;
  __asm { cpuid }
  if ( (_RDX & 0x2000000) != 0 )
  {
    v7 = __readmsr(0xC0000080) | 0x4000;
    _RDX = HIDWORD(v7);
    __writemsr(0xC0000080, v7);
  }
  KiRestoreXSaveSupport(a1, _RDX);
  return KiRestoreFeatureBits();
}
