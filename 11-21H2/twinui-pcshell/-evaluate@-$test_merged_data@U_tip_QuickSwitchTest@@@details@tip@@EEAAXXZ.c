/*
 * XREFs of ?evaluate@?$test_merged_data@U_tip_QuickSwitchTest@@@details@tip@@EEAAXXZ @ 0x1804978F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall tip::details::test_merged_data<_tip_QuickSwitchTest>::evaluate(__int64 a1)
{
  __int64 v1; // rdx
  __int16 v2; // ax

  v1 = *(_QWORD *)(a1 + 144);
  if ( (*(_DWORD *)v1 & 0x200) != 0 )
  {
    if ( *(_QWORD *)(v1 + 8) == *(_QWORD *)(v1 + 16) )
    {
      if ( *(_BYTE *)(v1 + 72) )
        return;
      *(_BYTE *)(v1 + 72) = 1;
      v2 = 0x8000;
    }
    else
    {
      if ( *(_BYTE *)(v1 + 72) )
        return;
      *(_BYTE *)(v1 + 72) = 3;
      v2 = 0x4000;
    }
  }
  else
  {
    if ( *(_BYTE *)(v1 + 72) )
      return;
    *(_BYTE *)(v1 + 72) = 3;
    v2 = 16385;
  }
  *(_QWORD *)(v1 + 80) = 0LL;
  *(_WORD *)(v1 + 74) = v2;
}
