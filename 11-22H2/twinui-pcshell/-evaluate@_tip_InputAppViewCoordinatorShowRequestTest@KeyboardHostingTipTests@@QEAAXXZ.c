/*
 * XREFs of ?evaluate@_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@QEAAXXZ @ 0x18020C7CC
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@@details@tip@@EEAAXXZ @ 0x18020C5C0 (-evaluate@-$test_merged_data@U_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTest.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest::evaluate(
        KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest *this,
        const char *a2)
{
  const char *v2; // rax
  __int16 v3; // r11
  __int64 *v4; // r10
  __int64 v5; // rdx
  __int16 v6; // cx
  __int64 *v7; // r10
  char v8; // r11
  __int64 v9; // r9
  char v10; // cl
  int v11; // eax
  const char *v12; // rax
  char v13; // r11
  const char *v14; // rax
  __int64 v15; // r9
  __int16 v16; // r10
  char v17; // r11
  __int16 v18; // cx
  char v19; // r11
  __int16 v20; // r10
  char v21; // r11
  __int16 v22; // r11

  if ( *((_BYTE *)this + 9) )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::invalid_appviewid", a2);
    v5 = *v4;
    if ( *(_BYTE *)(*v4 + 72) != (_BYTE)v3 )
      return;
    *(_BYTE *)(v5 + 72) = v3 + 3;
    v6 = v3 + 22;
    goto LABEL_4;
  }
  if ( !*((_BYTE *)this + 12) || !*((_BYTE *)this + 11) )
  {
    v9 = *(_QWORD *)this;
    if ( (**(_DWORD **)this & 0x200) == 0 )
    {
      if ( *(_BYTE *)(v9 + 72) )
        return;
      *(_QWORD *)(v9 + 80) = 0LL;
      *(_WORD *)(v9 + 74) = 16385;
      v10 = 3;
      goto LABEL_29;
    }
    v11 = *((_DWORD *)this + 4);
    if ( !v11 )
    {
      v12 = tip::details::reason_string((tip::details *)"reason::view_touchkeyboard", a2);
      if ( *(_BYTE *)(v9 + 72) != v13 )
        return;
      v10 = 1;
      *(_WORD *)(v9 + 74) = 1;
LABEL_28:
      *(_QWORD *)(v9 + 80) = v12;
LABEL_29:
      *(_BYTE *)(v9 + 72) = v10;
      return;
    }
    if ( v11 == 4 )
    {
      v14 = tip::details::reason_string((tip::details *)"reason::view_voicetyping", a2);
      if ( *(_BYTE *)(v15 + 72) != v17 )
        return;
      *(_BYTE *)(v15 + 72) = v16 - 3;
      v18 = v16 - 2;
    }
    else
    {
      if ( v11 != 2 )
      {
        if ( v11 == 13 )
        {
          v12 = tip::details::reason_string((tip::details *)"reason::view_smartactions", a2);
          if ( *(_BYTE *)(v9 + 72) != v21 )
            return;
          *(_WORD *)(v9 + 74) = v20;
        }
        else
        {
          v12 = tip::details::reason_string((tip::details *)"reason::view_unknown", a2);
          if ( *(_BYTE *)(v9 + 72) != (_BYTE)v22 )
            return;
          *(_WORD *)(v9 + 74) = v22;
        }
        v10 = 1;
        goto LABEL_28;
      }
      v14 = tip::details::reason_string((tip::details *)"reason::view_emoji", a2);
      if ( *(_BYTE *)(v15 + 72) != v19 )
        return;
      *(_BYTE *)(v15 + 72) = 1;
      v18 = 3;
    }
    *(_WORD *)(v15 + 74) = v18;
    *(_QWORD *)(v15 + 80) = v14;
    return;
  }
  v2 = tip::details::reason_string((tip::details *)"reason::still_cloaked", a2);
  v5 = *v7;
  if ( *(_BYTE *)(*v7 + 72) == v8 )
  {
    *(_BYTE *)(v5 + 72) = 3;
    v6 = 21;
LABEL_4:
    *(_WORD *)(v5 + 74) = v6;
    *(_QWORD *)(v5 + 80) = v2;
  }
}
