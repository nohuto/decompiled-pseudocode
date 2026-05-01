/*
 * XREFs of ?evaluate@_tip_CopilotHardwareKeyInvokedTest@@QEAAXXZ @ 0x1802754EC
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@EEAAXXZ @ 0x180275180 (-evaluate@-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_CopilotHardwareKeyInvokedTest::evaluate(_tip_CopilotHardwareKeyInvokedTest *this, const char *a2)
{
  __int64 v2; // r9
  __int16 v3; // ax
  __int64 v4; // r9
  const char *v5; // r11
  char v6; // r10
  const char *v7; // rax
  char v8; // r10
  char v9; // r10

  v2 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v2 + 56) & 0x200) == 0 )
  {
    if ( *(_BYTE *)(v2 + 152) )
      return;
    *(_BYTE *)(v2 + 152) = 3;
    v3 = 16385;
    goto LABEL_4;
  }
  if ( *(_QWORD *)(v2 + 80) )
  {
    if ( !*(_BYTE *)(v2 + 152) )
    {
      *(_BYTE *)(v2 + 152) = 3;
      v3 = 0x4000;
LABEL_4:
      *(_WORD *)(v2 + 154) = v3;
      *(_QWORD *)(v2 + 160) = 0LL;
    }
  }
  else
  {
    if ( *((_BYTE *)this + 17) == 1 )
    {
      v5 = tip::details::reason_string((tip::details *)"reason::settingsInvoke", a2);
      if ( *(_BYTE *)(v4 + 152) != v6 )
        return;
      *(_QWORD *)(v4 + 160) = v5;
      *(_WORD *)(v4 + 154) = 3;
    }
    else
    {
      if ( *((_BYTE *)this + 18) == 1 )
      {
        v7 = tip::details::reason_string((tip::details *)"reason::searchInvoke", a2);
        if ( *(_BYTE *)(v4 + 152) != v8 )
          return;
        *(_WORD *)(v4 + 154) = 2;
      }
      else
      {
        v7 = tip::details::reason_string((tip::details *)"reason::hardwareKeyFallback", a2);
        if ( *(_BYTE *)(v4 + 152) != v9 )
          return;
        *(_WORD *)(v4 + 154) = 1;
      }
      *(_QWORD *)(v4 + 160) = v7;
    }
    *(_BYTE *)(v4 + 152) = 1;
  }
}
