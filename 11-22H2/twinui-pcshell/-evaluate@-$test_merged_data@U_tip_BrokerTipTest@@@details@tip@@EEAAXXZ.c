/*
 * XREFs of ?evaluate@?$test_merged_data@U_tip_BrokerTipTest@@@details@tip@@EEAAXXZ @ 0x18072AE80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall tip::details::test_merged_data<_tip_BrokerTipTest>::evaluate(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 176);
  result = *(_QWORD *)(v1 + 16);
  if ( *(_QWORD *)(v1 + 8) == result )
  {
    if ( (*(_DWORD *)v1 & 0x200) != 0 )
    {
      if ( *(_BYTE *)(v1 + 72) )
        return result;
      *(_BYTE *)(v1 + 72) = 1;
      result = 0x8000LL;
    }
    else
    {
      if ( *(_BYTE *)(v1 + 72) )
        return result;
      *(_BYTE *)(v1 + 72) = 3;
      result = 16385LL;
    }
  }
  else
  {
    if ( *(_BYTE *)(v1 + 72) )
      return result;
    *(_BYTE *)(v1 + 72) = 3;
    result = 0x4000LL;
  }
  *(_QWORD *)(v1 + 80) = 0LL;
  *(_WORD *)(v1 + 74) = result;
  return result;
}
