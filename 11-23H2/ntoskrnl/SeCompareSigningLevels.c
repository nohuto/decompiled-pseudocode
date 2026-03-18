/*
 * XREFs of SeCompareSigningLevels @ 0x1407E9870
 * Callers:
 *     MiCreateSystemSection @ 0x14035F7A0 (MiCreateSystemSection.c)
 *     NtSetInformationProcess @ 0x140774540 (NtSetInformationProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 SeCompareSigningLevels()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C379E0 )
    return ((__int64 (*)(void))qword_140C379E0)();
  return result;
}
