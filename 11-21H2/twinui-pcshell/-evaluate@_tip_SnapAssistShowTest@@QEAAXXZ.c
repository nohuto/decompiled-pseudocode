/*
 * XREFs of ?evaluate@_tip_SnapAssistShowTest@@QEAAXXZ @ 0x1806049A4
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_SnapAssistShowTest@@@details@tip@@EEAAXXZ @ 0x180604990 (-evaluate@-$test_merged_data@U_tip_SnapAssistShowTest@@@details@tip@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x18014AA04 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_SnapAssistShowTest::evaluate(_tip_SnapAssistShowTest *this, const char *a2)
{
  const char *v2; // rax
  __int16 v3; // r10
  __int64 *v4; // r9
  __int64 v5; // rcx
  char v6; // dl
  __int16 v7; // ax

  if ( *((_BYTE *)this + 8) )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::shown", a2);
    v5 = *v4;
    if ( *(_BYTE *)(*v4 + 72) != (_BYTE)v3 )
      return;
    v6 = v3 + 1;
    *(_QWORD *)(v5 + 80) = v2;
    *(_WORD *)(v5 + 74) = v3 + 1;
    goto LABEL_13;
  }
  v5 = *(_QWORD *)this;
  if ( *(_QWORD *)(v5 + 8) != *(_QWORD *)(v5 + 16) )
  {
    if ( *(_BYTE *)(v5 + 72) )
      return;
    v7 = 0x4000;
    goto LABEL_7;
  }
  if ( (*(_DWORD *)v5 & 0x200) == 0 )
  {
    if ( *(_BYTE *)(v5 + 72) )
      return;
    v7 = 16385;
LABEL_7:
    *(_BYTE *)(v5 + 72) = 3;
    *(_WORD *)(v5 + 74) = v7;
    *(_QWORD *)(v5 + 80) = 0LL;
    return;
  }
  if ( *(_BYTE *)(v5 + 72) )
    return;
  *(_QWORD *)(v5 + 80) = 0LL;
  *(_WORD *)(v5 + 74) = 0x8000;
  v6 = 1;
LABEL_13:
  *(_BYTE *)(v5 + 72) = v6;
}
