/*
 * XREFs of ?evaluate@?$test_merged_data@U_tip_RegisterMetadataTest@XamlExplorerHostTipTests@@@details@tip@@EEAAXXZ @ 0x18014A820
 * Callers:
 *     <none>
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x18014AA04 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

__int64 __fastcall tip::details::test_merged_data<XamlExplorerHostTipTests::_tip_RegisterMetadataTest>::evaluate(
        __int64 a1,
        const char *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // r9
  __int64 v5; // rcx
  char v6; // r10

  if ( !*(_BYTE *)(a1 + 153) || !*(_BYTE *)(a1 + 152) )
  {
    v2 = *(_QWORD *)(a1 + 144);
    result = *(_QWORD *)(v2 + 16);
    if ( *(_QWORD *)(v2 + 8) == result )
    {
      if ( (*(_DWORD *)v2 & 0x200) != 0 )
      {
        if ( *(_BYTE *)(v2 + 72) )
          return result;
        result = 0x8000LL;
        *(_BYTE *)(v2 + 72) = 1;
      }
      else
      {
        if ( *(_BYTE *)(v2 + 72) )
          return result;
        *(_BYTE *)(v2 + 72) = 3;
        result = 16385LL;
      }
    }
    else
    {
      if ( *(_BYTE *)(v2 + 72) )
        return result;
      *(_BYTE *)(v2 + 72) = 3;
      result = 0x4000LL;
    }
    *(_QWORD *)(v2 + 80) = 0LL;
    *(_WORD *)(v2 + 74) = result;
    return result;
  }
  result = (__int64)tip::details::reason_string((tip::details *)"reason::expectedFailureInAuditMode", a2);
  v5 = *(_QWORD *)(v4 + 144);
  if ( *(_BYTE *)(v5 + 72) == v6 )
  {
    *(_BYTE *)(v5 + 72) = 4;
    *(_WORD *)(v5 + 74) = 1;
    *(_QWORD *)(v5 + 80) = result;
  }
  return result;
}
