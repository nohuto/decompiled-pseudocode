/*
 * XREFs of ?evaluate@_tip_SearchHomeRenderTest@@QEAAXXZ @ 0x1801F0CB4
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@EEAAXXZ @ 0x1801F0C80 (-evaluate@-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_SearchHomeRenderTest::evaluate(_tip_SearchHomeRenderTest *this, const char *a2)
{
  __int64 v2; // r9
  const char *v3; // rax
  __int64 v4; // r9
  char v5; // r10
  __int16 v6; // cx
  char v7; // r10
  __int16 v8; // r10

  v2 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v2 + 56) & 0x200) != 0 )
  {
    if ( *((_BYTE *)this + 17) )
    {
      v3 = tip::details::reason_string((tip::details *)"Reason::hidden", a2);
      if ( *(_BYTE *)(v4 + 152) != v5 )
        return;
      *(_BYTE *)(v4 + 152) = 3;
      v6 = 2;
    }
    else
    {
      if ( !*((_BYTE *)this + 16) )
      {
        v3 = tip::details::reason_string((tip::details *)"Reason::success", a2);
        if ( *(_BYTE *)(v4 + 152) != (_BYTE)v8 )
          return;
        *(_WORD *)(v4 + 154) = v8;
        *(_BYTE *)(v4 + 152) = 1;
        goto LABEL_13;
      }
      v3 = tip::details::reason_string((tip::details *)"Reason::activated_again_before_render", a2);
      if ( *(_BYTE *)(v4 + 152) != v7 )
        return;
      *(_BYTE *)(v4 + 152) = 4;
      v6 = 1;
    }
    *(_WORD *)(v4 + 154) = v6;
LABEL_13:
    *(_QWORD *)(v4 + 160) = v3;
    return;
  }
  if ( !*(_BYTE *)(v2 + 152) )
  {
    *(_BYTE *)(v2 + 152) = 3;
    *(_WORD *)(v2 + 154) = 16385;
    *(_QWORD *)(v2 + 160) = 0LL;
  }
}
