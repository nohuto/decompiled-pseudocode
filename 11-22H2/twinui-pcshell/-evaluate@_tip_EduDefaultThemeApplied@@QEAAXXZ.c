/*
 * XREFs of ?evaluate@_tip_EduDefaultThemeApplied@@QEAAXXZ @ 0x1806E4214
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_EduDefaultThemeApplied@@@details@tip@@EEAAXXZ @ 0x1806E41E0 (-evaluate@-$test_merged_data@U_tip_EduDefaultThemeApplied@@@details@tip@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_EduDefaultThemeApplied::evaluate(_tip_EduDefaultThemeApplied *this, const char *a2)
{
  __int64 v2; // r9
  __int16 v3; // ax
  const char *v4; // rax
  __int64 v5; // r9
  char v6; // r10

  v2 = *(_QWORD *)this;
  if ( *(_QWORD *)(*(_QWORD *)this + 8LL) != *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    if ( *(_BYTE *)(v2 + 72) )
      return;
    *(_BYTE *)(v2 + 72) = 3;
    v3 = 0x4000;
LABEL_12:
    *(_QWORD *)(v2 + 80) = 0LL;
    *(_WORD *)(v2 + 74) = v3;
    return;
  }
  if ( *((_BYTE *)this + 8) )
  {
    if ( (*(_DWORD *)v2 & 0x200) != 0 )
    {
      if ( *(_BYTE *)(v2 + 72) )
        return;
      v3 = 0x8000;
      *(_BYTE *)(v2 + 72) = 1;
    }
    else
    {
      if ( *(_BYTE *)(v2 + 72) )
        return;
      *(_BYTE *)(v2 + 72) = 3;
      v3 = 16385;
    }
    goto LABEL_12;
  }
  v4 = tip::details::reason_string((tip::details *)"reason::failure_default_edu_theme_not_applied", a2);
  if ( *(_BYTE *)(v5 + 72) == v6 )
  {
    *(_BYTE *)(v5 + 72) = 3;
    *(_WORD *)(v5 + 74) = 1;
    *(_QWORD *)(v5 + 80) = v4;
  }
}
