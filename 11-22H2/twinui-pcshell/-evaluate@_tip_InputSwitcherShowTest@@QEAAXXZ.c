/*
 * XREFs of ?evaluate@_tip_InputSwitcherShowTest@@QEAAXXZ @ 0x1807007E4
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_InputSwitcherShowTest@@@details@tip@@EEAAXXZ @ 0x1807007D0 (-evaluate@-$test_merged_data@U_tip_InputSwitcherShowTest@@@details@tip@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_InputSwitcherShowTest::evaluate(_tip_InputSwitcherShowTest *this, const char *a2)
{
  const char *v3; // rax
  __int16 v4; // r10
  __int64 *v5; // r9
  __int64 v6; // rdx
  __int16 v7; // cx
  __int64 *v8; // r9
  char v9; // r10
  __int64 *v10; // r9
  char v11; // r10
  __int64 *v12; // r9
  char v13; // r10
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  __int64 *v17; // r9
  char v18; // r10
  __int64 *v19; // r9
  char v20; // r10
  __int64 *v21; // r9
  char v22; // r10
  __int64 *v23; // r9
  char v24; // r10
  __int64 *v25; // r9
  char v26; // r10
  __int64 *v27; // r9
  char v28; // r10
  __int64 v29; // rax
  __int16 v30; // cx

  if ( !*((_BYTE *)this + 10) )
  {
    v3 = tip::details::reason_string((tip::details *)"reason::cannot_show", a2);
    v6 = *v5;
    if ( *(_BYTE *)(*v5 + 72) != (_BYTE)v4 )
      return;
    *(_BYTE *)(v6 + 72) = 4;
    v7 = v4 + 3;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 8) )
  {
    if ( *((_BYTE *)this + 13) )
    {
      v3 = tip::details::reason_string((tip::details *)"reason::timed_out_control_center_visible", a2);
      v6 = *v8;
      if ( *(_BYTE *)(*v8 + 72) == v9 )
      {
        *(_BYTE *)(v6 + 72) = 3;
        v7 = 11;
LABEL_4:
        *(_WORD *)(v6 + 74) = v7;
        *(_QWORD *)(v6 + 80) = v3;
      }
    }
    else
    {
      v3 = tip::details::reason_string((tip::details *)"reason::timed_out", a2);
      v6 = *v10;
      if ( *(_BYTE *)(*v10 + 72) == v11 )
      {
        *(_BYTE *)(v6 + 72) = 3;
        v7 = 1;
        goto LABEL_4;
      }
    }
  }
  else if ( *((_BYTE *)this + 9) )
  {
    v14 = *((_DWORD *)this + 4);
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          if ( v16 == 1 )
          {
            if ( !*((_BYTE *)this + 11) )
            {
              v3 = tip::details::reason_string((tip::details *)"reason::alt_shift_show_fail", a2);
              v6 = *v19;
              if ( *(_BYTE *)(*v19 + 72) == v20 )
              {
                *(_BYTE *)(v6 + 72) = 3;
                v7 = 10;
                goto LABEL_4;
              }
              return;
            }
          }
          else if ( !*((_BYTE *)this + 11) )
          {
            v3 = tip::details::reason_string((tip::details *)"reason::mouse_show_failure", a2);
            v6 = *v17;
            if ( *(_BYTE *)(*v17 + 72) == v18 )
            {
              *(_BYTE *)(v6 + 72) = 3;
              v7 = 6;
              goto LABEL_4;
            }
            return;
          }
        }
        else if ( !*((_BYTE *)this + 11) )
        {
          v3 = tip::details::reason_string((tip::details *)"reason::win_ctrl_space_show_fail", a2);
          v6 = *v21;
          if ( *(_BYTE *)(*v21 + 72) == v22 )
          {
            *(_BYTE *)(v6 + 72) = 3;
            v7 = 9;
            goto LABEL_4;
          }
          return;
        }
      }
      else if ( !*((_BYTE *)this + 11) )
      {
        v3 = tip::details::reason_string((tip::details *)"reason::win_shift_space_show_fail", a2);
        v6 = *v23;
        if ( *(_BYTE *)(*v23 + 72) == v24 )
        {
          *(_BYTE *)(v6 + 72) = 3;
          v7 = 8;
          goto LABEL_4;
        }
        return;
      }
    }
    else if ( !*((_BYTE *)this + 11) )
    {
      v3 = tip::details::reason_string((tip::details *)"reason::win_space_show_fail", a2);
      v6 = *v25;
      if ( *(_BYTE *)(*v25 + 72) == v26 )
      {
        *(_BYTE *)(v6 + 72) = 3;
        v7 = 7;
        goto LABEL_4;
      }
      return;
    }
    if ( *((_BYTE *)this + 12) )
    {
      v29 = *(_QWORD *)this;
      if ( (**(_DWORD **)this & 0x200) != 0 )
      {
        if ( *(_BYTE *)(v29 + 72) )
          return;
        *(_BYTE *)(v29 + 72) = 1;
        v30 = 0x8000;
      }
      else
      {
        if ( *(_BYTE *)(v29 + 72) )
          return;
        *(_BYTE *)(v29 + 72) = 3;
        v30 = 16385;
      }
      *(_QWORD *)(v29 + 80) = 0LL;
      *(_WORD *)(v29 + 74) = v30;
    }
    else
    {
      v3 = tip::details::reason_string((tip::details *)"reason::show_not_complete", a2);
      v6 = *v27;
      if ( *(_BYTE *)(*v27 + 72) == v28 )
      {
        *(_BYTE *)(v6 + 72) = 3;
        v7 = 5;
        goto LABEL_4;
      }
    }
  }
  else
  {
    v3 = tip::details::reason_string((tip::details *)"reason::no_control_center", a2);
    v6 = *v12;
    if ( *(_BYTE *)(*v12 + 72) == v13 )
    {
      *(_BYTE *)(v6 + 72) = 3;
      v7 = 2;
      goto LABEL_4;
    }
  }
}
