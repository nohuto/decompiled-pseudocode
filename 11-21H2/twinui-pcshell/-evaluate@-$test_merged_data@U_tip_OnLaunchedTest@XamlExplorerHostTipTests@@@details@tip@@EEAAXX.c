/*
 * XREFs of ?evaluate@?$test_merged_data@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@details@tip@@EEAAXXZ @ 0x18014AA30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall tip::details::test_merged_data<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::evaluate(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 144);
  result = *(_QWORD *)(v1 + 16);
  if ( *(_QWORD *)(v1 + 8) == result )
  {
    if ( (*(_DWORD *)v1 & 0x200) != 0 )
    {
      if ( *(_BYTE *)(v1 + 72) )
        return result;
      *(_BYTE *)(v1 + 72) = 1;
      result = 0x8000LL;
      goto LABEL_5;
    }
    if ( !*(_BYTE *)(v1 + 72) )
    {
      *(_BYTE *)(v1 + 72) = 3;
      result = 16385LL;
      goto LABEL_5;
    }
  }
  else if ( !*(_BYTE *)(v1 + 72) )
  {
    *(_BYTE *)(v1 + 72) = 3;
    result = 0x4000LL;
LABEL_5:
    *(_QWORD *)(v1 + 80) = 0LL;
    *(_WORD *)(v1 + 74) = result;
  }
  return result;
}
