/*
 * XREFs of ?evaluate@_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest@@QEAAXXZ @ 0x1802751B4
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest@@U1@@details@tip2@@EEAAXXZ @ 0x180275140 (-evaluate@-$merged_data@U_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest@@U1@@details@tip2@@EEA.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest::evaluate(
        _tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest *this,
        const char *a2)
{
  __int64 v2; // r9
  __int16 v3; // ax
  const char *v4; // rax
  __int64 v5; // r9
  char v6; // r10

  v2 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v2 + 56) & 0x200) == 0 )
  {
    if ( *(_BYTE *)(v2 + 152) )
      return;
    *(_BYTE *)(v2 + 152) = 3;
    v3 = 16385;
LABEL_12:
    *(_QWORD *)(v2 + 160) = 0LL;
    *(_WORD *)(v2 + 154) = v3;
    return;
  }
  if ( *(_QWORD *)(v2 + 80) )
  {
    if ( *(_BYTE *)(v2 + 152) )
      return;
    *(_BYTE *)(v2 + 152) = 3;
    v3 = 0x4000;
    goto LABEL_12;
  }
  if ( !*((_BYTE *)this + 16) )
  {
    if ( *(_BYTE *)(v2 + 152) )
      return;
    v3 = 0x8000;
    *(_BYTE *)(v2 + 152) = 1;
    goto LABEL_12;
  }
  v4 = tip::details::reason_string((tip::details *)"reason::policy_value_incorrect", a2);
  if ( *(_BYTE *)(v5 + 152) == v6 )
  {
    *(_BYTE *)(v5 + 152) = 3;
    *(_WORD *)(v5 + 154) = 1;
    *(_QWORD *)(v5 + 160) = v4;
  }
}
