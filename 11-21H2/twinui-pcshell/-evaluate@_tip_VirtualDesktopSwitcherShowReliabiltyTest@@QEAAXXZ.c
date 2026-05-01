/*
 * XREFs of ?evaluate@_tip_VirtualDesktopSwitcherShowReliabiltyTest@@QEAAXXZ @ 0x18060CB34
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@@@details@tip@@EEAAXXZ @ 0x18060CB20 (-evaluate@-$test_merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@@@details@tip@@EEAAX.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x18014AA04 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_VirtualDesktopSwitcherShowReliabiltyTest::evaluate(
        _tip_VirtualDesktopSwitcherShowReliabiltyTest *this,
        const char *a2)
{
  const char *v2; // rax
  __int16 v3; // r10
  __int64 *v4; // r9
  __int64 v5; // rcx
  __int64 v6; // r9
  __int16 v7; // ax
  const char *v8; // rax
  __int64 v9; // r9
  char v10; // r10

  if ( *((_BYTE *)this + 8) )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::shown", a2);
    v5 = *v4;
    if ( *(_BYTE *)(*v4 + 72) == (_BYTE)v3 )
    {
      *(_QWORD *)(v5 + 80) = v2;
      *(_BYTE *)(v5 + 72) = v3 + 1;
      *(_WORD *)(v5 + 74) = v3 + 1;
    }
    return;
  }
  v6 = *(_QWORD *)this;
  if ( *(_QWORD *)(*(_QWORD *)this + 8LL) != *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    if ( *(_BYTE *)(v6 + 72) )
      return;
    v7 = 0x4000;
    goto LABEL_7;
  }
  if ( (*(_DWORD *)v6 & 0x200) == 0 )
  {
    if ( *(_BYTE *)(v6 + 72) )
      return;
    v7 = 16385;
LABEL_7:
    *(_BYTE *)(v6 + 72) = 3;
    *(_WORD *)(v6 + 74) = v7;
    *(_QWORD *)(v6 + 80) = 0LL;
    return;
  }
  v8 = tip::details::reason_string((tip::details *)"reason::not_shown", a2);
  if ( *(_BYTE *)(v9 + 72) == v10 )
  {
    *(_BYTE *)(v9 + 72) = 4;
    *(_WORD *)(v9 + 74) = 2;
    *(_QWORD *)(v9 + 80) = v8;
  }
}
