/*
 * XREFs of IopCleanupExtraCreateParameters @ 0x1407F97EC
 * Callers:
 *     IopCreateFile @ 0x1407ADB90 (IopCreateFile.c)
 *     IoQueryInformationByName @ 0x1407F69E0 (IoQueryInformationByName.c)
 *     NtDeleteFile @ 0x1408115E0 (NtDeleteFile.c)
 * Callees:
 *     FsRtlpCleanupEcps @ 0x14066EE14 (FsRtlpCleanupEcps.c)
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
