/*
 * XREFs of ?evaluate@?$test_merged_data@U_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@@details@tip@@EEAAXXZ @ 0x1800135A0
 * Callers:
 *     <none>
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x1800F66AC (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

const char *__fastcall tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_WindowMaximizeSnapTest>::evaluate(
        __int64 a1,
        const char *a2)
{
  int v2; // eax
  unsigned int v3; // eax
  const char *result; // rax
  __int64 v5; // r9
  __int64 v6; // rcx
  char v7; // r11
  char v8; // r10
  __int16 v9; // dx
  __int64 v10; // r9
  char v11; // r11
  __int16 v12; // r10
  __int64 v13; // r9
  char v14; // r11
  __int64 v15; // r9
  char v16; // r11
  char v17; // r10
  __int64 v18; // r9
  char v19; // r11

  v2 = *(_DWORD *)(a1 + 152);
  if ( !v2 )
  {
    result = tip::details::reason_string((tip::details *)"reason::no_transition_type", a2);
    v6 = *(_QWORD *)(v5 + 144);
    if ( *(_BYTE *)(v6 + 72) != v7 )
      return result;
    v8 = 3;
    v9 = 2;
LABEL_12:
    *(_BYTE *)(v6 + 72) = v8;
    *(_WORD *)(v6 + 74) = v9;
    goto LABEL_13;
  }
  if ( (unsigned int)(v2 - 2) > 3 )
  {
    result = tip::details::reason_string((tip::details *)"reason::unexpected_transition_type", a2);
    v6 = *(_QWORD *)(v10 + 144);
    if ( *(_BYTE *)(v6 + 72) != v11 )
      return result;
    v9 = 5;
    goto LABEL_12;
  }
  v3 = *(_DWORD *)(a1 + 160);
  if ( v3 && !*(_DWORD *)(a1 + 156) )
  {
    result = tip::details::reason_string((tip::details *)"reason::post_transition_without_pre", a2);
    v6 = *(_QWORD *)(v13 + 144);
    if ( *(_BYTE *)(v6 + 72) != v14 )
      return result;
    *(_BYTE *)(v6 + 72) = v12;
    *(_WORD *)(v6 + 74) = v12;
LABEL_13:
    *(_QWORD *)(v6 + 80) = result;
    return result;
  }
  if ( v3 > 1 )
  {
    result = tip::details::reason_string((tip::details *)"reason::post_transition_called_extra", a2);
    v6 = *(_QWORD *)(v15 + 144);
    if ( *(_BYTE *)(v6 + 72) != v16 )
      return result;
    v9 = 4;
    goto LABEL_12;
  }
  if ( *(_BYTE *)(a1 + 164) || !v3 )
  {
    result = *(const char **)(a1 + 144);
    if ( !result[72] )
    {
      *((_BYTE *)result + 72) = 1;
      *((_WORD *)result + 37) = 0x8000;
      *((_QWORD *)result + 10) = 0LL;
    }
  }
  else
  {
    result = tip::details::reason_string((tip::details *)"reason::state_complete_not_called", a2);
    v6 = *(_QWORD *)(v18 + 144);
    if ( *(_BYTE *)(v6 + 72) == v19 )
    {
      *(_BYTE *)(v6 + 72) = v17;
      *(_WORD *)(v6 + 74) = 1;
      goto LABEL_13;
    }
  }
  return result;
}
