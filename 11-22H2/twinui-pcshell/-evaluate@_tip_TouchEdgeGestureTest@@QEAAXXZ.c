/*
 * XREFs of ?evaluate@_tip_TouchEdgeGestureTest@@QEAAXXZ @ 0x180656064
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_TouchEdgeGestureTest@@@details@tip@@EEAAXXZ @ 0x180656050 (-evaluate@-$test_merged_data@U_tip_TouchEdgeGestureTest@@@details@tip@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_TouchEdgeGestureTest::evaluate(_tip_TouchEdgeGestureTest *this, const char *a2)
{
  _DWORD *v2; // r9
  __int16 v3; // ax
  const char *v4; // rax
  __int64 v5; // r9
  char v6; // r11
  __int16 v7; // r10
  char v8; // r11
  __int16 v9; // cx
  char v10; // r10
  __int16 v11; // r11
  char v12; // r10

  v2 = *(_DWORD **)this;
  if ( (**(_DWORD **)this & 0x200) == 0 )
  {
    if ( *((_BYTE *)v2 + 72) )
      return;
    v3 = 16385;
    *((_BYTE *)v2 + 72) = 3;
    goto LABEL_20;
  }
  if ( *((_QWORD *)this + 1) > 3uLL )
  {
    v4 = tip::details::reason_string((tip::details *)"reason::InvalidSourceId", a2);
    if ( *(_BYTE *)(v5 + 72) )
      return;
    *(_BYTE *)(v5 + 72) = v6;
    *(_WORD *)(v5 + 74) = 0;
    goto LABEL_7;
  }
  if ( *((_BYTE *)this + 24) )
  {
    v4 = tip::details::reason_string((tip::details *)"reason::QueryMonitorFailure", a2);
    if ( *(_BYTE *)(v5 + 72) != (_BYTE)v7 )
      return;
    *(_BYTE *)(v5 + 72) = v8;
    v9 = v7 + 1;
LABEL_11:
    *(_WORD *)(v5 + 74) = v9;
    goto LABEL_7;
  }
  if ( !*((_BYTE *)this + 25) )
  {
    v4 = tip::details::reason_string((tip::details *)"reason::StartGestureFailure", a2);
    if ( *(_BYTE *)(v5 + 72) != v10 )
      return;
    *(_BYTE *)(v5 + 72) = 1;
    v9 = 2;
    goto LABEL_11;
  }
  if ( !*((_BYTE *)this + 26) )
  {
    v4 = tip::details::reason_string((tip::details *)"reason::StartAnimationFailure", a2);
    if ( *(_BYTE *)(v5 + 72) != v12 )
      return;
    *(_WORD *)(v5 + 74) = v11;
    *(_BYTE *)(v5 + 72) = 2;
LABEL_7:
    *(_QWORD *)(v5 + 80) = v4;
    return;
  }
  if ( *((_BYTE *)v2 + 72) )
    return;
  v3 = 0x8000;
  *((_BYTE *)v2 + 72) = 1;
LABEL_20:
  *((_QWORD *)v2 + 10) = 0LL;
  *((_WORD *)v2 + 37) = v3;
}
