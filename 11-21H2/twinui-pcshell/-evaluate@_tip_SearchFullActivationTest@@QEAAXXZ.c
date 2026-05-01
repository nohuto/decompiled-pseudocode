/*
 * XREFs of ?evaluate@_tip_SearchFullActivationTest@@QEAAXXZ @ 0x1801A2704
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_SearchFullActivationTest@@@details@tip@@EEAAXXZ @ 0x1801A26D0 (-evaluate@-$test_merged_data@U_tip_SearchFullActivationTest@@@details@tip@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x18014AA04 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_SearchFullActivationTest::evaluate(_tip_SearchFullActivationTest *this, const char *a2)
{
  const char *v2; // rax
  __int16 v3; // r11
  __int64 *v4; // r9
  __int64 v5; // rdx
  __int16 v6; // cx
  __int64 *v7; // r9
  char v8; // r11
  __int64 *v9; // r9
  char v10; // r11
  __int64 *v11; // r9
  char v12; // r11
  int v13; // eax
  __int64 *v14; // r9
  char v15; // r11
  __int64 *v16; // r9
  char v17; // r11
  __int64 v18; // r10
  char v19; // cl
  __int16 v20; // ax
  const char *v21; // rax
  __int64 v22; // r10
  char v23; // r11

  if ( *((_DWORD *)this + 2) == 2 )
    *(_DWORD *)(*(_QWORD *)this + 92LL) = 34926546;
  if ( !*((_BYTE *)this + 18) )
  {
    if ( *((_BYTE *)this + 19) )
    {
      v2 = tip::details::reason_string((tip::details *)"Reason::consolidated", a2);
      v5 = *v9;
      if ( *(_BYTE *)(*v9 + 72) != v10 )
        return;
      *(_BYTE *)(v5 + 72) = 4;
      v6 = 3;
    }
    else if ( *((_BYTE *)this + 20) )
    {
      v2 = tip::details::reason_string((tip::details *)"Reason::dismissed", a2);
      v5 = *v11;
      if ( *(_BYTE *)(*v11 + 72) != v12 )
        return;
      *(_BYTE *)(v5 + 72) = 4;
      v6 = 7;
    }
    else
    {
      v13 = *((_DWORD *)this + 3);
      if ( v13 == *((_DWORD *)this + 2) )
      {
        v2 = tip::details::reason_string((tip::details *)"Reason::activated_again_same_source", a2);
        v5 = *v14;
        if ( *(_BYTE *)(*v14 + 72) != v15 )
          return;
        *(_BYTE *)(v5 + 72) = 4;
        v6 = 5;
      }
      else
      {
        if ( !v13 )
        {
          v18 = *(_QWORD *)this;
          if ( (**(_DWORD **)this & 0x200) != 0 )
          {
            if ( *((_BYTE *)this + 27) )
            {
              v21 = tip::details::reason_string((tip::details *)"Reason::invalid_hwnd", a2);
              if ( *(_BYTE *)(v22 + 72) == v23 )
              {
                *(_BYTE *)(v22 + 72) = 2;
                *(_WORD *)(v22 + 74) = 6;
                *(_QWORD *)(v22 + 80) = v21;
              }
              return;
            }
            if ( *(_BYTE *)(v18 + 72) )
              return;
            v19 = 1;
            v20 = 0x8000;
          }
          else
          {
            if ( *(_BYTE *)(v18 + 72) )
              return;
            v19 = 3;
            v20 = 16385;
          }
          *(_QWORD *)(v18 + 80) = 0LL;
          *(_WORD *)(v18 + 74) = v20;
          *(_BYTE *)(v18 + 72) = v19;
          return;
        }
        v2 = tip::details::reason_string((tip::details *)"Reason::activated_again", a2);
        v5 = *v16;
        if ( *(_BYTE *)(*v16 + 72) != v17 )
          return;
        *(_BYTE *)(v5 + 72) = 4;
        v6 = 1;
      }
    }
LABEL_7:
    *(_WORD *)(v5 + 74) = v6;
LABEL_8:
    *(_QWORD *)(v5 + 80) = v2;
    return;
  }
  if ( *((_DWORD *)this + 2) == 2 )
  {
    v2 = tip::details::reason_string((tip::details *)"Reason::hidden_by_launcher_timeout", a2);
    v5 = *v4;
    if ( *(_BYTE *)(*v4 + 72) != (_BYTE)v3 )
      return;
    *(_BYTE *)(v5 + 72) = v3 + 3;
    v6 = v3 + 4;
    goto LABEL_7;
  }
  v2 = tip::details::reason_string((tip::details *)"Reason::hidden", a2);
  v5 = *v7;
  if ( *(_BYTE *)(*v7 + 72) == v8 )
  {
    *(_WORD *)(v5 + 74) = 2;
    *(_BYTE *)(v5 + 72) = 4;
    goto LABEL_8;
  }
}
