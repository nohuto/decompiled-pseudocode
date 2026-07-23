/*
 * XREFs of IopCleanupExtraCreateParameters @ 0x1407BF450
 * Callers:
 *     IoQueryInformationByName @ 0x1407BF160 (IoQueryInformationByName.c)
 *     NtDeleteFile @ 0x140874570 (NtDeleteFile.c)
 * Callees:
 *     FsRtlpCleanupEcps @ 0x14073E3C0 (FsRtlpCleanupEcps.c)
 */

void __fastcall IopCleanupExtraCreateParameters(__int64 a1)
{
  struct _ECP_LIST *v2; // rcx

  v2 = *(struct _ECP_LIST **)(a1 + 168);
  if ( v2 )
  {
    if ( FsRtlpCleanupEcps(v2) )
      *(_QWORD *)(a1 + 168) = 0LL;
  }
}
