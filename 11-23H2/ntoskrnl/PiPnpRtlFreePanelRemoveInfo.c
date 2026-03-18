/*
 * XREFs of PiPnpRtlFreePanelRemoveInfo @ 0x14095A324
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140788B20 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x14095A3C8 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherPanelRemoveInfo @ 0x14095A85C (PiPnpRtlGatherPanelRemoveInfo.c)
 * Callees:
 *     PiDmObjectRelease @ 0x1406D6B68 (PiDmObjectRelease.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlFreePanelRemoveInfo(char **P)
{
  char *v2; // rcx
  char *v3; // rcx

  if ( P )
  {
    v2 = *P;
    if ( v2 )
      PiDmObjectRelease(v2);
    v3 = P[1];
    if ( v3 )
      PiDmObjectRelease(v3);
    ExFreePoolWithTag(P, 0x47706E50u);
  }
}
