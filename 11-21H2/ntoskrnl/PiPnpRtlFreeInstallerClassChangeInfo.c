/*
 * XREFs of PiPnpRtlFreeInstallerClassChangeInfo @ 0x140768E44
 * Callers:
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x140768D10 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiPnpRtlCmActionCallback @ 0x140779F10 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     PiDmRemoveCacheReferenceForObject @ 0x14076A0A8 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmObjectRelease @ 0x14077B394 (PiDmObjectRelease.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlFreeInstallerClassChangeInfo(PVOID P)
{
  void *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rax

  if ( P )
  {
    v2 = *(void **)P;
    if ( v2 )
      PiDmObjectRelease(v2);
    v3 = (void *)*((_QWORD *)P + 1);
    if ( v3 )
      PiDmObjectRelease(v3);
    v4 = *((_QWORD *)P + 2);
    if ( v4 )
    {
      PiDmRemoveCacheReferenceForObject(*(unsigned int *)(v4 + 28), *(_QWORD *)(v4 + 16));
      PiDmObjectRelease(*((PVOID *)P + 2));
    }
    ExFreePoolWithTag(P, 0x47706E50u);
  }
}
