/*
 * XREFs of RtlpInitUppercaseTables @ 0x1800ADF50
 * Callers:
 *     LdrpInitializeNlsInfo @ 0x1800DE784 (LdrpInitializeNlsInfo.c)
 * Callees:
 *     ZwGetNlsSectionPtr @ 0x1800A0DE0 (ZwGetNlsSectionPtr.c)
 */

__int64 __fastcall RtlpInitUppercaseTables(__int16 a1)
{
  if ( a1 )
    ZwGetNlsSectionPtr();
  qword_1801817B8 = 0LL;
  qword_1801817C0 = 0LL;
  qword_1801817B0 = 0LL;
  return 0LL;
}
