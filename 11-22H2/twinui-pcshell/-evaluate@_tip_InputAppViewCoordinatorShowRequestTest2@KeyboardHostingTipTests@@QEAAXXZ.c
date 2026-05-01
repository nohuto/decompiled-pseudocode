/*
 * XREFs of ?evaluate@_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@QEAAXXZ @ 0x18020C5D4
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@@details@tip@@EEAAXXZ @ 0x18020C5A0 (-evaluate@-$test_merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTes.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2::evaluate(
        KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2 *this,
        const char *a2)
{
  const char *v2; // rax
  __int64 *v3; // r10
  __int64 v4; // rdx
  char v5; // r11
  __int16 v6; // cx
  const char *v7; // rax
  __int64 *v8; // r10
  __int64 v9; // rcx
  char v10; // r11
  __int64 *v11; // r10
  char v12; // r11
  __int64 *v13; // r10
  char v14; // r11
  __int64 v15; // r9
  char v16; // cl
  int v17; // eax
  const char *v18; // rax
  char v19; // r11
  const char *v20; // rax
  __int64 v21; // r9
  __int16 v22; // r10
  char v23; // r11
  __int16 v24; // cx
  char v25; // r11
  __int16 v26; // r10
  char v27; // r11
  __int16 v28; // r11

  if ( *((_BYTE *)this + 8) )
    *(_DWORD *)(*(_QWORD *)this + 92LL) = 56561732;
  if ( *((_BYTE *)this + 17) )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::refused_by_tabtipadapter", a2);
    v4 = *v3;
    if ( *(_BYTE *)(*v3 + 72) != v5 )
      return;
    *(_BYTE *)(v4 + 72) = 3;
    v6 = 25;
    goto LABEL_6;
  }
  if ( !*((_BYTE *)this + 16) )
  {
    if ( *((_BYTE *)this + 10) )
    {
      v2 = tip::details::reason_string((tip::details *)"reason::view_hidden", a2);
      v4 = *v11;
      if ( *(_BYTE *)(*v11 + 72) != v12 )
        return;
      *(_BYTE *)(v4 + 72) = 1;
      v6 = 23;
      goto LABEL_6;
    }
    if ( !*((_BYTE *)this + 9) )
    {
      v2 = tip::details::reason_string((tip::details *)"reason::still_cloaked", a2);
      v4 = *v13;
      if ( *(_BYTE *)(*v13 + 72) != v14 )
        return;
      *(_BYTE *)(v4 + 72) = 3;
      v6 = 21;
LABEL_6:
      *(_WORD *)(v4 + 74) = v6;
      *(_QWORD *)(v4 + 80) = v2;
      return;
    }
    v15 = *(_QWORD *)this;
    if ( (**(_DWORD **)this & 0x200) == 0 )
    {
      if ( *(_BYTE *)(v15 + 72) )
        return;
      *(_QWORD *)(v15 + 80) = 0LL;
      *(_WORD *)(v15 + 74) = 16385;
      v16 = 3;
      goto LABEL_36;
    }
    v17 = *((_DWORD *)this + 3);
    if ( !v17 )
    {
      v18 = tip::details::reason_string((tip::details *)"reason::view_touchkeyboard", a2);
      if ( *(_BYTE *)(v15 + 72) != v19 )
        return;
      v16 = 1;
      *(_WORD *)(v15 + 74) = 1;
LABEL_35:
      *(_QWORD *)(v15 + 80) = v18;
LABEL_36:
      *(_BYTE *)(v15 + 72) = v16;
      return;
    }
    if ( v17 == 4 )
    {
      v20 = tip::details::reason_string((tip::details *)"reason::view_voicetyping", a2);
      if ( *(_BYTE *)(v21 + 72) != v23 )
        return;
      *(_BYTE *)(v21 + 72) = v22 - 3;
      v24 = v22 - 2;
    }
    else
    {
      if ( v17 != 2 )
      {
        if ( v17 == 13 )
        {
          v18 = tip::details::reason_string((tip::details *)"reason::view_smartactions", a2);
          if ( *(_BYTE *)(v15 + 72) != v27 )
            return;
          *(_WORD *)(v15 + 74) = v26;
        }
        else
        {
          v18 = tip::details::reason_string((tip::details *)"reason::view_unknown", a2);
          if ( *(_BYTE *)(v15 + 72) != (_BYTE)v28 )
            return;
          *(_WORD *)(v15 + 74) = v28;
        }
        v16 = 1;
        goto LABEL_35;
      }
      v20 = tip::details::reason_string((tip::details *)"reason::view_emoji", a2);
      if ( *(_BYTE *)(v21 + 72) != v25 )
        return;
      *(_BYTE *)(v21 + 72) = 1;
      v24 = 3;
    }
    *(_WORD *)(v21 + 74) = v24;
    *(_QWORD *)(v21 + 80) = v20;
    return;
  }
  v7 = tip::details::reason_string((tip::details *)"reason::another_show_request", a2);
  v9 = *v8;
  if ( *(_BYTE *)(*v8 + 72) == v10 )
  {
    *(_QWORD *)(v9 + 80) = v7;
    *(_BYTE *)(v9 + 72) = 4;
    *(_WORD *)(v9 + 74) = 24;
  }
}
