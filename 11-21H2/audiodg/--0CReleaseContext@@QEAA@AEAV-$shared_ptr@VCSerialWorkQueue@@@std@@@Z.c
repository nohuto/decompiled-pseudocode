/*
 * XREFs of ??0CReleaseContext@@QEAA@AEAV?$shared_ptr@VCSerialWorkQueue@@@std@@@Z @ 0x140031FF0
 * Callers:
 *     ?ShutdownWorkQueue@CAPOProcessingHostObject@@AEAAJXZ @ 0x1400683E4 (-ShutdownWorkQueue@CAPOProcessingHostObject@@AEAAJXZ.c)
 * Callees:
 *     ??4?$shared_ptr@VCSerialWorkQueue@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x140067BF4 (--4-$shared_ptr@VCSerialWorkQueue@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

_QWORD *__fastcall CReleaseContext::CReleaseContext(_QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  std::shared_ptr<CSerialWorkQueue>::operator=();
  return a1;
}
