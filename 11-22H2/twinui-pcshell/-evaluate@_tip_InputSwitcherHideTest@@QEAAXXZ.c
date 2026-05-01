/*
 * XREFs of ?evaluate@_tip_InputSwitcherHideTest@@QEAAXXZ @ 0x1802EB3C2
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_InputSwitcherHideTest@@@details@tip@@EEAAXXZ @ 0x1802EB3B0 (-evaluate@-$test_merged_data@U_tip_InputSwitcherHideTest@@@details@tip@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_InputSwitcherHideTest::evaluate(_tip_InputSwitcherHideTest *this, const char *a2)
{
  const char *v2; // rax
  __int16 v3; // r10
  __int64 *v4; // r9
  __int64 v5; // rcx
  __int16 v6; // dx
  __int16 v7; // r10
  __int64 *v8; // r9
  __int64 *v9; // r9
  char v10; // r10
  __int64 v11; // rax
  __int16 v12; // cx

  if ( !*((_BYTE *)this + 9) )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::control_center_hidden", a2);
    v5 = *v4;
    if ( *(_BYTE *)(*v4 + 72) != (_BYTE)v3 )
      return;
    *(_BYTE *)(v5 + 72) = 4;
    v6 = v3 + 2;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 8) )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::timed_out", a2);
    v5 = *v8;
    if ( *(_BYTE *)(*v8 + 72) == (_BYTE)v7 )
    {
      *(_BYTE *)(v5 + 72) = 3;
      *(_WORD *)(v5 + 74) = v7;
      goto LABEL_5;
    }
  }
  else if ( *((_BYTE *)this + 10) )
  {
    v11 = *(_QWORD *)this;
    if ( (**(_DWORD **)this & 0x200) != 0 )
    {
      if ( *(_BYTE *)(v11 + 72) )
        return;
      v12 = 0x8000;
      *(_BYTE *)(v11 + 72) = 1;
    }
    else
    {
      if ( *(_BYTE *)(v11 + 72) )
        return;
      *(_BYTE *)(v11 + 72) = 3;
      v12 = 16385;
    }
    *(_QWORD *)(v11 + 80) = 0LL;
    *(_WORD *)(v11 + 74) = v12;
  }
  else
  {
    v2 = tip::details::reason_string((tip::details *)"reason::control_center_not_available", a2);
    v5 = *v9;
    if ( *(_BYTE *)(*v9 + 72) == v10 )
    {
      *(_BYTE *)(v5 + 72) = 3;
      v6 = 1;
LABEL_4:
      *(_WORD *)(v5 + 74) = v6;
LABEL_5:
      *(_QWORD *)(v5 + 80) = v2;
    }
  }
}
