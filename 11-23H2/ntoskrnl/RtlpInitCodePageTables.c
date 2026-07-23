/*
 * XREFs of RtlpInitCodePageTables @ 0x140821458
 * Callers:
 *     ExInitializeNls @ 0x140821B84 (ExInitializeNls.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x14028A220 (PsGetCurrentServerSilo.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x1402936E0 (PdcCreateWatchdogAroundClientCall.c)
 *     NtGetNlsSectionPtr @ 0x1407A2090 (NtGetNlsSectionPtr.c)
 *     RtlInitCodePageTable @ 0x1408215D0 (RtlInitCodePageTable.c)
 */

__int64 __fastcall RtlpInitCodePageTables(unsigned __int16 a1, unsigned __int16 a2)
{
  ULONG v2; // ebp
  ULONG v3; // r15d
  char *CurrentServerSiloGlobals; // rax
  _CPTABLEINFO *v5; // rdi
  PUSHORT *v6; // r14
  PVOID *v7; // rbx
  char *v8; // rsi
  __int64 CurrentServerSilo; // rbx
  void *v10; // rcx
  unsigned __int16 *DBCSOffsets; // rax

  v2 = a2;
  v3 = a1;
  CurrentServerSiloGlobals = (char *)PsGetCurrentServerSiloGlobals();
  v5 = (_CPTABLEINFO *)(CurrentServerSiloGlobals + 1064);
  v6 = (PUSHORT *)(CurrentServerSiloGlobals + 1192);
  v7 = (PVOID *)(CurrentServerSiloGlobals + 1200);
  v8 = CurrentServerSiloGlobals + 1128;
  if ( (_WORD)v3 != 0xFDE9 && (_WORD)v2 != 0xFDE9 )
  {
    if ( NtGetNlsSectionPtr(0xBu, v3, 0LL, (PVOID *)CurrentServerSiloGlobals + 149, 0LL) >= 0 )
    {
      if ( (_WORD)v2 == (_WORD)v3 )
      {
        *v7 = *v6;
        goto LABEL_6;
      }
      if ( NtGetNlsSectionPtr(0xBu, v2, 0LL, v7, 0LL) >= 0 )
        goto LABEL_6;
    }
    *v6 = 0LL;
    *v7 = 0LL;
  }
LABEL_6:
  RtlInitCodePageTable(*v6, v5);
  RtlInitCodePageTable((PUSHORT)*v7, (PCPTABLEINFO)v8);
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( CurrentServerSilo == PdcCreateWatchdogAroundClientCall() )
  {
    if ( v5->CodePage == 0xFDE9 || *(_WORD *)v8 == 0xFDE9 )
    {
      NlsAnsiCodePage = -535;
      NlsOemCodePage = -535;
      LOBYTE(NlsMbCodePageTag) = 0;
      LOBYTE(NlsMbOemCodePageTag) = 0;
    }
    else
    {
      NlsAnsiCodePage = v5->CodePage;
      v10 = &NlsEmptyLeadByteInfoTable;
      if ( v5->DBCSCodePage )
      {
        NlsLeadByteInfo = v5->DBCSOffsets;
        DBCSOffsets = v5->DBCSOffsets;
      }
      else
      {
        NlsLeadByteInfo = &NlsEmptyLeadByteInfoTable;
        DBCSOffsets = (unsigned __int16 *)&NlsEmptyLeadByteInfoTable;
      }
      *(_QWORD *)&v5[2].LeadByte[2] = DBCSOffsets;
      LOBYTE(NlsMbCodePageTag) = v5->DBCSCodePage != 0;
      NlsOemCodePage = *(_WORD *)v8;
      if ( *((_WORD *)v8 + 6) )
      {
        NlsOemLeadByteInfo = (PUSHORT *)*((_QWORD *)v8 + 7);
        v10 = (void *)*((_QWORD *)v8 + 7);
      }
      else
      {
        NlsOemLeadByteInfo = (PUSHORT *)&NlsEmptyLeadByteInfoTable;
      }
      *(_QWORD *)&v5[2].LeadByte[10] = v10;
      LOBYTE(NlsMbOemCodePageTag) = *((_WORD *)v8 + 6) != 0;
    }
  }
  return 0LL;
}
