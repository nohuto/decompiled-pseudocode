/*
 * XREFs of FsRtlAcknowledgeEcp @ 0x1406B54B0
 * Callers:
 *     sub_1402A22E0 @ 0x1402A22E0 (sub_1402A22E0.c)
 *     FsRtlCheckOplockEx2 @ 0x1402A5D00 (FsRtlCheckOplockEx2.c)
 * Callees:
 *     <none>
 */

void __stdcall FsRtlAcknowledgeEcp(PVOID EcpContext)
{
  *((_DWORD *)EcpContext - 6) |= 8u;
}
