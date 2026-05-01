/*
 * XREFs of ?evaluate@?$test_merged_data@U_tip_LaunchRemoteDesktopUriHandlerTest@@@details@tip@@EEAAXXZ @ 0x1807017B0
 * Callers:
 *     <none>
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

__int64 __fastcall tip::details::test_merged_data<_tip_LaunchRemoteDesktopUriHandlerTest>::evaluate(
        __int64 a1,
        const char *a2)
{
  __int64 v2; // r9
  __int64 result; // rax
  __int64 v4; // r9

  v2 = *(_QWORD *)(a1 + 176);
  result = *(_QWORD *)(v2 + 16);
  if ( *(_QWORD *)(v2 + 8) != result )
  {
    if ( *(_BYTE *)(v2 + 72) )
      return result;
    result = 0x4000LL;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)v2 & 0x200) != 0 )
  {
    result = (__int64)tip::details::reason_string((tip::details *)"reason::succeeded", a2);
    if ( !*(_BYTE *)(v4 + 72) )
    {
      *(_QWORD *)(v4 + 80) = result;
      *(_BYTE *)(v4 + 72) = 1;
      *(_WORD *)(v4 + 74) = 1;
    }
  }
  else if ( !*(_BYTE *)(v2 + 72) )
  {
    result = 16385LL;
LABEL_4:
    *(_BYTE *)(v2 + 72) = 3;
    *(_WORD *)(v2 + 74) = result;
    *(_QWORD *)(v2 + 80) = 0LL;
  }
  return result;
}
