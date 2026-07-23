/*
 * XREFs of SeCompareSigningLevels @ 0x1407E9B40
 * Callers:
 *     MiCreateSystemSection @ 0x14035F940 (MiCreateSystemSection.c)
 *     NtSetInformationProcess @ 0x140774730 (NtSetInformationProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 SeCompareSigningLevels()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C37980 )
    return ((__int64 (*)(void))qword_140C37980)();
  return result;
}
