/*
 * XREFs of PiPnpRtlFreeInterfaceDeleteInfo @ 0x14095A368
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140788B20 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14095A5AC (PiPnpRtlGatherInterfaceDeleteInfo.c)
 * Callees:
 *     PiDmObjectRelease @ 0x1406D6B68 (PiDmObjectRelease.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlFreeInterfaceDeleteInfo(char **P)
{
  char *v2; // rcx
  char *v3; // rcx
  char *v4; // rcx
  char *v5; // rcx

  if ( P )
  {
    v2 = *P;
    if ( v2 )
      PiDmObjectRelease(v2);
    v3 = P[1];
    if ( v3 )
      PiDmObjectRelease(v3);
    v4 = P[2];
    if ( v4 )
      PiDmObjectRelease(v4);
    v5 = P[3];
    if ( v5 )
      PiDmObjectRelease(v5);
    ExFreePoolWithTag(P, 0x47706E50u);
  }
}
