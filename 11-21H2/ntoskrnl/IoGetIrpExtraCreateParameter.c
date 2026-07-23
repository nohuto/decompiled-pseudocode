/*
 * XREFs of IoGetIrpExtraCreateParameter @ 0x14069B6E0
 * Callers:
 *     sub_1402A22E0 @ 0x1402A22E0 (sub_1402A22E0.c)
 *     FsRtlCheckOplockEx2 @ 0x1402A5D00 (FsRtlCheckOplockEx2.c)
 *     sub_1406B9A14 @ 0x1406B9A14 (sub_1406B9A14.c)
 *     sub_1406B9EA8 @ 0x1406B9EA8 (sub_1406B9EA8.c)
 *     sub_1406B9FD4 @ 0x1406B9FD4 (sub_1406B9FD4.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoGetIrpExtraCreateParameter(PIRP Irp, struct _ECP_LIST **ExtraCreateParameter)
{
  if ( (Irp->Flags & 0x80u) == 0 )
    return -1073741811;
  *ExtraCreateParameter = (struct _ECP_LIST *)Irp->UserBuffer;
  return 0;
}
