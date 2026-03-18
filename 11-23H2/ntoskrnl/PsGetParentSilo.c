/*
 * XREFs of PsGetParentSilo @ 0x1406831E0
 * Callers:
 *     VRegEnabledInJob @ 0x14068EB28 (VRegEnabledInJob.c)
 *     NtQueryInformationJobObject @ 0x1406A1130 (NtQueryInformationJobObject.c)
 *     CmpParseKey @ 0x1406E6980 (CmpParseKey.c)
 *     IopParseDevice @ 0x14072CD50 (IopParseDevice.c)
 *     PspConvertSiloToServerSilo @ 0x1409ACBE4 (PspConvertSiloToServerSilo.c)
 *     ObCreateSiloRootDirectory @ 0x140A73B00 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x140A73E44 (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     PspGetJobSilo @ 0x14031C814 (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetParentSilo(__int64 a1)
{
  if ( a1 )
    return PspGetJobSilo(*(_QWORD *)(a1 + 1288));
  else
    return 0LL;
}
