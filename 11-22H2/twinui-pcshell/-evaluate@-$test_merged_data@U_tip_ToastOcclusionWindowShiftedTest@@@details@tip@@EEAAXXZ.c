/*
 * XREFs of ?evaluate@?$test_merged_data@U_tip_ToastOcclusionWindowShiftedTest@@@details@tip@@EEAAXXZ @ 0x18043D310
 * Callers:
 *     <none>
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall tip::details::test_merged_data<_tip_ToastOcclusionWindowShiftedTest>::evaluate(
        __int64 a1,
        const char *a2)
{
  __int64 v2; // r9
  __int16 v3; // ax
  const char *v4; // rax
  __int64 v5; // r9
  char v6; // r10
  const char *v7; // rax
  char v8; // r10

  v2 = *(_QWORD *)(a1 + 176);
  if ( (*(_DWORD *)v2 & 0x200) == 0 )
  {
    if ( *(_BYTE *)(v2 + 72) )
      return;
    *(_QWORD *)(v2 + 80) = 0LL;
    *(_BYTE *)(v2 + 72) = 3;
    v3 = 16385;
LABEL_9:
    *(_WORD *)(v2 + 74) = v3;
    return;
  }
  if ( !*(_BYTE *)(a1 + 184) )
  {
    v7 = tip::details::reason_string((tip::details *)"reason::no_margin_set", a2);
    if ( *(_BYTE *)(v2 + 72) != v8 )
      return;
    *(_QWORD *)(v2 + 80) = v7;
    *(_BYTE *)(v2 + 72) = 1;
    v3 = 3;
    goto LABEL_9;
  }
  v4 = tip::details::reason_string((tip::details *)"reason::shifted", a2);
  if ( *(_BYTE *)(v5 + 72) == v6 )
  {
    *(_QWORD *)(v5 + 80) = v4;
    *(_BYTE *)(v5 + 72) = 1;
    *(_WORD *)(v5 + 74) = 1;
  }
}
