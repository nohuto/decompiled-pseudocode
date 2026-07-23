/*
 * XREFs of FsRtlAcknowledgeEcp @ 0x140765510
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x1402FDBE0 (FsRtlCheckOplockEx2.c)
 *     FsRtlpAttachOplockKey @ 0x140302B0C (FsRtlpAttachOplockKey.c)
 * Callees:
 *     <none>
 */

void __stdcall FsRtlAcknowledgeEcp(PVOID EcpContext)
{
  *((_DWORD *)EcpContext - 6) |= 8u;
}
