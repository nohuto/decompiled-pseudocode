/*
 * XREFs of RtlpInitCodePageTables @ 0x1800ADE10
 * Callers:
 *     LdrpInitializeNlsInfo @ 0x1800DE784 (LdrpInitializeNlsInfo.c)
 * Callees:
 *     ZwGetNlsSectionPtr @ 0x1800A0DE0 (ZwGetNlsSectionPtr.c)
 *     RtlInitCodePageTable @ 0x1800ADD20 (RtlInitCodePageTable.c)
 */

__int64 __fastcall RtlpInitCodePageTables(unsigned __int16 a1, unsigned __int16 a2)
{
  BOOLEAN v3; // bl
  ULONG v4; // edi
  unsigned __int16 *v5; // rdx
  unsigned __int16 *DBCSOffsets; // rax
  __int64 result; // rax

  v3 = 0;
  v4 = a2;
  if ( a1 != 0xFDE9 && a2 != 0xFDE9 )
  {
    if ( ZwGetNlsSectionPtr(0xBu, a1, 0LL, &TableBase, 0LL) >= 0 )
    {
      if ( (_WORD)v4 == a1 )
      {
        *(&TableBase + 1) = TableBase;
        goto LABEL_8;
      }
      if ( ZwGetNlsSectionPtr(0xBu, v4, 0LL, &TableBase + 1, 0LL) >= 0 )
        goto LABEL_8;
    }
    *(_OWORD *)&TableBase = 0LL;
  }
LABEL_8:
  RtlInitCodePageTable((PUSHORT)TableBase, &GlobalRtlNlsState);
  RtlInitCodePageTable((PUSHORT)*(&TableBase + 1), &CodePageTable);
  if ( GlobalRtlNlsState.CodePage == 0xFDE9 || CodePageTable.CodePage == 0xFDE9 )
  {
    NlsAnsiCodePage = -535;
    NlsMbCodePageTag = 0;
  }
  else
  {
    v5 = (unsigned __int16 *)&NlsEmptyLeadByteInfoTable;
    NlsAnsiCodePage = GlobalRtlNlsState.CodePage;
    DBCSOffsets = (unsigned __int16 *)&NlsEmptyLeadByteInfoTable;
    if ( GlobalRtlNlsState.DBCSCodePage )
      DBCSOffsets = GlobalRtlNlsState.DBCSOffsets;
    NlsMbCodePageTag = GlobalRtlNlsState.DBCSCodePage != 0;
    qword_1801817A0 = (__int64)DBCSOffsets;
    if ( CodePageTable.DBCSCodePage )
      v5 = CodePageTable.DBCSOffsets;
    v3 = CodePageTable.DBCSCodePage != 0;
    qword_1801817A8 = (__int64)v5;
  }
  result = 0LL;
  NlsMbOemCodePageTag = v3;
  return result;
}
