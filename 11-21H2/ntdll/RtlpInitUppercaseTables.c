/*
 * XREFs of RtlpInitUppercaseTables @ 0x1800B0B82
 * Callers:
 *     LdrpInitializeNlsInfo @ 0x1800DDFE4 (LdrpInitializeNlsInfo.c)
 * Callees:
 *     ZwGetNlsSectionPtr @ 0x1800A6040 (ZwGetNlsSectionPtr.c)
 */

__int64 __fastcall RtlpInitUppercaseTables(__int16 a1)
{
  if ( a1 )
    ZwGetNlsSectionPtr();
  qword_1801776F8 = 0LL;
  qword_180177700 = 0LL;
  qword_1801776F0 = 0LL;
  return 0LL;
}
