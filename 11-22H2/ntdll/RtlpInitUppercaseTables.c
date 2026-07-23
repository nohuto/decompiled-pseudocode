/*
 * XREFs of RtlpInitUppercaseTables @ 0x1800ADF50
 * Callers:
 *     LdrpInitializeNlsInfo @ 0x1800DE784 (LdrpInitializeNlsInfo.c)
 * Callees:
 *     ZwGetNlsSectionPtr @ 0x1800A0DE0 (ZwGetNlsSectionPtr.c)
 */

__int64 __fastcall RtlpInitUppercaseTables(__int16 a1)
{
  NTSTATUS NlsSectionPtr; // eax
  PVOID v2; // rcx
  PVOID SectionPointer; // [rsp+48h] [rbp+10h] BYREF

  SectionPointer = 0LL;
  if ( !a1 )
    goto LABEL_6;
  NlsSectionPtr = ZwGetNlsSectionPtr(0xEu, 0, 0LL, &SectionPointer, 0LL);
  v2 = SectionPointer;
  if ( NlsSectionPtr < 0 )
    v2 = 0LL;
  SectionPointer = v2;
  if ( v2 )
  {
    _InterlockedExchange64(&qword_1801817B8, (__int64)v2 + 4);
    _InterlockedExchange64(
      &qword_1801817C0,
      (__int64)SectionPointer + 2 * *((unsigned __int16 *)SectionPointer + 1) + 4);
    qword_1801817B0 = (__int64)SectionPointer;
  }
  else
  {
LABEL_6:
    qword_1801817B8 = 0LL;
    qword_1801817C0 = 0LL;
    qword_1801817B0 = 0LL;
  }
  return 0LL;
}
