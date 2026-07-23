/*
 * XREFs of TpAlpcRegisterCompletionList @ 0x1800526C0
 * Callers:
 *     <none>
 * Callees:
 *     TppAlpcpValidateAlpc @ 0x180050958 (TppAlpcpValidateAlpc.c)
 *     TppRaiseInvalidParameter @ 0x180125DC8 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAlpcRegisterCompletionList(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  _BYTE *v5; // rbx

  v5 = (_BYTE *)(a1 + 288);
  if ( !(unsigned int)TppAlpcpValidateAlpc((_PEB_LDR_DATA *)a1, 0LL, 1LL) || (*v5 & 1) == 0 )
    TppRaiseInvalidParameter(v3, v2, v4);
  _InterlockedExchange((volatile __int32 *)(a1 + 284), 0);
  *(_DWORD *)v5 |= 2u;
  return TppFastAlpcAdjustConcurrencyCount(a1);
}
