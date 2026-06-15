/*
 * XREFs of ?MarkAsEvaluated@AtmosCheck@@CAXPEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x18015C364
 * Callers:
 *     ?EnableAllSpatialCapabilities@AtmosCheck@@AEAAXXZ @ 0x18015AD28 (-EnableAllSpatialCapabilities@AtmosCheck@@AEAAXXZ.c)
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
