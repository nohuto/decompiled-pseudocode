/*
 * XREFs of ?evaluate@_tip_SearchSpartanMitigationTest@@QEAAXXZ @ 0x1801F0D90
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@EEAAXXZ @ 0x1801F0CA0 (-evaluate@-$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_SearchSpartanMitigationTest::evaluate(_tip_SearchSpartanMitigationTest *this, const char *a2)
{
  __int64 v2; // r9
  __int16 v3; // ax
  const char *v4; // rax
  __int64 v5; // r9
  char v6; // r10
  __int16 v7; // cx
  __int64 v8; // r9
  const char *v9; // r11
  char v10; // r10
  char v11; // r10
  __int16 v12; // r10
  const char *v13; // rax
  char v14; // r10

  v2 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v2 + 56) & 0x200) == 0 )
  {
    if ( *(_BYTE *)(v2 + 152) )
      return;
    *(_QWORD *)(v2 + 160) = 0LL;
    *(_BYTE *)(v2 + 152) = 3;
    v3 = 16385;
LABEL_20:
    *(_WORD *)(v2 + 154) = v3;
    return;
  }
  if ( *((_BYTE *)this + 19) )
  {
    v4 = tip::details::reason_string((tip::details *)"Reason::NotImpactedBySubdomainIssue", a2);
    if ( *(_BYTE *)(v5 + 152) != v6 )
      return;
    v7 = 4;
    *(_BYTE *)(v5 + 152) = 4;
    goto LABEL_7;
  }
  if ( !*((_BYTE *)this + 16) )
  {
    if ( !*((_BYTE *)this + 17) )
    {
      if ( !*((_BYTE *)this + 18) )
      {
        v13 = tip::details::reason_string((tip::details *)"Reason::NoMitigationApplied", a2);
        if ( *(_BYTE *)(v2 + 152) != v14 )
          return;
        *(_QWORD *)(v2 + 160) = v13;
        *(_BYTE *)(v2 + 152) = 1;
        v3 = 3;
        goto LABEL_20;
      }
      v4 = tip::details::reason_string((tip::details *)"Reason::AppliedMitigation", a2);
      if ( *(_BYTE *)(v5 + 152) != (_BYTE)v12 )
        return;
      *(_WORD *)(v5 + 154) = v12;
      *(_BYTE *)(v5 + 152) = 1;
LABEL_8:
      *(_QWORD *)(v5 + 160) = v4;
      return;
    }
    v4 = tip::details::reason_string((tip::details *)"Reason::MitigationWorked", a2);
    if ( *(_BYTE *)(v5 + 152) != v11 )
      return;
    *(_BYTE *)(v5 + 152) = 1;
    v7 = 2;
LABEL_7:
    *(_WORD *)(v5 + 154) = v7;
    goto LABEL_8;
  }
  v9 = tip::details::reason_string((tip::details *)"Reason::ReAppliedMitigation", a2);
  if ( *(_BYTE *)(v8 + 152) == v10 )
  {
    *(_QWORD *)(v8 + 160) = v9;
    *(_BYTE *)(v8 + 152) = 3;
    *(_WORD *)(v8 + 154) = 1;
  }
}
