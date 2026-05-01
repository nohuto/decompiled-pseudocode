/*
 * XREFs of ?evaluate@_tip_GuidedSnapAssistTest@@QEAAXXZ @ 0x18059F154
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_GuidedSnapAssistTest@@@details@tip@@EEAAXXZ @ 0x18059F140 (-evaluate@-$test_merged_data@U_tip_GuidedSnapAssistTest@@@details@tip@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x18014AA04 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_GuidedSnapAssistTest::evaluate(_tip_GuidedSnapAssistTest *this, const char *a2)
{
  __int64 v2; // r9
  __int16 v3; // ax
  const char *v4; // rax
  __int64 v5; // r9
  char v6; // r10
  __int16 v7; // cx
  char v8; // r10
  const char *v9; // r11
  char v10; // r10

  v2 = *(_QWORD *)this;
  if ( *(_QWORD *)(*(_QWORD *)this + 8LL) != *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    if ( *(_BYTE *)(v2 + 72) )
      return;
    *(_BYTE *)(v2 + 72) = 3;
    v3 = 0x4000;
    goto LABEL_19;
  }
  if ( (*(_DWORD *)v2 & 0x200) == 0 )
  {
    if ( *(_BYTE *)(v2 + 72) )
      return;
    *(_BYTE *)(v2 + 72) = 3;
    v3 = 16385;
    goto LABEL_19;
  }
  if ( *((_BYTE *)this + 21) )
  {
    v4 = tip::details::reason_string((tip::details *)"reason::snap_assist_dismissed", a2);
    if ( *(_BYTE *)(v5 + 72) != v6 )
      return;
    *(_BYTE *)(v5 + 72) = 1;
    v7 = 2;
    goto LABEL_10;
  }
  if ( *((_BYTE *)this + 20) )
  {
    v4 = tip::details::reason_string((tip::details *)"reason::snap_assist_blocked", a2);
    if ( *(_BYTE *)(v5 + 72) != v8 )
      return;
    v7 = 1;
    *(_BYTE *)(v5 + 72) = 1;
LABEL_10:
    *(_WORD *)(v5 + 74) = v7;
    *(_QWORD *)(v5 + 80) = v4;
    return;
  }
  if ( *((_DWORD *)this + 2) - *((_DWORD *)this + 3) != *((_DWORD *)this + 4) )
  {
    v9 = tip::details::reason_string((tip::details *)"reason::snap_assist_incomplete", a2);
    if ( *(_BYTE *)(v2 + 72) != v10 )
      return;
    v3 = 3;
    *(_QWORD *)(v2 + 80) = v9;
    *(_BYTE *)(v2 + 72) = 3;
    goto LABEL_20;
  }
  if ( *(_BYTE *)(v2 + 72) )
    return;
  v3 = 0x8000;
  *(_BYTE *)(v2 + 72) = 1;
LABEL_19:
  *(_QWORD *)(v2 + 80) = 0LL;
LABEL_20:
  *(_WORD *)(v2 + 74) = v3;
}
