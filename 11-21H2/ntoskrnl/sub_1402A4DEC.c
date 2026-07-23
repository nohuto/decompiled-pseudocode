/*
 * XREFs of sub_1402A4DEC @ 0x1402A4DEC
 * Callers:
 *     sub_1406B9A14 @ 0x1406B9A14 (sub_1406B9A14.c)
 *     sub_1406B9FD4 @ 0x1406B9FD4 (sub_1406B9FD4.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 * Callees:
 *     FsRtlRemoveExtraCreateParameter @ 0x14072AC10 (FsRtlRemoveExtraCreateParameter.c)
 */

NTSTATUS __fastcall sub_1402A4DEC(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlRemoveExtraCreateParameter(a1, &EcpType, a2, 0LL);
}
