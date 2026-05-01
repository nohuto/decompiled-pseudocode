/*
 * XREFs of ?evaluate@?$test_merged_data@U_tip_RecoverRemoteSessionTipTest@@@details@tip@@EEAAXXZ @ 0x180170F30
 * Callers:
 *     <none>
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

unsigned __int64 __fastcall tip::details::test_merged_data<_tip_RecoverRemoteSessionTipTest>::evaluate(
        __int64 a1,
        const char *a2)
{
  __int64 v2; // r9
  unsigned __int64 result; // rax
  __int64 v4; // r9
  __int16 v5; // r11
  char v6; // r10
  __int64 v7; // r9
  unsigned __int64 v8; // r11
  char v9; // r10

  v2 = *(_QWORD *)(a1 + 176);
  result = *(_QWORD *)(v2 + 16);
  if ( *(_QWORD *)(v2 + 8) != result )
  {
    if ( *(_BYTE *)(v2 + 72) )
      return result;
    *(_BYTE *)(v2 + 72) = 3;
    result = 0x4000LL;
    goto LABEL_11;
  }
  result = *(_QWORD *)(a1 + 264);
  if ( result > 1 )
  {
    result = (unsigned __int64)tip::details::reason_string((tip::details *)"reason::multipleHostInstances", a2);
    v8 = result;
    if ( *(_BYTE *)(v7 + 72) )
      return result;
    *(_BYTE *)(v7 + 72) = 3;
    result = 2LL;
    goto LABEL_14;
  }
  if ( *(_BYTE *)(a1 + 280) && result )
  {
    result = (unsigned __int64)tip::details::reason_string((tip::details *)"reason::hostInstantiatedInLocal", a2);
    v8 = result;
    if ( *(_BYTE *)(v7 + 72) != v9 )
      return result;
    result = 3LL;
    *(_BYTE *)(v7 + 72) = 3;
LABEL_14:
    *(_WORD *)(v7 + 74) = result;
    *(_QWORD *)(v7 + 80) = v8;
    return result;
  }
  if ( (*(_DWORD *)v2 & 0x200) == 0 )
  {
    if ( *(_BYTE *)(v2 + 72) )
      return result;
    *(_BYTE *)(v2 + 72) = 3;
    result = 16385LL;
LABEL_11:
    *(_WORD *)(v2 + 74) = result;
    *(_QWORD *)(v2 + 80) = 0LL;
    return result;
  }
  result = (unsigned __int64)tip::details::reason_string((tip::details *)"reason::succeeded", a2);
  if ( *(_BYTE *)(v4 + 72) == v6 )
  {
    *(_BYTE *)(v4 + 72) = v5;
    *(_WORD *)(v4 + 74) = v5;
    *(_QWORD *)(v4 + 80) = result;
  }
  return result;
}
