/*
 * XREFs of RtlpInitCodePageTables @ 0x1800AFEE0
 * Callers:
 *     LdrpInitializeNlsInfo @ 0x1800DDB38 (LdrpInitializeNlsInfo.c)
 * Callees:
 *     ZwGetNlsSectionPtr @ 0x1800A2EA0 (ZwGetNlsSectionPtr.c)
 *     RtlInitCodePageTable @ 0x1800AFDF0 (RtlInitCodePageTable.c)
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
        *((_QWORD *)&xmmword_1801847E0 + 1) = xmmword_1801847E0;
        goto LABEL_8;
      }
      if ( (int)ZwGetNlsSectionPtr() >= 0 )
        goto LABEL_8;
    }
    xmmword_1801847E0 = 0LL;
  }
LABEL_8:
  RtlInitCodePageTable((unsigned __int16 *)xmmword_1801847E0, (__int64)&GlobalRtlNlsState);
  RtlInitCodePageTable(*((unsigned __int16 **)&xmmword_1801847E0 + 1), (__int64)&word_1801847A0);
  if ( GlobalRtlNlsState == -535 || word_1801847A0 == -535 )
  {
    NlsAnsiCodePage = -535;
    NlsMbCodePageTag = 0;
  }
  else
  {
    v5 = &NlsEmptyLeadByteInfoTable;
    NlsAnsiCodePage = GlobalRtlNlsState;
    v6 = &NlsEmptyLeadByteInfoTable;
    if ( word_18018476C )
      v6 = (void *)qword_180184798;
    NlsMbCodePageTag = word_18018476C != 0;
    qword_1801847F0 = (__int64)v6;
    if ( word_1801847AC )
      v5 = (void *)qword_1801847D8;
    v3 = word_1801847AC != 0;
    qword_1801847F8 = (__int64)v5;
  }
  result = 0LL;
  NlsMbOemCodePageTag = v3;
  return result;
}
