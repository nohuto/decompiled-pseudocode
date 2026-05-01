/*
 * XREFs of ?evaluate@_tip_PinManagerPinTest@PinManagerTipTests@@QEAAXXZ @ 0x1801B5AF4
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@EEAAXXZ @ 0x1801B5AE0 (-evaluate@-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall PinManagerTipTests::_tip_PinManagerPinTest::evaluate(PinManagerTipTests::_tip_PinManagerPinTest *this)
{
  __int64 v1; // r9
  __int16 v2; // cx
  const char *v3; // rdx
  __int64 v4; // r9
  const char *v5; // r10
  int v6; // r8d
  __int16 v7; // r11

  v1 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v1 + 56) & 0x200) == 0 )
  {
    if ( *(_BYTE *)(v1 + 152) )
      return;
    *(_BYTE *)(v1 + 152) = 3;
    v2 = 16385;
    goto LABEL_16;
  }
  v3 = (const char *)*((unsigned int *)this + 4);
  if ( (_DWORD)v3 == 2 && *((_DWORD *)this + 265) == 1 )
  {
    v5 = tip::details::reason_string((tip::details *)"reason::trusted_caller_called_shim", v3);
    if ( *(_BYTE *)(v4 + 152) )
      return;
    *(_WORD *)(v4 + 154) = 0;
    goto LABEL_8;
  }
  v6 = *((_DWORD *)this + 268);
  if ( (int)(v6 + 0x80000000) >= 0 && v6 != -2147023728 && (unsigned int)((_DWORD)v3 - 8) > 1 )
  {
    v5 = tip::details::reason_string((tip::details *)"reason::pin_failure", v3);
    if ( *(_BYTE *)(v4 + 152) )
      return;
    *(_WORD *)(v4 + 154) = v7;
LABEL_8:
    *(_BYTE *)(v4 + 152) = 3;
    *(_QWORD *)(v4 + 160) = v5;
    return;
  }
  if ( *(_BYTE *)(v1 + 152) )
    return;
  *(_BYTE *)(v1 + 152) = 1;
  v2 = 0x8000;
LABEL_16:
  *(_QWORD *)(v1 + 160) = 0LL;
  *(_WORD *)(v1 + 154) = v2;
}
