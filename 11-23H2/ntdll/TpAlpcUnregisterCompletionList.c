/*
 * XREFs of TpAlpcUnregisterCompletionList @ 0x180052520
 * Callers:
 *     <none>
 * Callees:
 *     TppAlpcpValidateAlpc @ 0x1800507F8 (TppAlpcpValidateAlpc.c)
 *     TppRaiseInvalidParameter @ 0x180127248 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAlpcUnregisterCompletionList(_PEB_LDR_DATA *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  _BYTE *p_Blink; // rbx

  result = TppAlpcpValidateAlpc(a1, 0LL, 1LL);
  p_Blink = &a1[3].InLoadOrderModuleList.Blink;
  if ( !(_DWORD)result || (*p_Blink & 1) == 0 )
    result = TppRaiseInvalidParameter(v4, v3, v5);
  *(_DWORD *)p_Blink &= ~2u;
  return result;
}
