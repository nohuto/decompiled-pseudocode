/*
 * XREFs of ?evaluate@?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@EEAAXXZ @ 0x180249F90
 * Callers:
 *     <none>
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>::evaluate(
        __int64 a1,
        const char *a2)
{
  const char *v2; // rax
  __int16 v3; // r11
  __int64 v4; // r10
  __int64 v5; // rdx
  __int64 v6; // r9
  __int16 v7; // ax
  const char *v8; // rax
  __int64 v9; // r9
  char v10; // r11

  if ( *(_BYTE *)(a1 + 265) && *(_BYTE *)(a1 + 264) )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::extension_creation_failed", a2);
    v5 = *(_QWORD *)(v4 + 256);
    if ( *(_BYTE *)(v5 + 152) == (_BYTE)v3 )
    {
      *(_BYTE *)(v5 + 152) = 3;
      *(_WORD *)(v5 + 154) = v3 + 1;
      *(_QWORD *)(v5 + 160) = v2;
    }
    return;
  }
  v6 = *(_QWORD *)(a1 + 256);
  if ( (*(_DWORD *)(v6 + 56) & 0x200) == 0 )
  {
    if ( *(_BYTE *)(v6 + 152) )
      return;
    *(_BYTE *)(v6 + 152) = 3;
    v7 = 16385;
LABEL_13:
    *(_QWORD *)(v6 + 160) = 0LL;
    *(_WORD *)(v6 + 154) = v7;
    return;
  }
  if ( *(_BYTE *)(a1 + 266) )
  {
    if ( *(_BYTE *)(v6 + 152) )
      return;
    v7 = 0x8000;
    *(_BYTE *)(v6 + 152) = 1;
    goto LABEL_13;
  }
  v8 = tip::details::reason_string((tip::details *)"reason::call_failed", a2);
  if ( *(_BYTE *)(v9 + 152) == v10 )
  {
    *(_QWORD *)(v9 + 160) = v8;
    *(_BYTE *)(v9 + 152) = 2;
    *(_WORD *)(v9 + 154) = 2;
  }
}
