/*
 * XREFs of ?evaluate@_tip_TouchGestureTest@@QEAAXXZ @ 0x180590004
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_TouchGestureTest@@@details@tip@@EEAAXXZ @ 0x18058FFF0 (-evaluate@-$test_merged_data@U_tip_TouchGestureTest@@@details@tip@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x18014AA04 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_TouchGestureTest::evaluate(_tip_TouchGestureTest *this, const char *a2)
{
  _DWORD *v2; // r9
  __int16 v3; // ax
  const char *v4; // rax
  __int64 v5; // r9
  char v6; // r10
  __int16 v7; // cx
  __int16 v8; // r10
  char v9; // r10
  __int16 v10; // r11
  char v11; // r10
  __int16 v12; // r11
  char v13; // r10
  char v14; // r10

  v2 = *(_DWORD **)this;
  if ( (**(_DWORD **)this & 0x200) == 0 )
  {
    if ( *((_BYTE *)v2 + 72) )
      return;
    v3 = 16385;
    *((_BYTE *)v2 + 72) = 3;
    goto LABEL_31;
  }
  if ( !*((_DWORD *)this + 2) )
  {
    v4 = tip::details::reason_string((tip::details *)"reason::InvalidGestureType", a2);
    if ( *(_BYTE *)(v5 + 72) != v6 )
      return;
    *(_BYTE *)(v5 + 72) = 4;
    v7 = 1;
LABEL_7:
    *(_WORD *)(v5 + 74) = v7;
    goto LABEL_8;
  }
  if ( !*((_BYTE *)this + 16) )
  {
    v4 = tip::details::reason_string((tip::details *)"reason::InvalidTarget", a2);
    if ( *(_BYTE *)(v5 + 72) != (_BYTE)v8 )
      return;
    *(_WORD *)(v5 + 74) = v8;
    *(_BYTE *)(v5 + 72) = 4;
    goto LABEL_8;
  }
  if ( *((_BYTE *)this + 17) )
  {
    v4 = tip::details::reason_string((tip::details *)"reason::HasRecognizerException", a2);
    if ( *(_BYTE *)(v5 + 72) != v9 )
      return;
    *(_BYTE *)(v5 + 72) = 3;
    v7 = 5;
    goto LABEL_7;
  }
  if ( *((_DWORD *)this + 3) < 3u )
  {
    v4 = tip::details::reason_string((tip::details *)"reason::InvalidContacts", a2);
    if ( *(_BYTE *)(v5 + 72) != v11 )
      return;
    *(_BYTE *)(v5 + 72) = v10;
    v7 = v10 - 1;
    goto LABEL_7;
  }
  if ( !*((_BYTE *)this + 18) )
  {
    v4 = tip::details::reason_string((tip::details *)"reason::InvalidFinish", a2);
    if ( *(_BYTE *)(v5 + 72) != v13 )
      return;
    *(_BYTE *)(v5 + 72) = v12;
    *(_WORD *)(v5 + 74) = v12;
LABEL_8:
    *(_QWORD *)(v5 + 80) = v4;
    return;
  }
  if ( *((int *)this + 5) < 0
    || *((int *)this + 6) < 0
    || *((int *)this + 7) < 0
    || *((int *)this + 8) < 0
    || *((int *)this + 9) < 0
    || *((int *)this + 10) < 0 )
  {
    v4 = tip::details::reason_string((tip::details *)"reason::HasFailedTargetResult", a2);
    if ( *(_BYTE *)(v5 + 72) != v14 )
      return;
    *(_BYTE *)(v5 + 72) = 2;
    v7 = 4;
    goto LABEL_7;
  }
  if ( *((_BYTE *)v2 + 72) )
    return;
  v3 = 0x8000;
  *((_BYTE *)v2 + 72) = 1;
LABEL_31:
  *((_QWORD *)v2 + 10) = 0LL;
  *((_WORD *)v2 + 37) = v3;
}
