/*
 * XREFs of ?evaluate@_tip_SearchFullActivationTest@@QEAAXXZ @ 0x18046C288
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@EEAAXXZ @ 0x18046C1D0 (-evaluate@-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_SearchFullActivationTest::evaluate(_tip_SearchFullActivationTest *this, const char *a2)
{
  const char *v2; // rax
  __int64 v3; // r9
  __int64 v4; // rdx
  char v5; // r11
  __int16 v6; // cx
  __int64 v7; // r9
  char v8; // r11
  __int64 v9; // r9
  char v10; // r11
  __int64 v11; // r9
  char v12; // r11
  const char *v13; // rdx
  __int64 v14; // r9
  char v15; // r11
  __int64 v16; // r9
  char v17; // r11
  int v18; // eax
  __int64 v19; // r9
  char v20; // r11
  __int64 v21; // r9
  char v22; // r11
  __int64 v23; // r9
  char v24; // r11
  __int64 v25; // r9
  char v26; // r11
  __int64 v27; // r9
  char v28; // r11
  __int64 v29; // r9
  char v30; // r11
  __int64 v31; // r9
  char v32; // r11
  __int64 v33; // r9
  char v34; // r11
  __int64 v35; // r10
  char v36; // cl
  __int16 v37; // ax
  const char *v38; // rax
  __int64 v39; // r10
  char v40; // r11

  if ( !*((_BYTE *)this + 26) )
  {
    if ( *((_BYTE *)this + 27) )
    {
      v2 = tip::details::reason_string((tip::details *)"Reason::consolidated", a2);
      v4 = *(_QWORD *)(v9 + 8);
      if ( *(_BYTE *)(v4 + 152) != v10 )
        return;
      *(_BYTE *)(v4 + 152) = 4;
      v6 = 3;
      goto LABEL_5;
    }
    if ( *((_BYTE *)this + 28) )
    {
      v2 = tip::details::reason_string((tip::details *)"Reason::dismissed", a2);
      v4 = *(_QWORD *)(v11 + 8);
      if ( *(_BYTE *)(v4 + 152) != v12 )
        return;
      *(_BYTE *)(v4 + 152) = 4;
      v6 = 7;
      goto LABEL_5;
    }
    v13 = (const char *)*((unsigned int *)this + 4);
    if ( *((_DWORD *)this + 5) == (_DWORD)v13 )
    {
      v2 = tip::details::reason_string((tip::details *)"Reason::activated_again_same_source", v13);
      v4 = *(_QWORD *)(v14 + 8);
      if ( *(_BYTE *)(v4 + 152) != v15 )
        return;
      *(_BYTE *)(v4 + 152) = 4;
      v6 = 5;
      goto LABEL_5;
    }
    if ( *((_DWORD *)this + 5) )
    {
      v2 = tip::details::reason_string((tip::details *)"Reason::activated_again", v13);
      v4 = *(_QWORD *)(v16 + 8);
      if ( *(_BYTE *)(v4 + 152) != v17 )
        return;
      *(_BYTE *)(v4 + 152) = 4;
      v6 = 1;
      goto LABEL_5;
    }
    v18 = *((_DWORD *)this + 19);
    if ( v18 < 0 )
    {
      if ( (v18 & 0x1FFF0000) == 0x70000 && (unsigned int)(unsigned __int16)v18 - 15600 <= 0x63 )
      {
        v2 = tip::details::reason_string((tip::details *)"Reason::activation_failure_package_error", v13);
        v4 = *(_QWORD *)(v19 + 8);
        if ( *(_BYTE *)(v4 + 152) != v20 )
          return;
        *(_BYTE *)(v4 + 152) = 3;
        v6 = 11;
      }
      else
      {
        v2 = tip::details::reason_string((tip::details *)"Reason::activation_failure", v13);
        v4 = *(_QWORD *)(v21 + 8);
        if ( *(_BYTE *)(v4 + 152) != v22 )
          return;
        *(_BYTE *)(v4 + 152) = 3;
        v6 = 10;
      }
      goto LABEL_5;
    }
    if ( *((_BYTE *)this + 31) )
    {
      v2 = tip::details::reason_string((tip::details *)"Reason::view_destroyed", v13);
      v4 = *(_QWORD *)(v23 + 8);
      if ( *(_BYTE *)(v4 + 152) != v24 )
        return;
      *(_BYTE *)(v4 + 152) = 3;
      v6 = 12;
      goto LABEL_5;
    }
    if ( (_DWORD)v13 == 4 )
    {
      if ( !*((_BYTE *)this + 81) )
      {
        v2 = tip::details::reason_string((tip::details *)"Reason::unexpected_navigation_state_during_prelaunch", v13);
        v4 = *(_QWORD *)(v25 + 8);
        if ( *(_BYTE *)(v4 + 152) != v26 )
          return;
        *(_BYTE *)(v4 + 152) = 3;
        v6 = 15;
        goto LABEL_5;
      }
      if ( *((_BYTE *)this + 80) )
      {
        v2 = tip::details::reason_string((tip::details *)"Reason::view_visible_during_prelaunch", v13);
        v4 = *(_QWORD *)(v27 + 8);
        if ( *(_BYTE *)(v4 + 152) != v28 )
          return;
        *(_BYTE *)(v4 + 152) = 3;
        v6 = 14;
        goto LABEL_5;
      }
      if ( *((_BYTE *)this + 82) )
      {
        v2 = tip::details::reason_string((tip::details *)"Reason::prelaunch_deferral_timeout", v13);
        v4 = *(_QWORD *)(v29 + 8);
        if ( *(_BYTE *)(v4 + 152) != v30 )
          return;
        *(_BYTE *)(v4 + 152) = 3;
        v6 = 9;
        goto LABEL_5;
      }
LABEL_48:
      v35 = *((_QWORD *)this + 1);
      if ( (*(_DWORD *)(v35 + 56) & 0x200) != 0 )
      {
        if ( *((_BYTE *)this + 35) )
        {
          v38 = tip::details::reason_string((tip::details *)"Reason::invalid_hwnd", v13);
          if ( *(_BYTE *)(v39 + 152) == v40 )
          {
            *(_BYTE *)(v39 + 152) = 2;
            *(_WORD *)(v39 + 154) = 6;
            *(_QWORD *)(v39 + 160) = v38;
          }
          return;
        }
        if ( *(_BYTE *)(v35 + 152) )
          return;
        v36 = 1;
        v37 = 0x8000;
      }
      else
      {
        if ( *(_BYTE *)(v35 + 152) )
          return;
        v36 = 3;
        v37 = 16385;
      }
      *(_QWORD *)(v35 + 160) = 0LL;
      *(_WORD *)(v35 + 154) = v37;
      *(_BYTE *)(v35 + 152) = v36;
      return;
    }
    if ( *((_BYTE *)this + 24) )
    {
      v2 = tip::details::reason_string((tip::details *)"Reason::activation_test_timeout", v13);
      v4 = *(_QWORD *)(v31 + 8);
      if ( *(_BYTE *)(v4 + 152) != v32 )
        return;
      *(_BYTE *)(v4 + 152) = 3;
      v6 = 8;
    }
    else
    {
      if ( *((_BYTE *)this + 29) || *((_BYTE *)this + 34) )
        goto LABEL_48;
      v2 = tip::details::reason_string((tip::details *)"Reason::unexpected_navigation_state_during_launch", v13);
      v4 = *(_QWORD *)(v33 + 8);
      if ( *(_BYTE *)(v4 + 152) != v34 )
        return;
      *(_BYTE *)(v4 + 152) = 3;
      v6 = 16;
    }
LABEL_5:
    *(_WORD *)(v4 + 154) = v6;
LABEL_6:
    *(_QWORD *)(v4 + 160) = v2;
    return;
  }
  if ( *((_DWORD *)this + 4) == 2 )
  {
    v2 = tip::details::reason_string((tip::details *)"Reason::hidden_by_launcher_timeout", a2);
    v4 = *(_QWORD *)(v3 + 8);
    if ( *(_BYTE *)(v4 + 152) != v5 )
      return;
    *(_BYTE *)(v4 + 152) = 3;
    v6 = 4;
    goto LABEL_5;
  }
  v2 = tip::details::reason_string((tip::details *)"Reason::hidden", a2);
  v4 = *(_QWORD *)(v7 + 8);
  if ( *(_BYTE *)(v4 + 152) == v8 )
  {
    *(_WORD *)(v4 + 154) = 2;
    *(_BYTE *)(v4 + 152) = 4;
    goto LABEL_6;
  }
}
