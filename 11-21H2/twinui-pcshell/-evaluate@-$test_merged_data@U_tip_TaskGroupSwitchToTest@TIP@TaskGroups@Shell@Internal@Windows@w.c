/*
 * XREFs of ?evaluate@?$test_merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@details@tip@@EEAAXXZ @ 0x18058BCC0
 * Callers:
 *     <none>
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x18014AA04 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

const char *__fastcall tip::details::test_merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest>::evaluate(
        __int64 a1,
        const char *a2)
{
  const char *result; // rax
  __int16 v3; // r10
  __int64 v4; // r9
  __int64 v5; // rcx
  __int16 v6; // cx

  if ( *(_QWORD *)(a1 + 168) )
  {
    result = *(const char **)(a1 + 144);
    if ( (*(_DWORD *)result & 0x200) != 0 )
    {
      if ( result[72] )
        return result;
      v6 = 0x8000;
      *((_BYTE *)result + 72) = 1;
    }
    else
    {
      if ( result[72] )
        return result;
      *((_BYTE *)result + 72) = 3;
      v6 = 16385;
    }
    *((_QWORD *)result + 10) = 0LL;
    *((_WORD *)result + 37) = v6;
  }
  else
  {
    result = tip::details::reason_string((tip::details *)"reason::group_id_property_not_set", a2);
    v5 = *(_QWORD *)(v4 + 144);
    if ( *(_BYTE *)(v5 + 72) == (_BYTE)v3 )
    {
      *(_BYTE *)(v5 + 72) = 3;
      *(_WORD *)(v5 + 74) = v3 + 1;
      *(_QWORD *)(v5 + 80) = result;
    }
  }
  return result;
}
