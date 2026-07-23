/*
 * XREFs of sub_14074BE9C @ 0x14074BE9C
 * Callers:
 *     sub_14074B9B0 @ 0x14074B9B0 (sub_14074B9B0.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     sub_1402D2BD8 @ 0x1402D2BD8 (sub_1402D2BD8.c)
 *     IoRemoveLinkShareAccessEx @ 0x14074BF60 (IoRemoveLinkShareAccessEx.c)
 *     FsRtlNotifyVolumeEvent @ 0x1407FC020 (FsRtlNotifyVolumeEvent.c)
 */

__int64 __fastcall sub_14074BE9C(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader, PIRP Irp, __int64 a3)
{
  struct _FAST_MUTEX *p_FilterContexts; // r14
  char v7; // bp
  __int64 v8; // rax

  p_FilterContexts = (struct _FAST_MUTEX *)&AdvancedHeader[2].FilterContexts;
  v7 = 0;
  ExAcquireFastMutex((PFAST_MUTEX)&AdvancedHeader[2].FilterContexts);
  IoRemoveLinkShareAccessEx(*(_QWORD *)(a3 + 48), (char *)&AdvancedHeader[1].FileSize.QuadPart + 4, 0LL, 0LL);
  v8 = *(_QWORD *)(a3 + 48);
  if ( v8 == AdvancedHeader[2].ValidDataLength.QuadPart )
  {
    AdvancedHeader[1].AllocationSize.LowPart &= ~1u;
    v7 = 1;
    AdvancedHeader[2].ValidDataLength.QuadPart = 0LL;
    v8 = *(_QWORD *)(a3 + 48);
  }
  if ( v8 == AdvancedHeader[2].FileSize.QuadPart )
  {
    AdvancedHeader[2].FileSize.QuadPart = 0LL;
    sub_1402D2BD8(AdvancedHeader, 1, 0);
  }
  KeReleaseGuardedMutex(p_FilterContexts);
  if ( v7 )
    FsRtlNotifyVolumeEvent(*(PFILE_OBJECT *)(a3 + 48), 5u);
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 1);
  return 0LL;
}
