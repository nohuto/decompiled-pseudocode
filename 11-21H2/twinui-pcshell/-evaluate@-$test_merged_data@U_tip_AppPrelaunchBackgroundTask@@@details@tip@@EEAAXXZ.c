/*
 * XREFs of ?evaluate@?$test_merged_data@U_tip_AppPrelaunchBackgroundTask@@@details@tip@@EEAAXXZ @ 0x1805BE3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x18014AA04 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall tip::details::test_merged_data<_tip_AppPrelaunchBackgroundTask>::evaluate(__int64 a1, const char *a2)
{
  __int64 v2; // r9
  __int16 v3; // ax
  const char *v4; // rax
  __int64 v5; // r9
  char v6; // r10

  v2 = *(_QWORD *)(a1 + 144);
  if ( (*(_DWORD *)v2 & 0x200) == 0 )
  {
    if ( *(_BYTE *)(v2 + 72) )
      return;
    *(_BYTE *)(v2 + 72) = 3;
    v3 = 16385;
LABEL_9:
    *(_QWORD *)(v2 + 80) = 0LL;
    *(_WORD *)(v2 + 74) = v3;
    return;
  }
  if ( !*(_DWORD *)(a1 + 152) )
  {
    if ( *(_BYTE *)(v2 + 72) )
      return;
    v3 = 0x8000;
    *(_BYTE *)(v2 + 72) = 1;
    goto LABEL_9;
  }
  v4 = tip::details::reason_string((tip::details *)"reason::hr_not_success", a2);
  if ( *(_BYTE *)(v5 + 72) == v6 )
  {
    *(_BYTE *)(v5 + 72) = 3;
    *(_WORD *)(v5 + 74) = 1;
    *(_QWORD *)(v5 + 80) = v4;
  }
}
