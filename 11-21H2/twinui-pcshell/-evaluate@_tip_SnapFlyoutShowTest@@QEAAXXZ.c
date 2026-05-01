/*
 * XREFs of ?evaluate@_tip_SnapFlyoutShowTest@@QEAAXXZ @ 0x1805B19E4
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_SnapFlyoutShowTest@@@details@tip@@EEAAXXZ @ 0x1805B19D0 (-evaluate@-$test_merged_data@U_tip_SnapFlyoutShowTest@@@details@tip@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x18014AA04 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_SnapFlyoutShowTest::evaluate(_tip_SnapFlyoutShowTest *this, const char *a2)
{
  __int64 v2; // r9
  __int16 v3; // ax
  const char *v4; // r11
  char v5; // r10
  __int64 v6; // r9
  const char *v7; // r11
  char v8; // r10
  char v9; // r10
  char v10; // r10
  const char *v11; // rax
  __int64 v12; // r9
  char v13; // r10
  __int16 v14; // cx
  char v15; // r10
  char v16; // r10
  char v17; // r10

  v2 = *(_QWORD *)this;
  if ( *(_QWORD *)(*(_QWORD *)this + 8LL) != *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    if ( *(_BYTE *)(v2 + 72) )
      return;
    *(_BYTE *)(v2 + 72) = 3;
    v3 = 0x4000;
LABEL_35:
    *(_QWORD *)(v2 + 80) = 0LL;
    goto LABEL_36;
  }
  if ( (*(_DWORD *)v2 & 0x200) == 0 )
  {
    if ( *(_BYTE *)(v2 + 72) )
      return;
    *(_BYTE *)(v2 + 72) = 3;
    v3 = 16385;
    goto LABEL_35;
  }
  if ( *((_BYTE *)this + 13) )
  {
    v4 = tip::details::reason_string((tip::details *)"reason::noMonitorInfo", a2);
    if ( *(_BYTE *)(v2 + 72) != v5 )
      return;
    *(_BYTE *)(v2 + 72) = 3;
    v3 = 5;
    goto LABEL_10;
  }
  if ( !*((_BYTE *)this + 12) )
  {
    if ( *((_BYTE *)this + 16) )
    {
      v4 = tip::details::reason_string((tip::details *)"reason::noDisplayRegion", a2);
      if ( *(_BYTE *)(v2 + 72) != v9 )
        return;
      *(_BYTE *)(v2 + 72) = 3;
      v3 = 7;
    }
    else
    {
      if ( !*((_BYTE *)this + 11) )
      {
        if ( *((_BYTE *)this + 10) )
        {
          v11 = tip::details::reason_string((tip::details *)"reason::showFlyoutRejected", a2);
          if ( *(_BYTE *)(v12 + 72) != v13 )
            return;
          *(_BYTE *)(v12 + 72) = 4;
          v14 = 8;
        }
        else if ( *((_BYTE *)this + 9) )
        {
          v11 = tip::details::reason_string((tip::details *)"reason::canceled", a2);
          if ( *(_BYTE *)(v12 + 72) != v15 )
            return;
          *(_BYTE *)(v12 + 72) = 4;
          v14 = 1;
        }
        else if ( *((_BYTE *)this + 8) )
        {
          v11 = tip::details::reason_string((tip::details *)"reason::shown", a2);
          if ( *(_BYTE *)(v12 + 72) != v16 )
            return;
          *(_BYTE *)(v12 + 72) = 1;
          v14 = 2;
        }
        else
        {
          if ( !*((_BYTE *)this + 14) )
          {
            if ( *(_BYTE *)(v2 + 72) )
              return;
            v3 = 0x8000;
            *(_BYTE *)(v2 + 72) = 1;
            goto LABEL_35;
          }
          v11 = tip::details::reason_string((tip::details *)"reason::reused", a2);
          if ( *(_BYTE *)(v12 + 72) != v17 )
            return;
          *(_BYTE *)(v12 + 72) = 1;
          v14 = 6;
        }
        *(_WORD *)(v12 + 74) = v14;
        *(_QWORD *)(v12 + 80) = v11;
        return;
      }
      v4 = tip::details::reason_string((tip::details *)"reason::controlFailedToLoad", a2);
      if ( *(_BYTE *)(v2 + 72) != v10 )
        return;
      v3 = 3;
      *(_BYTE *)(v2 + 72) = 3;
    }
LABEL_10:
    *(_QWORD *)(v2 + 80) = v4;
LABEL_36:
    *(_WORD *)(v2 + 74) = v3;
    return;
  }
  v7 = tip::details::reason_string((tip::details *)"reason::threadFailedToStart", a2);
  if ( *(_BYTE *)(v6 + 72) == v8 )
  {
    *(_QWORD *)(v6 + 80) = v7;
    *(_BYTE *)(v6 + 72) = 3;
    *(_WORD *)(v6 + 74) = 4;
  }
}
