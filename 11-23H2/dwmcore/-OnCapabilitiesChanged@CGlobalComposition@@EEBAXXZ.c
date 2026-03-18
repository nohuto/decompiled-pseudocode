/*
 * XREFs of ?OnCapabilitiesChanged@CGlobalComposition@@EEBAXXZ @ 0x1800FB990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CGlobalComposition::OnCapabilitiesChanged(CGlobalComposition *this)
{
  RtlPublishWnfStateData(WNF_DWM_COMPOSITIONCAPABILITIES, 0LL, 0LL, 0LL, 0LL);
}
