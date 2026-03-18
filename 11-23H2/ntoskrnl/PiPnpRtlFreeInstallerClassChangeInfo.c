/*
 * XREFs of PiPnpRtlFreeInstallerClassChangeInfo @ 0x14088438C
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140788B20 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1408827B0 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 * Callees:
 *     PiDmObjectRelease @ 0x1406D6B68 (PiDmObjectRelease.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1407C21F8 (PiDmRemoveCacheReferenceForObject.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlFreeInstallerClassChangeInfo(char **P)
{
  char *v2; // rcx
  char *v3; // rcx
  char *v4; // rax

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
    {
      PiDmRemoveCacheReferenceForObject(*((_DWORD *)v4 + 7), *((_QWORD *)v4 + 2));
      PiDmObjectRelease(P[2]);
    }
    ExFreePoolWithTag(P, 0x47706E50u);
  }
}
