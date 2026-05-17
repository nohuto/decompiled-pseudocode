/*
 * XREFs of RtlpInitCodePageTables @ 0x1800ADE10
 * Callers:
 *     LdrpInitializeNlsInfo @ 0x1800DE784 (LdrpInitializeNlsInfo.c)
 * Callees:
 *     ZwGetNlsSectionPtr @ 0x1800A0DE0 (ZwGetNlsSectionPtr.c)
 *     RtlInitCodePageTable @ 0x1800ADD20 (RtlInitCodePageTable.c)
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
        *((_QWORD *)&xmmword_180181790 + 1) = xmmword_180181790;
        goto LABEL_8;
      }
      if ( (int)ZwGetNlsSectionPtr() >= 0 )
        goto LABEL_8;
    }
    xmmword_180181790 = 0LL;
  }
LABEL_8:
  RtlInitCodePageTable((unsigned __int16 *)xmmword_180181790, (__int64)&GlobalRtlNlsState);
  RtlInitCodePageTable(*((unsigned __int16 **)&xmmword_180181790 + 1), (__int64)&word_180181750);
  if ( GlobalRtlNlsState == -535 || word_180181750 == -535 )
  {
    NlsAnsiCodePage = -535;
    NlsMbCodePageTag = 0;
  }
  else
  {
    v5 = &NlsEmptyLeadByteInfoTable;
    NlsAnsiCodePage = GlobalRtlNlsState;
    v6 = &NlsEmptyLeadByteInfoTable;
    if ( word_18018171C )
      v6 = (void *)qword_180181748;
    NlsMbCodePageTag = word_18018171C != 0;
    qword_1801817A0 = (__int64)v6;
    if ( word_18018175C )
      v5 = (void *)qword_180181788;
    v3 = word_18018175C != 0;
    qword_1801817A8 = (__int64)v5;
  }
  result = 0LL;
  NlsMbOemCodePageTag = v3;
  return result;
}
