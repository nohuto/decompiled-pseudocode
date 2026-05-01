/*
 * XREFs of ?evaluate@_tip_WinXMenuEnumerationTest@@QEAAXXZ @ 0x1801E7F74
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_WinXMenuEnumerationTest@@@details@tip@@EEAAXXZ @ 0x1801E7F60 (-evaluate@-$test_merged_data@U_tip_WinXMenuEnumerationTest@@@details@tip@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x18014AA04 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_WinXMenuEnumerationTest::evaluate(_tip_WinXMenuEnumerationTest *this, const char *a2)
{
  _DWORD *v2; // r9
  __int16 v3; // ax
  __int64 v4; // r9
  const char *v5; // r11
  char v6; // r10
  const char *v7; // r11
  char v8; // r10

  v2 = *(_DWORD **)this;
  if ( (**(_DWORD **)this & 0x200) == 0 )
  {
    if ( *((_BYTE *)v2 + 72) )
      return;
    *((_BYTE *)v2 + 72) = 3;
    v3 = 16385;
    goto LABEL_15;
  }
  if ( *((_QWORD *)v2 + 1) != *((_QWORD *)v2 + 2) )
  {
    if ( *((_BYTE *)v2 + 72) )
      return;
    *((_BYTE *)v2 + 72) = 3;
    v3 = 0x4000;
    goto LABEL_15;
  }
  if ( *((_BYTE *)this + 9) )
  {
    if ( *((_BYTE *)this + 10) )
    {
      v7 = tip::details::reason_string((tip::details *)"reason::obsolete_link_found", a2);
      if ( *((_BYTE *)v2 + 72) != v8 )
        return;
      *((_BYTE *)v2 + 72) = 2;
      v3 = 3;
      *((_QWORD *)v2 + 10) = v7;
      goto LABEL_16;
    }
    if ( *((_BYTE *)v2 + 72) )
      return;
    v3 = 0x8000;
    *((_BYTE *)v2 + 72) = 1;
LABEL_15:
    *((_QWORD *)v2 + 10) = 0LL;
LABEL_16:
    *((_WORD *)v2 + 37) = v3;
    return;
  }
  v5 = tip::details::reason_string((tip::details *)"reason::links_missing", a2);
  if ( *(_BYTE *)(v4 + 72) == v6 )
  {
    *(_QWORD *)(v4 + 80) = v5;
    *(_BYTE *)(v4 + 72) = 3;
    *(_WORD *)(v4 + 74) = 1;
  }
}
