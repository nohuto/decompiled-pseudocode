/*
 * XREFs of PsGetParentSilo @ 0x1406831E0
 * Callers:
 *     VRegEnabledInJob @ 0x14068EB28 (VRegEnabledInJob.c)
 *     NtQueryInformationJobObject @ 0x1406A1130 (NtQueryInformationJobObject.c)
 *     CmpParseKey @ 0x1406E69B0 (CmpParseKey.c)
 *     IopParseDevice @ 0x14072CF50 (IopParseDevice.c)
 *     PspConvertSiloToServerSilo @ 0x1409ACDE4 (PspConvertSiloToServerSilo.c)
 *     ObCreateSiloRootDirectory @ 0x140A73DB0 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x140A740F4 (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     PspGetJobSilo @ 0x14031CAA4 (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetParentSilo(__int64 a1)
{
  if ( a1 )
    return PspGetJobSilo(*(_QWORD *)(a1 + 1288));
  else
    return 0LL;
}
