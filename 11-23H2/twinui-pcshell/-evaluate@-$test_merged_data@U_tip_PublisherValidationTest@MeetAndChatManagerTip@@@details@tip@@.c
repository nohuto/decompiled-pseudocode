/*
 * XREFs of ?evaluate@?$test_merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@@details@tip@@EEAAXXZ @ 0x180170FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

__int64 __fastcall tip::details::test_merged_data<MeetAndChatManagerTip::_tip_PublisherValidationTest>::evaluate(
        __int64 a1,
        const char *a2)
{
  __int64 v2; // r9
  __int64 result; // rax
  __int64 v4; // r9
  __int64 v5; // r11
  char v6; // r10
  __int64 v7; // r9
  __int64 v8; // r11
  char v9; // r10
  __int16 v10; // cx
  char v11; // r10
  char v12; // r10

  v2 = *(_QWORD *)(a1 + 176);
  result = *(_QWORD *)(v2 + 16);
  if ( *(_QWORD *)(v2 + 8) != result )
  {
    if ( !*(_BYTE *)(v2 + 72) )
    {
      *(_QWORD *)(v2 + 80) = 0LL;
      *(_BYTE *)(v2 + 72) = 3;
      result = 0x4000LL;
      *(_WORD *)(v2 + 74) = 0x4000;
    }
    return result;
  }
  if ( *(_BYTE *)(a1 + 187) )
  {
LABEL_5:
    if ( *(_BYTE *)(a1 + 188) )
    {
      result = (__int64)tip::details::reason_string((tip::details *)"reason::Fallback", a2);
      v5 = result;
      if ( *(_BYTE *)(v4 + 72) != v6 )
        return result;
      *(_BYTE *)(v4 + 72) = 1;
      result = 3LL;
      goto LABEL_8;
    }
    result = (__int64)tip::details::reason_string((tip::details *)"reason::PublisherFound", a2);
    if ( *(_BYTE *)(v7 + 72) == v12 )
    {
      *(_QWORD *)(v7 + 80) = result;
      *(_BYTE *)(v7 + 72) = 1;
      v10 = 4;
      goto LABEL_18;
    }
    return result;
  }
  if ( !*(_BYTE *)(a1 + 185) )
  {
    if ( *(_BYTE *)(a1 + 186) )
    {
      result = (__int64)tip::details::reason_string((tip::details *)"reason::NotPackaged", a2);
      v5 = result;
      if ( *(_BYTE *)(v4 + 72) == v11 )
      {
        *(_BYTE *)(v4 + 72) = 3;
        result = 2LL;
LABEL_8:
        *(_WORD *)(v4 + 74) = result;
        *(_QWORD *)(v4 + 80) = v5;
        return result;
      }
      return result;
    }
    goto LABEL_5;
  }
  result = (__int64)tip::details::reason_string((tip::details *)"reason::NotTrustedPublisher", a2);
  v8 = result;
  if ( *(_BYTE *)(v7 + 72) == v9 )
  {
    result = 3LL;
    *(_QWORD *)(v7 + 80) = v8;
    *(_BYTE *)(v7 + 72) = 3;
    v10 = 1;
LABEL_18:
    *(_WORD *)(v7 + 74) = v10;
  }
  return result;
}
