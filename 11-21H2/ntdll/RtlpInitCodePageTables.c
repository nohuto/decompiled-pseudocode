/*
 * XREFs of RtlpInitCodePageTables @ 0x1800B0A42
 * Callers:
 *     LdrpInitializeNlsInfo @ 0x1800DDFE4 (LdrpInitializeNlsInfo.c)
 * Callees:
 *     ZwGetNlsSectionPtr @ 0x1800A6040 (ZwGetNlsSectionPtr.c)
 *     RtlInitCodePageTable @ 0x1800F0300 (RtlInitCodePageTable.c)
 */

__int64 __fastcall RtlpInitCodePageTables(__int16 a1, __int16 a2)
{
  bool v3; // bl
  void *v5; // rdx
  void *v6; // rax
  __int64 result; // rax

  v3 = 0;
  if ( a1 != -535 && a2 != -535 )
  {
    if ( (int)ZwGetNlsSectionPtr() >= 0 )
    {
      if ( a2 == a1 )
      {
        *((_QWORD *)&xmmword_1801776D0 + 1) = xmmword_1801776D0;
        goto LABEL_8;
      }
      if ( (int)ZwGetNlsSectionPtr() >= 0 )
        goto LABEL_8;
    }
    xmmword_1801776D0 = 0LL;
  }
LABEL_8:
  RtlInitCodePageTable(xmmword_1801776D0, &GlobalRtlNlsState);
  RtlInitCodePageTable(*((_QWORD *)&xmmword_1801776D0 + 1), &word_180177690);
  if ( GlobalRtlNlsState == -535 || word_180177690 == -535 )
  {
    NlsAnsiCodePage = -535;
    NlsMbCodePageTag = 0;
  }
  else
  {
    v5 = &NlsEmptyLeadByteInfoTable;
    NlsAnsiCodePage = GlobalRtlNlsState;
    v6 = &NlsEmptyLeadByteInfoTable;
    if ( word_18017765C )
      v6 = (void *)qword_180177688;
    NlsMbCodePageTag = word_18017765C != 0;
    qword_1801776E0 = (__int64)v6;
    if ( word_18017769C )
      v5 = (void *)qword_1801776C8;
    v3 = word_18017769C != 0;
    qword_1801776E8 = (__int64)v5;
  }
  result = 0LL;
  NlsMbOemCodePageTag = v3;
  return result;
}
