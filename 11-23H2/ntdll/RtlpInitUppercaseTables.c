/*
 * XREFs of RtlpInitUppercaseTables @ 0x1800B0020
 * Callers:
 *     LdrpInitializeNlsInfo @ 0x1800DDB38 (LdrpInitializeNlsInfo.c)
 * Callees:
 *     ZwGetNlsSectionPtr @ 0x1800A2EA0 (ZwGetNlsSectionPtr.c)
 */

__int64 __fastcall RtlpInitUppercaseTables(__int16 a1)
{
  if ( a1 )
    ZwGetNlsSectionPtr();
  qword_180184808 = 0LL;
  qword_180184810 = 0LL;
  qword_180184800 = 0LL;
  return 0LL;
}
