/*
 * XREFs of ?evaluate@_tip_AltTabShowTest@@QEAAXXZ @ 0x1805FDDB4
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_AltTabShowTest@@@details@tip@@EEAAXXZ @ 0x1805FDDA0 (-evaluate@-$test_merged_data@U_tip_AltTabShowTest@@@details@tip@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x18014AA04 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_AltTabShowTest::evaluate(_tip_AltTabShowTest *this, const char *a2)
{
  const char *v2; // rax
  __int16 v3; // r10
  __int64 *v4; // r9
  __int64 v5; // rcx
  const char *v6; // rax
  __int64 *v7; // r9
  __int64 v8; // rcx
  char v9; // r10
  __int16 v10; // ax

  if ( !*((_BYTE *)this + 9) )
  {
    if ( *((_BYTE *)this + 8) )
    {
      v6 = tip::details::reason_string((tip::details *)"reason::shown", a2);
      v8 = *v7;
      if ( *(_BYTE *)(*v7 + 72) != v9 )
        return;
      *(_QWORD *)(v8 + 80) = v6;
      *(_WORD *)(v8 + 74) = 1;
LABEL_16:
      *(_BYTE *)(v8 + 72) = 1;
      return;
    }
    v8 = *(_QWORD *)this;
    if ( *(_QWORD *)(v8 + 8) == *(_QWORD *)(v8 + 16) )
    {
      if ( (*(_DWORD *)v8 & 0x200) != 0 )
      {
        if ( *(_BYTE *)(v8 + 72) )
          return;
        *(_QWORD *)(v8 + 80) = 0LL;
        *(_WORD *)(v8 + 74) = 0x8000;
        goto LABEL_16;
      }
      if ( *(_BYTE *)(v8 + 72) )
        return;
      v10 = 16385;
    }
    else
    {
      if ( *(_BYTE *)(v8 + 72) )
        return;
      v10 = 0x4000;
    }
    *(_BYTE *)(v8 + 72) = 3;
    *(_WORD *)(v8 + 74) = v10;
    *(_QWORD *)(v8 + 80) = 0LL;
    return;
  }
  v2 = tip::details::reason_string((tip::details *)"reason::cancelled", a2);
  v5 = *v4;
  if ( *(_BYTE *)(*v4 + 72) == (_BYTE)v3 )
  {
    *(_BYTE *)(v5 + 72) = 4;
    *(_WORD *)(v5 + 74) = v3 + 2;
    *(_QWORD *)(v5 + 80) = v2;
  }
}
