/*
 * XREFs of sub_14085A964 @ 0x14085A964
 * Callers:
 *     sub_14085A828 @ 0x14085A828 (sub_14085A828.c)
 * Callees:
 *     PsGetHostSilo @ 0x140203DC0 (PsGetHostSilo.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_140784CB0 @ 0x140784CB0 (sub_140784CB0.c)
 *     RtlInitCodePageTable @ 0x14085AAD0 (RtlInitCodePageTable.c)
 */

__int64 __fastcall sub_14085A964(unsigned __int16 a1, unsigned __int16 a2)
{
  ULONG v2; // ebp
  ULONG v3; // r15d
  char *v4; // rax
  _CPTABLEINFO *v5; // rdi
  PUSHORT *v6; // r14
  PUSHORT *v7; // rbx
  char *v8; // rsi
  __int64 CurrentServerSilo; // rbx
  void *v10; // rcx
  PUSHORT DBCSOffsets; // rax

  v2 = a2;
  v3 = a1;
  v4 = (char *)sub_140347DB0();
  v5 = (_CPTABLEINFO *)(v4 + 1064);
  v6 = (PUSHORT *)(v4 + 1192);
  v7 = (PUSHORT *)(v4 + 1200);
  v8 = v4 + 1128;
  if ( (_WORD)v3 != 0xFDE9 && (_WORD)v2 != 0xFDE9 )
  {
    if ( sub_140784CB0(0xBu, v3, 0LL, (_QWORD *)v4 + 149, 0LL) >= 0 )
    {
      if ( (_WORD)v2 == (_WORD)v3 )
      {
        *v7 = *v6;
        goto LABEL_6;
      }
      if ( sub_140784CB0(0xBu, v2, 0LL, v7, 0LL) >= 0 )
        goto LABEL_6;
    }
    *v6 = 0LL;
    *v7 = 0LL;
  }
LABEL_6:
  RtlInitCodePageTable(*v6, v5);
  RtlInitCodePageTable(*v7, (PCPTABLEINFO)v8);
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( CurrentServerSilo == PsGetHostSilo() )
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
      v10 = &unk_140D3BA80;
      if ( v5->DBCSCodePage )
      {
        NlsLeadByteInfo = v5->DBCSOffsets;
        DBCSOffsets = v5->DBCSOffsets;
      }
      else
      {
        NlsLeadByteInfo = &unk_140D3BA80;
        DBCSOffsets = (PUSHORT)&unk_140D3BA80;
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
        NlsOemLeadByteInfo = (PUSHORT *)&unk_140D3BA80;
      }
      *(_QWORD *)&v5[2].LeadByte[10] = v10;
      LOBYTE(NlsMbOemCodePageTag) = *((_WORD *)v8 + 6) != 0;
    }
  }
  return 0LL;
}
