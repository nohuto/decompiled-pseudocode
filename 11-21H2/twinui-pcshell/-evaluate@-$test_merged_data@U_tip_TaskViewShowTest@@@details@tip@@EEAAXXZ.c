/*
 * XREFs of ?evaluate@?$test_merged_data@U_tip_TaskViewShowTest@@@details@tip@@EEAAXXZ @ 0x180041EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x18014AA04 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

__int64 __fastcall tip::details::test_merged_data<_tip_TaskViewShowTest>::evaluate(__int64 a1, const char *a2)
{
  __int64 result; // rax
  __int16 v3; // r10
  __int64 v4; // r9
  __int64 v5; // rcx
  char v6; // dl

  if ( *(_BYTE *)(a1 + 152) )
  {
    result = (__int64)tip::details::reason_string((tip::details *)"reason::shown", a2);
    v5 = *(_QWORD *)(v4 + 144);
    if ( *(_BYTE *)(v5 + 72) != (_BYTE)v3 )
      return result;
    v6 = v3 + 1;
    *(_QWORD *)(v5 + 80) = result;
    *(_WORD *)(v5 + 74) = v3 + 1;
    goto LABEL_4;
  }
  v5 = *(_QWORD *)(a1 + 144);
  result = *(_QWORD *)(v5 + 16);
  if ( *(_QWORD *)(v5 + 8) == result )
  {
    if ( (*(_DWORD *)v5 & 0x200) != 0 )
    {
      if ( !*(_BYTE *)(v5 + 72) )
      {
        result = 0x8000LL;
        *(_QWORD *)(v5 + 80) = 0LL;
        *(_WORD *)(v5 + 74) = 0x8000;
        v6 = 1;
LABEL_4:
        *(_BYTE *)(v5 + 72) = v6;
      }
    }
    else if ( !*(_BYTE *)(v5 + 72) )
    {
      result = 16385LL;
      goto LABEL_9;
    }
  }
  else if ( !*(_BYTE *)(v5 + 72) )
  {
    result = 0x4000LL;
LABEL_9:
    *(_BYTE *)(v5 + 72) = 3;
    *(_WORD *)(v5 + 74) = result;
    *(_QWORD *)(v5 + 80) = 0LL;
  }
  return result;
}
