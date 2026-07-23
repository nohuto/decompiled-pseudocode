/*
 * XREFs of sub_14024013C @ 0x14024013C
 * Callers:
 *     sub_1406B9A14 @ 0x1406B9A14 (sub_1406B9A14.c)
 *     sub_1406B9BC0 @ 0x1406B9BC0 (sub_1406B9BC0.c)
 *     sub_1406B9F74 @ 0x1406B9F74 (sub_1406B9F74.c)
 *     sub_1406B9FD4 @ 0x1406B9FD4 (sub_1406B9FD4.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 * Callees:
 *     FsRtlFindExtraCreateParameter @ 0x14072AB80 (FsRtlFindExtraCreateParameter.c)
 */

NTSTATUS __fastcall sub_14024013C(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlFindExtraCreateParameter(a1, &EcpType, a2, 0LL);
}
