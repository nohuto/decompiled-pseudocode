/*
 * XREFs of FsRtlFreeExtraCreateParameter @ 0x14073E120
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x1402BB810 (IopDeleteFileObjectExtension.c)
 *     FsRtlCheckOplockEx2 @ 0x1402FD950 (FsRtlCheckOplockEx2.c)
 *     FsRtlpAttachOplockKey @ 0x14030287C (FsRtlpAttachOplockKey.c)
 *     PspCreateUserProcessEcp @ 0x1406B9360 (PspCreateUserProcessEcp.c)
 *     IopParseDevice @ 0x14072CD50 (IopParseDevice.c)
 *     IopCreateFile @ 0x14073C690 (IopCreateFile.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x14073E0A0 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlpCleanupEcps @ 0x14073E1D0 (FsRtlpCleanupEcps.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1407CD8CC (IopSymlinkAllocateAndAddECP.c)
 *     IopGraftName @ 0x14087F518 (IopGraftName.c)
 *     IopSymlinkUpdateECP @ 0x14088075C (IopSymlinkUpdateECP.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1402B6B70 (ExFreeToNPagedLookasideList.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlFreeExtraCreateParameter(PVOID EcpContext)
{
  char *v1; // rbx
  __int64 v2; // rdi
  void (__fastcall *v3)(PVOID, char *); // rax
  struct _PAGED_LOOKASIDE_LIST *v5; // rcx

  v1 = (char *)EcpContext - 72;
  v2 = 0LL;
  v3 = (void (__fastcall *)(PVOID, char *))*((_QWORD *)EcpContext - 4);
  if ( v3 )
    v3(EcpContext, v1 + 24);
  if ( (*((_DWORD *)v1 + 12) & 0x20) != 0 && FltMgrCallbacks )
  {
    v2 = *((_QWORD *)v1 + 8);
    (*(void (__fastcall **)(__int64, PVOID))FltMgrCallbacks)(v2, EcpContext);
  }
  v5 = (struct _PAGED_LOOKASIDE_LIST *)*((_QWORD *)v1 + 7);
  if ( v5 )
    ExFreeToNPagedLookasideList(v5, v1);
  else
    ExFreePoolWithTag(v1, 0);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(FltMgrCallbacks + 8))(v2);
}
