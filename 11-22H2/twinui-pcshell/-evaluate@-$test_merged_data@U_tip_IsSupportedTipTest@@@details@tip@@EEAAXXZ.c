/*
 * XREFs of ?evaluate@?$test_merged_data@U_tip_IsSupportedTipTest@@@details@tip@@EEAAXXZ @ 0x180550BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall tip::details::test_merged_data<_tip_IsSupportedTipTest>::evaluate(__int64 a1)
{
  __int64 result; // rax
  __int16 v2; // cx

  result = *(_QWORD *)(a1 + 176);
  if ( (*(_DWORD *)result & 0x200) != 0 )
  {
    if ( *(_BYTE *)(result + 72) )
      return result;
    *(_BYTE *)(result + 72) = 1;
    v2 = 0x8000;
  }
  else
  {
    if ( *(_BYTE *)(result + 72) )
      return result;
    *(_BYTE *)(result + 72) = 3;
    v2 = 16385;
  }
  *(_QWORD *)(result + 80) = 0LL;
  *(_WORD *)(result + 74) = v2;
  return result;
}
