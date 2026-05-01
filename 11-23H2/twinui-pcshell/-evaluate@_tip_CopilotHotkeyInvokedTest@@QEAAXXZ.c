/*
 * XREFs of ?evaluate@_tip_CopilotHotkeyInvokedTest@@QEAAXXZ @ 0x1802755F4
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@EEAAXXZ @ 0x1802751A0 (-evaluate@-$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_CopilotHotkeyInvokedTest::evaluate(_tip_CopilotHotkeyInvokedTest *this, const char *a2)
{
  __int64 v2; // r9
  __int16 v3; // ax
  const char *v4; // rax
  __int64 v5; // r9
  __int16 v6; // r10
  char v7; // r10

  v2 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v2 + 56) & 0x200) == 0 )
  {
    if ( *(_BYTE *)(v2 + 152) )
      return;
    *(_BYTE *)(v2 + 152) = 3;
    v3 = 16385;
    goto LABEL_19;
  }
  if ( (*((_BYTE *)this + 16) || *((_BYTE *)this + 18)) && *((_BYTE *)this + 17) )
  {
    v4 = tip::details::reason_string((tip::details *)"reason::copilotPWALaunched", a2);
    if ( *(_BYTE *)(v5 + 152) != (_BYTE)v6 )
      return;
    *(_WORD *)(v5 + 154) = v6;
    *(_BYTE *)(v5 + 152) = 1;
    goto LABEL_9;
  }
  if ( *((_BYTE *)this + 16) && !*((_BYTE *)this + 17) )
  {
    v4 = tip::details::reason_string((tip::details *)"reason::copilotPWALaunchFailed", a2);
    if ( *(_BYTE *)(v5 + 152) != v7 )
      return;
    *(_BYTE *)(v5 + 152) = 3;
    *(_WORD *)(v5 + 154) = 1;
LABEL_9:
    *(_QWORD *)(v5 + 160) = v4;
    return;
  }
  if ( *(_QWORD *)(v2 + 80) )
  {
    if ( *(_BYTE *)(v2 + 152) )
      return;
    *(_BYTE *)(v2 + 152) = 3;
    v3 = 0x4000;
  }
  else
  {
    if ( *(_BYTE *)(v2 + 152) )
      return;
    v3 = 0x8000;
    *(_BYTE *)(v2 + 152) = 1;
  }
LABEL_19:
  *(_QWORD *)(v2 + 160) = 0LL;
  *(_WORD *)(v2 + 154) = v3;
}
