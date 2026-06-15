/*
 * XREFs of ?MarkAsEvaluated@AtmosCheck@@CAXPEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x18004197C
 * Callers:
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x180040EF8 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?EnableAllSpatialCapabilities@AtmosCheck@@AEAAXXZ @ 0x180153BB8 (-EnableAllSpatialCapabilities@AtmosCheck@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall AtmosCheck::MarkAsEvaluated(struct AtmosCheck::EndpointSpecificSpatialTechInfo *a1)
{
  _BYTE *v1; // rcx
  __int64 v2; // rax

  v1 = (char *)a1 + 1;
  v2 = 7LL;
  do
  {
    *v1 = 1;
    v1 += 24;
    --v2;
  }
  while ( v2 );
}
