/*
 * XREFs of ?evaluate@_tip_ControlCenterDisabledTest@@QEAAXXZ @ 0x180426B94
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_ControlCenterDisabledTest@@@details@tip@@EEAAXXZ @ 0x180426B60 (-evaluate@-$test_merged_data@U_tip_ControlCenterDisabledTest@@@details@tip@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_ControlCenterDisabledTest::evaluate(_tip_ControlCenterDisabledTest *this, const char *a2)
{
  _DWORD *v2; // r9
  __int16 v4; // ax
  char v5; // cl
  const char *v6; // r11
  char v7; // r10
  __int64 v8; // r9
  const char *v9; // r11
  char v10; // r10
  const char *v11; // rax
  __int64 v12; // r9
  char v13; // r10
  char v14; // r10

  v2 = *(_DWORD **)this;
  if ( (**(_DWORD **)this & 0x200) == 0 )
  {
    if ( *((_BYTE *)v2 + 72) )
      return;
    *((_QWORD *)v2 + 10) = 0LL;
    *((_BYTE *)v2 + 72) = 3;
    v4 = 16385;
    goto LABEL_18;
  }
  v5 = *((_BYTE *)this + 8);
  if ( v5 )
  {
    if ( v5 == *((_BYTE *)this + 9) )
    {
      v11 = tip::details::reason_string((tip::details *)"reason::control_center_disabled_correctly", a2);
      if ( *(_BYTE *)(v12 + 72) == v13 )
      {
        *(_QWORD *)(v12 + 80) = v11;
        *(_BYTE *)(v12 + 72) = 1;
        *(_WORD *)(v12 + 74) = 1;
      }
    }
    else
    {
      v9 = tip::details::reason_string((tip::details *)"reason::control_center_enabled_incorrectly", a2);
      if ( *(_BYTE *)(v8 + 72) == v10 )
      {
        *(_QWORD *)(v8 + 80) = v9;
        *(_BYTE *)(v8 + 72) = 3;
        *(_WORD *)(v8 + 74) = 4;
      }
    }
  }
  else
  {
    if ( !*((_BYTE *)this + 9) )
    {
      v6 = tip::details::reason_string((tip::details *)"reason::control_center_enabled_correctly", a2);
      if ( *((_BYTE *)v2 + 72) != v7 )
        return;
      *((_BYTE *)v2 + 72) = 4;
      v4 = 3;
      goto LABEL_17;
    }
    if ( *((_BYTE *)this + 9) )
    {
      v6 = tip::details::reason_string((tip::details *)"reason::control_center_disabled_incorrectly", a2);
      if ( *((_BYTE *)v2 + 72) == v14 )
      {
        *((_BYTE *)v2 + 72) = 3;
        v4 = 2;
LABEL_17:
        *((_QWORD *)v2 + 10) = v6;
LABEL_18:
        *((_WORD *)v2 + 37) = v4;
      }
    }
  }
}
