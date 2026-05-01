/*
 * XREFs of ?evaluate@_tip_MiniSearchActivationTest@@QEAAXXZ @ 0x1803A4BF4
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_MiniSearchActivationTest@@@details@tip@@EEAAXXZ @ 0x1803A4BE0 (-evaluate@-$test_merged_data@U_tip_MiniSearchActivationTest@@@details@tip@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x18014AA04 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_MiniSearchActivationTest::evaluate(_tip_MiniSearchActivationTest *this, const char *a2)
{
  __int64 v2; // r9
  __int16 v3; // ax
  const char *v4; // rax
  __int64 v5; // r9
  char v6; // r10
  __int16 v7; // cx
  const char *v8; // rax
  char v9; // r10
  char v10; // r10

  v2 = *(_QWORD *)this;
  if ( *(_QWORD *)(*(_QWORD *)this + 8LL) == *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    if ( (*(_DWORD *)v2 & 0x200) != 0 )
    {
      if ( *((_BYTE *)this + 10) )
      {
        v4 = tip::details::reason_string((tip::details *)"Reason::hidden", a2);
        if ( *(_BYTE *)(v5 + 72) != v6 )
          return;
        *(_BYTE *)(v5 + 72) = 1;
        v7 = 2;
      }
      else
      {
        if ( *((_BYTE *)this + 11) )
        {
          v8 = tip::details::reason_string((tip::details *)"Reason::consolidated", a2);
          if ( *(_BYTE *)(v2 + 72) != v9 )
            return;
          *(_QWORD *)(v2 + 80) = v8;
          *(_BYTE *)(v2 + 72) = 1;
          v3 = 3;
          goto LABEL_20;
        }
        if ( !*((_BYTE *)this + 15) )
        {
          if ( *(_BYTE *)(v2 + 72) )
            return;
          v3 = 0x8000;
          *(_BYTE *)(v2 + 72) = 1;
          goto LABEL_19;
        }
        v4 = tip::details::reason_string((tip::details *)"Reason::activation_again", a2);
        if ( *(_BYTE *)(v5 + 72) != v10 )
          return;
        v7 = 1;
        *(_BYTE *)(v5 + 72) = 1;
      }
      *(_WORD *)(v5 + 74) = v7;
      *(_QWORD *)(v5 + 80) = v4;
      return;
    }
    if ( *(_BYTE *)(v2 + 72) )
      return;
    *(_BYTE *)(v2 + 72) = 3;
    v3 = 16385;
  }
  else
  {
    if ( *(_BYTE *)(v2 + 72) )
      return;
    *(_BYTE *)(v2 + 72) = 3;
    v3 = 0x4000;
  }
LABEL_19:
  *(_QWORD *)(v2 + 80) = 0LL;
LABEL_20:
  *(_WORD *)(v2 + 74) = v3;
}
