/*
 * XREFs of ?evaluate@_tip_SwipeDashboard@@QEAAXXZ @ 0x1805BE474
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_SwipeDashboard@@@details@tip@@EEAAXXZ @ 0x1805BE460 (-evaluate@-$test_merged_data@U_tip_SwipeDashboard@@@details@tip@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x18014AA04 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_SwipeDashboard::evaluate(_tip_SwipeDashboard *this, const char *a2)
{
  const char *v2; // rax
  __int16 v3; // r10
  __int64 *v4; // r9
  __int64 v5; // rcx
  const char *v6; // rax
  __int64 *v7; // r9
  __int64 v8; // rdx
  char v9; // r10
  __int16 v10; // cx
  __int64 *v11; // r9
  char v12; // r10
  __int64 *v13; // r9
  char v14; // r10
  __int64 *v15; // r9
  char v16; // r10
  __int64 v17; // rax
  __int16 v18; // cx

  if ( *((_BYTE *)this + 8) )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::swipe_canceled", a2);
    v5 = *v4;
    if ( *(_BYTE *)(*v4 + 72) == (_BYTE)v3 )
    {
      *(_QWORD *)(v5 + 80) = v2;
      *(_BYTE *)(v5 + 72) = v3 + 4;
      *(_WORD *)(v5 + 74) = v3 + 1;
    }
    return;
  }
  if ( *((_BYTE *)this + 12) )
  {
    v6 = tip::details::reason_string((tip::details *)"reason::start_swipe_failed", a2);
    v8 = *v7;
    if ( *(_BYTE *)(*v7 + 72) != v9 )
      return;
    *(_BYTE *)(v8 + 72) = 3;
    v10 = 2;
LABEL_7:
    *(_WORD *)(v8 + 74) = v10;
    goto LABEL_8;
  }
  if ( *((_BYTE *)this + 13) )
  {
    v6 = tip::details::reason_string((tip::details *)"reason::continue_swipe_failed", a2);
    v8 = *v11;
    if ( *(_BYTE *)(*v11 + 72) != v12 )
      return;
    v10 = 3;
    *(_BYTE *)(v8 + 72) = 3;
    goto LABEL_7;
  }
  if ( *((_BYTE *)this + 14) )
  {
    v6 = tip::details::reason_string((tip::details *)"reason::commit_swipe_failed", a2);
    v8 = *v13;
    if ( *(_BYTE *)(*v13 + 72) != v14 )
      return;
    *(_BYTE *)(v8 + 72) = 3;
    *(_WORD *)(v8 + 74) = 4;
LABEL_8:
    *(_QWORD *)(v8 + 80) = v6;
    return;
  }
  if ( *((_BYTE *)this + 15) )
  {
    v6 = tip::details::reason_string((tip::details *)"reason::cancel_swipe_failed", a2);
    v8 = *v15;
    if ( *(_BYTE *)(*v15 + 72) != v16 )
      return;
    *(_BYTE *)(v8 + 72) = 3;
    v10 = 5;
    goto LABEL_7;
  }
  v17 = *(_QWORD *)this;
  if ( (**(_DWORD **)this & 0x200) != 0 )
  {
    if ( *(_BYTE *)(v17 + 72) )
      return;
    v18 = 0x8000;
    *(_BYTE *)(v17 + 72) = 1;
  }
  else
  {
    if ( *(_BYTE *)(v17 + 72) )
      return;
    *(_BYTE *)(v17 + 72) = 3;
    v18 = 16385;
  }
  *(_QWORD *)(v17 + 80) = 0LL;
  *(_WORD *)(v17 + 74) = v18;
}
