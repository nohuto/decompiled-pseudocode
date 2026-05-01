/*
 * XREFs of ?evaluate@?$test_merged_data@U_tip_ToggleDashboardExtension@@@details@tip@@EEAAXXZ @ 0x180041070
 * Callers:
 *     <none>
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x18014AA04 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

const char *__fastcall tip::details::test_merged_data<_tip_ToggleDashboardExtension>::evaluate(
        __int64 a1,
        const char *a2)
{
  const char *result; // rax
  __int16 v3; // cx
  __int64 v4; // r9
  __int64 v5; // rcx
  char v6; // r10
  __int16 v7; // dx
  __int64 v8; // r9
  char v9; // r10

  if ( *(_BYTE *)(a1 + 153) && !*(_BYTE *)(a1 + 152) )
  {
    result = tip::details::reason_string((tip::details *)"reason::toggle_failed", a2);
    v5 = *(_QWORD *)(v4 + 144);
    if ( *(_BYTE *)(v5 + 72) != v6 )
      return result;
    *(_BYTE *)(v5 + 72) = 3;
    v7 = 2;
    goto LABEL_11;
  }
  if ( *(_BYTE *)(a1 + 154) )
  {
    result = tip::details::reason_string((tip::details *)"reason::extension_call_failed", a2);
    v5 = *(_QWORD *)(v8 + 144);
    if ( *(_BYTE *)(v5 + 72) != v9 )
      return result;
    *(_BYTE *)(v5 + 72) = 2;
    v7 = 1;
LABEL_11:
    *(_WORD *)(v5 + 74) = v7;
    *(_QWORD *)(v5 + 80) = result;
    return result;
  }
  result = *(const char **)(a1 + 144);
  if ( (*(_DWORD *)result & 0x200) != 0 )
  {
    if ( result[72] )
      return result;
    v3 = 0x8000;
    *((_BYTE *)result + 72) = 1;
    goto LABEL_7;
  }
  if ( !result[72] )
  {
    *((_BYTE *)result + 72) = 3;
    v3 = 16385;
LABEL_7:
    *((_QWORD *)result + 10) = 0LL;
    *((_WORD *)result + 37) = v3;
  }
  return result;
}
